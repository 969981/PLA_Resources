/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0291c150; name: FUN_0291c150
 */


void FUN_0291c150(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_02909348(param_1,1,0);
  *param_1 = &PTR_LAB_04275588;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[9] = &PTR_LAB_042756b0;
  param_1[10] = &PTR_LAB_04275790;
  FUN_00aeaa8c(param_1 + 0x87,param_2);
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  FUN_01a04c0c(param_1 + 0x89,param_3);
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0x492492492492492;
  param_1[0x8d] = param_1[1];
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = param_1[1];
  param_1[0x93] = 0x492492492492492;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0x3f800000;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x98),false,0);
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0xa0] = 0x666666666666666;
  param_1[0xa1] = 0;
  param_1[0x9f] = param_1[1];
  *(undefined4 *)(param_1 + 0xa2) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xa3),false,0);
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xab] = 0;
  param_1[0xaa] = 0x3ffffffffffffff;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xad] = 0;
  param_1[0xb0] = 0;
  param_1[0xa9] = param_1[1];
  param_1[0xae] = param_1[1];
  param_1[0xaf] = 0x3ffffffffffffff;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xb5),false,0);
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  return;
}


