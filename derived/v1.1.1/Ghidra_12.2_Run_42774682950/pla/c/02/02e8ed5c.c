/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8ed5c; name: FUN_02e8ed5c
 */


undefined8 * FUN_02e8ed5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_042a7dc8;
  FUN_02e97f38(param_1 + 0x1f);
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1 + 0x1a) = 0;
    (*DAT_0442d150)(0);
    param_1[0x19] = 0;
    *(undefined4 *)((long)param_1 + 0xd4) = 0;
  }
  if (param_1[0x12] != 0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    (*DAT_0442d150)(0);
    param_1[0x12] = 0;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xd));
  return param_1 + 1;
}


