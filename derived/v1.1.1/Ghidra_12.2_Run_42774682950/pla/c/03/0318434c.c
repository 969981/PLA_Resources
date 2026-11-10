/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318434c; name: FUN_0318434c
 */


void FUN_0318434c(long param_1,long param_2)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  undefined4 local_78 [2];
  uint local_70 [2];
  int local_68 [2];
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar6 = 0;
    lVar8 = 0;
    do {
      *(undefined4 *)(*(long *)(param_1 + 0x50) + lVar6) = 0xffffffff;
      lVar12 = *(long *)(param_1 + 0x50) + lVar6;
      lVar6 = lVar6 + 8;
      *(undefined4 *)(lVar12 + 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x58));
  }
  lVar6 = *(long *)(param_2 + 0x38) + (long)*(int *)(param_1 + 0x94) * 0xf0;
  iVar4 = *(int *)(lVar6 + 0xa8);
  if (iVar4 != 0) {
    lVar6 = *(long *)(lVar6 + 0xa0);
    lVar8 = lVar6 + (long)iVar4 * 8;
    lVar12 = *(long *)(param_2 + 0x48);
    do {
      lVar13 = *(long *)(*(long *)(lVar12 + (long)*(int *)(lVar6 + 4) * 0x18) + 0x20);
      if (*(int *)(lVar13 + 0x18) == *(int *)(param_1 + 0x90)) {
        FUN_031783c8(local_68,param_2,*(undefined4 *)(lVar13 + 0x1c));
        if (local_68[0] != -1) {
          lVar7 = *(long *)(*(long *)(param_2 + 0x38) + (long)local_68[0] * 0xf0 + 8);
          if (lVar7 == 0) {
            lVar7 = 0;
            iVar4 = *(int *)(lVar13 + 0x48);
          }
          else if (*(char *)(lVar7 + 0x30) == '\x01') {
            lVar7 = *(long *)(lVar7 + 0x20);
            iVar4 = *(int *)(lVar13 + 0x48);
          }
          else {
            lVar7 = FUN_0317a2cc();
            iVar4 = *(int *)(lVar13 + 0x48);
          }
          if (iVar4 != 0) {
            puVar14 = *(uint **)(lVar13 + 0x40);
            puVar3 = puVar14 + (long)iVar4 * 2;
            iVar4 = *(int *)(lVar7 + 0x48);
            uVar5 = local_70[0];
            do {
              if (iVar4 != 0) {
                local_70[0] = puVar14[1];
                iVar4 = *(int *)(*(long *)(lVar7 + 0x40) + (long)(int)local_70[0] * 4);
                if (iVar4 != -1) {
                  uVar9 = *(ulong *)(*(long *)(lVar7 + 0x50) + (long)iVar4 * 8);
                  uVar10 = uVar9 >> 0x20;
                  if (0 < (int)(uVar9 >> 0x20)) {
                    lVar13 = *(long *)(lVar7 + 0x60) +
                             ((long)(int)uVar9 * 2 + (long)*(int *)(lVar7 + 0x30) * -2) * 4;
                    puVar11 = (uint *)(lVar13 + 4);
                    if ((*(byte *)(lVar13 + 2) >> 6 & 1) != 0) goto LAB_03184560;
                    do {
                      do {
                        uVar9 = (ulong)((int)uVar9 + 1);
                        puVar2 = puVar11 + 2;
                        uVar10 = uVar10 - 1;
                        if (uVar10 == 0) goto LAB_031844d8;
                        pbVar1 = (byte *)((long)puVar11 + 6);
                        puVar11 = puVar2;
                      } while ((*pbVar1 >> 6 & 1) == 0);
LAB_03184560:
                    } while (*puVar11 != (*puVar14 | *(int *)(param_1 + 0x94) << 0x16));
                    local_78[0] = (undefined4)uVar9;
                    FUN_031a5548(lVar7,local_70,local_78);
                    uVar5 = local_70[0];
                  }
                }
              }
LAB_031844d8:
              local_70[0] = uVar5;
              puVar14 = puVar14 + 2;
              if (puVar14 == puVar3) break;
              iVar4 = *(int *)(lVar7 + 0x48);
              uVar5 = local_70[0];
            } while( true );
          }
        }
      }
      else if (*(int *)(lVar13 + 0x1c) == *(int *)(param_1 + 0x90)) {
        FUN_031783c8(local_68,param_2);
        if (local_68[0] != -1) {
          lVar7 = *(long *)(*(long *)(param_2 + 0x38) + (long)local_68[0] * 0xf0 + 8);
          if (lVar7 == 0) {
            lVar7 = 0;
            iVar4 = *(int *)(lVar13 + 0x48);
          }
          else if (*(char *)(lVar7 + 0x30) == '\x01') {
            lVar7 = *(long *)(lVar7 + 0x20);
            iVar4 = *(int *)(lVar13 + 0x48);
          }
          else {
            lVar7 = FUN_0317a2cc();
            iVar4 = *(int *)(lVar13 + 0x48);
          }
          if (iVar4 != 0) {
            puVar14 = *(uint **)(lVar13 + 0x40);
            puVar3 = puVar14 + (long)iVar4 * 2;
            iVar4 = *(int *)(lVar7 + 0x48);
            uVar5 = local_70[0];
            do {
              if (iVar4 != 0) {
                local_70[0] = *puVar14;
                iVar4 = *(int *)(*(long *)(lVar7 + 0x40) + (long)(int)local_70[0] * 4);
                if (iVar4 != -1) {
                  uVar9 = *(ulong *)(*(long *)(lVar7 + 0x50) + (long)iVar4 * 8);
                  uVar10 = uVar9 >> 0x20;
                  if (0 < (int)(uVar9 >> 0x20)) {
                    lVar13 = *(long *)(lVar7 + 0x60) +
                             ((long)(int)uVar9 * 2 + (long)*(int *)(lVar7 + 0x30) * -2) * 4;
                    puVar11 = (uint *)(lVar13 + 4);
                    if ((*(byte *)(lVar13 + 2) >> 6 & 1) != 0) goto LAB_03184654;
                    do {
                      do {
                        uVar9 = (ulong)((int)uVar9 + 1);
                        puVar2 = puVar11 + 2;
                        uVar10 = uVar10 - 1;
                        if (uVar10 == 0) goto LAB_031845cc;
                        pbVar1 = (byte *)((long)puVar11 + 6);
                        puVar11 = puVar2;
                      } while ((*pbVar1 >> 6 & 1) == 0);
LAB_03184654:
                    } while (*puVar11 != (puVar14[1] | *(int *)(param_1 + 0x94) << 0x16));
                    local_78[0] = (undefined4)uVar9;
                    FUN_031a5548(lVar7,local_70,local_78);
                    uVar5 = local_70[0];
                  }
                }
              }
LAB_031845cc:
              local_70[0] = uVar5;
              puVar14 = puVar14 + 2;
              if (puVar14 == puVar3) break;
              iVar4 = *(int *)(lVar7 + 0x48);
              uVar5 = local_70[0];
            } while( true );
          }
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar6 != lVar8);
  }
  return;
}


