/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015ca20; name: FUN_0015ca20
 */


long FUN_0015ca20(long param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x24)) {
    lVar3 = 0;
    iVar1 = *(int *)(*(long *)(param_1 + 0x50) + 8);
    piVar2 = (int *)(*(long *)(param_1 + 0x50) + 0xc);
    while (iVar1 <= param_3) {
      if ((param_3 < *piVar2) && (param_2 = param_2 + -1, param_2 == 0)) {
        return *(long *)(piVar2 + -3) + 0x18;
      }
      lVar3 = lVar3 + 1;
      if (*(int *)(param_1 + 0x24) <= lVar3) {
        return 0;
      }
      iVar1 = piVar2[3];
      piVar2 = piVar2 + 4;
    }
  }
  return 0;
}


