/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eaeebc; name: FUN_02eaeebc
 */


long FUN_02eaeebc(long *param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                 ulong param_6)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  short sVar5;
  bool bVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  float *pfVar14;
  ulong uVar15;
  char *pcVar16;
  long lVar17;
  long lVar18;
  short *psVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined8 local_90;
  long *plStack_88;
  long local_80;
  undefined8 local_78;
  
  plVar8 = (long *)param_2[7];
  if (plVar8 == (long *)0x0) goto LAB_02eaf040;
  lVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,&PTR_PTR_042a9250);
  param_1[1] = lVar9;
  param_1[2] = (long)param_2;
  if (param_1 != (long *)0x0) {
    if (param_2[0xe] == 0) {
      param_2[0xe] = (long)param_1;
      param_1[0xb] = 0;
    }
    else {
      param_1[0xb] = param_2[0xe];
      param_2[0xe] = (long)param_1;
    }
    (**(code **)(*param_2 + 0x10))(param_2);
    param_2 = (long *)param_1[2];
  }
  *(undefined4 *)(param_1 + 10) = 0;
  uVar21 = *(uint *)(param_2 + 0xd);
  if (*(uint *)(param_2 + 0xb) != 0) {
    lVar9 = (ulong)*(uint *)(param_2 + 0xb) * 0x28;
    pcVar16 = (char *)(param_2[10] + 5);
    do {
      if (*pcVar16 != '\x01') {
        uVar21 = uVar21 + 1;
      }
      lVar9 = lVar9 + -0x28;
      pcVar16 = pcVar16 + 0x28;
    } while (lVar9 != 0);
  }
  lVar9 = (**(code **)(param_2[3] + 0x38))(param_2 + 3);
  plVar8 = (long *)(**(code **)(*(long *)(param_1[2] + 0x18) + 0x80))();
  if ((lVar9 == 0) || (plVar8 == (long *)0x0)) {
    if (uVar21 == 0) goto LAB_02eaef80;
LAB_02eaf390:
    uVar7 = *(uint *)(param_1 + 10);
    uVar10 = (ulong)uVar7;
    if (uVar21 < uVar7) {
LAB_02eaf44c:
      *(uint *)(param_1 + 10) = uVar21;
      lVar9 = param_1[1];
      goto joined_r0x02eaf454;
    }
    if (uVar21 <= *(uint *)((long)param_1 + 0x54)) {
LAB_02eaf3d4:
      if (uVar7 < uVar21) {
        puVar20 = (undefined4 *)(param_1[9] + uVar10 * 0x10);
        uVar15 = (ulong)uVar21;
        if (puVar20 != (undefined4 *)0x0) {
          lVar9 = param_1[9] + uVar10 * 0x10;
          *puVar20 = 0;
          *(undefined4 *)(lVar9 + 4) = 0;
          *(undefined2 *)(lVar9 + 8) = 0;
          *(undefined4 *)(lVar9 + 0xc) = 0;
        }
        if (uVar10 + 1 != uVar15) {
          puVar3 = (undefined8 *)(param_1[9] + (uVar10 + 1) * 0x10);
          *puVar3 = 0;
          *(undefined2 *)(puVar3 + 1) = 0;
          *(undefined4 *)((long)puVar3 + 0xc) = 0;
          if (uVar10 + 2 != uVar15) {
            puVar3 = (undefined8 *)(param_1[9] + (uVar10 + 2) * 0x10);
            *puVar3 = 0;
            *(undefined2 *)(puVar3 + 1) = 0;
            *(undefined4 *)((long)puVar3 + 0xc) = 0;
            if (uVar10 + 3 != uVar15) {
              lVar12 = (uVar15 - uVar10) + -3;
              lVar9 = uVar10 << 4;
              do {
                lVar17 = param_1[9] + lVar9;
                if (lVar17 != -0x30) {
                  *(undefined8 *)(lVar17 + 0x30) = 0;
                  *(undefined2 *)(lVar17 + 0x38) = 0;
                  *(undefined4 *)(lVar17 + 0x3c) = 0;
                }
                lVar12 = lVar12 + -1;
                lVar9 = lVar9 + 0x10;
              } while (lVar12 != 0);
            }
          }
        }
      }
      goto LAB_02eaf44c;
    }
    uVar1 = *(uint *)((long)param_1 + 0x54) + (uVar21 - uVar7);
    lVar9 = (*DAT_0442d148)(0,param_1[9],(ulong)uVar1 << 4);
    if (lVar9 != 0) {
      param_1[9] = lVar9;
      *(uint *)((long)param_1 + 0x54) = uVar1;
      goto LAB_02eaf3d4;
    }
  }
  else {
    iVar11 = 0;
    if (*plVar8 != 0) {
      lVar12 = *(long *)(*plVar8 + 0x10);
      if (lVar12 == 0) {
        iVar11 = 1;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 == 0) {
          iVar11 = 2;
        }
        else {
          iVar11 = 2;
          do {
            lVar12 = *(long *)(lVar12 + 0x10);
            iVar11 = iVar11 + 1;
          } while (lVar12 != 0);
        }
      }
    }
    uVar21 = uVar21 + *(int *)(lVar9 + 8) * iVar11;
    if (uVar21 != 0) goto LAB_02eaf390;
LAB_02eaef80:
    lVar9 = param_1[1];
joined_r0x02eaf454:
    if (lVar9 != 0) {
      lVar9 = param_1[2];
      if (*(int *)(lVar9 + 0x68) != 0) {
        lVar12 = 0;
        uVar10 = 0;
        lVar17 = 0xc;
        do {
          puVar2 = (undefined2 *)(*(long *)(lVar9 + 0x60) + lVar12);
          lVar18 = param_1[9];
          lVar9 = lVar12 * 2;
          lVar12 = lVar12 + 8;
          *(undefined2 *)(lVar18 + lVar9 + 8) = *puVar2;
          uVar10 = uVar10 + 1;
          *(undefined4 *)(lVar18 + lVar17) = *(undefined4 *)(puVar2 + 2);
          lVar9 = param_1[2];
          lVar17 = lVar17 + 0x10;
        } while (uVar10 < *(uint *)(lVar9 + 0x68));
      }
      if (param_3 == (long *)0x0) {
        if ((param_6 & 1) != 0) {
          FUN_02eaf850(param_1,param_4,param_5);
        }
      }
      else if (lVar9 != 0) {
        plVar8 = param_3 + 2;
        if (*(int *)(lVar9 + 0x58) == 0) {
          lVar9 = param_3[3];
          param_1[3] = *plVar8;
          param_1[4] = lVar9;
          lVar9 = param_3[4];
          lVar12 = param_3[5];
          lVar17 = param_3[7];
          param_1[7] = param_3[6];
          param_1[8] = lVar17;
          param_1[5] = lVar9;
          param_1[6] = lVar12;
        }
        else {
          puVar20 = *(undefined4 **)(lVar9 + 0x50);
          do {
            iVar11 = 0;
            if (puVar20[6] != 0) {
              iVar11 = puVar20[6] + -2;
            }
            FUN_02edff20(DAT_0440a160,param_1,*puVar20,*(undefined1 *)(puVar20 + 1),
                         *(undefined1 *)((long)puVar20 + 5),*(undefined2 *)((long)puVar20 + 6),
                         puVar20[2],puVar20[7],*(long *)(puVar20 + 4) + 0xc,iVar11,plVar8,1,1);
            puVar20 = puVar20 + 10;
          } while (puVar20 !=
                   (undefined4 *)(*(long *)(lVar9 + 0x50) + (ulong)*(uint *)(lVar9 + 0x58) * 0x28));
          lVar9 = param_3[3];
          param_1[3] = *plVar8;
          param_1[4] = lVar9;
          lVar12 = param_3[7];
          lVar9 = param_3[4];
          lVar17 = param_3[5];
          param_1[7] = param_3[6];
          param_1[8] = lVar12;
          param_1[5] = lVar9;
          param_1[6] = lVar17;
          if (param_1[2] == 0) goto LAB_02eaf02c;
        }
        local_78 = 1;
        local_90 = 0;
        local_b0 = 0xff00;
        local_b8 = 0;
        local_98 = 0x100000000;
        local_a8 = 0;
        uStack_a0 = 0;
        local_80 = param_3[0x2d];
        plStack_88 = param_1;
        (**(code **)(*param_3 + 0x48))(param_3,&local_b8,1);
        local_98 = local_98 & 0xffffffff00000000;
        lVar9 = param_1[2];
        uVar10 = (ulong)*(uint *)(lVar9 + 0x58);
        if (*(uint *)(lVar9 + 0x58) != 0) {
          lVar17 = *(long *)(lVar9 + 0x50);
          lVar12 = lVar17;
          do {
            if (*(char *)(lVar12 + 4) == '\x02') {
              FUN_02ec512c(DAT_0440a180,&plStack_88,&local_b8,param_3 + 10);
              lVar17 = *(long *)(lVar9 + 0x50);
              uVar10 = (ulong)*(uint *)(lVar9 + 0x58);
            }
            lVar12 = lVar12 + 0x28;
          } while (lVar12 != lVar17 + uVar10 * 0x28);
        }
      }
LAB_02eaf02c:
      plVar8 = (long *)(**(code **)(*(long *)(param_1[2] + 0x18) + 0x38))();
      if ((plVar8 != (long *)0x0) && ((int)plVar8[1] != 0)) {
        uVar21 = *(uint *)(param_1 + 10);
        psVar19 = (short *)*plVar8;
        if (uVar21 == 0) {
          cVar4 = (char)psVar19[1];
          sVar5 = *psVar19;
          if (cVar4 == '\x03') {
            fVar23 = 1.0;
          }
          else {
            fVar23 = 0.0;
          }
          local_b8._0_4_ = fVar23;
          if (cVar4 == '\x03') {
            FUN_02eaffe8(param_1[2] + 0x18,param_1,sVar5,&local_b8);
          }
          else {
            uVar10 = FUN_02eb0154();
            if ((cVar4 == '\x04') && ((uVar10 & 1) != 0)) {
              local_b8._0_4_ = (float)local_b8 - fVar23;
            }
          }
          (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],sVar5,&local_b8,4);
          psVar19 = psVar19 + 2;
          if (psVar19 != (short *)(*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 4)) {
            do {
              cVar4 = (char)psVar19[1];
              fVar23 = 1.0;
              sVar5 = *psVar19;
              if (cVar4 != '\x03') {
                fVar23 = 0.0;
              }
              local_b8._0_4_ = fVar23;
              if (cVar4 == '\x03') {
                FUN_02eaffe8(param_1[2] + 0x18,param_1,sVar5,&local_b8);
              }
              else {
                uVar10 = FUN_02eb0154();
                if ((cVar4 == '\x04') && ((uVar10 & 1) != 0)) {
                  local_b8._0_4_ = (float)local_b8 - fVar23;
                }
              }
              (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],sVar5,&local_b8,4);
              psVar19 = psVar19 + 2;
            } while (psVar19 != (short *)(*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 4));
          }
        }
        else {
          do {
            cVar4 = (char)psVar19[1];
            uVar22 = 0x3f800000;
            sVar5 = *psVar19;
            if (cVar4 != '\x03') {
              uVar22 = 0;
            }
            local_b8 = CONCAT44(local_b8._4_4_,uVar22);
            piVar13 = (int *)param_1[9];
            if (cVar4 == '\x03') {
              if ((short)piVar13[2] == sVar5) {
                fVar23 = (float)piVar13[3];
                local_b8 = CONCAT44(local_b8._4_4_,fVar23);
                fVar25 = fVar23;
                if (*piVar13 != 0) {
                  fVar25 = 1.0;
                }
                bVar6 = *piVar13 != 0;
              }
              else {
                bVar6 = false;
                fVar23 = 1.0;
                fVar25 = 1.0;
              }
              if (uVar21 != 1) {
                if ((short)piVar13[6] == sVar5) {
                  fVar23 = (float)piVar13[7] * fVar23;
                  local_b8._4_4_ = (undefined4)((ulong)local_b8 >> 0x20);
                  local_b8 = CONCAT44(local_b8._4_4_,fVar23);
                  fVar24 = (float)piVar13[7];
                  if (piVar13[4] != 0) {
                    fVar24 = fVar25;
                  }
                  bVar6 = (bool)(bVar6 | piVar13[4] != 0);
                  fVar25 = fVar24;
                }
                if (uVar21 != 2) {
                  if ((short)piVar13[10] == sVar5) {
                    fVar23 = (float)piVar13[0xb] * fVar23;
                    local_b8._4_4_ = (undefined4)((ulong)local_b8 >> 0x20);
                    local_b8 = CONCAT44(local_b8._4_4_,fVar23);
                    fVar24 = (float)piVar13[0xb];
                    if (piVar13[8] != 0) {
                      fVar24 = fVar25;
                    }
                    bVar6 = (bool)(bVar6 | piVar13[8] != 0);
                    fVar25 = fVar24;
                  }
                  if (uVar21 != 3) {
                    if ((short)piVar13[0xe] == sVar5) {
                      fVar23 = (float)piVar13[0xf] * fVar23;
                      local_b8._4_4_ = (undefined4)((ulong)local_b8 >> 0x20);
                      local_b8 = CONCAT44(local_b8._4_4_,fVar23);
                      fVar24 = (float)piVar13[0xf];
                      if (piVar13[0xc] != 0) {
                        fVar24 = fVar25;
                      }
                      bVar6 = (bool)(bVar6 | piVar13[0xc] != 0);
                      fVar25 = fVar24;
                    }
                    if (uVar21 != 4) {
                      pfVar14 = (float *)(piVar13 + 0x13);
                      lVar9 = (ulong)uVar21 - 4;
                      do {
                        if (*(short *)(pfVar14 + -1) == sVar5) {
                          fVar23 = *pfVar14 * fVar23;
                          local_b8 = CONCAT44(local_b8._4_4_,fVar23);
                          fVar24 = *pfVar14;
                          if (pfVar14[-3] != 0.0) {
                            fVar24 = fVar25;
                          }
                          bVar6 = (bool)(bVar6 | pfVar14[-3] != 0.0);
                          fVar25 = fVar24;
                        }
                        pfVar14 = pfVar14 + 4;
                        lVar9 = lVar9 + -1;
                      } while (lVar9 != 0);
                    }
                  }
                }
              }
            }
            else {
              if ((short)piVar13[2] == sVar5) {
                fVar23 = (float)piVar13[3];
                local_b8 = CONCAT44(local_b8._4_4_,fVar23);
                fVar25 = fVar23;
                if (*piVar13 != 0) {
                  fVar25 = 0.0;
                }
                bVar6 = *piVar13 != 0;
              }
              else {
                bVar6 = false;
                fVar23 = 0.0;
                fVar25 = 0.0;
              }
              if (uVar21 != 1) {
                if ((short)piVar13[6] == sVar5) {
                  fVar23 = (float)piVar13[7] + fVar23;
                  local_b8._4_4_ = (undefined4)((ulong)local_b8 >> 0x20);
                  local_b8 = CONCAT44(local_b8._4_4_,fVar23);
                  fVar24 = (float)piVar13[7];
                  if (piVar13[4] != 0) {
                    fVar24 = fVar25;
                  }
                  bVar6 = (bool)(bVar6 | piVar13[4] != 0);
                  fVar25 = fVar24;
                }
                if (uVar21 != 2) {
                  if ((short)piVar13[10] == sVar5) {
                    fVar23 = (float)piVar13[0xb] + fVar23;
                    local_b8._4_4_ = (undefined4)((ulong)local_b8 >> 0x20);
                    local_b8 = CONCAT44(local_b8._4_4_,fVar23);
                    fVar24 = (float)piVar13[0xb];
                    if (piVar13[8] != 0) {
                      fVar24 = fVar25;
                    }
                    bVar6 = (bool)(bVar6 | piVar13[8] != 0);
                    fVar25 = fVar24;
                  }
                  if (uVar21 != 3) {
                    if ((short)piVar13[0xe] == sVar5) {
                      fVar23 = (float)piVar13[0xf] + fVar23;
                      local_b8._4_4_ = (undefined4)((ulong)local_b8 >> 0x20);
                      local_b8 = CONCAT44(local_b8._4_4_,fVar23);
                      fVar24 = (float)piVar13[0xf];
                      if (piVar13[0xc] != 0) {
                        fVar24 = fVar25;
                      }
                      bVar6 = (bool)(bVar6 | piVar13[0xc] != 0);
                      fVar25 = fVar24;
                    }
                    if (uVar21 != 4) {
                      pfVar14 = (float *)(piVar13 + 0x13);
                      lVar9 = (ulong)uVar21 - 4;
                      do {
                        if (*(short *)(pfVar14 + -1) == sVar5) {
                          fVar23 = *pfVar14 + fVar23;
                          local_b8 = CONCAT44(local_b8._4_4_,fVar23);
                          fVar24 = *pfVar14;
                          if (pfVar14[-3] != 0.0) {
                            fVar24 = fVar25;
                          }
                          fVar25 = fVar24;
                          bVar6 = (bool)(bVar6 | pfVar14[-3] != 0.0);
                        }
                        pfVar14 = pfVar14 + 4;
                        lVar9 = lVar9 + -1;
                      } while (lVar9 != 0);
                    }
                  }
                }
              }
            }
            if (cVar4 == '\x03') {
              FUN_02eaffe8(param_1[2] + 0x18,param_1,sVar5,&local_b8);
            }
            else {
              uVar7 = FUN_02eb0154();
              if ((cVar4 == '\x04') && (bVar6 || (uVar7 & 1) != 0)) {
                local_b8 = CONCAT44(local_b8._4_4_,(float)local_b8 - fVar25);
              }
            }
            (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],sVar5,&local_b8,4);
            psVar19 = psVar19 + 2;
          } while (psVar19 != (short *)(*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 4));
        }
      }
      goto LAB_02eaf040;
    }
  }
  (**(code **)(*param_1 + 0x28))(param_1);
LAB_02eaf040:
  return param_1[1];
}


