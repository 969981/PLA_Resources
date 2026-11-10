/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cb390; name: FUN_031cb390
 */


void FUN_031cb390(long param_1,int *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 *puVar30;
  undefined4 *puVar31;
  undefined4 local_68;
  undefined4 uStack_64;
  
  lVar18 = *(long *)(param_1 + 0x18);
  lVar25 = *(long *)(*(long *)(param_1 + 0x20) + (long)*param_2 * 8);
  lVar28 = *(long *)(*(long *)(lVar18 + 0x38) + (long)*param_2 * 0xf0);
  if (*(char *)(lVar28 + 0x30) == '\x01') {
    uVar8 = *(undefined8 *)(lVar28 + 0x20);
  }
  else {
    uVar8 = FUN_02898b44();
    lVar18 = *(long *)(param_1 + 0x18);
  }
  FUN_03196e74(uVar8,lVar18,0);
  puVar6 = PTR_PTR_0434a080;
  *(undefined4 *)(lVar25 + 0xa0) = 0;
  if ((-1 < *(int *)(lVar25 + 0xa4)) && (*(long *)(lVar25 + 0x98) != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,*(long *)(lVar25 + 0x98),*(int *)(lVar25 + 0xa4) << 2);
  }
  *(undefined8 *)(lVar25 + 0x98) = 0;
  *(undefined4 *)(lVar25 + 0xa4) = 0x80000000;
  *(undefined4 *)(lVar25 + 0xb0) = 0;
  if ((-1 < *(int *)(lVar25 + 0xb4)) && (*(long *)(lVar25 + 0xa8) != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,*(long *)(lVar25 + 0xa8),*(int *)(lVar25 + 0xb4) << 2);
  }
  *(undefined8 *)(lVar25 + 0xa8) = 0;
  *(undefined4 *)(lVar25 + 0xb4) = 0x80000000;
  lVar26 = (long)DAT_0444b53c;
  lVar18 = tpidr_el0;
  lVar25 = *(long *)(lVar18 + 0x38d490);
  if (lVar25 == 0) {
    lVar25 = FUN_0333d16c(0,1);
    *(long *)(lVar18 + 0x38d490) = lVar25;
  }
  if (*(long *)(lVar25 + lVar26 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  lVar18 = (long)*param_2;
  lVar25 = *(long *)(*(long *)(param_1 + 0x18) + 0x38) + lVar18 * 0xf0;
  iVar4 = *(int *)(lVar25 + 0xa8);
  if (iVar4 != 0) {
    lVar18 = *(long *)(lVar25 + 0xa0);
    lVar25 = lVar18 + (long)iVar4 * 8;
    lVar26 = *(long *)(*(long *)(param_1 + 0x18) + 0x48);
    do {
      lVar17 = *(long *)(lVar26 + (long)*(int *)(lVar18 + 4) * 0x18);
      iVar4 = *(int *)(*(long *)(lVar28 + 0x20) + 0x17c);
      lVar27 = *(long *)(lVar17 + 0x20);
      if (*(int *)(lVar17 + 0x18) == iVar4) {
        if (lVar27 != 0) {
          lVar17 = *(long *)(*(long *)(param_1 + 0x20) + (long)*(int *)(lVar17 + 0x1c) * 8);
          if (*(int *)(lVar27 + 0x28) != 0) {
            lVar29 = (long)*(int *)(lVar27 + 0x28) << 4;
            puVar31 = (undefined4 *)(*(long *)(lVar27 + 0x20) + 8);
            do {
              local_68 = *puVar31;
              lVar12 = *(long *)(lVar17 + 0xa8);
              iVar13 = *(int *)(lVar17 + 0xb0);
              iVar4 = iVar13 + 1;
              if ((int)(*(uint *)(lVar17 + 0xb4) & 0x3fffffff) <= iVar13) {
                lVar12 = FUN_0315f314(puVar6,iVar4,lVar12,iVar13,lVar17 + 0xb4);
                *(long *)(lVar17 + 0xa8) = lVar12;
                iVar13 = *(int *)(lVar17 + 0xb0);
              }
              *(undefined4 *)(lVar12 + (long)iVar13 * 4) = local_68;
              *(int *)(lVar17 + 0xb0) = iVar4;
              FUN_031cdd40(lVar17 + 0xb8,&local_68);
              lVar29 = lVar29 + -0x10;
              puVar31 = puVar31 + 4;
            } while (lVar29 != 0);
          }
          puVar30 = *(undefined8 **)(lVar27 + 0x60);
          iVar4 = *(int *)(lVar27 + 0x68);
          puVar19 = *(undefined8 **)(lVar17 + 0xf8);
          uVar3 = *(uint *)(lVar17 + 0x100);
          uVar11 = *(uint *)(lVar17 + 0x104);
          uVar14 = uVar3 + iVar4;
          puVar10 = puVar19;
          if ((int)(uVar11 & 0x3fffffff) < (int)uVar14) {
            if (0x3fffffff < (int)uVar14) {
              FUN_032bd0a8(uVar14);
              uVar11 = *(uint *)(lVar17 + 0x104);
            }
            uVar15 = (uVar11 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar15) {
              uVar15 = 0x3fffffff;
            }
            uVar2 = uVar14;
            if ((int)uVar14 <= (int)uVar15) {
              uVar2 = uVar15;
            }
            FUN_032bd100(uVar2,0x20,uVar11,&local_68);
            uVar11 = *(uint *)(lVar17 + 0x104);
            puVar10 = (undefined8 *)
                      (**(code **)(*(long *)puVar6 + 0x10))
                                (puVar6,CONCAT44(uStack_64,local_68),&local_68);
            if (0 < (int)uVar3) {
              uVar8 = puVar19[3];
              puVar10[1] = puVar19[1];
              puVar10[3] = uVar8;
              uVar8 = *puVar19;
              puVar10[2] = puVar19[2];
              *puVar10 = uVar8;
              if (uVar3 != 1) {
                lVar27 = (ulong)uVar3 - 1;
                puVar22 = puVar10;
                puVar20 = puVar19;
                do {
                  uVar8 = puVar20[7];
                  lVar27 = lVar27 + -1;
                  puVar22[5] = puVar20[5];
                  puVar22[7] = uVar8;
                  uVar8 = puVar20[4];
                  puVar22[6] = puVar20[6];
                  puVar22[4] = uVar8;
                  puVar22 = puVar22 + 4;
                  puVar20 = puVar20 + 4;
                } while (lVar27 != 0);
              }
            }
            if (-1 < (int)uVar11) {
              (**(code **)(*(long *)puVar6 + 0x18))
                        (puVar6,puVar19,((ulong)uVar11 & 0x3fffffff) << 5);
            }
            if (CONCAT44(uStack_64,local_68) < 0x7ffffffe0) {
              uVar16 = (undefined4)(CONCAT44(uStack_64,local_68) >> 5);
            }
            else {
              uVar16 = 0x3fffffff;
            }
            *(undefined4 *)(lVar17 + 0x104) = uVar16;
            *(undefined8 **)(lVar17 + 0xf8) = puVar10;
          }
          if (iVar4 != 0) {
            puVar10 = puVar10 + (long)(int)uVar3 * 4;
            uVar21 = (long)iVar4 * 0x20 - 0x20;
            uVar3 = ((uint)(uVar21 >> 5) & 0x7ffffff) + 1;
            puVar19 = puVar30;
            if ((uVar3 & 3) != 0) {
              lVar27 = -((ulong)uVar3 & 3);
              puVar22 = puVar10;
              do {
                uVar8 = puVar19[3];
                puVar10 = puVar22 + 4;
                bVar7 = lVar27 != -1;
                lVar27 = lVar27 + 1;
                puVar22[1] = puVar19[1];
                puVar22[3] = uVar8;
                uVar8 = *puVar19;
                puVar22[2] = puVar19[2];
                *puVar22 = uVar8;
                puVar19 = puVar19 + 4;
                puVar22 = puVar10;
              } while (bVar7);
            }
            if (0x5f < uVar21) {
              do {
                uVar8 = puVar19[3];
                puVar10[1] = puVar19[1];
                puVar10[3] = uVar8;
                uVar8 = *puVar19;
                puVar10[2] = puVar19[2];
                *puVar10 = uVar8;
                uVar8 = puVar19[5];
                puVar10[7] = puVar19[7];
                puVar10[5] = uVar8;
                uVar8 = puVar19[4];
                puVar10[6] = puVar19[6];
                puVar10[4] = uVar8;
                uVar23 = puVar19[9];
                puVar10[0xb] = puVar19[0xb];
                uVar8 = puVar19[10];
                uVar24 = puVar19[8];
                puVar10[9] = uVar23;
                puVar10[10] = uVar8;
                puVar10[8] = uVar24;
                uVar8 = puVar19[0xc];
                uVar23 = puVar19[0xd];
                puVar22 = puVar19 + 0xe;
                uVar24 = puVar19[0xf];
                puVar19 = puVar19 + 0x10;
                puVar10[0xe] = *puVar22;
                puVar10[0xf] = uVar24;
                puVar10[0xc] = uVar8;
                puVar10[0xd] = uVar23;
                puVar10 = puVar10 + 0x10;
              } while (puVar19 != puVar30 + (long)iVar4 * 4);
            }
          }
          goto LAB_031cb7ec;
        }
      }
      else if (lVar27 != 0 && *(int *)(lVar17 + 0x1c) == iVar4) {
        lVar17 = *(long *)(*(long *)(param_1 + 0x20) + (long)*(int *)(lVar17 + 0x18) * 8);
        if (*(int *)(lVar27 + 0x28) != 0) {
          puVar31 = *(undefined4 **)(lVar27 + 0x20);
          lVar29 = (long)*(int *)(lVar27 + 0x28) << 4;
          do {
            local_68 = *puVar31;
            lVar12 = *(long *)(lVar17 + 0xa8);
            iVar13 = *(int *)(lVar17 + 0xb0);
            iVar4 = iVar13 + 1;
            if ((int)(*(uint *)(lVar17 + 0xb4) & 0x3fffffff) <= iVar13) {
              lVar12 = FUN_0315f314(puVar6,iVar4,lVar12,iVar13,lVar17 + 0xb4);
              *(long *)(lVar17 + 0xa8) = lVar12;
              iVar13 = *(int *)(lVar17 + 0xb0);
            }
            *(undefined4 *)(lVar12 + (long)iVar13 * 4) = local_68;
            *(int *)(lVar17 + 0xb0) = iVar4;
            FUN_031cdd40(lVar17 + 0xb8,&local_68);
            puVar31 = puVar31 + 4;
            lVar29 = lVar29 + -0x10;
          } while (lVar29 != 0);
        }
        puVar30 = *(undefined8 **)(lVar27 + 0x50);
        iVar4 = *(int *)(lVar27 + 0x58);
        puVar19 = *(undefined8 **)(lVar17 + 0xf8);
        uVar3 = *(uint *)(lVar17 + 0x100);
        uVar11 = *(uint *)(lVar17 + 0x104);
        uVar14 = uVar3 + iVar4;
        puVar10 = puVar19;
        if ((int)(uVar11 & 0x3fffffff) < (int)uVar14) {
          if (0x3fffffff < (int)uVar14) {
            FUN_032bd0a8(uVar14);
            uVar11 = *(uint *)(lVar17 + 0x104);
          }
          uVar15 = (uVar11 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar15) {
            uVar15 = 0x3fffffff;
          }
          uVar2 = uVar14;
          if ((int)uVar14 <= (int)uVar15) {
            uVar2 = uVar15;
          }
          FUN_032bd100(uVar2,0x20,uVar11,&local_68);
          uVar11 = *(uint *)(lVar17 + 0x104);
          puVar10 = (undefined8 *)
                    (**(code **)(*(long *)puVar6 + 0x10))
                              (puVar6,CONCAT44(uStack_64,local_68),&local_68);
          if (0 < (int)uVar3) {
            uVar8 = puVar19[3];
            puVar10[1] = puVar19[1];
            puVar10[3] = uVar8;
            uVar8 = *puVar19;
            puVar10[2] = puVar19[2];
            *puVar10 = uVar8;
            if (uVar3 != 1) {
              lVar27 = (ulong)uVar3 - 1;
              puVar22 = puVar10;
              puVar20 = puVar19;
              do {
                uVar8 = puVar20[7];
                lVar27 = lVar27 + -1;
                puVar22[5] = puVar20[5];
                puVar22[7] = uVar8;
                uVar8 = puVar20[4];
                puVar22[6] = puVar20[6];
                puVar22[4] = uVar8;
                puVar22 = puVar22 + 4;
                puVar20 = puVar20 + 4;
              } while (lVar27 != 0);
            }
          }
          if (-1 < (int)uVar11) {
            (**(code **)(*(long *)puVar6 + 0x18))(puVar6,puVar19,((ulong)uVar11 & 0x3fffffff) << 5);
          }
          if (CONCAT44(uStack_64,local_68) < 0x7ffffffe0) {
            uVar16 = (undefined4)(CONCAT44(uStack_64,local_68) >> 5);
          }
          else {
            uVar16 = 0x3fffffff;
          }
          *(undefined4 *)(lVar17 + 0x104) = uVar16;
          *(undefined8 **)(lVar17 + 0xf8) = puVar10;
        }
        if (iVar4 != 0) {
          puVar10 = puVar10 + (long)(int)uVar3 * 4;
          uVar21 = (long)iVar4 * 0x20 - 0x20;
          uVar3 = ((uint)(uVar21 >> 5) & 0x7ffffff) + 1;
          puVar19 = puVar30;
          if ((uVar3 & 3) != 0) {
            lVar27 = -((ulong)uVar3 & 3);
            puVar22 = puVar10;
            do {
              uVar8 = puVar19[3];
              puVar10 = puVar22 + 4;
              bVar7 = lVar27 != -1;
              lVar27 = lVar27 + 1;
              puVar22[1] = puVar19[1];
              puVar22[3] = uVar8;
              uVar8 = *puVar19;
              puVar22[2] = puVar19[2];
              *puVar22 = uVar8;
              puVar19 = puVar19 + 4;
              puVar22 = puVar10;
            } while (bVar7);
          }
          if (0x5f < uVar21) {
            do {
              uVar8 = puVar19[3];
              puVar10[1] = puVar19[1];
              puVar10[3] = uVar8;
              uVar8 = *puVar19;
              puVar10[2] = puVar19[2];
              *puVar10 = uVar8;
              uVar8 = puVar19[5];
              puVar10[7] = puVar19[7];
              puVar10[5] = uVar8;
              uVar8 = puVar19[4];
              puVar10[6] = puVar19[6];
              puVar10[4] = uVar8;
              uVar23 = puVar19[9];
              puVar10[0xb] = puVar19[0xb];
              uVar8 = puVar19[10];
              uVar24 = puVar19[8];
              puVar10[9] = uVar23;
              puVar10[10] = uVar8;
              puVar10[8] = uVar24;
              uVar8 = puVar19[0xc];
              uVar23 = puVar19[0xd];
              puVar22 = puVar19 + 0xe;
              uVar24 = puVar19[0xf];
              puVar19 = puVar19 + 0x10;
              puVar10[0xe] = *puVar22;
              puVar10[0xf] = uVar24;
              puVar10[0xc] = uVar8;
              puVar10[0xd] = uVar23;
              puVar10 = puVar10 + 0x10;
            } while (puVar19 != puVar30 + (long)iVar4 * 4);
          }
        }
LAB_031cb7ec:
        *(uint *)(lVar17 + 0x100) = uVar14;
      }
      lVar18 = lVar18 + 8;
    } while (lVar18 != lVar25);
    lVar18 = (long)*param_2;
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x20) + lVar18 * 8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar18 * 8) = 0;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar1 = plVar9 + 2;
    do {
      lVar18 = *plVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  if (*(int *)(param_1 + 0x30) == *param_2) {
    *(undefined1 *)(param_1 + 0x34) = 3;
  }
  return;
}


