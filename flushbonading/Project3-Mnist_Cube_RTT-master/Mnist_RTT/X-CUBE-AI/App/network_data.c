#include "network_data.h"

ai_handle ai_network_data_weights_get(void)
{

  AI_ALIGNED(4)
  static const ai_u8 s_network_weights[ 2496 ] = {
    0xe8, 0xbd, 0xac, 0xbf, 0xfd, 0xf8, 0x5e, 0xbf, 0x3d, 0xf8,
    0x8a, 0xbf, 0x82, 0xd1, 0x90, 0xbf, 0xbb, 0x76, 0x02, 0xbf,
    0x41, 0xc4, 0xca, 0xbf, 0x18, 0x75, 0x91, 0xbe, 0xef, 0x05,
    0xe7, 0xbe, 0x92, 0x2e, 0xd1, 0xbf, 0xc9, 0xa6, 0xb3, 0x3f,
    0xa2, 0xb7, 0x97, 0x3f, 0x8a, 0xb1, 0x48, 0x3f, 0x3e, 0xc1,
    0xab, 0x3f, 0xa7, 0x46, 0x7a, 0x3f, 0x7e, 0xdc, 0xdd, 0x3e,
    0xea, 0xd5, 0x92, 0x3f, 0x2c, 0xaf, 0x48, 0x3f, 0xe3, 0x5c,
    0xd8, 0x3d, 0xe2, 0xfa, 0x32, 0x3f, 0xb4, 0xe9, 0x3a, 0x3f,
    0xf4, 0x23, 0x9b, 0x3f, 0x36, 0xfe, 0x12, 0x3f, 0xf5, 0xb6,
    0x95, 0x3f, 0x40, 0xda, 0xd7, 0x3f, 0xa2, 0xfe, 0x05, 0x40,
    0x3e, 0x44, 0xab, 0x3f, 0xf0, 0xb8, 0xda, 0x3f, 0xb0, 0x27,
    0x91, 0xbf, 0x76, 0x3a, 0x95, 0xbf, 0x4d, 0xab, 0xa2, 0xbf,
    0xc4, 0x35, 0xa7, 0xbf, 0x29, 0x8f, 0x65, 0xbf, 0x14, 0x8f,
    0x69, 0xbf, 0xa3, 0xf1, 0x5c, 0xbf, 0x3a, 0x19, 0x69, 0xbf,
    0xe0, 0xc5, 0x59, 0xbf, 0xa1, 0x51, 0x56, 0xbd, 0x95, 0xdd,
    0xe2, 0x3d, 0xbc, 0x31, 0x5b, 0xbe, 0x94, 0x48, 0x8e, 0x3e,
    0xfb, 0x50, 0x83, 0xbf, 0x6d, 0xae, 0x3b, 0x3f, 0xe5, 0xc7,
    0xe1, 0x3e, 0x64, 0xda, 0x4b, 0xbf, 0xe3, 0x2c, 0x14, 0x3e,
    0xda, 0x6f, 0x00, 0x3f, 0x41, 0xab, 0x39, 0x3f, 0x28, 0xb4,
    0x87, 0xbe, 0xc7, 0xee, 0xd0, 0xbd, 0x95, 0x26, 0x0c, 0x3e,
    0xbe, 0xff, 0xda, 0x3e, 0x01, 0x65, 0x9e, 0x3e, 0x31, 0xf0,
    0x6a, 0xbd, 0x54, 0xf0, 0x0e, 0x3f, 0xcb, 0x03, 0xa8, 0x3e,
    0x94, 0x3c, 0x95, 0xbe, 0xf9, 0x9d, 0xc4, 0xbe, 0xf7, 0xd0,
    0xf8, 0xbc, 0x09, 0x3d, 0xcc, 0x3e, 0x01, 0x8a, 0x0c, 0x3e,
    0xd6, 0xd7, 0xd4, 0xbe, 0xaa, 0xc7, 0xd4, 0x3e, 0xff, 0x3f,
    0x37, 0x3e, 0x28, 0x50, 0xad, 0xbd, 0xa5, 0xf9, 0x0e, 0x3f,
    0x49, 0x92, 0xa1, 0xbe, 0x66, 0x94, 0x2c, 0xbf, 0x4d, 0xf8,
    0x5f, 0x3f, 0x4b, 0x97, 0xe2, 0x3e, 0x2e, 0xb4, 0xd9, 0xbe,
    0xdb, 0x80, 0x86, 0xbf, 0xf2, 0x4f, 0xb7, 0x3f, 0x06, 0x85,
    0x0f, 0x3f, 0x81, 0xb2, 0x88, 0xbf, 0x20, 0xb2, 0x96, 0xbf,
    0xaf, 0xab, 0xc7, 0x3f, 0xc2, 0xf0, 0x26, 0x3f, 0xba, 0xd3,
    0x55, 0xbf, 0xa4, 0xe7, 0x37, 0xbf, 0x27, 0x3f, 0x45, 0x3e,
    0xcf, 0x4b, 0x30, 0xbe, 0x70, 0x72, 0x46, 0xbf, 0x6b, 0x96,
    0x81, 0xbe, 0x3a, 0xe2, 0x95, 0x3e, 0x8c, 0xac, 0x61, 0xbf,
    0x59, 0x4f, 0xba, 0xbd, 0x11, 0xa7, 0x1b, 0x3f, 0x28, 0x5e,
    0x09, 0xbf, 0xb6, 0x27, 0x23, 0x3f, 0x8a, 0xce, 0xa1, 0xbf,
    0x36, 0x92, 0x88, 0xbf, 0xfd, 0x0a, 0x1e, 0x3f, 0x2f, 0xe5,
    0x9f, 0xbe, 0xc6, 0xbe, 0x04, 0xbf, 0x72, 0xd3, 0x25, 0xbe,
    0x0c, 0xef, 0x1b, 0xbe, 0x74, 0x48, 0x76, 0xbf, 0x7a, 0x0f,
    0xbb, 0x3e, 0x23, 0x3d, 0x79, 0x3e, 0xc8, 0x06, 0x9d, 0xbf,
    0x48, 0xc8, 0xf5, 0xbd, 0x35, 0x48, 0x02, 0xbe, 0x35, 0xc0,
    0xc5, 0x3e, 0xa6, 0x3c, 0x1e, 0x3f, 0xa8, 0xbb, 0x94, 0xbe,
    0xc3, 0x22, 0x20, 0x3f, 0x9c, 0xfe, 0xdd, 0x3e, 0x50, 0xdd,
    0x35, 0xbf, 0x09, 0x43, 0x3d, 0xbf, 0xe3, 0x79, 0xd7, 0x3e,
    0x9c, 0xe0, 0xcf, 0x3e, 0xd8, 0xbe, 0x2f, 0xbf, 0x7e, 0x2f,
    0x99, 0x3e, 0x3c, 0x52, 0x86, 0xbd, 0xd4, 0x7a, 0xda, 0xbe,
    0xb7, 0xae, 0x81, 0xbe, 0x65, 0x9d, 0xdb, 0xbe, 0x8e, 0x43,
    0x4e, 0xbe, 0x8d, 0x1c, 0x94, 0x3d, 0x72, 0x63, 0x97, 0x3e,
    0xdc, 0xaa, 0x46, 0xbf, 0xb0, 0x5b, 0x16, 0x3f, 0x53, 0xcf,
    0x7c, 0xbf, 0xa6, 0xd5, 0xe6, 0xbd, 0x5b, 0x9b, 0x02, 0xbf,
    0x13, 0xff, 0xb5, 0x3d, 0x76, 0xbd, 0xea, 0x3d, 0xf5, 0xc9,
    0xa9, 0xbd, 0x20, 0xbb, 0x8d, 0xbe, 0x4f, 0x9d, 0x71, 0x3d,
    0x66, 0x73, 0xca, 0x3d, 0x4c, 0xe2, 0x46, 0x3e, 0x7a, 0x75,
    0x01, 0xbf, 0xbb, 0xae, 0x1f, 0xbe, 0xb3, 0x3b, 0x82, 0xbf,
    0x75, 0xe8, 0x86, 0x3e, 0x53, 0x44, 0x25, 0xbe, 0x32, 0x7b,
    0x83, 0xbc, 0xb2, 0xc7, 0xa0, 0x3e, 0x9c, 0xbc, 0x13, 0xbf,
    0x95, 0x28, 0x1d, 0xbe, 0xee, 0x53, 0x4b, 0x3e, 0x32, 0x31,
    0x48, 0x3c, 0x97, 0xdd, 0x1f, 0x3f, 0xdf, 0x82, 0x69, 0xbf,
    0x04, 0xfe, 0x89, 0x3e, 0xac, 0xf5, 0xc7, 0xbe, 0xe2, 0x1e,
    0xe1, 0x3c, 0x39, 0xbb, 0x6b, 0xbe, 0xcc, 0x01, 0x06, 0xbf,
    0x9a, 0x00, 0x24, 0xbf, 0x28, 0x3a, 0x08, 0x3f, 0xb4, 0x59,
    0x82, 0xbe, 0x91, 0x1b, 0x9b, 0x3e, 0xec, 0xb5, 0xcb, 0xbe,
    0x34, 0xe0, 0xbc, 0x3c, 0x76, 0xe2, 0xe4, 0x3c, 0xfe, 0x5c,
    0x82, 0x3e, 0x46, 0x8c, 0x9f, 0xbd, 0x3e, 0x0f, 0xfa, 0x3d,
    0x1a, 0x07, 0xe6, 0x3c, 0xe9, 0x68, 0x99, 0x3b, 0xa7, 0x39,
    0x51, 0xbe, 0xa6, 0xac, 0x9f, 0x3e, 0x6a, 0xea, 0xbb, 0x3d,
    0xa5, 0x11, 0xca, 0xbe, 0x62, 0x76, 0x14, 0xbf, 0xd4, 0x23,
    0xa6, 0x3c, 0x6f, 0x88, 0x99, 0xbe, 0x9f, 0xf4, 0xfb, 0xbe,
    0x50, 0x00, 0xf1, 0xbd, 0x0a, 0x3e, 0x60, 0x3d, 0x01, 0x5b,
    0x78, 0xbe, 0x8c, 0x24, 0x7d, 0x3e, 0x35, 0x60, 0x47, 0x3e,
    0x34, 0xfd, 0x1a, 0xbf, 0x5a, 0xe7, 0xf7, 0xbe, 0xb2, 0x30,
    0xc7, 0xbd, 0xa2, 0xbc, 0x7c, 0xbe, 0x2b, 0xfe, 0x1d, 0x3f,
    0x61, 0x0b, 0x21, 0xbd, 0x18, 0x23, 0x07, 0xbd, 0xf6, 0x5f,
    0x12, 0xbf, 0x89, 0x6c, 0x94, 0x3d, 0xaf, 0x66, 0x17, 0x3b,
    0x36, 0x00, 0x8b, 0xbe, 0xab, 0x3b, 0xe8, 0x3e, 0xbe, 0x76,
    0xc5, 0xbe, 0x20, 0x46, 0x4e, 0xbe, 0x45, 0xde, 0x25, 0x3f,
    0x02, 0xfc, 0x28, 0x3e, 0x13, 0x26, 0x87, 0xbe, 0x81, 0xae,
    0x1a, 0xbf, 0xad, 0x8d, 0x09, 0xbf, 0x2e, 0xa1, 0xae, 0xbd,
    0x34, 0x26, 0xd5, 0xbd, 0x87, 0x1a, 0x22, 0x3d, 0x14, 0x9d,
    0x4c, 0x3e, 0xd8, 0x68, 0xee, 0x3c, 0xd2, 0x4e, 0x12, 0x3f,
    0x0b, 0x94, 0x55, 0x3e, 0x15, 0x57, 0xd3, 0xbe, 0x5e, 0xfc,
    0x51, 0xbf, 0xbf, 0x0b, 0xbd, 0x3c, 0x26, 0x10, 0x23, 0xbf,
    0x58, 0x70, 0xee, 0xba, 0xb3, 0xa6, 0xa0, 0x3d, 0x45, 0x25,
    0x83, 0xbe, 0x09, 0xc2, 0x02, 0x3e, 0xf2, 0x53, 0x9e, 0x3e,
    0xa8, 0x8a, 0xa3, 0xbc, 0x60, 0x8c, 0x93, 0x3c, 0x4b, 0xac,
    0x18, 0xbe, 0x55, 0xd7, 0xbf, 0xbe, 0xd9, 0x36, 0x96, 0xbe,
    0xe9, 0x26, 0xc7, 0xbc, 0xc3, 0xb1, 0x34, 0x3e, 0x18, 0xce,
    0xe4, 0xbc, 0x06, 0x7d, 0x2e, 0x3e, 0xe7, 0xe0, 0x9b, 0xbd,
    0xcb, 0x67, 0x9c, 0xbe, 0xe1, 0x1e, 0xa3, 0xbe, 0x1d, 0x5b,
    0x65, 0xbf, 0x11, 0x47, 0x3d, 0xbf, 0xc2, 0xc3, 0x9f, 0xbe,
    0xbb, 0xf5, 0xe6, 0xbe, 0xe3, 0xcf, 0x02, 0x3f, 0xfc, 0xcf,
    0x06, 0xbf, 0x6d, 0xbe, 0x26, 0x3e, 0xf7, 0xd7, 0xb9, 0xbe,
    0xcd, 0xf0, 0xc8, 0x3d, 0x54, 0xb3, 0xa9, 0xbe, 0x0b, 0x31,
    0xbb, 0xbd, 0xb0, 0x85, 0x86, 0xbe, 0xbc, 0x18, 0x59, 0x3e,
    0x9b, 0x58, 0x9f, 0xbd, 0x76, 0xb7, 0x55, 0x3e, 0xd7, 0x22,
    0x15, 0xbf, 0x68, 0x37, 0xa9, 0xbe, 0x39, 0xc1, 0xa8, 0xbe,
    0x41, 0x15, 0x67, 0xbe, 0xd3, 0xc5, 0xfe, 0x3c, 0xce, 0xcc,
    0x85, 0x3d, 0xd5, 0xbe, 0xc8, 0xbc, 0x54, 0x51, 0x74, 0xbe,
    0x60, 0x1e, 0x9f, 0x3e, 0xe8, 0x18, 0x70, 0x3c, 0x6c, 0x94,
    0x06, 0x3f, 0xc0, 0x53, 0xcf, 0x3c, 0x0c, 0x1b, 0x07, 0x3e,
    0xa8, 0xe3, 0x30, 0x3e, 0xbe, 0x8f, 0xc5, 0xbe, 0xf1, 0xe2,
    0x55, 0xbe, 0xa4, 0x59, 0x8a, 0xba, 0x41, 0xe3, 0x9e, 0x3e,
    0x0a, 0x78, 0xb0, 0x3e, 0x66, 0x8a, 0x2e, 0x3e, 0xb6, 0x8a,
    0x2d, 0x3d, 0x80, 0x17, 0x0f, 0x3e, 0x5d, 0x11, 0xeb, 0xbe,
    0x4d, 0xf5, 0x98, 0x3e, 0x73, 0x4d, 0x04, 0xbf, 0xe3, 0x43,
    0xdf, 0x3e, 0x9a, 0x9c, 0xd3, 0x3e, 0xd2, 0xec, 0x8d, 0x3e,
    0x1d, 0x9b, 0xcf, 0x3c, 0x57, 0x8f, 0x11, 0x3e, 0x54, 0xf9,
    0xdd, 0x3e, 0x6c, 0x79, 0xb5, 0xbe, 0x90, 0xc7, 0x3f, 0x3d,
    0x92, 0xa6, 0x14, 0xbf, 0x9d, 0x09, 0x9d, 0xbe, 0x9e, 0x19,
    0x1b, 0xbf, 0x2e, 0x95, 0x47, 0xbf, 0x87, 0x9b, 0x73, 0xbd,
    0x14, 0x8d, 0x87, 0xbe, 0xe0, 0xf4, 0xba, 0x3e, 0x57, 0xe9,
    0xcd, 0xbe, 0x0a, 0xf9, 0xbc, 0xbe, 0xc9, 0x4f, 0x1e, 0xbd,
    0xc1, 0x66, 0xa3, 0xbe, 0x41, 0x77, 0x7a, 0x3e, 0x0c, 0xf3,
    0xda, 0x3e, 0xa6, 0xfa, 0x34, 0xbe, 0xf5, 0xfa, 0x13, 0x3e,
    0x7f, 0x5b, 0xc0, 0xbe, 0xb2, 0xb1, 0x97, 0xba, 0xfc, 0xc4,
    0x9a, 0xbd, 0x8f, 0x32, 0x1c, 0xbe, 0x89, 0xca, 0x58, 0x3e,
    0x2e, 0x87, 0x04, 0x3d, 0xfc, 0x32, 0xa9, 0xbe, 0x14, 0xad,
    0x1c, 0x3e, 0xa8, 0xe7, 0x2f, 0xbf, 0xa6, 0xe7, 0x34, 0xbe,
    0x60, 0x93, 0x07, 0xbf, 0xa1, 0x65, 0xee, 0x3d, 0x30, 0x54,
    0x4b, 0xbf, 0xe2, 0x02, 0x73, 0x3e, 0xbf, 0x0b, 0x2b, 0xbf,
    0x9b, 0x0e, 0x2a, 0xbe, 0x71, 0xc5, 0xa8, 0x3e, 0x4d, 0xfa,
    0xa3, 0x3e, 0xe2, 0x10, 0x0b, 0xbe, 0xf1, 0xe2, 0x1b, 0x3f,
    0x99, 0x4a, 0x24, 0x3f, 0x9f, 0x88, 0xc2, 0x3d, 0x0a, 0x65,
    0x48, 0x3e, 0x9a, 0xf7, 0x13, 0xbe, 0x53, 0x31, 0x0f, 0x3e,
    0xb5, 0x89, 0xdb, 0x3b, 0xac, 0xa8, 0x55, 0x3e, 0x2c, 0x20,
    0x2a, 0x3e, 0x4a, 0x4a, 0x8b, 0xba, 0xc1, 0xeb, 0x84, 0xbe,
    0x1f, 0x61, 0x96, 0x3e, 0x6b, 0xb2, 0x65, 0xbf, 0x91, 0x6e,
    0x86, 0xbe, 0x15, 0x62, 0x41, 0xbf, 0x20, 0xf8, 0x0d, 0xbf,
    0x31, 0x5a, 0xd1, 0xbe, 0xb6, 0xa2, 0x15, 0xbe, 0xaf, 0xbf,
    0x3c, 0x3d, 0x66, 0x8b, 0x49, 0x3e, 0x15, 0x0d, 0x32, 0xbf,
    0xe8, 0xcb, 0x5d, 0xbe, 0x26, 0x5a, 0xb4, 0xbe, 0xa1, 0x56,
    0x59, 0x3d, 0xc3, 0x56, 0xeb, 0xbe, 0xde, 0xfc, 0x7d, 0xbe,
    0xad, 0x8e, 0xb6, 0xbe, 0x18, 0xfc, 0x15, 0x3f, 0x31, 0x1c,
    0xf2, 0xbd, 0x3f, 0x2e, 0xbe, 0x3e, 0xe7, 0x78, 0x58, 0xbe,
    0xab, 0xc1, 0x60, 0x3d, 0xb1, 0xc4, 0x14, 0xbd, 0x5c, 0x9b,
    0x50, 0x3e, 0x21, 0xf5, 0x23, 0x3d, 0x48, 0x82, 0x11, 0xbe,
    0x8d, 0x90, 0x4c, 0xbe, 0xea, 0xae, 0x01, 0x3e, 0xe8, 0x4e,
    0x22, 0xbf, 0xaf, 0x60, 0x82, 0x3e, 0x69, 0xd0, 0xaa, 0x3e,
    0xf4, 0x95, 0x7f, 0xbd, 0xbb, 0xb1, 0xb1, 0x3d, 0xfe, 0x46,
    0x72, 0x3e, 0xa7, 0x7a, 0x93, 0x3e, 0x78, 0xbb, 0xf7, 0x3d,
    0x8f, 0x7a, 0x03, 0x3f, 0xbf, 0x44, 0xe8, 0xbd, 0x6a, 0xd8,
    0x48, 0x3e, 0x0c, 0x79, 0xb5, 0xbe, 0x27, 0xc2, 0x88, 0xbc,
    0x7d, 0x66, 0x39, 0xbf, 0xc1, 0x26, 0xd0, 0xbd, 0x0f, 0x05,
    0x1b, 0xbf, 0x5b, 0x13, 0xbc, 0x3e, 0xe5, 0x2a, 0xaf, 0xbc,
    0x5a, 0xbe, 0x2f, 0xbe, 0x64, 0xd4, 0x69, 0x3d, 0xae, 0xf5,
    0x06, 0x3c, 0x57, 0xd7, 0x54, 0xbe, 0xc3, 0x2f, 0x17, 0xbf,
    0x4a, 0xfd, 0x90, 0x3e, 0xae, 0xa2, 0x3c, 0xbf, 0x89, 0xf6,
    0xe6, 0xbd, 0xef, 0xc3, 0x96, 0x3c, 0x36, 0x1a, 0x00, 0xbf,
    0x52, 0x38, 0xe6, 0x3e, 0x8e, 0x1d, 0x7e, 0xbd, 0x8b, 0xb1,
    0x11, 0x3b, 0xa4, 0xca, 0xb8, 0x3e, 0x76, 0x5d, 0xe9, 0xbe,
    0x2f, 0x68, 0x07, 0x3d, 0x50, 0x90, 0x0f, 0xbf, 0xae, 0x17,
    0xe2, 0x3d, 0xd5, 0xd7, 0xec, 0x3c, 0x49, 0x9f, 0x4d, 0xbe,
    0xbb, 0x60, 0x19, 0x3f, 0x97, 0x06, 0x06, 0xbf, 0xd6, 0x31,
    0x9e, 0x3e, 0x33, 0x2f, 0x16, 0x3f, 0x43, 0x8e, 0x3a, 0xbe,
    0x51, 0xd0, 0x39, 0xbe, 0xa0, 0x71, 0xcc, 0xbd, 0xb1, 0x32,
    0x6b, 0xbd, 0x67, 0xa4, 0xd8, 0xbc, 0xb0, 0x23, 0xe0, 0xbe,
    0x37, 0x6e, 0xc7, 0x3e, 0xfa, 0xa2, 0x53, 0xbf, 0x60, 0xc0,
    0x15, 0x3d, 0x21, 0x5a, 0xa3, 0xbf, 0xb9, 0x4a, 0x05, 0x3e,
    0xb0, 0xf2, 0x55, 0xbe, 0xaa, 0xfb, 0xf7, 0xbd, 0x19, 0x4c,
    0xf8, 0xbe, 0xa0, 0x94, 0xd5, 0x3e, 0x02, 0x4b, 0x26, 0xbe,
    0x16, 0x91, 0x7f, 0x3d, 0x07, 0xcd, 0xe5, 0x3d, 0x7a, 0xd7,
    0xf1, 0x3d, 0xc0, 0x03, 0x04, 0xbd, 0xa8, 0xc9, 0x02, 0x3d,
    0xe6, 0x0b, 0x3a, 0x3d, 0xb1, 0x59, 0xb4, 0x3e, 0x29, 0xa6,
    0xbc, 0x3c, 0x9d, 0x67, 0x34, 0x3e, 0x3f, 0x8e, 0x22, 0x3e,
    0x9d, 0xe9, 0x00, 0x3e, 0x0b, 0xe6, 0x07, 0x3e, 0x57, 0x7d,
    0x52, 0xbe, 0x43, 0xc2, 0xc2, 0x3e, 0x85, 0x5a, 0x5e, 0xbe,
    0x3d, 0x90, 0x47, 0xbc, 0x5f, 0x0e, 0xba, 0xbd, 0x11, 0x1d,
    0x36, 0xbe, 0x29, 0xc0, 0xb1, 0x3d, 0xad, 0xec, 0x13, 0xbe,
    0x95, 0xb1, 0x21, 0x3f, 0x09, 0x44, 0xd5, 0x3d, 0x18, 0xa1,
    0x89, 0x3f, 0x7c, 0x58, 0xfe, 0x3d, 0x7c, 0xb9, 0x3c, 0xbf,
    0xc7, 0xb1, 0xb4, 0x3e, 0x80, 0xf5, 0x76, 0xbe, 0x5e, 0xb3,
    0x21, 0x3e, 0xcd, 0x4b, 0x08, 0xbe, 0xb8, 0xa1, 0xd2, 0xbd,
    0x63, 0x23, 0xd4, 0xbc, 0x7c, 0xf7, 0xa5, 0x3b, 0x94, 0x5d,
    0xf7, 0xbe, 0xf4, 0xa5, 0xe4, 0x3e, 0x95, 0x5d, 0xa5, 0xbf,
    0x0c, 0x95, 0x29, 0x3e, 0x9b, 0x9e, 0x36, 0xbe, 0xe9, 0xac,
    0xa3, 0x3e, 0x01, 0x9c, 0xa8, 0xbd, 0x56, 0xb4, 0x0d, 0x3e,
    0x88, 0xc3, 0xa6, 0xbd, 0x33, 0x8e, 0x9f, 0xbd, 0x5d, 0x1d,
    0xea, 0xbe, 0x5c, 0xad, 0x2c, 0xbe, 0x29, 0xbb, 0x9b, 0xbe,
    0x52, 0xa3, 0xa4, 0x3e, 0x02, 0xf5, 0x1e, 0xbf, 0x1e, 0xd0,
    0x63, 0x3e, 0x5d, 0x88, 0x41, 0xbe, 0xc5, 0x56, 0xd5, 0xbd,
    0x6b, 0x64, 0x46, 0xbe, 0xeb, 0xbb, 0x5d, 0xbd, 0x1b, 0x30,
    0x02, 0x3e, 0xaa, 0x2d, 0xcf, 0x3d, 0xfc, 0x27, 0x3a, 0xbf,
    0xe9, 0xbc, 0x2f, 0xbf, 0x0d, 0x68, 0x16, 0xbe, 0x11, 0x09,
    0x7d, 0xbe, 0x4e, 0x84, 0x7e, 0x3e, 0x8e, 0x26, 0xef, 0xbe,
    0x80, 0xfe, 0x4e, 0x3e, 0xe7, 0xfa, 0xaa, 0xbe, 0x24, 0x6b,
    0x9d, 0x3e, 0xe8, 0x09, 0x89, 0xbe, 0x95, 0x52, 0x11, 0xbf,
    0x8e, 0x1f, 0x1b, 0xbd, 0xe8, 0xbd, 0x3a, 0xbf, 0x59, 0xdf,
    0x8f, 0xbe, 0x2e, 0xc4, 0x5b, 0xbf, 0x54, 0x85, 0x41, 0xbf,
    0x84, 0x35, 0x1f, 0xbf, 0x0f, 0xcf, 0x4a, 0xbe, 0x45, 0x3f,
    0x23, 0xbf, 0x3d, 0x33, 0x82, 0xbd, 0xfe, 0x57, 0xfe, 0xbc,
    0xab, 0x19, 0x1f, 0xbe, 0x15, 0x1b, 0x2c, 0x3e, 0xad, 0x39,
    0x15, 0xbe, 0x72, 0x5c, 0x32, 0x3f, 0x1f, 0xbb, 0xc1, 0x3d,
    0xa9, 0x5b, 0x18, 0xbe, 0xb8, 0x72, 0xbd, 0xbe, 0xf9, 0x35,
    0x97, 0x3e, 0x3a, 0x58, 0x5e, 0xbe, 0x0d, 0xd5, 0xcc, 0x3b,
    0x1e, 0x14, 0xa2, 0xbe, 0xaa, 0x8f, 0x95, 0x3e, 0x11, 0xfb,
    0x68, 0xbe, 0xb6, 0x12, 0x2b, 0x3f, 0x7b, 0xf8, 0x88, 0xbd,
    0xfc, 0x06, 0x68, 0x3e, 0x79, 0x6d, 0xe2, 0x3d, 0x90, 0xc8,
    0xa7, 0x3d, 0xc5, 0x72, 0x16, 0xbe, 0x5c, 0x26, 0xea, 0x3e,
    0xc3, 0xa2, 0xde, 0xbd, 0x13, 0x97, 0xba, 0x3e, 0xbe, 0xfb,
    0x56, 0x3e, 0xb6, 0xfc, 0xf2, 0xbe, 0xc1, 0x56, 0x0f, 0x3e,
    0x4b, 0xf6, 0x8a, 0x3d, 0xfc, 0xe3, 0x41, 0x3e, 0xea, 0x71,
    0xf0, 0x3e, 0x91, 0xba, 0xf6, 0xbd, 0x6e, 0x78, 0x2f, 0xbe,
    0x61, 0xd4, 0x7a, 0xbe, 0x9f, 0xb7, 0x95, 0xbe, 0x2f, 0x83,
    0x11, 0xbd, 0xa1, 0x6d, 0x93, 0xbd, 0x6c, 0xee, 0x23, 0xbe,
    0x3b, 0x38, 0xbd, 0xbc, 0xda, 0x5c, 0x95, 0xbe, 0x37, 0x1b,
    0x13, 0xbf, 0xbf, 0x4d, 0x8a, 0xbf, 0x01, 0xcc, 0x8b, 0xbd,
    0x27, 0x8a, 0xb5, 0x3e, 0x17, 0xd8, 0xd7, 0xbd, 0x05, 0x3f,
    0xb8, 0x3e, 0x3f, 0x87, 0x9e, 0xbd, 0xdf, 0x12, 0x13, 0x3f,
    0x75, 0xb5, 0x02, 0xbe, 0x60, 0x22, 0xcf, 0x3d, 0xdd, 0xbd,
    0x14, 0xbe, 0x88, 0x30, 0x28, 0xbe, 0x2b, 0x13, 0xbf, 0xbe,
    0xea, 0x63, 0xa0, 0x3e, 0x9c, 0x1f, 0x2b, 0xbf, 0x86, 0x46,
    0x41, 0x3e, 0x3d, 0xbc, 0x35, 0xbf, 0xcb, 0x3b, 0x11, 0xbf,
    0xde, 0x18, 0x40, 0xbe, 0xda, 0xa9, 0x45, 0xbd, 0xee, 0xdd,
    0x42, 0x3d, 0x97, 0x7d, 0xb9, 0x3e, 0x8d, 0x1d, 0x6c, 0x3e,
    0xb0, 0x40, 0xaa, 0x3d, 0x76, 0x69, 0xbf, 0x3d, 0x63, 0xe3,
    0x17, 0x3e, 0xbf, 0x3c, 0x14, 0xbf, 0x9d, 0x61, 0xea, 0xbd,
    0x46, 0xc7, 0xf8, 0xbd, 0x0a, 0x26, 0x87, 0xbe, 0xd7, 0x72,
    0xb8, 0x3e, 0xe4, 0x33, 0x83, 0x3e, 0xa4, 0xcb, 0x06, 0xbd,
    0x42, 0xe0, 0x82, 0x3e, 0x9b, 0x2e, 0x49, 0xbf, 0x5c, 0xae,
    0x2e, 0x3f, 0x66, 0x5c, 0xb4, 0xbe, 0x86, 0x07, 0xa4, 0xbd,
    0x4f, 0xc0, 0x84, 0x3e, 0x7f, 0x36, 0xe5, 0xbe, 0x01, 0x1c,
    0xbe, 0xbd, 0xb4, 0x13, 0xfc, 0xbe, 0x5e, 0xb8, 0x06, 0xbd,
    0x8b, 0xb8, 0x6f, 0x3d, 0xa2, 0xde, 0x9f, 0xbc, 0xe5, 0x91,
    0x77, 0x3e, 0xd4, 0x1a, 0x40, 0xbf, 0x75, 0x83, 0x58, 0xbe,
    0x22, 0xa4, 0xef, 0xbe, 0xbd, 0x48, 0x6f, 0x3e, 0x66, 0x27,
    0xf8, 0x3d, 0x56, 0xd0, 0x82, 0x3e, 0x0f, 0xab, 0x4d, 0x3e,
    0xca, 0xc3, 0x89, 0xbe, 0x2e, 0x89, 0x1f, 0x3e, 0x01, 0x6f,
    0x22, 0xbb, 0xa6, 0xac, 0xa1, 0xbf, 0xbf, 0x4d, 0x2f, 0x3f,
    0x8e, 0xf9, 0xbc, 0xbf, 0xef, 0xc9, 0x6e, 0x3d, 0xca, 0x1c,
    0xd3, 0xbf, 0x49, 0x72, 0x1a, 0xbf, 0x14, 0xcf, 0xde, 0xbe,
    0xf2, 0x31, 0xd9, 0x3d, 0xe2, 0x18, 0x7c, 0x3b, 0x01, 0xa9,
    0x8f, 0x3e, 0x4c, 0x86, 0xb6, 0xbe, 0xf3, 0x61, 0xe8, 0x3d,
    0x85, 0x05, 0xb6, 0xbd, 0x36, 0x7e, 0xf1, 0xbe, 0xcb, 0x24,
    0xe3, 0xbc, 0x86, 0x69, 0xdd, 0xbe, 0xc1, 0x2e, 0x26, 0xbf,
    0xdb, 0x72, 0xa2, 0x3e, 0x3a, 0xaa, 0xbf, 0xbd, 0x87, 0x86,
    0xd3, 0xbd, 0x3b, 0x2a, 0x7a, 0x3c, 0x20, 0x3e, 0x75, 0xbe,
    0x48, 0x78, 0x76, 0xbe, 0xdb, 0x20, 0xd2, 0x3d, 0x5d, 0xef,
    0x2c, 0x3f, 0x25, 0xc0, 0xfc, 0xbd, 0x56, 0x78, 0x0f, 0xbe,
    0x18, 0x47, 0xb5, 0xbe, 0x5d, 0x32, 0xa7, 0x3e, 0x62, 0x2e,
    0x07, 0xbf, 0x3e, 0x15, 0xfa, 0x3d, 0x1c, 0xd0, 0x86, 0xbe,
    0xef, 0xfc, 0xac, 0x3e, 0x49, 0x8a, 0x16, 0xbd, 0x78, 0x2e,
    0x1b, 0x3d, 0x86, 0x97, 0x0d, 0xbf, 0xa5, 0x9e, 0x44, 0xbe,
    0x42, 0x0c, 0x9b, 0xbe, 0x4f, 0xb9, 0x7e, 0xbd, 0x31, 0xb6,
    0x57, 0xbd, 0xc9, 0x75, 0xc5, 0x3e, 0xf4, 0xbd, 0x47, 0xbe,
    0x3e, 0x90, 0x18, 0x3d, 0x42, 0x45, 0xe5, 0x3c, 0xdf, 0x58,
    0x1c, 0xbf, 0x63, 0xe0, 0x38, 0x3e, 0x82, 0x3e, 0xcd, 0x3c,
    0x54, 0x82, 0x79, 0xbc, 0x6f, 0x01, 0x37, 0xbe, 0x86,
    0x44, 0xd8, 0xbc, 0xec, 0xca, 0xaa, 0x3b, 0xb9, 0x0f,
    0x15, 0x3c, 0x79, 0x62, 0x0c, 0xbe, 0xb4, 0x0e, 0x0d,
    0xbe, 0xce, 0xe3, 0x9e, 0x3d, 0xdd, 0x8a, 0x5c, 0xbd
  };

  return AI_HANDLE_PTR(s_network_weights);

}

