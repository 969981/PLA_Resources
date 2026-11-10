/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015a680; name: FUN_0015a680
 */


void FUN_0015a680(long param_1)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x20);
  uVar5 = *(ulong *)(param_1 + 0x10);
  while (uVar4 = uVar5, lVar7 != 0) {
    puVar1 = (ulong *)(lVar7 + 8);
    lVar7 = *(long *)(lVar7 + 0x10);
    uVar5 = *puVar1;
    if (*puVar1 <= uVar4) {
      uVar5 = uVar4;
    }
  }
  iVar6 = (int)(uVar4 - *(long *)(param_1 + 0x38) >> 4);
  iVar2 = iVar6 + 1;
  iVar3 = iVar6 + 8;
  if (-1 < iVar2) {
    iVar3 = iVar6 + 1;
  }
  iVar3 = iVar2 + (iVar3 >> 3);
  if (0xf4235 < iVar3) {
    iVar3 = 0xf4236;
  }
  if (*(int *)(param_1 + 0xb8) < 0xf4241) {
    FUN_0016cb00(param_1);
  }
  else {
    FUN_0016caa0();
  }
  if ((iVar2 < 0xf423c) && (iVar3 + 10 < *(int *)(param_1 + 0xb8))) {
    FUN_0015a490(param_1);
    return;
  }
  return;
}


