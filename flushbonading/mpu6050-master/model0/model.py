import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import tensorflow as tf

print(f"TensorFlow version = {tf.__version__}\n")

# Set a fixed random seed value, for reproducibility, this will allow us to get
# 设置一个固定的随机种子值，为了重现性，这将允许我们在每次运行笔记本时获得相同的随机数
# the same random numbers each time the notebook is run
SEED = 1337
np.random.seed(SEED)
tf.random.set_seed(SEED)

# the list of gestures that data is available for
GESTURES = [
    
    '2',

    '1',
    '4',

    '6',
    '7',
    '8',
    '9',
    '10'
]

SAMPLES_PER_GESTURE = 119

NUM_GESTURES = len(GESTURES)

# create a one-hot encoded matrix that is used in the output
ONE_HOT_ENCODED_GESTURES = np.eye(NUM_GESTURES)

inputs = []
outputs = []

# read each csv file and push an input and output
for gesture_index in range(NUM_GESTURES):
    gesture = GESTURES[gesture_index]
    print(f"Processing index {gesture_index} for gesture '{gesture}'.")

    output = ONE_HOT_ENCODED_GESTURES[gesture_index]

    df = pd.read_csv(gesture + ".csv")

    # calculate the number of gesture recordings in the file
    num_recordings = int(df.shape[0])

    print(f"\tThere are {num_recordings} recordings of the {gesture} gesture.")

    for i in range(num_recordings):

        index = i
        # normalize the input data, between 0 to 1:
        # - acceleration is between: -4 to +4
        # - gyroscope is between: -2000 to +2000
        inputs.append([
            (df['Channel 1'][index] + 2000) / 4000,
            (df['Channel 2'][index] + 2000) / 4000,
            (df['Channel 3'][index] + 2000) / 4000,
            (df['Channel 4'][index] + 2000) / 4000,
            (df['Channel 5'][index] + 2000) / 4000,
            (df['Channel 6'][index] + 2000) / 4000,
            (df['Channel 7'][index] + 2000) / 4000,
            (df['Channel 8'][index] + 2000) / 4000,
            (df['Channel 9'][index] + 2000) / 4000,
            (df['Channel 10'][index] + 2000) / 4000,
            (df['Channel 11'][index] + 2000) / 4000,
            (df['Channel 12'][index] + 2000) / 4000,
            (df['Channel 13'][index] + 2000) / 4000,
            (df['Channel 14'][index] + 2000) / 4000,
            (df['Channel 15'][index] + 2000) / 4000,
            (df['Channel 16'][index] + 2000) / 4000,
            (df['Channel 17'][index] + 2000) / 4000,
            (df['Channel 18'][index] + 2000) / 4000,
        ])
      #  inputs.append(tensor)
        outputs.append(output)

# convert the list to numpy array
inputs = np.array(inputs)
outputs = np.array(outputs)

print("Data set parsing and preparation complete.")

# Randomize the order of the inputs, so they can be evenly distributed for training, testing, and validation
# https://stackoverflow.com/a/37710486/2020087
num_inputs = len(inputs)
randomize = np.arange(num_inputs)
np.random.shuffle(randomize)

# Swap the consecutive indexes (0, 1, 2, etc) with the randomized indexes
inputs = inputs[randomize]
outputs = outputs[randomize]

# Split the recordings (group of samples) into three sets: training, testing and validation
TRAIN_SPLIT = int(0.8 * num_inputs)
TEST_SPLIT = int(0.15* num_inputs + TRAIN_SPLIT)

inputs_train, inputs_test, inputs_validate = np.split(
    inputs, [TRAIN_SPLIT, TEST_SPLIT])
outputs_train, outputs_test, outputs_validate = np.split(
    outputs, [TRAIN_SPLIT, TEST_SPLIT])
print("Data set randomization and splitting complete.")

model = tf.keras.Sequential([
    tf.keras.layers.Dense(50, activation='relu'),
    #tf.keras.layers.Dense(25, activation='relu'),
    tf.keras.layers.Dense(15, activation='relu'),
    tf.keras.layers.Dense(NUM_GESTURES, activation='softmax')
])

model.compile(optimizer='rmsprop', loss='mse', metrics=['mae'])
history = model.fit(inputs_train, outputs_train, epochs=3, batch_size=10,
                    validation_data=(inputs_validate, outputs_validate))



predictions = model.predict(inputs_test)

print("predictions =\n", np.round(predictions, decimals=3)[0:15])
print("actual =\n", outputs_test[0:15])
model.evaluate(inputs_test, outputs_test)

print(inputs_test.shape)
print(outputs_test.shape)
model.save("model1.h5")
