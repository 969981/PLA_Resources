/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e40dc0; name: FUN_02e40dc0
 */


void FUN_02e40dc0(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xb8));
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    (*DAT_0442d150)(9);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    (*DAT_0442d150)(9);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    (*DAT_0442d150)(9);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  thunk_FUN_02e45b9c(param_1);
                    /* WARNING: Could not recover jumptable at 0x02e40e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(9,param_1);
  return;
}


