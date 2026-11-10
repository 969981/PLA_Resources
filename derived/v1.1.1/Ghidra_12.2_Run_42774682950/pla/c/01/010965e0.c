/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010965e0; name: FUN_010965e0
 */


int FUN_010965e0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xff;
  if ((param_2 & 1) == 0) {
    iVar2 = 0x100;
  }
  iVar1 = param_1;
  if (param_1 == -1) {
    iVar1 = iVar2;
  }
  iVar2 = 0x100;
  if (param_1 + 1U < 0x101) {
    iVar2 = iVar1;
  }
  return iVar2;
}


