import numpy as np 
 
array = [6,1,1,1,1,2,1,1,]
print(np.bincount(array))
print(np.argmax((np.bincount(array))))


print(len(array))