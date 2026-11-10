/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01096510; name: FUN_01096510
 */


int FUN_01096510(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0xff;
  if (param_1 + 1U < 5) {
    iVar1 = param_1;
  }
  iVar2 = 0xff;
  if (param_1 != -1) {
    iVar2 = iVar1;
  }
  return iVar2;
}


