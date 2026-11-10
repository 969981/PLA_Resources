/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ca7f8; name: FUN_031ca7f8
 */


void FUN_031ca7f8(long param_1,int *param_2,long param_3)

{
  void *__s;
  int *piVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  bool bVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  byte bVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 *puVar36;
  long *plVar37;
  int *piVar38;
  long lVar39;
  int local_78 [2];
  int local_70 [2];
  int local_68;
  undefined4 uStack_64;
  
  iVar16 = *(int *)(param_1 + 0x28);
  iVar18 = *param_2;
  if (iVar16 <= iVar18) {
    iVar17 = iVar18 + 1;
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) <= iVar18) {
      uVar35 = FUN_031cdb80(PTR_PTR_0434a080,iVar17,*(undefined8 *)(param_1 + 0x20));
      iVar16 = *(int *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x20) = uVar35;
    }
    if (iVar18 < iVar16) {
      if (iVar17 < iVar16) {
        plVar11 = (long *)(*(long *)(param_1 + 0x20) + (long)iVar17 * 8);
        *(int *)(param_1 + 0x28) = iVar17;
        plVar37 = (long *)(*(long *)(param_1 + 0x20) + (long)iVar16 * 8 + -8);
        plVar13 = (long *)*plVar37;
        if (plVar13 != (long *)0x0) goto LAB_031caa24;
LAB_031caa14:
        if (plVar37 != plVar11) {
          while( true ) {
            plVar37 = plVar37 + -1;
            plVar13 = (long *)*plVar37;
            if (plVar13 == (long *)0x0) break;
LAB_031caa24:
            if (plVar13[1] == 0) break;
            plVar2 = plVar13 + 2;
            do {
              lVar25 = *plVar2;
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar10) {
                *plVar2 = lVar25 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar25 + -1 != 0) break;
            (**(code **)(*plVar13 + 0x18))();
            if (plVar37 == plVar11) goto LAB_031ca834;
          }
          goto LAB_031caa14;
        }
      }
    }
    else {
      __s = (void *)(*(long *)(param_1 + 0x20) + (long)iVar16 * 8);
      *(int *)(param_1 + 0x28) = iVar17;
      memset(__s,0,(*(long *)(param_1 + 0x20) + (long)iVar17 * 8) - (long)__s & 0xfffffffffffffff8);
    }
  }
LAB_031ca834:
  lVar25 = tpidr_el0;
  lVar21 = *(long *)(lVar25 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar25 + 0x38d490) = lVar21;
  }
  plVar11 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
  puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x108,0);
  lVar21 = *(long *)(param_1 + 0x18);
  local_68 = *param_2;
  *puVar12 = &PTR_LAB_0430aa18;
  puVar12[1] = 0xffffffff;
  puVar12[2] = 1;
  puVar12[3] = lVar21;
  *(int *)(puVar12 + 4) = local_68;
  puVar12[8] = 0x8000000000000000;
  puVar12[9] = &DAT_03aad864;
  *(undefined4 *)(puVar12 + 10) = 0;
  puVar12[0xd] = &DAT_03aad864;
  *(undefined4 *)(puVar12 + 0xe) = 0;
  puVar12[0x11] = &DAT_03aad864;
  *(undefined4 *)(puVar12 + 0x12) = 0;
  puVar12[0x19] = &DAT_03aad864;
  *(undefined4 *)(puVar12 + 0x1a) = 0;
  puVar12[0x1d] = &DAT_03aad864;
  *(undefined4 *)(puVar12 + 0x1e) = 0;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0x8000000000000000;
  puVar12[0xf] = 0;
  puVar12[0x10] = 0x8000000000000000;
  puVar12[0x13] = 0;
  puVar12[0x14] = 0x8000000000000000;
  puVar12[0x15] = 0;
  puVar12[0x16] = 0x8000000000000000;
  puVar12[0x17] = 0;
  puVar12[0x18] = 0x8000000000000000;
  puVar12[0x1b] = 0;
  puVar12[0x1c] = 0x8000000000000000;
  puVar12[0x1f] = 0;
  puVar12[0x20] = 0x8000000000000000;
  puVar12[6] = 0;
  puVar12[7] = 0;
  FUN_031d6788(puVar12 + 5,&local_68,
               *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(lVar21 + 0x38) + (long)local_68 * 0xf0) + 0x20) +
                0x68));
  plVar11 = *(long **)(*(long *)(param_1 + 0x20) + (long)*param_2 * 8);
  *(undefined8 **)(*(long *)(param_1 + 0x20) + (long)*param_2 * 8) = puVar12;
  if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
    plVar13 = plVar11 + 2;
    do {
      lVar21 = *plVar13;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar10) {
        *plVar13 = lVar21 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))();
    }
  }
  lVar21 = *(long *)(*(long *)(param_1 + 0x18) + 0x38) + (long)*param_2 * 0xf0;
  iVar16 = *(int *)(lVar21 + 0xa8);
  if (iVar16 != 0) {
    lVar21 = *(long *)(lVar21 + 0xa0);
    lVar4 = lVar21 + (long)iVar16 * 8;
    lVar22 = *(long *)(*(long *)(param_1 + 0x18) + 0x48);
    do {
      lVar26 = *(long *)(*(long *)(lVar22 + (long)*(int *)(lVar21 + 4) * 0x18) + 0x20);
      iVar16 = *(int *)(*(long *)(param_3 + 0x20) + 0x178);
      if (*(int *)(lVar26 + 0x18) == iVar16) {
        iVar16 = *param_2;
        FUN_031782e4(local_70,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(lVar26 + 0x1c));
        iVar18 = local_70[0];
        iVar17 = local_70[0];
joined_r0x031cad90:
        if (iVar17 != -1) {
          lVar23 = *(long *)(*(long *)(param_1 + 0x18) + 0x38);
          lVar31 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar16 * 8);
          lVar33 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar18 * 8);
          lVar27 = *(long *)(lVar23 + (long)iVar16 * 0xf0);
          if (lVar27 == 0) {
            lVar27 = 0;
          }
          else if (*(char *)(lVar27 + 0x30) == '\x01') {
            lVar27 = *(long *)(lVar27 + 0x20);
          }
          else {
            lVar27 = FUN_02898b44();
            lVar23 = *(long *)(*(long *)(param_1 + 0x18) + 0x38);
          }
          lVar23 = *(long *)(lVar23 + (long)iVar18 * 0xf0);
          if (lVar23 == 0) {
            lVar23 = 0;
          }
          else if (*(char *)(lVar23 + 0x30) == '\x01') {
            lVar23 = *(long *)(lVar23 + 0x20);
          }
          else {
            lVar23 = FUN_02898b44();
          }
          iVar17 = *(int *)(lVar26 + 0x28);
          iVar18 = iVar17 + *(int *)(lVar31 + 0xa0);
          if ((int)(*(uint *)(lVar31 + 0xa4) & 0x3fffffff) < iVar18) {
            uVar35 = FUN_0315f314(PTR_PTR_0434a080,iVar18,*(undefined8 *)(lVar31 + 0x98));
            *(undefined8 *)(lVar31 + 0x98) = uVar35;
            iVar17 = *(int *)(lVar26 + 0x28);
          }
          iVar18 = *(int *)(lVar33 + 0xa0) + iVar17;
          if ((int)(*(uint *)(lVar33 + 0xa4) & 0x3fffffff) < iVar18) {
            uVar35 = FUN_0315f314(PTR_PTR_0434a080,iVar18,*(undefined8 *)(lVar33 + 0x98));
            *(undefined8 *)(lVar33 + 0x98) = uVar35;
            iVar17 = *(int *)(lVar26 + 0x28);
          }
          piVar38 = *(int **)(lVar26 + 0x20);
          iVar18 = 0;
          if (iVar17 != 0) {
            piVar1 = piVar38 + (long)iVar17 * 4;
            do {
              iVar18 = *(int *)(lVar31 + 0xa0);
              *(int *)(*(long *)(lVar31 + 0x98) + (long)iVar18 * 4) = *piVar38;
              *(int *)(lVar31 + 0xa0) = iVar18 + 1;
              iVar18 = *(int *)(lVar33 + 0xa0);
              *(int *)(*(long *)(lVar33 + 0x98) + (long)iVar18 * 4) = piVar38[2];
              *(int *)(lVar33 + 0xa0) = iVar18 + 1;
              bVar28 = 0;
              if (*(int *)(lVar27 + 0x108) != 0) {
                bVar28 = *(byte *)(*(long *)(lVar27 + 0x100) + (long)*piVar38);
              }
              *(byte *)(*(long *)(lVar27 + 0x100) + (long)*piVar38) = bVar28 | 4;
              bVar28 = 0;
              if (*(int *)(lVar23 + 0x108) != 0) {
                bVar28 = *(byte *)(*(long *)(lVar23 + 0x100) + (long)piVar38[2]);
              }
              *(byte *)(*(long *)(lVar23 + 0x100) + (long)piVar38[2]) = bVar28 | 4;
              lVar39 = (long)DAT_0444b53c;
              lVar24 = *(long *)(lVar25 + 0x38d490);
              if (lVar24 == 0) {
                lVar24 = FUN_0333d16c(0,1);
                *(long *)(lVar25 + 0x38d490) = lVar24;
              }
              if (*(long *)(lVar24 + lVar39 * 8 + 0x18) != 0) {
                FUN_0332a954();
              }
              piVar38 = piVar38 + 4;
            } while (piVar38 != piVar1);
            piVar38 = *(int **)(lVar26 + 0x20);
            iVar18 = *(int *)(lVar26 + 0x28);
          }
          if (*param_2 == iVar16) {
            if (iVar18 != 0) {
              lVar23 = (long)iVar18 << 4;
              do {
                FUN_031cdd40(lVar31 + 0xd8,piVar38);
                piVar38 = piVar38 + 4;
                lVar23 = lVar23 + -0x10;
              } while (lVar23 != 0);
            }
          }
          else if (iVar18 != 0) {
            lVar23 = (long)iVar18 << 4;
            piVar38 = piVar38 + 2;
            do {
              FUN_031cdd40(lVar33 + 0xd8,piVar38);
              lVar23 = lVar23 + -0x10;
              piVar38 = piVar38 + 4;
            } while (lVar23 != 0);
          }
          puVar9 = PTR_PTR_0434a080;
          puVar36 = *(undefined8 **)(lVar26 + 0x50);
          iVar16 = *(int *)(lVar26 + 0x58);
          puVar12 = *(undefined8 **)(lVar31 + 0xf8);
          uVar6 = *(uint *)(lVar31 + 0x100);
          uVar15 = *(uint *)(lVar31 + 0x104);
          uVar3 = uVar6 + iVar16;
          if ((int)(uVar15 & 0x3fffffff) < (int)uVar3) {
            if (0x3fffffff < (int)uVar3) {
              FUN_032bd0a8(uVar3);
              uVar15 = *(uint *)(lVar31 + 0x104);
            }
            uVar19 = (uVar15 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar19) {
              uVar19 = 0x3fffffff;
            }
            uVar5 = uVar3;
            if ((int)uVar3 <= (int)uVar19) {
              uVar5 = uVar19;
            }
            FUN_032bd100(uVar5,0x20,uVar15,&local_68);
            uVar15 = *(uint *)(lVar31 + 0x104);
            puVar14 = (undefined8 *)
                      (**(code **)(*(long *)puVar9 + 0x10))
                                (puVar9,CONCAT44(uStack_64,local_68),&local_68);
            if (0 < (int)uVar6) {
              uVar35 = puVar12[3];
              puVar14[1] = puVar12[1];
              puVar14[3] = uVar35;
              uVar35 = *puVar12;
              puVar14[2] = puVar12[2];
              *puVar14 = uVar35;
              if (uVar6 != 1) {
                lVar23 = (ulong)uVar6 - 1;
                puVar30 = puVar14;
                puVar8 = puVar12;
                do {
                  uVar35 = puVar8[7];
                  lVar23 = lVar23 + -1;
                  puVar30[5] = puVar8[5];
                  puVar30[7] = uVar35;
                  uVar35 = puVar8[4];
                  puVar30[6] = puVar8[6];
                  puVar30[4] = uVar35;
                  puVar30 = puVar30 + 4;
                  puVar8 = puVar8 + 4;
                } while (lVar23 != 0);
              }
            }
            if (-1 < (int)uVar15) {
              (**(code **)(*(long *)puVar9 + 0x18))
                        (puVar9,puVar12,((ulong)uVar15 & 0x3fffffff) << 5);
            }
            if (CONCAT44(uStack_64,local_68) < 0x7ffffffe0) {
              uVar20 = (undefined4)(CONCAT44(uStack_64,local_68) >> 5);
            }
            else {
              uVar20 = 0x3fffffff;
            }
            *(undefined4 *)(lVar31 + 0x104) = uVar20;
            *(undefined8 **)(lVar31 + 0xf8) = puVar14;
            puVar12 = puVar14;
          }
          if (iVar16 != 0) {
            uVar29 = (long)iVar16 * 0x20 - 0x20;
            puVar12 = puVar12 + (long)(int)uVar6 * 4;
            uVar6 = ((uint)(uVar29 >> 5) & 0x7ffffff) + 1;
            puVar14 = puVar36;
            if ((uVar6 & 3) != 0) {
              lVar23 = -((ulong)uVar6 & 3);
              puVar30 = puVar12;
              do {
                uVar35 = puVar14[3];
                puVar12 = puVar30 + 4;
                bVar10 = lVar23 != -1;
                lVar23 = lVar23 + 1;
                puVar30[1] = puVar14[1];
                puVar30[3] = uVar35;
                uVar35 = *puVar14;
                puVar30[2] = puVar14[2];
                *puVar30 = uVar35;
                puVar14 = puVar14 + 4;
                puVar30 = puVar12;
              } while (bVar10);
            }
            if (0x5f < uVar29) {
              do {
                uVar35 = puVar14[3];
                puVar12[1] = puVar14[1];
                puVar12[3] = uVar35;
                uVar35 = *puVar14;
                puVar12[2] = puVar14[2];
                *puVar12 = uVar35;
                uVar35 = puVar14[5];
                puVar12[7] = puVar14[7];
                puVar12[5] = uVar35;
                uVar35 = puVar14[4];
                puVar12[6] = puVar14[6];
                puVar12[4] = uVar35;
                uVar32 = puVar14[9];
                puVar12[0xb] = puVar14[0xb];
                uVar35 = puVar14[10];
                uVar34 = puVar14[8];
                puVar12[9] = uVar32;
                puVar12[10] = uVar35;
                puVar12[8] = uVar34;
                uVar35 = puVar14[0xc];
                uVar32 = puVar14[0xd];
                puVar30 = puVar14 + 0xe;
                uVar34 = puVar14[0xf];
                puVar14 = puVar14 + 0x10;
                puVar12[0xe] = *puVar30;
                puVar12[0xf] = uVar34;
                puVar12[0xc] = uVar35;
                puVar12[0xd] = uVar32;
                puVar12 = puVar12 + 0x10;
              } while (puVar14 != puVar36 + (long)iVar16 * 4);
            }
          }
          *(uint *)(lVar31 + 0x100) = uVar3;
          puVar9 = PTR_PTR_0434a080;
          puVar36 = *(undefined8 **)(lVar26 + 0x60);
          iVar16 = *(int *)(lVar26 + 0x68);
          puVar12 = *(undefined8 **)(lVar33 + 0xf8);
          uVar6 = *(uint *)(lVar33 + 0x100);
          uVar15 = *(uint *)(lVar33 + 0x104);
          uVar3 = uVar6 + iVar16;
          if ((int)(uVar15 & 0x3fffffff) < (int)uVar3) {
            if (0x3fffffff < (int)uVar3) {
              FUN_032bd0a8(uVar3);
              uVar15 = *(uint *)(lVar33 + 0x104);
            }
            uVar19 = (uVar15 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar19) {
              uVar19 = 0x3fffffff;
            }
            uVar5 = uVar3;
            if ((int)uVar3 <= (int)uVar19) {
              uVar5 = uVar19;
            }
            FUN_032bd100(uVar5,0x20,uVar15,&local_68);
            uVar15 = *(uint *)(lVar33 + 0x104);
            puVar14 = (undefined8 *)
                      (**(code **)(*(long *)puVar9 + 0x10))
                                (puVar9,CONCAT44(uStack_64,local_68),&local_68);
            if (0 < (int)uVar6) {
              uVar35 = puVar12[3];
              puVar14[1] = puVar12[1];
              puVar14[3] = uVar35;
              uVar35 = *puVar12;
              puVar14[2] = puVar12[2];
              *puVar14 = uVar35;
              if (uVar6 != 1) {
                lVar26 = (ulong)uVar6 - 1;
                puVar30 = puVar14;
                puVar8 = puVar12;
                do {
                  uVar35 = puVar8[7];
                  lVar26 = lVar26 + -1;
                  puVar30[5] = puVar8[5];
                  puVar30[7] = uVar35;
                  uVar35 = puVar8[4];
                  puVar30[6] = puVar8[6];
                  puVar30[4] = uVar35;
                  puVar30 = puVar30 + 4;
                  puVar8 = puVar8 + 4;
                } while (lVar26 != 0);
              }
            }
            if (-1 < (int)uVar15) {
              (**(code **)(*(long *)puVar9 + 0x18))
                        (puVar9,puVar12,((ulong)uVar15 & 0x3fffffff) << 5);
            }
            if (CONCAT44(uStack_64,local_68) < 0x7ffffffe0) {
              uVar20 = (undefined4)(CONCAT44(uStack_64,local_68) >> 5);
            }
            else {
              uVar20 = 0x3fffffff;
            }
            *(undefined4 *)(lVar33 + 0x104) = uVar20;
            *(undefined8 **)(lVar33 + 0xf8) = puVar14;
            puVar12 = puVar14;
          }
          if (iVar16 != 0) {
            uVar29 = (long)iVar16 * 0x20 - 0x20;
            puVar12 = puVar12 + (long)(int)uVar6 * 4;
            uVar6 = ((uint)(uVar29 >> 5) & 0x7ffffff) + 1;
            puVar14 = puVar36;
            if ((uVar6 & 3) != 0) {
              lVar26 = -((ulong)uVar6 & 3);
              puVar30 = puVar12;
              do {
                uVar35 = puVar14[3];
                puVar12 = puVar30 + 4;
                bVar10 = lVar26 != -1;
                lVar26 = lVar26 + 1;
                puVar30[1] = puVar14[1];
                puVar30[3] = uVar35;
                uVar35 = *puVar14;
                puVar30[2] = puVar14[2];
                *puVar30 = uVar35;
                puVar14 = puVar14 + 4;
                puVar30 = puVar12;
              } while (bVar10);
            }
            if (0x5f < uVar29) {
              do {
                uVar35 = puVar14[3];
                puVar12[1] = puVar14[1];
                puVar12[3] = uVar35;
                uVar35 = *puVar14;
                puVar12[2] = puVar14[2];
                *puVar12 = uVar35;
                uVar35 = puVar14[5];
                puVar12[7] = puVar14[7];
                puVar12[5] = uVar35;
                uVar35 = puVar14[4];
                puVar12[6] = puVar14[6];
                puVar12[4] = uVar35;
                uVar32 = puVar14[9];
                puVar12[0xb] = puVar14[0xb];
                uVar35 = puVar14[10];
                uVar34 = puVar14[8];
                puVar12[9] = uVar32;
                puVar12[10] = uVar35;
                puVar12[8] = uVar34;
                uVar35 = puVar14[0xc];
                uVar32 = puVar14[0xd];
                puVar30 = puVar14 + 0xe;
                uVar34 = puVar14[0xf];
                puVar14 = puVar14 + 0x10;
                puVar12[0xe] = *puVar30;
                puVar12[0xf] = uVar34;
                puVar12[0xc] = uVar35;
                puVar12[0xd] = uVar32;
                puVar12 = puVar12 + 0x10;
              } while (puVar14 != puVar36 + (long)iVar16 * 4);
            }
          }
          *(uint *)(lVar33 + 0x100) = uVar3;
          lVar23 = (long)DAT_0444b53c;
          lVar26 = *(long *)(lVar25 + 0x38d490);
          if (lVar26 == 0) {
            lVar26 = FUN_0333d16c(0,1);
            *(long *)(lVar25 + 0x38d490) = lVar26;
          }
          if (*(long *)(lVar26 + lVar23 * 8 + 0x18) != 0) {
            FUN_0332a954();
          }
        }
      }
      else if (*(int *)(lVar26 + 0x1c) == iVar16) {
        iVar18 = *param_2;
        FUN_031782e4(local_78,*(undefined8 *)(param_1 + 0x18));
        iVar16 = local_78[0];
        iVar17 = local_78[0];
        goto joined_r0x031cad90;
      }
      lVar21 = lVar21 + 8;
    } while (lVar21 != lVar4);
  }
  return;
}


