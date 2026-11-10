/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022c96c; name: FUN_0022c96c
 */


uint FUN_0022c96c(long param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  
  iVar2 = *(int *)(param_1 + 0x30);
  uVar4 = *(uint *)(*(long *)(param_1 + 8) + 8);
  uVar6 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  if (iVar2 != 0) {
    uVar6 = uVar4;
  }
  uVar4 = (uint)*param_2;
  if (*param_2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    pbVar7 = param_2;
    do {
      pbVar7 = pbVar7 + 1;
      uVar12 = uVar12 * uVar6 + uVar4;
      uVar4 = (uint)*pbVar7;
    } while (uVar4 != 0);
  }
  uVar4 = *(uint *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x18);
  uVar6 = uVar4;
  if ((int)uVar4 < 0) {
    uVar6 = uVar4 + 1;
  }
  uVar6 = (int)uVar6 >> 1;
  uVar5 = (ulong)uVar6;
  uVar10 = *(uint *)(lVar3 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffff000000000 | uVar5 << 4));
  uVar9 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
  uVar11 = uVar9 >> 0x10 | uVar9 << 0x10;
  uVar9 = uVar11;
  if (iVar2 != 0) {
    uVar9 = uVar10;
  }
  if (uVar9 != uVar12) {
    uVar8 = 0;
    uVar9 = uVar4;
    if (iVar2 == 0) {
      do {
        uVar10 = (uint)uVar5;
        if (uVar11 < uVar12) {
          uVar6 = (uint)uVar8;
          uVar8 = uVar5;
          uVar10 = uVar9;
          uVar9 = uVar6;
        }
        if (uVar9 == (uint)uVar5) {
          return 0xffffffff;
        }
        iVar1 = (int)uVar8 + uVar10;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        uVar6 = iVar1 >> 1;
        uVar5 = (ulong)uVar6;
        uVar9 = *(uint *)(lVar3 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffff000000000 | uVar5 << 4));
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        uVar11 = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = uVar10;
      } while (uVar11 != uVar12);
    }
    else {
      do {
        uVar11 = (uint)uVar5;
        uVar6 = uVar9;
        if (uVar10 < uVar12) {
          uVar6 = (uint)uVar8;
          uVar8 = uVar5;
          uVar11 = uVar9;
        }
        uVar9 = uVar11;
        if (uVar6 == (uint)uVar5) {
          return 0xffffffff;
        }
        iVar1 = (int)uVar8 + uVar9;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        uVar6 = iVar1 >> 1;
        uVar5 = (ulong)uVar6;
        uVar10 = *(uint *)(lVar3 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffff000000000 | uVar5 << 4));
      } while (uVar10 != uVar12);
    }
  }
  if (uVar6 == 0xffffffff) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = *(uint *)(lVar3 + (long)(int)uVar6 * 0x10 + 4);
    uVar10 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
    if (iVar2 != 0) {
      uVar10 = uVar9;
    }
    if (uVar10 == 0) {
      uVar9 = uVar6;
    }
    else {
      uVar9 = (uVar6 - (uVar10 >> 0x18)) + 1;
      if ((int)uVar9 < (int)uVar4) {
        if (iVar2 == 0) {
          uVar11 = (uVar6 - (uVar10 >> 0x18)) + 1;
          puVar13 = (uint *)(lVar3 + ((long)(int)uVar6 - (ulong)(uVar10 >> 0x18)) * 0x10 + 0x14);
          do {
            uVar6 = (puVar13[-1] & 0xff00ff00) >> 8 | (puVar13[-1] & 0xff00ff) << 8;
            if ((uVar6 >> 0x10 | uVar6 << 0x10) != uVar12) {
              return 0xffffffff;
            }
            uVar6 = (*puVar13 & 0xff00ff00) >> 8;
            uVar6 = (uVar6 | (*puVar13 & 0xff0000) << 8) >> 0x10 | uVar6 << 0x10;
            if (*(ulong *)(param_1 + 0x28) < *(long *)(param_1 + 0x10) + (ulong)uVar6) {
              return 0xffffffff;
            }
            iVar2 = strcmp((char *)param_2,(char *)(*(long *)(param_1 + 0x10) + (ulong)(uVar6 << 2))
                          );
            if (iVar2 == 0) {
              return uVar11;
            }
            uVar11 = uVar11 + 1;
            uVar9 = uVar9 + 1;
            puVar13 = puVar13 + 4;
          } while (uVar4 != uVar11);
        }
        else {
          uVar11 = (uVar6 - (uVar10 >> 0x18)) + 1;
          puVar13 = (uint *)(lVar3 + ((long)(int)uVar6 - (ulong)(uVar10 >> 0x18)) * 0x10 + 0x14);
          do {
            if (puVar13[-1] != uVar12) {
              return 0xffffffff;
            }
            if (*(ulong *)(param_1 + 0x28) <
                *(long *)(param_1 + 0x10) + ((ulong)*puVar13 & 0xffffff)) {
              return 0xffffffff;
            }
            iVar2 = strcmp((char *)param_2,
                           (char *)(*(long *)(param_1 + 0x10) +
                                   (ulong)(uint)((int)((ulong)*puVar13 & 0xffffff) << 2)));
            if (iVar2 == 0) {
              return uVar11;
            }
            uVar11 = uVar11 + 1;
            uVar9 = uVar9 + 1;
            puVar13 = puVar13 + 4;
          } while (uVar4 != uVar11);
        }
      }
    }
  }
  return uVar9;
}


