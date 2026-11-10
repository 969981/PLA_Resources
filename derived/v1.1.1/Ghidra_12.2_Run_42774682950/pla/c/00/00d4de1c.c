/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4de1c; name: FUN_00d4de1c
 */


void FUN_00d4de1c(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 2) {
    iVar1 = param_2;
  }
  FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar1 * 0x28);
  return;
}


