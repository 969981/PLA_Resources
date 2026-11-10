/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e69dc0; name: FUN_02e69dc0
 */


void FUN_02e69dc0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_042a6438;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 5),true,0);
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_042a64b8;
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 0x67) = 0;
  *(undefined2 *)((long)param_1 + 0x6b) = 0;
  *(undefined2 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 1;
  *(undefined2 *)((long)param_1 + 0x65) = 0;
  param_1[0xe] = &PTR_LAB_042a6590;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}


