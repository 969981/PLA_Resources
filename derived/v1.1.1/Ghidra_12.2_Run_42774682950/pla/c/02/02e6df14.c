/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6df14; name: FUN_02e6df14
 */


ulong FUN_02e6df14(long param_1,uint param_2,ulong param_3,uint param_4,uint param_5,byte param_6,
                  uint *param_7,long *param_8)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  int iVar14;
  ulong *puVar15;
  int iVar16;
  
  *param_8 = 0;
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 != 0) {
    iVar16 = 0;
    iVar14 = iVar3 + -1;
    do {
      while( true ) {
        iVar5 = iVar14 - iVar16;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        uVar2 = iVar16 + (iVar5 >> 1);
        puVar8 = *(ulong **)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 8);
        uVar6 = (uint)puVar8[4];
        if (uVar6 <= param_2) break;
LAB_02e6df5c:
        iVar14 = uVar2 - 1;
        if (iVar14 < iVar16) goto LAB_02e6df7c;
      }
      if (param_2 <= uVar6) {
        uVar11 = *puVar8;
        if (uVar11 < param_3) goto LAB_02e6df5c;
        if (uVar11 == param_3) {
          if (param_3 <= (uVar11 - param_4) + (ulong)*param_7) {
            iVar16 = (int)puVar8[3];
            goto LAB_02e6e000;
          }
          break;
        }
      }
      iVar16 = uVar2 + 1;
    } while (iVar16 <= iVar14);
LAB_02e6df7c:
    if ((((uVar6 == param_2) && (uVar11 = *puVar8, uVar11 <= param_3)) &&
        (iVar16 = (int)puVar8[3], (int)param_3 <= (int)(((int)uVar11 - param_4) + iVar16))) ||
       ((((int)(uVar2 + 1) < iVar3 &&
         (puVar8 = *(ulong **)(*(long *)(param_1 + 0x28) + (ulong)(uVar2 + 1) * 8),
         (uint)puVar8[4] == param_2)) &&
        ((uVar11 = *puVar8, uVar11 <= param_3 &&
         (iVar16 = (int)puVar8[3], (int)param_3 <= (int)(((int)uVar11 - param_4) + iVar16))))))) {
LAB_02e6e000:
      param_3 = param_3 - uVar11;
      uVar2 = iVar16 - (int)param_3;
      if (uVar2 <= *param_7) {
        if ((uVar2 == *param_7 & param_6) == 0) {
          uVar6 = 0;
          if (param_5 != 0) {
            uVar6 = uVar2 / param_5;
          }
          if (uVar2 != uVar6 * param_5) {
            return 0;
          }
        }
        uVar11 = 0;
        if (param_4 <= uVar2) {
          uVar1 = puVar8[1] + (param_3 & 0xffffffff);
          uVar12 = (ulong)param_5;
          uVar7 = 0;
          if (uVar12 != 0) {
            uVar7 = uVar1 / uVar12;
          }
          if (uVar1 == uVar7 * uVar12) {
            *param_7 = uVar2;
            sVar4 = *(short *)((long)puVar8 + 0x24);
            if (sVar4 == 0) {
              puVar13 = (ulong *)(param_1 + 0x18);
              puVar10 = (ulong *)0x0;
              puVar15 = puVar13;
              do {
                puVar9 = puVar10;
                puVar10 = (ulong *)*puVar15;
                puVar15 = puVar10 + 2;
              } while (puVar10 != (ulong *)0x0 && puVar8 != puVar10);
              if (puVar10 != (ulong *)0x0) {
                if (*(ulong **)(param_1 + 0x18) != puVar10) {
                  puVar13 = puVar9 + 2;
                }
                *puVar13 = puVar10[2];
                if (*(ulong **)(param_1 + 0x10) == puVar10) {
                  *(ulong **)(param_1 + 0x10) = puVar9;
                }
                *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
              }
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - (int)puVar8[3];
              sVar4 = *(short *)((long)puVar8 + 0x24);
              puVar8[2] = 0;
            }
            uVar11 = param_3 & 0xffffffff;
            *(short *)((long)puVar8 + 0x24) = sVar4 + 1;
            *param_8 = (long)puVar8;
          }
        }
        return uVar11;
      }
    }
  }
  return 0;
}


