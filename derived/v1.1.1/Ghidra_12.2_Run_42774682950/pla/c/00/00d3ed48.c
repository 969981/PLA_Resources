/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d3ed48; name: FUN_00d3ed48
 */


void FUN_00d3ed48(long param_1,int param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ushort uVar10;
  char cVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 auVar19 [12];
  undefined4 uVar20;
  long lVar21;
  undefined4 uVar22;
  long lVar23;
  undefined *puVar24;
  char cVar25;
  int iVar26;
  undefined1 uVar27;
  ulong uVar28;
  long extraout_x8;
  long lVar29;
  ulong uVar30;
  ulong extraout_x9;
  int *piVar31;
  ulong uVar32;
  uint *extraout_x11;
  uint *puVar33;
  ulong extraout_x12;
  int *extraout_x13;
  ulong uVar34;
  ushort *puVar35;
  long lVar36;
  ushort *extraout_x14;
  ulong uVar37;
  long extraout_x15;
  long lVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  uint uVar41;
  uint extraout_w16;
  ulong uVar42;
  uint *puVar43;
  long extraout_x18;
  undefined4 uVar44;
  undefined4 uVar45;
  long lVar46;
  undefined4 uVar47;
  uint *puVar48;
  uint *puVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 auVar53 [12];
  undefined4 local_94;
  undefined4 local_90;
  int local_6c;
  
  if (param_3 == 0) {
    return;
  }
  piVar31 = *(int **)(param_1 + 0x38);
  if ((6 < *(ushort *)((long)piVar31 - (long)*piVar31)) &&
     (uVar32 = (ulong)((ushort *)((long)piVar31 - (long)*piVar31))[3], uVar32 != 0)) {
    uVar34 = (ulong)*(uint *)((long)piVar31 + uVar32);
    puVar33 = (uint *)((long)((long)piVar31 + uVar32) + uVar34);
    if (puVar33 != (uint *)0x0) {
      uVar28 = (ulong)*puVar33;
      uVar30 = uVar28 * 4;
      if (uVar28 == 0) goto LAB_00d3f66c;
      lVar38 = uVar34 + uVar32;
      uVar28 = 0;
      do {
        lVar29 = (long)piVar31 + uVar28 + lVar38;
        uVar37 = (ulong)*(uint *)(lVar29 + 4);
        lVar2 = uVar28 + (uVar37 - (long)*(int *)((long)piVar31 + uVar28 + uVar37 + lVar38 + 4)) +
                         lVar38;
        uVar10 = *(ushort *)((long)piVar31 + lVar2 + 4);
        if (uVar10 < 5) {
          if (param_2 == 0) goto LAB_00d3ee1c;
        }
        else {
          uVar42 = (ulong)*(ushort *)((long)piVar31 + lVar2 + 8);
          iVar26 = 0;
          if (uVar42 != 0) {
            iVar26 = *(int *)((long)piVar31 + uVar28 + uVar37 + uVar42 + lVar38 + 4);
          }
          if (iVar26 == param_2) {
LAB_00d3ee1c:
            uVar30 = 0;
            if ((-((long)piVar31 + uVar37 + uVar32 + uVar34) - 4 == uVar28) || (uVar10 < 7))
            goto LAB_00d3f66c;
            uVar30 = (ulong)*(ushort *)((long)piVar31 + lVar2 + 10);
            if (uVar30 != 0) {
              uVar42 = (ulong)*(uint *)((long)piVar31 +
                                       uVar28 + uVar30 + uVar37 + uVar32 + uVar34 + 4);
              lVar2 = uVar30 + uVar42 + uVar37;
              lVar3 = (long)piVar31 + uVar28 + lVar2 + uVar32 + uVar34;
              if (uVar30 + (ulong)*(uint *)(lVar3 + 4) * 4 + uVar42 + uVar37 != lVar2) {
                lVar2 = uVar42 + uVar30 + uVar37;
                uVar30 = 0;
                puVar33 = (uint *)(lVar3 + 8);
                puVar24 = &DAT_03a78356;
                lVar38 = (long)piVar31 + uVar28 + lVar2 + lVar38 + 0x18;
                lVar21 = lVar2;
                lVar23 = lVar3;
                do {
                  auVar53._8_4_ = param_2;
                  auVar53._0_8_ = lVar21;
                  uVar32 = (ulong)*puVar33;
                  piVar31 = (int *)((long)puVar33 + uVar32);
                  puVar35 = (ushort *)((long)piVar31 - (long)*piVar31);
                  uVar10 = *puVar35;
                  uVar41 = (uint)uVar10;
                  if (4 < uVar10) {
                    if ((ulong)puVar35[2] == 0) goto LAB_00d3f6dc;
                    uVar45 = *(undefined4 *)((long)piVar31 + (ulong)puVar35[2]);
                    uVar34 = uVar30;
                    if (6 < uVar10) {
                      do {
                        uVar22 = auVar53._8_4_;
                        auVar19._8_4_ = uVar22;
                        auVar19._0_8_ = lVar2;
                        uVar28 = (ulong)puVar35[3];
                        uVar30 = uVar34;
                        if (uVar28 == 0) break;
                        uVar37 = (ulong)*(uint *)((long)piVar31 + uVar28);
                        puVar4 = (uint *)((long)((long)piVar31 + uVar28) + uVar37);
                        if (puVar4 == (uint *)0x0) break;
                        puVar48 = puVar4 + 1;
                        if ((ulong)*puVar4 == 0) break;
                        uVar39 = 0;
                        uVar40 = 0;
                        local_94 = 0;
                        uVar44 = 0;
                        local_6c = 0;
                        uVar47 = 0;
                        bVar12 = false;
                        local_90 = 0;
                        uVar18 = 0;
                        bVar14 = false;
                        bVar13 = false;
                        bVar15 = false;
                        uVar27 = 0;
                        uVar52 = 0;
                        uVar50 = 0;
                        uVar51 = 0;
                        uVar20 = 0;
                        puVar4 = puVar48 + *puVar4;
                        lVar21 = lVar38 + uVar37 + uVar28 + uVar32;
                        uVar17 = 0;
                        bVar16 = false;
                        do {
                          piVar31 = (int *)((long)puVar48 + (ulong)*puVar48);
                          puVar35 = (ushort *)((long)piVar31 - (long)*piVar31);
                          if (4 < *puVar35) {
                            if ((ulong)puVar35[2] == 0) {
                              cVar11 = '\0';
                            }
                            else {
                              cVar11 = *(char *)((long)piVar31 + (ulong)puVar35[2]);
                            }
                            if ((6 < *puVar35) && (uVar32 = (ulong)puVar35[3], uVar32 != 0)) {
                              uVar30 = (ulong)*(uint *)((long)piVar31 + uVar32);
                              puVar5 = (uint *)((long)((long)piVar31 + uVar32) + uVar30);
                              if (puVar5 != (uint *)0x0) {
                                puVar43 = puVar5 + 1;
                                if ((ulong)*puVar5 != 0) {
                                  puVar5 = puVar43 + *puVar5;
                                  lVar23 = lVar21 + uVar30 + uVar32 + (ulong)*puVar48;
                                  do {
                                    uVar32 = (ulong)*puVar43;
                                    piVar31 = (int *)((long)puVar43 + uVar32);
                                    puVar35 = (ushort *)((long)piVar31 - (long)*piVar31);
                                    uVar10 = *puVar35;
                                    if (4 < uVar10) {
                                      if ((ulong)puVar35[2] != 0) {
                                        cVar25 = *(char *)((long)piVar31 + (ulong)puVar35[2]);
                                        if (6 < uVar10) goto LAB_00d3efec;
                                        goto LAB_00d3f4bc;
                                      }
                                      cVar25 = '\0';
                                      if (uVar10 < 7) goto LAB_00d3f4bc;
LAB_00d3efec:
                                      uVar30 = (ulong)puVar35[3];
                                      if (uVar30 == 0) goto LAB_00d3f4bc;
                                      uVar28 = (ulong)*(uint *)((long)piVar31 + uVar30);
                                      puVar6 = (uint *)((long)((long)piVar31 + uVar30) + uVar28);
                                      if (puVar6 == (uint *)0x0) goto LAB_00d3f4bc;
                                      puVar49 = puVar6 + 1;
                                      uVar41 = *puVar6;
                                      lVar36 = (ulong)uVar41 * 4;
                                      if ((ulong)uVar41 == 0) goto LAB_00d3f4bc;
                                      if (cVar25 != '\0') {
                                        piVar31 = (int *)((long)puVar49 + (ulong)*puVar49);
                                        if (4 < *(ushort *)((long)piVar31 - (long)*piVar31)) {
                                          uVar37 = (ulong)((ushort *)
                                                          ((long)piVar31 - (long)*piVar31))[2];
                                          if (uVar37 != 0) {
                                            puVar6 = (uint *)((long)piVar31 + uVar37);
                                            piVar31 = (int *)((long)puVar6 + (ulong)*puVar6);
                                            if ((*(ushort *)((long)piVar31 - (long)*piVar31) < 5) ||
                                               (uVar37 = (ulong)((ushort *)
                                                                ((long)piVar31 - (long)*piVar31))[2]
                                               , uVar37 == 0)) {
switchD_00d3f0a0_default:
                                              iVar26 = 0;
                                            }
                                            else {
                                              switch(*(undefined1 *)((long)piVar31 + uVar37)) {
                                              case 1:
                                                if (!bVar12) {
                                                  uVar20 = 1;
                                                  bVar12 = true;
                                                  uVar44 = uVar22;
                                                  uVar47 = uVar45;
                                                }
                                                bVar13 = bVar14;
                                                uVar40 = uVar39;
                                                uVar51 = uVar50;
                                                if (cVar25 == '\x01') {
                                                  if (cVar11 == '\x01') {
                                                    uVar27 = 1;
                                                  }
                                                  else {
                                                    uVar52 = 1;
                                                  }
                                                }
                                                goto joined_r0x00d3f4b8;
                                              case 2:
                                                iVar26 = 2;
                                                break;
                                              case 3:
                                                iVar26 = 3;
                                                break;
                                              case 4:
                                                iVar26 = 4;
                                                break;
                                              case 5:
                                                iVar26 = 5;
                                                break;
                                              default:
                                                goto switchD_00d3f0a0_default;
                                              }
                                              bVar13 = bVar14;
                                              uVar51 = uVar50;
                                            }
                                            if (bVar15) {
                                              if (local_6c != iVar26) goto joined_r0x00d3f4b8;
                                            }
                                            else {
                                              bVar15 = true;
                                              local_94 = uVar22;
                                              local_6c = iVar26;
                                              local_90 = uVar45;
                                            }
                                            if (cVar25 == '\x01') {
                                              if (cVar11 == '\x01') {
                                                uVar40 = 1;
                                                uVar39 = uVar40;
                                              }
                                              else {
                                                uVar18 = 1;
                                                uVar39 = uVar40;
                                              }
                                            }
                                          }
                                        }
joined_r0x00d3f4b8:
                                        if (uVar41 != 1) {
                                          lVar46 = 0;
                                          lVar7 = lVar23 + uVar28 + uVar30 + uVar32;
                                          do {
                                            uVar32 = (ulong)*(uint *)(lVar7 + lVar46);
                                            lVar8 = lVar46 + (uVar32 - (long)*(int *)(lVar7 + uVar32
                                                                                     + lVar46));
                                            if (4 < *(ushort *)(lVar7 + lVar8)) {
                                              uVar30 = (ulong)*(ushort *)(lVar7 + lVar8 + 4);
                                              if (uVar30 != 0) {
                                                uVar28 = (ulong)*(uint *)(lVar7 + uVar32 + uVar30 +
                                                                         lVar46);
                                                if (lVar7 + lVar46 + uVar32 + uVar28 + uVar30 != 0)
                                                {
                                                  lVar8 = uVar32 + uVar30 + uVar28;
                                                  lVar9 = lVar46 + (lVar8 - *(int *)(lVar7 + lVar8 +
                                                                                    lVar46));
                                                  if (((4 < *(ushort *)(lVar7 + lVar9)) &&
                                                      (uVar32 = (ulong)*(ushort *)
                                                                        (lVar7 + lVar9 + 4),
                                                      uVar32 != 0)) &&
                                                     (uVar41 = *(byte *)(lVar7 + lVar8 + uVar32 +
                                                                        lVar46) - 1, uVar41 < 5)) {
                    /* WARNING: Could not recover jumptable at 0x00d3f3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                    (*(code *)(&UNK_00d3f3f4 +
                                                              (ulong)(byte)puVar24[uVar41] * 4))();
                                                    return;
                                                  }
                                                  if (bVar15) {
                                                    if (local_6c != 0) goto LAB_00d3f47c;
                                                  }
                                                  else {
                                                    bVar15 = true;
                                                    local_6c = 0;
                                                    local_94 = uVar22;
                                                    local_90 = uVar45;
                                                  }
                                                  if (cVar25 == '\x01') {
                                                    if (cVar11 == '\x01') {
                                                      uVar39 = 1;
                                                    }
                                                    else {
                                                      uVar18 = 1;
                                                      uVar39 = uVar40;
                                                    }
                                                    uVar40 = uVar39;
                                                  }
                                                }
                                              }
                                            }
LAB_00d3f47c:
                                            lVar46 = lVar46 + 4;
                                          } while (lVar36 + -4 != lVar46);
                                        }
                                        goto LAB_00d3f4bc;
                                      }
                                      piVar31 = (int *)((long)puVar49 + (ulong)*puVar49);
                                      if ((4 < *(ushort *)((long)piVar31 - (long)*piVar31)) &&
                                         (uVar37 = (ulong)((ushort *)
                                                          ((long)piVar31 - (long)*piVar31))[2],
                                         uVar37 != 0)) {
                                        puVar6 = (uint *)((long)piVar31 + uVar37);
                                        piVar31 = (int *)((long)puVar6 + (ulong)*puVar6);
                                        if ((*(ushort *)((long)piVar31 - (long)*piVar31) < 5) ||
                                           (uVar37 = (ulong)((ushort *)
                                                            ((long)piVar31 - (long)*piVar31))[2],
                                           uVar37 == 0)) {
switchD_00d3f138_default:
                                          iVar26 = 0;
                                          goto LAB_00d3f13c;
                                        }
                                        switch(*(undefined1 *)((long)piVar31 + uVar37)) {
                                        case 1:
                                          if (!bVar12) {
                                            uVar20 = 1;
                                            bVar12 = true;
                                            uVar44 = uVar22;
                                            uVar47 = uVar45;
                                          }
                                          if (cVar11 == '\x01') {
                                            uVar51 = 1;
                                          }
                                          else {
                                            bVar13 = true;
                                          }
                                          bVar14 = bVar13;
                                          uVar50 = uVar51;
                                          if (uVar41 == 1) goto LAB_00d3f4bc;
                                          goto LAB_00d3f174;
                                        case 2:
                                          iVar26 = 2;
                                          break;
                                        case 3:
                                          iVar26 = 3;
                                          break;
                                        case 4:
                                          iVar26 = 4;
                                          break;
                                        case 5:
                                          iVar26 = 5;
                                          break;
                                        default:
                                          goto switchD_00d3f138_default;
                                        }
LAB_00d3f13c:
                                        if (bVar15) {
                                          if (local_6c != iVar26) goto LAB_00d3f16c;
                                        }
                                        else {
                                          bVar15 = true;
                                          local_94 = uVar22;
                                          local_6c = iVar26;
                                          local_90 = uVar45;
                                        }
                                        if (cVar11 == '\x01') {
                                          uVar17 = 1;
                                        }
                                        else {
                                          bVar16 = true;
                                        }
                                      }
LAB_00d3f16c:
                                      if (uVar41 != 1) {
LAB_00d3f174:
                                        lVar46 = 0;
                                        lVar7 = lVar23 + uVar28 + uVar30 + uVar32;
                                        do {
                                          uVar32 = (ulong)*(uint *)(lVar7 + lVar46);
                                          lVar8 = lVar46 + (uVar32 - (long)*(int *)(lVar7 + uVar32 +
                                                                                   lVar46));
                                          if (4 < *(ushort *)(lVar7 + lVar8)) {
                                            uVar30 = (ulong)*(ushort *)(lVar7 + lVar8 + 4);
                                            if (uVar30 != 0) {
                                              uVar28 = (ulong)*(uint *)(lVar7 + uVar32 + uVar30 +
                                                                       lVar46);
                                              if (lVar7 + lVar46 + uVar32 + uVar28 + uVar30 != 0) {
                                                lVar8 = uVar32 + uVar30 + uVar28;
                                                lVar9 = lVar46 + (lVar8 - *(int *)(lVar7 + lVar8 +
                                                                                  lVar46));
                                                if ((*(ushort *)(lVar7 + lVar9) < 5) ||
                                                   (uVar32 = (ulong)*(ushort *)(lVar7 + lVar9 + 4),
                                                   uVar32 == 0)) {
switchD_00d3f22c_default:
                                                  iVar26 = 0;
                                                }
                                                else {
                                                  switch(*(undefined1 *)
                                                          (lVar7 + lVar8 + uVar32 + lVar46)) {
                                                  case 1:
                                                    if (!bVar12) {
                                                      uVar20 = 1;
                                                      bVar12 = true;
                                                      uVar44 = uVar22;
                                                      uVar47 = uVar45;
                                                    }
                                                    if (cVar11 == '\x01') {
                                                      bVar14 = bVar13;
                                                      uVar50 = 1;
                                                    }
                                                    else {
                                                      bVar14 = true;
                                                      uVar50 = uVar51;
                                                    }
                                                    bVar13 = bVar14;
                                                    uVar51 = uVar50;
                                                    goto LAB_00d3f2a8;
                                                  case 2:
                                                    iVar26 = 2;
                                                    break;
                                                  case 3:
                                                    iVar26 = 3;
                                                    break;
                                                  case 4:
                                                    iVar26 = 4;
                                                    break;
                                                  case 5:
                                                    iVar26 = 5;
                                                    break;
                                                  default:
                                                    goto switchD_00d3f22c_default;
                                                  }
                                                }
                                                if (bVar15) {
                                                  if (local_6c != iVar26) goto LAB_00d3f2a8;
                                                }
                                                else {
                                                  bVar15 = true;
                                                  local_94 = uVar22;
                                                  local_6c = iVar26;
                                                  local_90 = uVar45;
                                                }
                                                if (cVar11 == '\x01') {
                                                  uVar17 = 1;
                                                }
                                                else {
                                                  bVar16 = true;
                                                }
                                              }
                                            }
                                          }
LAB_00d3f2a8:
                                          lVar46 = lVar46 + 4;
                                        } while (lVar36 + -4 != lVar46);
                                      }
                                    }
LAB_00d3f4bc:
                                    puVar43 = puVar43 + 1;
                                    lVar23 = lVar23 + 4;
                                  } while (puVar43 != puVar5);
                                }
                              }
                            }
                          }
                          puVar48 = puVar48 + 1;
                          lVar21 = lVar21 + 4;
                        } while (puVar48 != puVar4);
                        uVar30 = uVar34 & 0xffffffff;
                        if (!bVar15) {
LAB_00d3f610:
                          lVar23 = lVar3;
                          auVar53 = auVar19;
                          break;
                        }
                        if (!bVar16) {
LAB_00d3f5d0:
                          if (((bVar13) && (bVar12)) && (local_6c == 0)) {
                            if (0x7f < (uint)uVar30) goto LAB_00d3f6d8;
                            puVar1 = (undefined4 *)(param_3 + uVar30 * 0x10);
                            uVar30 = (ulong)((uint)uVar30 + 1);
                            *puVar1 = uVar44;
                            *(short *)(puVar1 + 1) = (short)uVar47;
                            puVar1[2] = uVar20;
                            *(undefined1 *)(puVar1 + 3) = uVar51;
                            *(undefined1 *)((long)puVar1 + 0xd) = uVar52;
                            *(undefined1 *)((long)puVar1 + 0xe) = uVar27;
                          }
                          goto LAB_00d3f610;
                        }
                        if ((uint)uVar34 < 0x80) {
                          puVar1 = (undefined4 *)(param_3 + (uVar34 & 0xffffffff) * 0x10);
                          uVar30 = (ulong)((uint)uVar34 + 1);
                          *(undefined1 *)((long)puVar1 + 0xe) = uVar40;
                          *puVar1 = local_94;
                          *(short *)(puVar1 + 1) = (short)local_90;
                          puVar1[2] = local_6c;
                          *(undefined1 *)(puVar1 + 3) = uVar17;
                          *(undefined1 *)((long)puVar1 + 0xd) = uVar18;
                          goto LAB_00d3f5d0;
                        }
LAB_00d3f6d8:
                        auVar53 = FUN_00d3fa20();
                        lVar29 = extraout_x8;
                        uVar30 = extraout_x9;
                        puVar33 = extraout_x11;
                        uVar32 = extraout_x12;
                        piVar31 = extraout_x13;
                        puVar35 = extraout_x14;
                        lVar38 = extraout_x15;
                        lVar23 = extraout_x18;
                        uVar41 = extraout_w16;
LAB_00d3f6dc:
                        uVar45 = 0;
                        uVar34 = uVar30;
                      } while (6 < uVar41);
                    }
                  }
                  param_2 = auVar53._8_4_;
                  lVar21 = auVar53._0_8_;
                  puVar33 = puVar33 + 1;
                  lVar38 = lVar38 + 4;
                } while ((uint *)(lVar29 + lVar21 + (ulong)*(uint *)(lVar23 + 4) * 4 + 8) != puVar33
                        );
                goto LAB_00d3f66c;
              }
            }
            break;
          }
        }
        uVar28 = uVar28 + 4;
      } while (uVar30 != uVar28);
    }
  }
  uVar30 = 0;
LAB_00d3f66c:
  *(int *)(param_3 + 0x800) = (int)uVar30;
  return;
}


