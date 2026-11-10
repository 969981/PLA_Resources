/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a6984; name: FUN_011a6984
 */


void FUN_011a6984(long param_1)

{
  long lVar1;
  
  FUN_011a723c(param_1,0,0);
  lVar1 = thunk_FUN_00d2f008(param_1 + 0x180,&DAT_043bdb40);
  if (lVar1 != 0) {
    FUN_028077c0(lVar1,0);
  }
  FUN_011a723c(param_1,1,0);
  lVar1 = thunk_FUN_00d2f008(param_1 + 0x180,&DAT_043bdb60);
  if (lVar1 == 0) {
    return;
  }
  FUN_028077c0(lVar1,0);
  return;
}


