/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea5470; name: FUN_02ea5470
 */


void FUN_02ea5470(long *param_1)

{
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_02f59e60(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_02f59e60(0);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 4));
  return;
}


