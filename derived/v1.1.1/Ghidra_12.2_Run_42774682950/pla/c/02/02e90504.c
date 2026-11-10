/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e90504; name: FUN_02e90504
 */


/* WARNING: Removing unreachable block (ram,0x02e91aa0) */

ulong FUN_02e90504(long param_1,long param_2,long *param_3,uint param_4,uint param_5,uint param_6)

{
  long *plVar1;
  long *plVar2;
  MutexType *pMVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  undefined4 uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  uint uVar25;
  ulong uVar26;
  uint *puVar27;
  long lVar28;
  undefined8 *puVar29;
  int *piVar30;
  bool bVar31;
  long lVar32;
  float fVar33;
  uint local_a4;
  ulong local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined1 local_88;
  undefined4 local_84;
  int local_78;
  uint local_74;
  uint local_70;
  undefined1 uStack_6c;
  uint local_68;
  int local_64;
  
  uVar5 = *(undefined4 *)(param_2 + 4);
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  iVar10 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 0x28) == 2) {
    lVar28 = *(long *)(param_2 + 0x30);
  }
  else {
    lVar28 = 0;
  }
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  uVar11 = *(uint *)(param_1 + 0xb0);
  if (uVar11 != 0) {
    uVar4 = iVar10 + (int)lVar28;
    uVar25 = 0;
    if (uVar11 != 0) {
      uVar25 = uVar4 / uVar11;
    }
    for (piVar30 = *(int **)(*(long *)(param_1 + 0xa8) + (ulong)(uVar4 - uVar25 * uVar11) * 8);
        piVar30 != (int *)0x0; piVar30 = *(int **)(piVar30 + 4)) {
      if ((*piVar30 == iVar10) && (*(long *)(piVar30 + 2) == lVar28)) {
        nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
        bVar6 = *(byte *)(piVar30 + 0x1a);
        nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
        if ((bVar6 & 1) != 0) {
          uVar11 = 0x45;
          goto LAB_02e92600;
        }
        *param_3 = (long)piVar30;
        if ((param_5 & 1) != 0) {
          piVar30[0x1c] = piVar30[0x1c] + 1;
        }
        uVar11 = 1;
        goto LAB_02e9064c;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
  nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
  puVar12 = (undefined4 *)(*DAT_0442d138)(0,0x78);
  if (puVar12 == (undefined4 *)0x0) {
    *param_3 = 0;
    uVar11 = 0x34;
  }
  else {
    uVar25 = (uint)(param_4 == 0);
    uVar4 = param_4 != 0 & param_5;
    if (*(int *)(param_2 + 0x28) == 2) {
      uVar24 = *(undefined8 *)(param_2 + 0x30);
    }
    else {
      uVar24 = 0;
    }
    *puVar12 = *(undefined4 *)(param_2 + 4);
    *(undefined8 *)(puVar12 + 2) = uVar24;
    *(undefined8 *)(puVar12 + 0xd) = 0;
    *(undefined8 *)(puVar12 + 6) = 0;
    *(undefined8 *)(puVar12 + 8) = 0;
    *(undefined8 *)(puVar12 + 10) = 0;
    uVar11 = 1;
    *(undefined1 *)(puVar12 + 0xc) = 0;
    *(undefined8 *)(puVar12 + 0x10) = 0;
    *(undefined8 *)(puVar12 + 0x12) = 0;
    *(undefined8 *)(puVar12 + 0x14) = 0;
    *(undefined8 *)(puVar12 + 0x16) = 0;
    puVar12[0x18] = uVar25;
    puVar12[0x19] = uVar4 + (~(uVar25 | param_5) & 1);
    *(byte *)(puVar12 + 0x1a) = *(byte *)(puVar12 + 0x1a) & 0xf0 | param_4 == 0;
    puVar12[0x1b] = 0x10;
    puVar12[0x1c] = uVar4;
    *param_3 = (long)puVar12;
  }
LAB_02e9064c:
  puVar29 = (undefined8 *)(param_1 + 8);
  *puVar29 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (uVar11 != 1) {
    local_90 = local_90 & 0xffffffff00000000;
    local_a0 = 0;
    local_98 = 0;
    plVar15 = *(long **)(param_1 + 0x48);
    goto joined_r0x02e924cc;
  }
  uVar4 = *(uint *)(param_2 + 0x28);
  if (param_4 == 0) {
    if (uVar4 == 1) {
      uVar17 = *(ulong *)(param_2 + 0x20);
      goto LAB_02e908f0;
    }
    if ((uVar4 | 1) != 3) goto LAB_02e90690;
    uVar11 = FUN_02e9b334(puVar29,*(undefined8 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x38));
  }
  else {
LAB_02e90690:
    lVar28 = *(long *)(param_2 + 8);
    uVar17 = *(ulong *)(param_2 + 0x20);
    if (lVar28 == 0) {
LAB_02e908f0:
      uVar11 = FUN_02e9b58c(puVar29,uVar5,0,0,uVar17,1);
    }
    else {
      local_84 = 0xffffffff;
      local_a0 = 0;
      local_88 = 1;
      local_98 = (ulong)local_98._4_4_ << 0x20;
      local_90 = uVar17;
      iVar10 = (**(code **)(*DAT_0440a098 + 0x20))(DAT_0440a098,lVar28,&local_a0,0,param_1 + 0x48,1)
      ;
      if (iVar10 != 1) {
        local_88 = 0;
        uVar11 = (**(code **)(*DAT_0440a098 + 0x20))
                           (DAT_0440a098,lVar28,&local_a0,0,param_1 + 0x48,1);
        if (uVar11 != 1) goto LAB_02e9072c;
      }
      uVar11 = FUN_02e9b348(puVar29,0);
    }
  }
LAB_02e9072c:
  local_90 = local_90 & 0xffffffff00000000;
  local_a0 = 0;
  local_98 = 0;
  if (uVar11 == 1) {
    local_70 = 0;
    iVar10 = FUN_02e9b7a4(puVar29,&local_78,8,&local_70);
    uVar11 = 7;
    if ((iVar10 == 1) && (local_70 == 8)) {
      if (local_78 != 0x44484b42) {
        uVar11 = 7;
        plVar15 = *(long **)(param_1 + 0x48);
        goto joined_r0x02e924cc;
      }
      local_70 = 0;
      uVar11 = FUN_02e9b7a4(puVar29,&local_a0,0x14,&local_70);
      if (uVar11 == 1) {
        if (local_70 == 0x14) {
          uVar11 = 1;
          goto LAB_02e907bc;
        }
        uVar11 = 0x38;
      }
      else if (uVar11 == 1) {
LAB_02e907bc:
        uVar25 = local_74 - 0x14;
        if (uVar25 != 0) {
          local_70 = 0;
          uVar11 = FUN_02e9b658(puVar29,uVar25,&local_70);
          if (uVar11 == 1) {
            if (local_70 != uVar25) {
              uVar11 = 0x38;
              goto LAB_02e925dc;
            }
            uVar11 = 1;
          }
        }
      }
      if (uVar11 == 1) {
        uVar17 = local_a0 & 0xffffffff;
        if ((uint)local_a0 < 0x87) {
          if (0x75 < (uint)local_a0) {
            bVar8 = false;
            goto LAB_02e90818;
          }
        }
        else if ((uint)local_a0 == 0x87) {
          bVar8 = true;
LAB_02e90818:
          plVar15 = (long *)(param_1 + 0x58);
          plVar1 = (long *)(param_1 + 0x18);
          plVar2 = (long *)(param_1 + 0x40);
          bVar31 = false;
          do {
            local_a4 = 0;
            uVar11 = FUN_02e9b7a4(puVar29,&local_78,8,&local_a4);
            uVar25 = local_74;
            if (uVar11 != 1) {
              plVar15 = *(long **)(param_1 + 0x48);
              goto joined_r0x02e924cc;
            }
            if (local_a4 == 8) {
              if (bVar8) {
                if (local_78 < 0x474d5453) {
                  if (local_78 == 0x43524948) {
                    lVar28 = *param_3;
                    local_68 = 0;
                    local_70 = 0;
                    uVar11 = FUN_02e9b7a4(puVar29,&local_68,4,&local_70);
                    if (uVar11 == 1) {
                      bVar9 = local_70 == 4;
                      if (bVar9) {
                        uVar11 = 1;
                        if (local_68 != 0) {
                          uVar25 = *(int *)(lVar28 + 0x5c) + local_68;
                          lVar13 = (*DAT_0442d148)(0,*(undefined8 *)(lVar28 + 0x50),
                                                   (ulong)uVar25 << 3);
                          if (lVar13 == 0) {
                            uVar11 = 2;
                            goto joined_r0x02e9098c;
                          }
                          *(long *)(lVar28 + 0x50) = lVar13;
                          bVar9 = true;
                          uVar11 = 1;
                          *(uint *)(lVar28 + 0x5c) = uVar25;
                        }
                      }
                      else {
                        uVar11 = 0x38;
                      }
                      if ((bVar9) && (local_68 != 0)) {
                        uVar25 = 0;
                        do {
                          local_64 = 0;
                          uVar11 = FUN_02e9b7a4(puVar29,&local_70,5,&local_64);
                          if (uVar11 == 1) {
                            if (local_64 == 5) {
                              uVar11 = (local_70 & 0xff) - 1;
                              if (uVar11 < 0x16) {
                    /* WARNING: Could not recover jumptable at 0x02e90ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                uVar17 = (*(code *)(&UNK_02e90ad8 +
                                                   (ulong)*(ushort *)
                                                           (&DAT_03a9ee72 + (ulong)uVar11 * 2) * 4))
                                                   ();
                                return uVar17;
                              }
                              if (DAT_0440a2e8 == (code *)0x0) {
                                uVar11 = 1;
                              }
                              else {
                                uVar11 = (*DAT_0440a2e8)(&local_70,lVar28,uVar5);
                                if (uVar11 != 3) goto joined_r0x02e91a84;
                                uVar11 = 3;
                              }
                              local_64 = 0;
                              FUN_02e9b658(puVar29,CONCAT13(uStack_6c,local_70._1_3_),&local_64);
                              if (local_64 != CONCAT13(uStack_6c,local_70._1_3_)) {
                                uVar11 = 7;
                              }
                            }
                            else {
                              uVar11 = 0x38;
                            }
                          }
joined_r0x02e91a84:
                        } while ((uVar11 == 1) && (uVar25 = uVar25 + 1, uVar25 < local_68));
                      }
                    }
joined_r0x02e9098c:
                    if (uVar11 == 1) goto LAB_02e90990;
                    break;
                  }
                  if (local_78 == 0x41544144) goto LAB_02e91b84;
                  if (local_78 != 0x44495453) goto LAB_02e922c0;
                  uVar11 = FUN_02e930b8(param_1,local_74);
                }
                else if (local_78 < 0x54494e49) {
                  if (local_78 == 0x474d5453) {
                    uVar11 = FUN_02e93308(param_1,local_74);
                  }
                  else if (local_78 == 0x53564e45) {
                    uVar11 = FUN_02e93cbc(param_1,local_74);
                  }
                  else {
                    if (local_78 != 0x54414c50) goto LAB_02e922c0;
                    uVar11 = FUN_02e940d8(param_1,local_74);
                  }
                }
                else {
                  if (local_78 == 0x58444944) goto LAB_02e91ac4;
                  if (local_78 != 0x54494e49) goto LAB_02e922c0;
                  uVar11 = FUN_02e94234(param_1,local_74);
                }
              }
              else {
                if (local_78 != 0x41544144) {
                  if (local_78 == 0x58444944) {
LAB_02e91ac4:
                    if ((param_4 < 2) || (param_4 == 3)) {
                      lVar28 = *param_3;
                      if (*(int *)(lVar28 + 0x34) == 0) {
                        uVar11 = (local_74 / 0xc) * 0xc;
                        if (uVar4 == 2) {
                          puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
                          uVar16 = *puVar27;
                          if (uVar16 < uVar11) {
                            uVar7 = uVar11;
                            if ((uVar16 & 0x1f) != 0) {
                              uVar7 = uVar11 + 0x1f;
                            }
                            lVar13 = (*DAT_0442d140)(0,uVar7,0x20);
                            *plVar2 = lVar13;
                            if (lVar13 == 0) {
                              lVar13 = 0;
                            }
                            else {
                              uVar7 = 0;
                              if ((uVar16 & 0x1f) != 0) {
                                uVar7 = 0x20 - (uVar16 & 0x1f);
                              }
                              lVar13 = lVar13 + (ulong)uVar7;
                              iVar10 = FUN_02e9b7a4(puVar29,lVar13,uVar11,&local_70);
                              if ((iVar10 != 1) || (local_70 != uVar11)) {
                                (*DAT_0442d158)(0,*plVar2);
                                lVar13 = 0;
                                *plVar2 = 0;
                              }
                            }
                            lVar32 = *(long *)(lVar28 + 0x20);
                          }
                          else {
                            *puVar27 = uVar16 + (local_74 / 0xc) * -0xc;
                            lVar13 = *plVar15;
                            if (lVar13 == 0) {
                              lVar13 = *plVar1;
                              plVar19 = plVar1;
                            }
                            else {
                              plVar19 = plVar15;
                            }
                            *plVar19 = lVar13 + (ulong)uVar11;
                            lVar32 = *(long *)(lVar28 + 0x20);
                          }
                          if (lVar32 == 0) {
                            *(long *)(lVar28 + 0x20) = lVar13;
                          }
                          if (*plVar2 != 0) {
                            (*DAT_0442d158)(0);
                            *plVar2 = 0;
                          }
LAB_02e91b48:
                          uVar11 = 1;
                          lVar13 = *(long *)(lVar28 + 0x20);
                        }
                        else {
                          lVar13 = (*DAT_0442d138)(0,uVar11);
                          *(long *)(lVar28 + 0x20) = lVar13;
                          if (lVar13 != 0) {
                            *(byte *)(lVar28 + 0x68) = *(byte *)(lVar28 + 0x68) | 2;
                            local_70 = 0;
                            FUN_02e9b7a4(puVar29,lVar13,uVar11,&local_70);
                            goto LAB_02e91b48;
                          }
                          uVar11 = 0x34;
                          lVar13 = *(long *)(lVar28 + 0x20);
                        }
                        if (lVar13 != 0) {
                          *(uint *)(lVar28 + 0x38) = uVar25 / 0xc;
                        }
                        goto joined_r0x02e91b6c;
                      }
                      FUN_02e9b658(puVar29,local_74,&local_70);
                    }
                    else {
LAB_02e922b8:
                      if (param_4 == 2) {
LAB_02e922c0:
                        FUN_02e9b658(puVar29,local_74,&local_a4);
                        uVar11 = 7;
                        if (local_a4 == local_74) {
                          uVar11 = 1;
                        }
                        bVar31 = (bool)(bVar31 | local_a4 != local_74);
                        goto joined_r0x02e9098c;
                      }
                    }
LAB_02e925d0:
                    uVar11 = 1;
                    goto LAB_02e90990;
                  }
                  uVar17 = local_a0 & 0xffffffff;
                  goto LAB_02e924f8;
                }
LAB_02e91b84:
                if ((uint)local_a0 < 0x87) {
                  uVar11 = 0x10;
                }
                else {
                  uVar11 = (uint)local_98._4_2_;
                }
                *(uint *)(*param_3 + 0x6c) = uVar11;
                if (param_4 == 0) {
                  uVar17 = (ulong)local_74;
                  if (uVar4 == 2) {
                    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
                    uVar11 = *puVar27;
                    if (uVar11 < local_74) {
                      uVar16 = local_74;
                      if ((uVar11 & 0x1f) != 0) {
                        uVar16 = local_74 + 0x1f;
                      }
                      lVar13 = (*DAT_0442d140)(0,uVar16,0x20);
                      *plVar2 = lVar13;
                      if (lVar13 == 0) {
                        lVar13 = 0;
                      }
                      else {
                        uVar16 = 0;
                        if ((uVar11 & 0x1f) != 0) {
                          uVar16 = 0x20 - (uVar11 & 0x1f);
                        }
                        lVar13 = lVar13 + (ulong)uVar16;
                        iVar10 = FUN_02e9b7a4(puVar29,lVar13,uVar17,&local_70);
                        if ((iVar10 != 1) || (local_70 != uVar25)) {
                          (*DAT_0442d158)(0,*plVar2);
                          lVar13 = 0;
                          *plVar2 = 0;
                        }
                      }
                    }
                    else {
                      *puVar27 = uVar11 - local_74;
                      lVar13 = *plVar15;
                      if (lVar13 == 0) {
                        lVar13 = *plVar1;
                        plVar19 = plVar1;
                      }
                      else {
                        plVar19 = plVar15;
                      }
                      *plVar19 = lVar13 + uVar17;
                    }
                    *(uint *)(*param_3 + 0x28) = local_74;
                    if (*plVar2 != 0) {
                      (*DAT_0442d158)(0);
                      *plVar2 = 0;
                    }
                    lVar28 = *param_3;
                    iVar10 = *(int *)(lVar28 + 0x34);
                  }
                  else {
                    lVar28 = *param_3;
                    if (local_74 != 0) {
                      uVar18 = 3;
                      if ((*(byte *)(lVar28 + 0x68) & 8) != 0) {
                        uVar18 = 0x80000003;
                      }
                      lVar13 = (*DAT_0442d140)(uVar18,uVar17,*(undefined4 *)(lVar28 + 0x6c));
                      *(long *)(lVar28 + 0x18) = lVar13;
                      if (lVar13 == 0) {
                        uVar11 = 0x34;
                        break;
                      }
                      *(uint *)(lVar28 + 0x28) = uVar25;
                      local_70 = 0;
                      uVar11 = FUN_02e9b7a4(puVar29,lVar13,uVar25,&local_70);
                      if (uVar11 != 1) goto joined_r0x02e91b6c;
                      if (local_70 != uVar25) goto LAB_02e91e78;
                      lVar28 = *param_3;
                    }
                    lVar13 = *(long *)(lVar28 + 0x18);
                    iVar10 = *(int *)(lVar28 + 0x34);
                  }
                  if ((iVar10 != 0) ||
                     (uVar17 = (ulong)*(uint *)(lVar28 + 0x38), *(uint *)(lVar28 + 0x38) == 0))
                  goto LAB_02e925d0;
                  lVar32 = *(long *)(lVar28 + 0x20);
                  if (lVar32 == 0) {
                    uVar25 = 0x34;
                  }
                  else {
                    iVar10 = 0;
                    uVar26 = 0;
                    pMVar3 = (MutexType *)(param_1 + 0x68);
                    uVar25 = 0x34;
                    while (puVar27 = (uint *)(lVar32 + uVar26 * 0xc), *puVar27 == 0) {
LAB_02e91df0:
                      uVar26 = uVar26 + 1;
                      iVar10 = iVar10 + 1;
                      *(int *)(lVar28 + 0x34) = iVar10;
                      if (uVar17 <= uVar26) goto LAB_02e91e88;
                      lVar32 = *(long *)(lVar28 + 0x20);
                    }
                    nn::os::LockMutex(pMVar3);
                    uVar11 = *puVar27;
                    uVar16 = *(uint *)(param_1 + 0x98);
                    if ((uVar16 == 0) ||
                       (fVar33 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xa0)),
                       0.9 < fVar33 / (float)uVar16)) {
                      FUN_02e97310(param_1 + 0x88);
                      uVar16 = *(uint *)(param_1 + 0x98);
                      if (uVar16 != 0) goto LAB_02e91ca8;
                    }
                    else {
LAB_02e91ca8:
                      uVar7 = 0;
                      if (uVar16 != 0) {
                        uVar7 = uVar11 / uVar16;
                      }
                      uVar17 = (ulong)(uVar11 - uVar7 * uVar16);
                      for (plVar19 = *(long **)(*(long *)(param_1 + 0x90) + uVar17 * 8);
                          plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
                        if (*(uint *)(plVar19 + 1) == uVar11) {
                          plVar20 = plVar19 + 2;
                          if (*plVar20 == 0) {
                            bVar9 = false;
                            goto LAB_02e91d48;
                          }
                          plVar20 = plVar19 + 6;
                          goto LAB_02e91e14;
                        }
                      }
                      puVar14 = (undefined8 *)(*DAT_0442d138)(0,0x38);
                      if (puVar14 != (undefined8 *)0x0) {
                        lVar21 = uVar17 * 8;
                        bVar9 = true;
                        *puVar14 = *(undefined8 *)(*(long *)(param_1 + 0x90) + lVar21);
                        *(uint *)(puVar14 + 1) = uVar11;
                        plVar20 = puVar14 + 2;
                        *plVar20 = 0;
                        puVar14[3] = 0xffffffff00000000;
                        puVar14[4] = 0;
                        puVar14[5] = 0;
                        *(undefined4 *)(puVar14 + 6) = 1;
                        *(undefined8 **)(*(long *)(param_1 + 0x90) + lVar21) = puVar14;
                        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
LAB_02e91d48:
                        *(uint *)((long)plVar20 + 0x24) = *puVar27;
                        uVar25 = *(uint *)(plVar20 + 3);
                        uVar11 = *(uint *)((long)plVar20 + 0x1c);
                        lVar32 = lVar32 + uVar26 * 0xc;
                        uVar16 = *(uint *)(lVar32 + 4);
                        uVar18 = *(undefined4 *)(lVar32 + 8);
                        if (uVar25 < uVar11) {
LAB_02e91da0:
                          if (uVar25 < uVar11) {
                            uVar11 = *(uint *)(plVar20 + 3);
                            plVar19 = (long *)plVar20[2];
                            *(uint *)(plVar20 + 3) = uVar11 + 1;
                            if (uVar11 != 0) {
                              plVar23 = plVar19 + (ulong)uVar11 * 3;
                              do {
                                plVar22 = plVar23 + -3;
                                plVar23[2] = plVar23[-1];
                                *plVar23 = *plVar22;
                                plVar23[1] = plVar23[-2];
                                plVar19 = (long *)plVar20[2];
                                plVar23 = plVar22;
                              } while (plVar19 < plVar22);
                            }
                            if (plVar19 != (long *)0x0) {
                              *plVar19 = lVar13 + (ulong)uVar16;
                              *(undefined4 *)(plVar19 + 1) = uVar18;
                              *(undefined4 *)((long)plVar19 + 0xc) = 0xffffffff;
                              plVar19[2] = lVar28;
                              if (bVar9) {
                                uVar25 = 1;
                              }
                              else {
                                plVar20 = plVar20 + 4;
                                uVar25 = 1;
LAB_02e91e14:
                                *(int *)plVar20 = (int)*plVar20 + 1;
                              }
                              nn::os::UnlockMutex(pMVar3);
                              iVar10 = *(int *)(lVar28 + 0x34);
                              uVar17 = (ulong)*(uint *)(lVar28 + 0x38);
                              goto LAB_02e91df0;
                            }
                          }
                        }
                        else {
                          iVar10 = uVar11 + (uVar11 >> 1);
                          if (uVar11 == 0) {
                            iVar10 = 1;
                          }
                          uVar11 = iVar10 + uVar11;
                          lVar32 = (*DAT_0442d148)(0,plVar20[2],(ulong)uVar11 * 0x18);
                          if (lVar32 != 0) {
                            plVar20[2] = lVar32;
                            *(uint *)((long)plVar20 + 0x1c) = uVar11;
                            goto LAB_02e91da0;
                          }
                        }
                        FUN_02e96110(param_1 + 0x88,*puVar27);
                        uVar25 = 0x34;
                      }
                    }
                    nn::os::UnlockMutex(pMVar3);
                    uVar17 = (ulong)*(uint *)(lVar28 + 0x38);
LAB_02e91e88:
                    uVar11 = 1;
                    if ((uVar25 == 1) || ((int)uVar17 == (int)uVar26)) goto joined_r0x02e91b6c;
                  }
                  FUN_02e8e6dc(param_1,lVar28);
                  uVar11 = uVar25;
                }
                else {
                  if ((param_4 != 1) && (param_4 != 3)) goto LAB_02e922b8;
                  uVar11 = FUN_02e92ce4(param_1,*param_3,local_74,param_6 & 1);
                }
              }
joined_r0x02e91b6c:
              if (uVar11 != 1) break;
            }
            else {
              if (local_a4 != 0) {
LAB_02e91e78:
                uVar11 = 7;
                break;
              }
              uVar11 = 1;
              bVar31 = true;
            }
LAB_02e90990:
          } while (!bVar31);
          goto LAB_02e925dc;
        }
LAB_02e924f8:
        FUN_02e904b0(uVar17);
        uVar11 = 0x40;
        plVar15 = *(long **)(param_1 + 0x48);
        goto joined_r0x02e924cc;
      }
    }
  }
LAB_02e925dc:
  plVar15 = *(long **)(param_1 + 0x48);
joined_r0x02e924cc:
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x10))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *puVar29 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
LAB_02e92600:
  return (ulong)uVar11;
}


