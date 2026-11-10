/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00395c24; name: FUN_00395c24
 */


long FUN_00395c24(long param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    return 0;
  }
  lVar3 = (long)*(int *)(lVar4 + 0xc) << 3;
  piVar2 = *(int **)(lVar4 + 0x10);
  if (piVar2 != (int *)0x0) {
    if (0 < *piVar2) {
      lVar5 = 0;
      do {
        lVar1 = (**(code **)(**(long **)(piVar2 + lVar5 * 2 + 2) + 0x88))();
        piVar2 = *(int **)(lVar4 + 0x10);
        lVar5 = lVar5 + 1;
        lVar3 = lVar1 + lVar3;
      } while (lVar5 < *piVar2);
    }
    lVar3 = lVar3 + 8;
  }
  return lVar3;
}


