/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332d444; name: FUN_0332d444
 */


void FUN_0332d444(long param_1,int param_2,long param_3)

{
  short sVar1;
  short *psVar2;
  
  if (param_2 < *(int *)(param_1 + 0xb8)) {
    psVar2 = (short *)(param_3 + (long)param_2 * 2 + 0x2a);
    sVar1 = *psVar2;
    if (sVar1 != 0) {
      *psVar2 = sVar1 + -1;
      nn::os::ReleaseSemaphore(*(SemaphoreType **)(param_1 + (long)param_2 * 8 + 0x90),1);
      return;
    }
  }
  FUN_0332d358(param_1,param_3);
  return;
}


