/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f06330; name: FUN_02f06330
 */


void FUN_02f06330(undefined8 *param_1,int param_2,int param_3,ulong param_4,ulong param_5)

{
  int *piVar1;
  uint uVar2;
  uint3 *puVar3;
  uint uVar4;
  ushort uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined2 *puVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  long *plVar16;
  int *piVar17;
  ushort *puVar18;
  ushort *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  uint uVar25;
  int iVar26;
  float *pfVar27;
  undefined8 *puVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined8 local_b8;
  long local_b0;
  ulong local_a8;
  float local_a0;
  float fStack_9c;
  int local_98;
  undefined8 local_94;
  undefined1 local_8c;
  undefined2 local_8b;
  undefined8 local_88;
  
  piVar13 = (int *)*param_1;
  uVar25 = *(uint *)(param_1 + 1);
  if ((uVar25 == 0) || (*piVar13 == param_2)) {
    piVar17 = piVar13;
  }
  else {
    lVar20 = (ulong)uVar25 * 0x10;
    piVar14 = piVar13;
    do {
      lVar20 = lVar20 + -0x10;
      if (lVar20 == 0) {
        return;
      }
      piVar15 = piVar14 + 4;
      piVar17 = piVar14 + 4;
      piVar14 = piVar14 + 4;
    } while (*piVar15 != param_2);
  }
  if (piVar17 != piVar13 + (ulong)uVar25 * 4) {
    piVar13 = *(int **)(piVar17 + 2);
    if ((param_5 & 1) == 0) {
      if (piVar13[1] != param_3) {
        plVar8 = param_1 + 2;
        plVar24 = (long *)*plVar8;
        *(undefined1 *)(param_1 + 7) = 1;
        for (; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
          while (((int)plVar24[2] == param_2 &&
                 (plVar10 = (long *)plVar24[1], plVar10 != (long *)0x0))) {
            local_b0 = 0;
            local_a0 = 0.0;
            local_a8 = local_a8 & 0xffffffff00000000;
            local_98 = CONCAT31(local_98._1_3_,0xff);
            local_94._0_5_ = CONCAT14(0xff,(undefined4)local_94);
            local_88 = 0;
            (**(code **)(*plVar10 + 0x10))(plVar10,param_3,&local_b0,0);
            plVar24 = (long *)*plVar24;
            if (plVar24 == (long *)0x0) goto LAB_02f064a8;
          }
        }
LAB_02f064a8:
        if (*(char *)((long)param_1 + 0x39) != '\0') {
          plVar24 = (long *)*plVar8;
          if (plVar24 != (long *)0x0) {
            plVar10 = (long *)0x0;
            lVar20 = plVar24[1];
            plVar6 = (long *)*plVar24;
            while( true ) {
              if (lVar20 == 0) {
                if ((long *)*plVar8 == plVar24) {
                  plVar16 = plVar8;
                }
                else {
                  plVar16 = plVar10;
                }
                *plVar16 = (long)plVar6;
                if ((long *)param_1[3] == plVar24) {
                  param_1[3] = plVar10;
                }
                if ((plVar24 < (long *)param_1[5]) ||
                   ((long *)param_1[5] + (ulong)*(uint *)(param_1 + 6) * 3 <= plVar24)) {
                  (*DAT_0442d150)(0);
                }
                else {
                  *plVar24 = param_1[4];
                  param_1[4] = plVar24;
                }
                *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
                plVar24 = plVar10;
              }
              plVar10 = plVar24;
              if (plVar6 == (long *)0x0) break;
              lVar20 = plVar6[1];
              plVar24 = plVar6;
              plVar6 = (long *)*plVar6;
            }
          }
          *(undefined1 *)((long)param_1 + 0x39) = 0;
        }
        *(undefined1 *)(param_1 + 7) = 0;
      }
      if (((DAT_0440a2e0 != (code *)0x0) && ((param_4 & 1) == 0)) &&
         (uVar7 = (*DAT_0440a2e0)(param_2,param_3), (uVar7 & 1) != 0)) {
        return;
      }
    }
    if ((param_4 & 1) == 0) {
      if (piVar13[1] == param_3) {
        return;
      }
      piVar14 = *(int **)(piVar13 + 4);
      uVar25 = piVar13[6];
      piVar17 = piVar14;
      if (uVar25 != 0) {
        lVar20 = (ulong)uVar25 * 0xc;
        piVar15 = piVar14;
        do {
          if ((*piVar15 == piVar13[1]) && (piVar17 = piVar15, piVar15[1] == param_3)) break;
          lVar20 = lVar20 + -0xc;
          piVar17 = piVar14 + (ulong)uVar25 * 3;
          piVar15 = piVar15 + 3;
        } while (lVar20 != 0);
      }
      piVar15 = piVar13;
      if (piVar17 != piVar14 + (ulong)uVar25 * 3) {
        piVar15 = piVar17 + 2;
      }
      iVar11 = *piVar15;
      lVar20 = *(long *)(piVar13 + 2);
    }
    else {
      iVar11 = 0;
      lVar20 = *(long *)(piVar13 + 2);
    }
    for (; lVar20 != 0; lVar20 = *(long *)(lVar20 + 8)) {
      plVar24 = *(long **)(lVar20 + 0x18);
      *(int *)(lVar20 + 0x3c) = param_3;
      piVar17 = *(int **)(lVar20 + 0x28);
      uVar25 = *(uint *)(lVar20 + 0x30);
      if ((uVar25 == 0) || (*piVar17 == param_3)) {
        piVar14 = piVar17;
      }
      else {
        lVar21 = (ulong)uVar25 * 0x10;
        piVar15 = piVar17;
        do {
          lVar21 = lVar21 + -0x10;
          if (lVar21 == 0) goto LAB_02f0667c;
          piVar14 = piVar15 + 4;
          piVar1 = piVar15 + 4;
          piVar15 = piVar14;
        } while (*piVar1 != param_3);
      }
      if ((piVar14 == piVar17 + (ulong)uVar25 * 4) || (*(long *)(piVar14 + 2) == 0)) {
LAB_02f0667c:
        puVar28 = &local_b8;
      }
      else {
        puVar28 = (undefined8 *)(*(long *)(piVar14 + 2) + 0x18);
      }
      local_b8 = 0;
      plVar8 = (long *)(**(code **)(*plVar24 + 0x38))(plVar24);
      if ((plVar8 != (long *)0x0) && ((int)plVar8[1] != 0)) {
        uVar7 = 0;
        do {
          puVar3 = (uint3 *)(*plVar8 + uVar7 * 4);
          uVar5 = (ushort)*puVar3;
          puVar18 = *(ushort **)(lVar20 + 0x20);
          iVar26 = 0;
          if (*(char *)((long)puVar3 + 2) != '\x04') {
            iVar26 = iVar11;
          }
          if (puVar18 != (ushort *)0x0) {
            uVar23 = 0;
            pfVar27 = (float *)((long)puVar18 + ((ulong)((uint)*puVar18 * 2 + 5) & 0x3fffc));
            do {
              if (puVar18[uVar23 + 1] == uVar5) goto LAB_02f0670c;
              uVar23 = uVar23 + 1;
              pfVar27 = pfVar27 + 4;
            } while (uVar23 < *puVar18);
          }
          pfVar27 = (float *)0x0;
LAB_02f0670c:
          fVar31 = 1.0;
          if (*(char *)((long)puVar3 + 2) != '\x03') {
            fVar31 = 0.0;
          }
          puVar19 = (ushort *)*puVar28;
          uVar23 = (ulong)*(byte *)((long)puVar3 + 3) & 1;
          fVar30 = fVar31;
          if (puVar19 == (ushort *)0x0) {
joined_r0x02f0672c:
            uVar22 = (ulong)*puVar3 | uVar23 << 0x18;
            if (pfVar27 == (float *)0x0) goto LAB_02f06730;
LAB_02f0677c:
            if (*(long *)(pfVar27 + 2) == 0) {
              fVar31 = *pfVar27;
              if (fVar31 == fVar30) goto LAB_02f06738;
              goto LAB_02f06790;
            }
            FUN_02f0f0a8(fVar30,DAT_0440a150,*(long *)(pfVar27 + 2),uVar22,iVar26,4,0);
          }
          else {
            uVar22 = 0;
            do {
              if (puVar19[uVar22 + 1] == uVar5) {
                fVar30 = *(float *)((long)puVar19 +
                                   uVar22 * 4 + ((ulong)((uint)*puVar19 * 2 + 5) & 0x3fffc));
                goto joined_r0x02f0672c;
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 < *puVar19);
            uVar22 = (ulong)*puVar3 | uVar23 << 0x18;
            if (pfVar27 != (float *)0x0) goto LAB_02f0677c;
LAB_02f06730:
            if (fVar31 != fVar30) {
LAB_02f06790:
              uVar25 = (uint)uVar22;
              if (pfVar27 == (float *)0x0) {
                uVar12 = 0;
                if (puVar18 != (ushort *)0x0) {
                  uVar12 = (uint)*puVar18;
                }
                uVar2 = uVar12 + 1;
                uVar4 = uVar2 * 2 + 5 & 0x7fffc;
                puVar9 = (undefined2 *)(*DAT_0442d138)(0,uVar4 + uVar2 * 0x10);
                if (puVar9 == (undefined2 *)0x0) {
                  pfVar27 = (float *)0x0;
                  goto joined_r0x02f06a8c;
                }
                if (*(long *)(lVar20 + 0x20) != 0) {
                  memcpy(puVar9 + 1,(void *)(*(long *)(lVar20 + 0x20) + 2),(ulong)(uVar12 * 2));
                  memcpy((void *)((long)puVar9 + (ulong)uVar4),
                         (void *)(*(long *)(lVar20 + 0x20) + (ulong)(uVar12 * 2 + 5 & 0x3fffc)),
                         (ulong)(uVar12 << 4));
                  (*DAT_0442d150)(0,*(undefined8 *)(lVar20 + 0x20));
                }
                puVar9[uVar2] = uVar5;
                *puVar9 = (short)uVar2;
                *(undefined2 **)(lVar20 + 0x20) = puVar9;
                pfVar27 = (float *)((long)puVar9 + (ulong)uVar12 * 0x10 + (ulong)uVar4);
                *pfVar27 = 0.0;
                pfVar27[2] = 0.0;
                pfVar27[3] = 0.0;
                if (iVar26 == 0) goto LAB_02f06a90;
LAB_02f06798:
                local_94 = 0x900000004;
                local_8c = (undefined1)uVar23;
                local_8b = 1;
                local_b0 = lVar20;
                local_a8 = uVar22;
                local_a0 = fVar31;
                fStack_9c = fVar30;
                local_98 = iVar26;
                lVar21 = FUN_02f0ed58(DAT_0440a150,&local_b0,1,1);
                if (pfVar27 == (float *)0x0) {
                  if (lVar21 != 0) {
LAB_02f06b4c:
                    FUN_02f0efb8(DAT_0440a150,lVar21,lVar20);
                  }
                }
                else {
                  *(long *)(pfVar27 + 2) = lVar21;
                  if (lVar21 == 0) {
                    *pfVar27 = fVar30;
                    puVar18 = *(ushort **)(lVar20 + 0x20);
                    uVar25 = uVar25 >> 0x10 & 0xff;
                    if (puVar18 != (ushort *)0x0) {
                      uVar23 = 0;
                      plVar10 = (long *)((long)puVar18 +
                                        ((ulong)((uint)*puVar18 * 2 + 5) & 0x3fffc) + 8);
                      do {
                        if (puVar18[uVar23 + 1] == uVar5) {
                          uVar29 = (undefined4)plVar10[-1];
                          *(float *)(plVar10 + -1) = fVar30;
                          if (*plVar10 == 0) {
                            iVar26 = 0;
                          }
                          else {
                            iVar26 = 1;
                            *plVar10 = 0;
                          }
                          goto LAB_02f06ad8;
                        }
                        uVar23 = uVar23 + 1;
                        plVar10 = plVar10 + 2;
                      } while (uVar23 < *puVar18);
                    }
                    iVar26 = 0;
                    uVar29 = 0x3f800000;
                    if (uVar25 != 3) {
                      uVar29 = 0;
                    }
LAB_02f06ad8:
                    plVar10 = *(long **)(lVar20 + 0x18);
                    if ((char)plVar10[1] != '\0') {
                      (**(code **)(*plVar10 + 0x48))
                                (uVar29,fVar30,plVar10,uVar5,uVar25,*(undefined4 *)(lVar20 + 0x38),
                                 iVar26);
                    }
                    goto joined_r0x02f06938;
                  }
                  uVar23 = (**(code **)(*plVar24 + 0x10))(plVar24);
                  if ((uVar23 & 1) == 0) {
                    puVar18 = *(ushort **)(lVar20 + 0x20);
                    uVar25 = uVar25 >> 0x10 & 0xff;
                    if (puVar18 != (ushort *)0x0) {
                      uVar23 = 0;
                      plVar10 = (long *)((long)puVar18 +
                                        ((ulong)((uint)*puVar18 * 2 + 5) & 0x3fffc) + 8);
                      do {
                        if (puVar18[uVar23 + 1] == uVar5) {
                          uVar29 = (undefined4)plVar10[-1];
                          *(float *)(plVar10 + -1) = fVar30;
                          if (*plVar10 == 0) {
                            iVar26 = 0;
                          }
                          else {
                            iVar26 = 1;
                            *plVar10 = 0;
                          }
                          goto LAB_02f06b20;
                        }
                        uVar23 = uVar23 + 1;
                        plVar10 = plVar10 + 2;
                      } while (uVar23 < *puVar18);
                    }
                    iVar26 = 0;
                    uVar29 = 0x3f800000;
                    if (uVar25 != 3) {
                      uVar29 = 0;
                    }
LAB_02f06b20:
                    plVar10 = *(long **)(lVar20 + 0x18);
                    if ((char)plVar10[1] != '\0') {
                      (**(code **)(*plVar10 + 0x48))
                                (uVar29,fVar30,plVar10,uVar5,uVar25,*(undefined4 *)(lVar20 + 0x38),
                                 iVar26);
                    }
                    if (iVar26 != 0) {
                      (**(code **)(**(long **)(lVar20 + 0x18) + 0x18))();
                    }
                    goto LAB_02f06b4c;
                  }
                }
              }
              else {
joined_r0x02f06a8c:
                if (iVar26 != 0) goto LAB_02f06798;
LAB_02f06a90:
                puVar18 = *(ushort **)(lVar20 + 0x20);
                uVar25 = uVar25 >> 0x10 & 0xff;
                if (puVar18 != (ushort *)0x0) {
                  uVar23 = 0;
                  plVar10 = (long *)((long)puVar18 + ((ulong)((uint)*puVar18 * 2 + 5) & 0x3fffc) + 8
                                    );
                  do {
                    if (puVar18[uVar23 + 1] == uVar5) {
                      uVar29 = (undefined4)plVar10[-1];
                      *(float *)(plVar10 + -1) = fVar30;
                      if (*plVar10 == 0) {
                        iVar26 = 0;
                      }
                      else {
                        iVar26 = 1;
                        *plVar10 = 0;
                      }
                      goto LAB_02f0690c;
                    }
                    uVar23 = uVar23 + 1;
                    plVar10 = plVar10 + 2;
                  } while (uVar23 < *puVar18);
                }
                iVar26 = 0;
                uVar29 = 0x3f800000;
                if (uVar25 != 3) {
                  uVar29 = 0;
                }
LAB_02f0690c:
                plVar10 = *(long **)(lVar20 + 0x18);
                if ((char)plVar10[1] != '\0') {
                  (**(code **)(*plVar10 + 0x48))
                            (uVar29,fVar30,plVar10,uVar5,uVar25,*(undefined4 *)(lVar20 + 0x38),
                             iVar26);
                }
joined_r0x02f06938:
                if (iVar26 != 0) {
                  (**(code **)(**(long **)(lVar20 + 0x18) + 0x18))();
                }
              }
            }
          }
LAB_02f06738:
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(plVar8 + 1));
      }
    }
    piVar13[1] = param_3;
  }
  return;
}


