/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333ae54; name: FUN_0333ae54
 */


void FUN_0333ae54(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  iVar2 = (int)param_1[1];
  uVar4 = 1;
  if (2 < iVar2) {
    uVar3 = 1;
    if (*(byte *)(*(long *)(*param_1 + 0x10) + 8) <= *(byte *)(*(long *)(*param_1 + 8) + 8)) {
      uVar3 = 2;
    }
    uVar4 = (ulong)uVar3;
  }
  if ((int)uVar4 < iVar2) {
    uVar8 = 0;
    do {
      uVar7 = uVar4 & 0xffffffff;
      lVar5 = *param_1;
      iVar6 = (int)uVar4;
      lVar9 = *(long *)(lVar5 + (long)iVar6 * 8);
      lVar10 = *(long *)(lVar5 + (long)(int)uVar8 * 8);
      if (*(byte *)(lVar10 + 8) <= *(byte *)(lVar9 + 8)) {
        return;
      }
      *(long *)(lVar5 + (long)(int)uVar8 * 8) = lVar9;
      *(long *)(lVar5 + (long)iVar6 * 8) = lVar10;
      uVar4 = (long)(iVar6 << 1) | 1;
      lVar5 = (long)(iVar6 << 1) + 2;
      uVar3 = (uint)lVar5;
      if ((int)uVar3 < (int)param_1[1]) {
        uVar1 = (uint)uVar4;
        if (*(byte *)(*(long *)(*param_1 + lVar5 * 8) + 8) <=
            *(byte *)(*(long *)(*param_1 + uVar4 * 8) + 8)) {
          uVar1 = uVar3;
        }
        uVar4 = (ulong)uVar1;
      }
      uVar8 = uVar7;
    } while ((int)uVar4 < iVar2);
  }
  return;
}


