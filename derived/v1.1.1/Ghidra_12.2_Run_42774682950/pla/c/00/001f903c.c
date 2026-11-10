/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f903c; name: FUN_001f903c
 */


int FUN_001f903c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 - param_3;
  iVar1 = -0x80000000;
  if (-0x863 < param_1) {
    iVar1 = (param_2 - param_4) + param_1 * 1000000;
  }
  iVar2 = 0x7fffffff;
  if (param_1 < 0x863) {
    iVar2 = iVar1;
  }
  return iVar2;
}


