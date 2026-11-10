/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a723c; name: FUN_011a723c
 */


void FUN_011a723c(long param_1,int param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = thunk_FUN_00d2ec48(param_1 + 0x180,&DAT_043bdb00 + (long)param_2 * 4);
  if (lVar1 == 0) {
    return;
  }
  FUN_0280779c(lVar1,param_3 & 1);
  return;
}


