/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085e668; name: FUN_0085e668
 */


undefined8 FUN_0085e668(ushort *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if ((ulong)*param_1 != 0) {
    uVar3 = 0;
    iVar1 = -1;
    do {
      lVar4 = **(long **)(*(long *)(param_1 + 4) + uVar3 * 8);
      if (lVar4 == param_2) {
        return 0;
      }
      iVar2 = (int)uVar3;
      if (lVar4 != -1) {
        iVar2 = -1;
      }
      uVar3 = uVar3 + 1;
      if (iVar1 != -1) {
        iVar2 = iVar1;
      }
      iVar1 = iVar2;
    } while (uVar3 < *param_1);
    if (-1 < iVar2) {
      **(long **)(*(long *)(param_1 + 4) + (long)iVar2 * 8) = param_2;
      return 1;
    }
  }
  return 0;
}


