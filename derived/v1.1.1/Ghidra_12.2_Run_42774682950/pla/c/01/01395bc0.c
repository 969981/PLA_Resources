/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01395bc0; name: FUN_01395bc0
 */


void FUN_01395bc0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar2 != lVar3) {
    iVar1 = *(int *)(lVar2 + 0x310);
    while (iVar1 != *(int *)(param_2 + 0x310)) {
      if (lVar3 == lVar2 + 0x318) {
        return;
      }
      iVar1 = *(int *)(lVar2 + 0x628);
      lVar2 = lVar2 + 0x318;
    }
  }
  if (lVar3 == lVar2) {
    return;
  }
  FUN_01395a98();
  return;
}


