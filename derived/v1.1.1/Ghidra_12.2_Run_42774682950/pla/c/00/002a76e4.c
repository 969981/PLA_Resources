/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a76e4; name: FUN_002a76e4
 */


void FUN_002a76e4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_043732e8 + 0x10);
  if ((char)param_1[0x19] != '\0') {
    if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
      (**(code **)(*(long *)param_1[0x18] + 0x18))
                ((long *)param_1[0x18],param_1[0x17],param_1[0x15] & 0xfffffffffffffffe,1);
    }
    if ((char)param_1[0x10] != '\0') {
      FUN_02767254(param_1 + 0x11,param_1[0x12]);
    }
    if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
      (**(code **)(*(long *)param_1[0xf] + 0x18))
                ((long *)param_1[0xf],param_1[0xe],param_1[0xc] & 0xfffffffffffffffe,1);
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 7));
  *param_1 = (long)(PTR_DAT_043732e0 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 2));
  return;
}


