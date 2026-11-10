/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01096530; name: FUN_01096530
 */


int FUN_01096530(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0xffff;
  if (param_1 + 1U < 0x1b) {
    iVar1 = param_1;
  }
  iVar2 = 0xffff;
  if (param_1 != -1) {
    iVar2 = iVar1;
  }
  return iVar2;
}


