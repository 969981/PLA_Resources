/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010965a0; name: FUN_010965a0
 */


int FUN_010965a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (0x1e < param_1) {
    iVar2 = 0x1f;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar1 = 0xffff;
  if (param_1 != -1) {
    iVar1 = iVar2;
  }
  return iVar1;
}


