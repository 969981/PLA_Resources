/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01462754; name: FUN_01462754
 */


void FUN_01462754(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  FUN_00d37d1c(param_1,param_2,param_3 & 1,0);
  *param_1 = &PTR_LAB_04211818;
  param_1[9] = &PTR_LAB_04211918;
  param_1[10] = &PTR_LAB_04211960;
  FUN_0146280c(param_1 + 0x9b);
  *(undefined4 *)(param_1 + 0xd4) = 0x101;
  param_1[0xd1] = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  param_1[0xd3] = 0;
  *(undefined2 *)((long)param_1 + 0x6a4) = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined8 *)((long)param_1 + 0x6ac) = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xdb),false,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xdf),false,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xe3),false,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xe7),false,0);
  return;
}


