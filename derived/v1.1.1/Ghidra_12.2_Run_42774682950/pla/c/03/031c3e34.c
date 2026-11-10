/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c3e34; name: FUN_031c3e34
 */


void FUN_031c3e34(long param_1,uint param_2,uint param_3,int param_4,long *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *local_68;
  
  puVar7 = PTR_PTR_0434a080;
  uVar2 = *(uint *)(param_5 + 1);
  if ((int)uVar2 < (int)param_3) {
    iVar12 = *(int *)(param_1 + 0x20);
    uVar25 = uVar2;
    if (0 < iVar12) {
      lVar26 = 0;
      do {
        lVar20 = *(long *)(*(long *)(param_1 + 0x18) + lVar26 * 8);
        if (lVar20 != 0 && (1 << (ulong)((uint)lVar26 & 0x1f) & param_2) != 0) {
          iVar12 = *(int *)(lVar20 + 0x28);
          if (0 < iVar12) {
            uVar19 = (ulong)iVar12;
            lVar22 = uVar19 * 0x38 + -0x18;
            do {
              lVar16 = *(long *)(lVar20 + 0x20) + lVar22;
              uVar19 = uVar19 - 1;
              if (*(char *)(lVar16 + 0x15) != '\0') {
                (**(code **)(*(long *)(lVar16 + -0x20) + 8))(lVar16 + -0x20);
                uVar15 = (long)*(int *)(lVar20 + 0x28) - 1;
                *(int *)(lVar20 + 0x28) = (int)uVar15;
                if (uVar19 != (uVar15 & 0xffffffff)) {
                  plVar9 = (long *)(*(long *)(lVar20 + 0x20) + uVar15 * 0x38);
                  plVar8 = (long *)(*(long *)(lVar20 + 0x20) + lVar22);
                  plVar8[-4] = (long)&PTR_LAB_0430a7b0;
                  plVar8[-3] = 0xffffffff;
                  plVar8[-2] = 1;
                  plVar8[-1] = plVar9[3];
                  plVar9[3] = 0;
                  *plVar8 = plVar9[4];
                  lVar16 = plVar9[5];
                  plVar9[4] = 0;
                  *(undefined8 *)((long)plVar8 + 0xe) = *(undefined8 *)((long)plVar9 + 0x2e);
                  plVar8[1] = lVar16;
                  (**(code **)(*plVar9 + 8))();
                }
              }
              lVar22 = lVar22 + -0x38;
            } while (0 < (long)uVar19);
            iVar12 = *(int *)(lVar20 + 0x28);
            uVar25 = *(uint *)(param_5 + 1);
          }
          uVar23 = *(uint *)((long)param_5 + 0xc);
          uVar24 = uVar25 + iVar12;
          uVar14 = uVar23 & 0x3fffffff;
          if ((int)uVar14 < (int)uVar24) {
            puVar21 = (undefined8 *)*param_5;
            if (0x3fffffff < (int)uVar24) {
              FUN_032bd0a8(uVar24);
              uVar23 = *(uint *)((long)param_5 + 0xc);
              uVar14 = uVar23 & 0x3fffffff;
            }
            uVar5 = (uVar23 & 0x3fffffff) * 2;
            if (uVar5 < 0x3fffffff) {
              if ((int)uVar24 <= (int)uVar5) goto LAB_031c469c;
            }
            else {
              uVar5 = 0x3fffffff;
              if ((int)uVar24 < 0x40000000) {
LAB_031c469c:
                uVar24 = uVar5;
              }
            }
            local_88 = (ulong)uVar24 << 4;
            local_7c = uVar24;
            if (((int)uVar24 < (int)uVar14) || (0x3fffffff < (int)uVar24)) {
              local_68 = &local_7c;
              local_78 = 1;
              local_70 = &DAT_0411b3b8;
              FUN_03320b50(0x65816502,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x5a,"Invalid requestedCapacity {}",&local_78);
              uVar23 = *(uint *)((long)param_5 + 0xc);
              uVar14 = uVar23 & 0x3fffffff;
            }
            puVar11 = (undefined8 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_88,&local_88)
            ;
            if (0 < (int)uVar25) {
              uVar19 = (ulong)uVar25;
              puVar18 = puVar11;
              puVar10 = puVar21;
              do {
                uVar1 = puVar10[1];
                uVar19 = uVar19 - 1;
                *puVar18 = *puVar10;
                puVar18[1] = uVar1;
                puVar18 = puVar18 + 2;
                puVar10 = puVar10 + 2;
              } while (uVar19 != 0);
            }
            if (-1 < (int)uVar23) {
              (**(code **)(*(long *)puVar7 + 0x18))(puVar7,puVar21,(ulong)uVar14 << 4);
            }
            if (local_88 < 0x3fffffff0) {
              uVar13 = (undefined4)(local_88 >> 4);
            }
            else {
              uVar13 = 0x3fffffff;
            }
            *(undefined4 *)((long)param_5 + 0xc) = uVar13;
            *param_5 = (long)puVar11;
            iVar12 = *(int *)(lVar20 + 0x28);
          }
          if (0 < iVar12) {
            lVar16 = 0;
            lVar22 = 0;
            do {
              if (*(long *)(*(long *)(lVar20 + 0x20) + lVar16 + 0x20) == 0) {
                lVar6 = param_5[1];
                *(int *)(param_5 + 1) = (int)lVar6 + 1;
                plVar8 = (long *)(*param_5 + (long)(int)lVar6 * 0x10);
                *(undefined4 *)(plVar8 + 1) = 0;
                *(undefined4 *)((long)plVar8 + 0xc) =
                     *(undefined4 *)(*(long *)(lVar20 + 0x20) + lVar16 + 0x30);
                *plVar8 = *(long *)(lVar20 + 0x20) + lVar16;
                iVar12 = *(int *)(lVar20 + 0x28);
              }
              lVar22 = lVar22 + 1;
              lVar16 = lVar16 + 0x38;
            } while (lVar22 < iVar12);
          }
          iVar12 = *(int *)(lVar20 + 0x38);
          if (0 < iVar12) {
            uVar19 = (ulong)iVar12;
            lVar22 = uVar19 * 0x38 + -0x18;
            do {
              lVar16 = *(long *)(lVar20 + 0x30) + lVar22;
              uVar19 = uVar19 - 1;
              if (*(char *)(lVar16 + 0x15) != '\0') {
                (**(code **)(*(long *)(lVar16 + -0x20) + 8))(lVar16 + -0x20);
                uVar15 = (long)*(int *)(lVar20 + 0x38) - 1;
                *(int *)(lVar20 + 0x38) = (int)uVar15;
                if (uVar19 != (uVar15 & 0xffffffff)) {
                  plVar9 = (long *)(*(long *)(lVar20 + 0x30) + uVar15 * 0x38);
                  plVar8 = (long *)(*(long *)(lVar20 + 0x30) + lVar22);
                  plVar8[-4] = (long)&PTR_LAB_0430a810;
                  plVar8[-3] = 0xffffffff;
                  plVar8[-2] = 1;
                  plVar8[-1] = plVar9[3];
                  plVar9[3] = 0;
                  *plVar8 = plVar9[4];
                  lVar16 = plVar9[5];
                  plVar9[4] = 0;
                  *(undefined8 *)((long)plVar8 + 0xe) = *(undefined8 *)((long)plVar9 + 0x2e);
                  plVar8[1] = lVar16;
                  (**(code **)(*plVar9 + 8))();
                }
              }
              lVar22 = lVar22 + -0x38;
            } while (0 < (long)uVar19);
            iVar12 = *(int *)(lVar20 + 0x38);
          }
          uVar14 = *(uint *)(param_5 + 1);
          uVar19 = (ulong)uVar14;
          uVar23 = *(uint *)((long)param_5 + 0xc);
          uVar25 = uVar14 + iVar12;
          uVar24 = uVar23 & 0x3fffffff;
          if ((int)uVar24 < (int)uVar25) {
            puVar21 = (undefined8 *)*param_5;
            if (0x3fffffff < (int)uVar25) {
              FUN_032bd0a8(uVar25);
              uVar23 = *(uint *)((long)param_5 + 0xc);
              uVar24 = uVar23 & 0x3fffffff;
            }
            uVar5 = (uVar23 & 0x3fffffff) * 2;
            if (uVar5 < 0x3fffffff) {
              if ((int)uVar25 <= (int)uVar5) goto LAB_031c46d0;
            }
            else {
              uVar5 = 0x3fffffff;
              if ((int)uVar25 < 0x40000000) {
LAB_031c46d0:
                uVar25 = uVar5;
              }
            }
            local_88 = (ulong)uVar25 << 4;
            local_7c = uVar25;
            if (((int)uVar25 < (int)uVar24) || (0x3fffffff < (int)uVar25)) {
              local_68 = &local_7c;
              local_78 = 1;
              local_70 = &DAT_0411b3b8;
              FUN_03320b50(0x65816502,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x5a,"Invalid requestedCapacity {}",&local_78);
              uVar23 = *(uint *)((long)param_5 + 0xc);
              uVar24 = uVar23 & 0x3fffffff;
            }
            puVar10 = (undefined8 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_88,&local_88)
            ;
            puVar11 = puVar10;
            puVar18 = puVar21;
            if (0 < (int)uVar14) {
              do {
                uVar1 = puVar18[1];
                uVar19 = uVar19 - 1;
                *puVar11 = *puVar18;
                puVar11[1] = uVar1;
                puVar11 = puVar11 + 2;
                puVar18 = puVar18 + 2;
              } while (uVar19 != 0);
            }
            if (-1 < (int)uVar23) {
              (**(code **)(*(long *)puVar7 + 0x18))(puVar7,puVar21,(ulong)uVar24 << 4);
            }
            if (local_88 < 0x3fffffff0) {
              uVar13 = (undefined4)(local_88 >> 4);
            }
            else {
              uVar13 = 0x3fffffff;
            }
            *(undefined4 *)((long)param_5 + 0xc) = uVar13;
            *param_5 = (long)puVar10;
            iVar12 = *(int *)(lVar20 + 0x38);
          }
          if (0 < iVar12) {
            lVar16 = 0;
            lVar22 = 0;
            do {
              if (*(long *)(*(long *)(lVar20 + 0x30) + lVar16 + 0x20) == 0) {
                lVar6 = param_5[1];
                *(int *)(param_5 + 1) = (int)lVar6 + 1;
                plVar8 = (long *)(*param_5 + (long)(int)lVar6 * 0x10);
                *(undefined4 *)(plVar8 + 1) = 2;
                *(undefined4 *)((long)plVar8 + 0xc) =
                     *(undefined4 *)(*(long *)(lVar20 + 0x30) + lVar16 + 0x30);
                *plVar8 = *(long *)(lVar20 + 0x30) + lVar16;
                iVar12 = *(int *)(lVar20 + 0x38);
              }
              lVar22 = lVar22 + 1;
              lVar16 = lVar16 + 0x38;
            } while (lVar22 < iVar12);
          }
          iVar12 = *(int *)(lVar20 + 0x48);
          if (0 < iVar12) {
            lVar22 = (long)iVar12;
            uVar19 = lVar22 - 1;
            plVar8 = *(long **)(*(long *)(lVar20 + 0x40) + uVar19 * 8);
            if ((*(byte *)(plVar8 + 4) | 1) == 3) {
              if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
                plVar9 = plVar8 + 2;
                do {
                  lVar16 = *plVar9;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar4) {
                    *plVar9 = lVar16 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar16 + -1 == 0) {
                  (**(code **)(*plVar8 + 0x18))();
                }
              }
              uVar15 = (long)*(int *)(lVar20 + 0x48) - 1;
              *(int *)(lVar20 + 0x48) = (int)uVar15;
              if (uVar19 != (uVar15 & 0xffffffff)) {
                lVar16 = *(long *)(lVar20 + 0x40);
                *(undefined8 *)(lVar16 + uVar19 * 8) = *(undefined8 *)(lVar16 + uVar15 * 8);
                *(undefined8 *)(lVar16 + uVar15 * 8) = 0;
              }
            }
            if (0 < (long)uVar19) {
              uVar19 = lVar22 - 2;
              plVar8 = *(long **)(*(long *)(lVar20 + 0x40) + uVar19 * 8);
              if ((*(byte *)(plVar8 + 4) | 1) == 3) {
                if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
                  plVar9 = plVar8 + 2;
                  do {
                    lVar16 = *plVar9;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                    if (bVar4) {
                      *plVar9 = lVar16 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar16 + -1 == 0) {
                    (**(code **)(*plVar8 + 0x18))();
                  }
                }
                uVar15 = (long)*(int *)(lVar20 + 0x48) - 1;
                *(int *)(lVar20 + 0x48) = (int)uVar15;
                if (uVar19 != (uVar15 & 0xffffffff)) {
                  lVar16 = *(long *)(lVar20 + 0x40);
                  *(undefined8 *)(lVar16 + uVar19 * 8) = *(undefined8 *)(lVar16 + uVar15 * 8);
                  *(undefined8 *)(lVar16 + uVar15 * 8) = 0;
                }
              }
              if (0 < (long)uVar19) {
                uVar19 = lVar22 - 3;
                plVar8 = *(long **)(*(long *)(lVar20 + 0x40) + uVar19 * 8);
                if ((*(byte *)(plVar8 + 4) | 1) == 3) {
                  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
                    plVar9 = plVar8 + 2;
                    do {
                      lVar22 = *plVar9;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                      if (bVar4) {
                        *plVar9 = lVar22 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (lVar22 + -1 == 0) {
                      (**(code **)(*plVar8 + 0x18))();
                    }
                  }
                  uVar15 = (long)*(int *)(lVar20 + 0x48) - 1;
                  *(int *)(lVar20 + 0x48) = (int)uVar15;
                  if (uVar19 != (uVar15 & 0xffffffff)) {
                    lVar22 = *(long *)(lVar20 + 0x40);
                    *(undefined8 *)(lVar22 + uVar19 * 8) = *(undefined8 *)(lVar22 + uVar15 * 8);
                    *(undefined8 *)(lVar22 + uVar15 * 8) = 0;
                  }
                }
                while (0 < (long)uVar19) {
                  uVar19 = uVar19 - 1;
                  plVar8 = *(long **)(*(long *)(lVar20 + 0x40) + uVar19 * 8);
                  if ((*(byte *)(plVar8 + 4) | 1) == 3) {
                    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
                      plVar9 = plVar8 + 2;
                      do {
                        lVar22 = *plVar9;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                        if (bVar4) {
                          *plVar9 = lVar22 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (lVar22 + -1 == 0) {
                        (**(code **)(*plVar8 + 0x18))();
                      }
                    }
                    uVar15 = (long)*(int *)(lVar20 + 0x48) - 1;
                    *(int *)(lVar20 + 0x48) = (int)uVar15;
                    if (uVar19 != (uVar15 & 0xffffffff)) {
                      lVar22 = *(long *)(lVar20 + 0x40);
                      *(undefined8 *)(lVar22 + uVar19 * 8) = *(undefined8 *)(lVar22 + uVar15 * 8);
                      *(undefined8 *)(lVar22 + uVar15 * 8) = 0;
                    }
                  }
                }
              }
            }
            iVar12 = *(int *)(lVar20 + 0x48);
          }
          uVar14 = *(uint *)(param_5 + 1);
          uVar19 = (ulong)uVar14;
          uVar23 = *(uint *)((long)param_5 + 0xc);
          uVar25 = uVar14 + iVar12;
          uVar24 = uVar23 & 0x3fffffff;
          if ((int)uVar24 < (int)uVar25) {
            puVar21 = (undefined8 *)*param_5;
            if (0x3fffffff < (int)uVar25) {
              FUN_032bd0a8(uVar25);
              uVar23 = *(uint *)((long)param_5 + 0xc);
              uVar24 = uVar23 & 0x3fffffff;
            }
            uVar5 = (uVar23 & 0x3fffffff) * 2;
            if (uVar5 < 0x3fffffff) {
              if ((int)uVar25 <= (int)uVar5) goto LAB_031c4704;
            }
            else {
              uVar5 = 0x3fffffff;
              if ((int)uVar25 < 0x40000000) {
LAB_031c4704:
                uVar25 = uVar5;
              }
            }
            local_88 = (ulong)uVar25 << 4;
            local_7c = uVar25;
            if (((int)uVar25 < (int)uVar24) || (0x3fffffff < (int)uVar25)) {
              local_68 = &local_7c;
              local_78 = 1;
              local_70 = &DAT_0411b3b8;
              FUN_03320b50(0x65816502,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x5a,"Invalid requestedCapacity {}",&local_78);
              uVar23 = *(uint *)((long)param_5 + 0xc);
              uVar24 = uVar23 & 0x3fffffff;
            }
            puVar10 = (undefined8 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_88,&local_88)
            ;
            puVar11 = puVar10;
            puVar18 = puVar21;
            if (0 < (int)uVar14) {
              do {
                uVar1 = puVar18[1];
                uVar19 = uVar19 - 1;
                *puVar11 = *puVar18;
                puVar11[1] = uVar1;
                puVar11 = puVar11 + 2;
                puVar18 = puVar18 + 2;
              } while (uVar19 != 0);
            }
            if (-1 < (int)uVar23) {
              (**(code **)(*(long *)puVar7 + 0x18))(puVar7,puVar21,(ulong)uVar24 << 4);
            }
            if (local_88 < 0x3fffffff0) {
              uVar13 = (undefined4)(local_88 >> 4);
            }
            else {
              uVar13 = 0x3fffffff;
            }
            *(undefined4 *)((long)param_5 + 0xc) = uVar13;
            *param_5 = (long)puVar10;
            iVar12 = *(int *)(lVar20 + 0x48);
          }
          if (iVar12 != 0) {
            plVar8 = *(long **)(lVar20 + 0x40);
            lVar22 = *plVar8;
            if (*(char *)(lVar22 + 0x20) == '\0') {
              lVar16 = param_5[1];
              *(int *)(param_5 + 1) = (int)lVar16 + 1;
              plVar9 = (long *)(*param_5 + (long)(int)lVar16 * 0x10);
              *(undefined4 *)(plVar9 + 1) = 1;
              *(undefined4 *)((long)plVar9 + 0xc) = *(undefined4 *)(lVar22 + 0x1c);
              *plVar9 = lVar22;
            }
            if (iVar12 != 1) {
              lVar22 = (long)iVar12 * 8 + -8;
              do {
                plVar8 = plVar8 + 1;
                lVar16 = *plVar8;
                if (*(char *)(lVar16 + 0x20) == '\0') {
                  lVar6 = param_5[1];
                  *(int *)(param_5 + 1) = (int)lVar6 + 1;
                  plVar9 = (long *)(*param_5 + (long)(int)lVar6 * 0x10);
                  *(undefined4 *)(plVar9 + 1) = 1;
                  *(undefined4 *)((long)plVar9 + 0xc) = *(undefined4 *)(lVar16 + 0x1c);
                  *plVar9 = lVar16;
                }
                lVar22 = lVar22 + -8;
              } while (lVar22 != 0);
            }
          }
          iVar12 = *(int *)(lVar20 + 0x58);
          if (0 < iVar12) {
            uVar19 = (ulong)iVar12;
            do {
              uVar19 = uVar19 - 1;
              plVar8 = *(long **)(*(long *)(lVar20 + 0x50) + uVar19 * 8);
              if ((*(byte *)(plVar8 + 4) | 1) == 3) {
                if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
                  plVar9 = plVar8 + 2;
                  do {
                    lVar22 = *plVar9;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                    if (bVar4) {
                      *plVar9 = lVar22 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar22 + -1 == 0) {
                    (**(code **)(*plVar8 + 0x18))();
                  }
                }
                uVar15 = (long)*(int *)(lVar20 + 0x58) - 1;
                *(int *)(lVar20 + 0x58) = (int)uVar15;
                if (uVar19 != (uVar15 & 0xffffffff)) {
                  lVar22 = *(long *)(lVar20 + 0x50);
                  *(undefined8 *)(lVar22 + uVar19 * 8) = *(undefined8 *)(lVar22 + uVar15 * 8);
                  *(undefined8 *)(lVar22 + uVar15 * 8) = 0;
                }
              }
            } while (0 < (long)uVar19);
            iVar12 = *(int *)(lVar20 + 0x58);
          }
          uVar14 = *(uint *)(param_5 + 1);
          uVar19 = (ulong)uVar14;
          uVar23 = *(uint *)((long)param_5 + 0xc);
          uVar25 = uVar14 + iVar12;
          uVar24 = uVar23 & 0x3fffffff;
          if ((int)uVar24 < (int)uVar25) {
            puVar21 = (undefined8 *)*param_5;
            if (0x3fffffff < (int)uVar25) {
              FUN_032bd0a8(uVar25);
              uVar23 = *(uint *)((long)param_5 + 0xc);
              uVar24 = uVar23 & 0x3fffffff;
            }
            uVar5 = (uVar23 & 0x3fffffff) * 2;
            if (uVar5 < 0x3fffffff) {
              if ((int)uVar25 <= (int)uVar5) goto LAB_031c4738;
            }
            else {
              uVar5 = 0x3fffffff;
              if ((int)uVar25 < 0x40000000) {
LAB_031c4738:
                uVar25 = uVar5;
              }
            }
            local_88 = (ulong)uVar25 << 4;
            local_7c = uVar25;
            if (((int)uVar25 < (int)uVar24) || (0x3fffffff < (int)uVar25)) {
              local_68 = &local_7c;
              local_78 = 1;
              local_70 = &DAT_0411b3b8;
              FUN_03320b50(0x65816502,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x5a,"Invalid requestedCapacity {}",&local_78);
              uVar23 = *(uint *)((long)param_5 + 0xc);
              uVar24 = uVar23 & 0x3fffffff;
            }
            puVar10 = (undefined8 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_88,&local_88)
            ;
            puVar11 = puVar10;
            puVar18 = puVar21;
            if (0 < (int)uVar14) {
              do {
                uVar1 = puVar18[1];
                uVar19 = uVar19 - 1;
                *puVar11 = *puVar18;
                puVar11[1] = uVar1;
                puVar11 = puVar11 + 2;
                puVar18 = puVar18 + 2;
              } while (uVar19 != 0);
            }
            if (-1 < (int)uVar23) {
              (**(code **)(*(long *)puVar7 + 0x18))(puVar7,puVar21,(ulong)uVar24 << 4);
            }
            if (local_88 < 0x3fffffff0) {
              uVar13 = (undefined4)(local_88 >> 4);
            }
            else {
              uVar13 = 0x3fffffff;
            }
            *(undefined4 *)((long)param_5 + 0xc) = uVar13;
            *param_5 = (long)puVar10;
            iVar12 = *(int *)(lVar20 + 0x58);
          }
          if (iVar12 != 0) {
            plVar8 = *(long **)(lVar20 + 0x50);
            lVar20 = (long)iVar12 << 3;
            do {
              lVar22 = *plVar8;
              if (*(char *)(lVar22 + 0x20) == '\0') {
                lVar16 = param_5[1];
                *(int *)(param_5 + 1) = (int)lVar16 + 1;
                plVar9 = (long *)(*param_5 + (long)(int)lVar16 * 0x10);
                *(undefined4 *)(plVar9 + 1) = 3;
                *(undefined4 *)((long)plVar9 + 0xc) = *(undefined4 *)(lVar22 + 0x1c);
                *plVar9 = lVar22;
              }
              plVar8 = plVar8 + 1;
              lVar20 = lVar20 + -8;
            } while (lVar20 != 0);
          }
          uVar25 = *(uint *)(param_5 + 1);
          if ((int)param_3 < (int)uVar25) {
            if ((0 < (int)param_3) && (1 < (int)uVar25)) {
              FUN_031c5d00(*param_5,uVar25 - 1,param_3);
            }
            uVar24 = *(uint *)((long)param_5 + 0xc);
            uVar25 = uVar24 & 0x3fffffff;
            if ((int)uVar25 < (int)param_3) {
              puVar21 = (undefined8 *)*param_5;
              uVar14 = *(uint *)(param_5 + 1);
              uVar19 = (ulong)uVar14;
              if (0x3fffffff < (int)param_3) {
                FUN_032bd0a8(param_3);
                uVar24 = *(uint *)((long)param_5 + 0xc);
                uVar25 = uVar24 & 0x3fffffff;
              }
              uVar23 = (uVar24 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar23) {
                uVar23 = 0x3fffffff;
              }
              local_7c = param_3;
              if ((int)param_3 <= (int)uVar23) {
                local_7c = uVar23;
              }
              local_88 = (ulong)local_7c << 4;
              if (((int)local_7c < (int)uVar25) || (0x3fffffff < (int)local_7c)) {
                local_68 = &local_7c;
                local_78 = 1;
                local_70 = &DAT_0411b3b8;
                FUN_03320b50(0x65816502,
                             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                             ,0x5a,"Invalid requestedCapacity {}",&local_78);
                uVar24 = *(uint *)((long)param_5 + 0xc);
                uVar25 = uVar24 & 0x3fffffff;
              }
              puVar10 = (undefined8 *)
                        (**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_88,&local_88);
              puVar11 = puVar10;
              puVar18 = puVar21;
              if (0 < (int)uVar14) {
                do {
                  uVar1 = puVar18[1];
                  uVar19 = uVar19 - 1;
                  *puVar11 = *puVar18;
                  puVar11[1] = uVar1;
                  puVar11 = puVar11 + 2;
                  puVar18 = puVar18 + 2;
                } while (uVar19 != 0);
              }
              if (-1 < (int)uVar24) {
                (**(code **)(*(long *)puVar7 + 0x18))(puVar7,puVar21,(ulong)uVar25 << 4);
              }
              if (local_88 < 0x3fffffff0) {
                uVar13 = (undefined4)(local_88 >> 4);
              }
              else {
                uVar13 = 0x3fffffff;
              }
              *(undefined4 *)((long)param_5 + 0xc) = uVar13;
              *param_5 = (long)puVar10;
            }
            uVar25 = *(uint *)(param_5 + 1);
            if ((int)uVar25 < (int)param_3) {
              *(uint *)(param_5 + 1) = param_3;
              uVar25 = param_3;
            }
            else if ((int)param_3 < (int)uVar25) {
              *(uint *)(param_5 + 1) = param_3;
              uVar25 = param_3;
            }
          }
          iVar12 = *(int *)(param_1 + 0x20);
        }
        lVar26 = lVar26 + 1;
      } while (lVar26 < iVar12);
    }
    iVar12 = (uVar25 - uVar2) + -1;
    if (iVar12 != 0 && 0 < (int)(uVar25 - uVar2)) {
      FUN_031c6500(*param_5 + (long)(int)uVar2 * 0x10,0,iVar12);
      uVar25 = *(uint *)(param_5 + 1);
    }
    if ((int)param_3 < (int)uVar25) {
      puVar21 = (undefined8 *)*param_5;
      lVar26 = (long)(int)uVar25 - (long)(int)param_3;
      piVar17 = (int *)((long)puVar21 + (long)(int)param_3 * 0x10 + 0xc);
      do {
        if (*piVar17 < param_4) {
          uVar24 = *(uint *)((long)param_5 + 0xc);
          uVar2 = uVar24 & 0x3fffffff;
          if ((int)uVar2 < (int)param_3) {
            if (0x3fffffff < (int)param_3) {
              FUN_032bd0a8(param_3);
              uVar24 = *(uint *)((long)param_5 + 0xc);
              uVar2 = uVar24 & 0x3fffffff;
            }
            puVar7 = PTR_PTR_0434a080;
            uVar14 = (uVar24 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar14) {
              uVar14 = 0x3fffffff;
            }
            local_7c = param_3;
            if ((int)param_3 <= (int)uVar14) {
              local_7c = uVar14;
            }
            local_88 = (ulong)local_7c << 4;
            if (((int)local_7c < (int)uVar2) || (0x3fffffff < (int)local_7c)) {
              local_78 = 1;
              local_68 = &local_7c;
              local_70 = &DAT_0411b3b8;
              FUN_03320b50(0x65816502,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x5a,"Invalid requestedCapacity {}",&local_78);
              uVar24 = *(uint *)((long)param_5 + 0xc);
              uVar2 = uVar24 & 0x3fffffff;
            }
            puVar11 = (undefined8 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_88,&local_88)
            ;
            if (0 < (int)uVar25) {
              uVar19 = (ulong)uVar25;
              puVar18 = puVar11;
              puVar10 = puVar21;
              do {
                uVar1 = puVar10[1];
                uVar19 = uVar19 - 1;
                *puVar18 = *puVar10;
                puVar18[1] = uVar1;
                puVar18 = puVar18 + 2;
                puVar10 = puVar10 + 2;
              } while (uVar19 != 0);
            }
            if (-1 < (int)uVar24) {
              (**(code **)(*(long *)puVar7 + 0x18))(puVar7,puVar21,(ulong)uVar2 << 4);
            }
            if (local_88 < 0x3fffffff0) {
              uVar13 = (undefined4)(local_88 >> 4);
            }
            else {
              uVar13 = 0x3fffffff;
            }
            uVar25 = *(uint *)(param_5 + 1);
            *(undefined4 *)((long)param_5 + 0xc) = uVar13;
            *param_5 = (long)puVar11;
            iVar12 = uVar25 - param_3;
          }
          else {
            iVar12 = uVar25 - param_3;
          }
          if (((int)uVar25 < (int)param_3) ||
             (uVar25 != param_3 && iVar12 < 0 == SBORROW4(uVar25,param_3))) {
            *(uint *)(param_5 + 1) = param_3;
            return;
          }
          return;
        }
        param_3 = param_3 + 1;
        lVar26 = lVar26 + -1;
        piVar17 = piVar17 + 4;
      } while (lVar26 != 0);
    }
  }
  return;
}


