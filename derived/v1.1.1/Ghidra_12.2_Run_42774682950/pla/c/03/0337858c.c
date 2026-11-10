/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337858c; name: FUN_0337858c
 */


undefined1  [16] FUN_0337858c(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [12];
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 100) == 0) {
    return ZEXT816(0);
  }
  iVar2 = *(int *)(lVar4 + 0x5c);
  auVar3 = *(undefined1 (*) [12])(*(long *)(lVar4 + 0x50) + (long)iVar2 * 0x10);
  iVar1 = 0;
  if (iVar2 + 1 != *(int *)(lVar4 + 0x58)) {
    iVar1 = iVar2 + 1;
  }
  *(int *)(lVar4 + 0x5c) = iVar1;
  *(int *)(lVar4 + 100) = *(int *)(lVar4 + 100) + -1;
  auVar5._12_4_ = 0;
  auVar5._0_12_ = auVar3;
  return auVar5;
}


