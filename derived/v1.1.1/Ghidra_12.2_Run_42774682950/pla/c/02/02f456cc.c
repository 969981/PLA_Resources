/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f456cc; name: FUN_02f456cc
 */


void FUN_02f456cc(long *param_1,int param_2,long *param_3,long *param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  bool bVar3;
  MutexType *pMVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  code *pcVar14;
  undefined8 uVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  uint uVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  undefined4 uVar26;
  undefined8 *puVar27;
  int *piVar28;
  double dVar29;
  double dVar30;
  int local_3e4;
  undefined8 *local_3e0;
  long *local_3d8;
  long *local_3c0;
  char local_3b8;
  int local_3b4;
  uint local_3ac;
  undefined8 *local_398;
  long *local_390;
  undefined8 *local_380;
  undefined4 local_370;
  undefined4 local_36c;
  int local_368;
  uint uStack_364;
  undefined4 local_360;
  undefined1 local_35c;
  undefined8 local_358;
  undefined1 auStack_350 [4];
  int local_34c;
  int local_348;
  undefined1 auStack_344 [4];
  int local_340;
  undefined1 local_33c;
  undefined4 local_338;
  undefined1 local_334;
  undefined8 local_330;
  ulong local_328;
  byte local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  byte bStack_304;
  undefined8 local_300;
  undefined5 uStack_2f8;
  undefined3 local_2f3;
  undefined4 uStack_2f0;
  byte bStack_2ec;
  undefined8 local_2e8;
  undefined8 local_2e0;
  byte local_2d8;
  undefined8 local_2d0;
  long local_2c8 [32];
  uint local_1c8;
  long local_1c0;
  long *local_1b8;
  uint local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  int local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_98;
  long local_90;
  long *local_88;
  undefined4 local_80;
  undefined8 local_78;
  uint3 local_70;
  undefined1 uStack_6d;
  
  lVar25 = *(long *)(param_1[0xc] + 8);
  lVar8 = FUN_02f3c75c();
  local_1c8 = 0;
  local_1a8 = 0;
  local_1b8 = (long *)0x0;
  local_1c0 = 0;
  local_1b0 = 0;
  local_1a0 = 1;
  (**(code **)(*param_1 + 0xb8))(param_1,local_2c8,0);
  local_1a0._0_3_ = CONCAT12(1,(undefined2)local_1a0);
  if (local_1c0 == 0) {
    (**(code **)(*(long *)*param_4 + 0x10))((long *)*param_4,0);
    *param_4 = 0;
    return;
  }
  plVar20 = (long *)param_1[0x15];
  if (plVar20 == (long *)0x0) {
    local_390 = (long *)0x0;
    local_3d8 = (long *)0x0;
  }
  else {
    plVar24 = param_1 + 0x13;
    plVar18 = (long *)*plVar24;
    plVar11 = plVar18;
    if ((plVar18 != (long *)0x0) && (plVar20 != plVar18)) {
      do {
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0 && plVar20 != plVar11);
    }
    if (plVar11 == (long *)0x0) {
      local_3d8 = (long *)0x0;
LAB_02f45f90:
      local_390 = (long *)0x0;
    }
    else {
      local_3d8 = (long *)*plVar11;
      if (local_3d8 == (long *)0x0) goto LAB_02f45f90;
      local_390 = (long *)0x0;
      plVar20 = (long *)0x0;
      while( true ) {
        plVar23 = (long *)*local_3d8;
        plVar22 = plVar24;
        if (plVar18 != local_3d8) {
          plVar22 = plVar11;
        }
        *plVar22 = (long)plVar23;
        if ((long *)param_1[0x12] == local_3d8) {
          param_1[0x12] = (long)plVar11;
        }
        *local_3d8 = 0;
        plVar18 = local_3d8;
        if (local_390 != (long *)0x0) {
          *plVar20 = (long)local_3d8;
          plVar18 = local_390;
        }
        local_390 = plVar18;
        if (plVar23 == (long *)0x0) break;
        plVar18 = (long *)*plVar24;
        plVar20 = local_3d8;
        local_3d8 = plVar23;
      }
    }
    (**(code **)(*param_1 + 0xc0))(param_1,local_2c8);
  }
  plVar20 = (long *)param_1[0x14];
  lVar25 = lVar25 - lVar8;
  if ((long *)*plVar20 != (long *)0x0) {
    plVar11 = (long *)*plVar20;
    plVar24 = plVar20;
    do {
      plVar18 = plVar11;
      uVar9 = (**(code **)(*(long *)plVar24[1] + 0xd8))();
      if (((uVar9 & 1) == 0) ||
         ((*(byte *)(plVar18[1] + 0x5a) & 3) != 0 && (*(byte *)(plVar18[1] + 0x5a) & 0x10) == 0)) {
        plVar20 = plVar18;
      }
      plVar11 = (long *)*plVar18;
      plVar24 = plVar18;
    } while ((long *)*plVar18 != (long *)0x0);
  }
  if ((*param_3 == 0) && (*(char *)(param_1[0xf] + 0x140) != '\0')) {
    lVar8 = (**(code **)(*(long *)plVar20[1] + 0xd0))();
    if (lVar8 == 0) {
      if (param_2 != 0) goto LAB_02f457b0;
    }
    else if (*(int *)(lVar8 + 0x10) != param_2) goto LAB_02f457b0;
  }
  else {
LAB_02f457b0:
    uVar9 = (**(code **)(*(long *)plVar20[1] + 0xd8))();
    uVar2 = local_1b0;
    if ((uVar9 & 1) != 0) {
      uVar9 = (ulong)local_1b0;
      local_1b0 = local_1b0 + 1;
      plVar24 = param_1 + 0x13;
      plVar11 = (long *)*plVar24;
      if ((plVar11 != (long *)0x0) && (plVar11 != plVar20)) {
        do {
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0 && plVar11 != plVar20);
      }
      if (uVar2 == local_1c8) {
        if (plVar11 != (long *)0x0) goto LAB_02f46520;
      }
      else if (plVar11 != (long *)local_2c8[uVar9]) {
LAB_02f46520:
        if (uVar2 == local_1c8) {
          local_1c0 = 0;
          local_1b8 = (long *)0x0;
          local_2c8[uVar9] = (long)plVar11;
LAB_02f46538:
          local_1c8 = local_1c8 + 1;
        }
        else if ((long *)local_2c8[uVar9] != plVar11) {
          local_1c0 = 0;
          local_1b8 = (long *)0x0;
          uVar19 = local_1c8 - 1;
          if ((int)uVar2 <= (int)uVar19) {
            uVar17 = uVar19;
            if ((int)uVar2 <= (int)(local_1c8 - 2)) {
              do {
                uVar19 = uVar17 - 1;
                iVar7 = uVar17 - 2;
                uVar17 = uVar19;
              } while ((int)uVar2 <= iVar7);
            }
            local_1c8 = uVar19;
          }
          local_2c8[local_1c8] = (long)plVar11;
          goto LAB_02f46538;
        }
        (**(code **)(*(long *)plVar11[1] + 0xb8))((long *)plVar11[1],local_2c8,0);
      }
      local_1b0 = local_1b0 - 1;
      local_3e0 = (undefined8 *)0x0;
      piVar28 = (int *)0x0;
      puVar27 = (undefined8 *)0x0;
      local_3c0 = (long *)0x0;
      local_3b4 = -1;
      local_398 = (undefined8 *)0x0;
      local_380 = (undefined8 *)0x0;
      local_2d0 = 0;
      local_340 = 0;
      local_33c = 0;
      local_338 = 0;
      local_334 = 0;
      bVar3 = true;
      local_3ac = 0;
      do {
        local_3ac = local_3ac + 1;
        if (local_3ac < 0x41) {
          plVar11 = (long *)*param_4;
          if (*(long *)(local_1c0 + 0x18) == 0) {
            lVar8 = (**(code **)(*local_1b8 + 0xd0))();
            if (lVar8 == 0) {
              lVar8 = (**(code **)(*(long *)local_1b8[2] + 0xd0))();
            }
            uVar26 = 0;
          }
          else {
            lVar12 = *(long *)(*(long *)(local_1c0 + 0x18) + 0x78);
            lVar8 = *(long *)(lVar12 + 0x80);
            if (lVar12 == 0) {
              uVar26 = 0;
            }
            else {
              uVar26 = *(undefined4 *)(lVar12 + 0x10);
            }
          }
          local_98 = 0;
          local_78 = 0;
          local_80 = 0;
          local_90 = 0;
          local_88 = (long *)0x0;
          _local_70 = 0x1000001;
          (**(code **)(*plVar11 + 0xb8))(plVar11,&local_198,0);
          local_70 = (uint3)(ushort)local_70;
          if (*(long *)(local_90 + 0x18) == 0) {
            plVar11 = (long *)(**(code **)(*local_88 + 0xd0))();
            if (plVar11 == (long *)0x0) {
              plVar11 = (long *)(**(code **)(*(long *)local_88[2] + 0xd0))();
            }
            iVar7 = 0;
          }
          else {
            lVar12 = *(long *)(*(long *)(local_90 + 0x18) + 0x78);
            plVar11 = *(long **)(lVar12 + 0x80);
            if (lVar12 == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(lVar12 + 0x10);
            }
          }
          lVar8 = FUN_02f4b408(param_1[0xf],param_1[0xf],uVar26,lVar8,iVar7,plVar11);
          if ((plVar11 == (long *)0x0) ||
             (iVar6 = (**(code **)(*plVar11 + 0x88))(plVar11), iVar6 != 8)) {
            local_3b8 = '\0';
          }
          else {
            local_3b8 = **(int **)(lVar8 + 0x10) != iVar7;
          }
        }
        else {
          lVar8 = FUN_02f4b5f0();
          plVar11 = (long *)0x0;
        }
        iVar7 = *(int *)(lVar8 + 0x58);
        if (iVar7 != local_3b4) {
          if (local_380 == (undefined8 *)0x0) {
LAB_02f45948:
            puVar27 = (undefined8 *)0x0;
            local_380 = (undefined8 *)0x0;
          }
          else {
            if (local_398 == (undefined8 *)0x0) {
              plVar18 = (long *)local_380[1];
              local_380[1] = 0;
              if (plVar18 != (long *)0x0) {
                iVar6 = (int)plVar18[9] + -1;
                *(int *)(plVar18 + 9) = iVar6;
                if (iVar6 == 0) {
                  if (plVar18[2] == 0) {
                    FUN_02f37eb4(plVar18);
                  }
                  else {
                    FUN_02f3b8c0(plVar18[2],plVar18);
                    plVar18[2] = 0;
                  }
                  (**(code **)(*plVar18 + 0x50))(plVar18);
                  (*DAT_0442d150)(0,plVar18);
                }
                plVar18 = (long *)local_380[1];
                if (plVar18 != (long *)0x0) {
                  iVar6 = (int)plVar18[9] + -1;
                  *(int *)(plVar18 + 9) = iVar6;
                  if (iVar6 == 0) {
                    if (plVar18[2] == 0) {
                      FUN_02f37eb4(plVar18);
                    }
                    else {
                      FUN_02f3b8c0(plVar18[2],plVar18);
                      plVar18[2] = 0;
                    }
                    (**(code **)(*plVar18 + 0x50))(plVar18);
                    (*DAT_0442d150)(0,plVar18);
                  }
                  local_380[1] = 0;
                }
              }
              (*DAT_0442d150)(0,puVar27);
              local_3e0 = (undefined8 *)0x0;
              local_398 = (undefined8 *)0x0;
              goto LAB_02f45948;
            }
            *(byte *)(local_380 + 10) = *(byte *)(local_380 + 10) & 0xfc;
            (**(code **)(*(long *)local_380[1] + 0x10))((long *)local_380[1],0);
            plVar18 = (long *)local_380[1];
            local_380[1] = 0;
            if (plVar18 != (long *)0x0) {
              iVar6 = (int)plVar18[9] + -1;
              *(int *)(plVar18 + 9) = iVar6;
              if (iVar6 == 0) {
                if (plVar18[2] == 0) {
                  FUN_02f37eb4(plVar18);
                }
                else {
                  FUN_02f3b8c0(plVar18[2],plVar18);
                  plVar18[2] = 0;
                }
                (**(code **)(*plVar18 + 0x50))(plVar18);
                (*DAT_0442d150)(0,plVar18);
              }
              plVar18 = (long *)local_380[1];
              if (plVar18 != (long *)0x0) {
                iVar6 = (int)plVar18[9] + -1;
                *(int *)(plVar18 + 9) = iVar6;
                if (iVar6 == 0) {
                  if (plVar18[2] == 0) {
                    FUN_02f37eb4(plVar18);
                  }
                  else {
                    FUN_02f3b8c0(plVar18[2],plVar18);
                    plVar18[2] = 0;
                  }
                  (**(code **)(*plVar18 + 0x50))(plVar18);
                  (*DAT_0442d150)(0,plVar18);
                }
                local_380[1] = 0;
              }
            }
            (*DAT_0442d150)(0,puVar27);
            plVar18 = (long *)local_398[1];
            local_398[1] = 0;
            if (plVar18 != (long *)0x0) {
              iVar6 = (int)plVar18[9] + -1;
              *(int *)(plVar18 + 9) = iVar6;
              if (iVar6 == 0) {
                if (plVar18[2] == 0) {
                  FUN_02f37eb4(plVar18);
                }
                else {
                  FUN_02f3b8c0(plVar18[2],plVar18);
                  plVar18[2] = 0;
                }
                (**(code **)(*plVar18 + 0x50))(plVar18);
                (*DAT_0442d150)(0,plVar18);
              }
              plVar18 = (long *)local_398[1];
              if (plVar18 != (long *)0x0) {
                iVar6 = (int)plVar18[9] + -1;
                *(int *)(plVar18 + 9) = iVar6;
                if (iVar6 == 0) {
                  if (plVar18[2] == 0) {
                    FUN_02f37eb4(plVar18);
                  }
                  else {
                    FUN_02f3b8c0(plVar18[2],plVar18);
                    plVar18[2] = 0;
                  }
                  (**(code **)(*plVar18 + 0x50))(plVar18);
                  (*DAT_0442d150)(0,plVar18);
                }
                local_398[1] = 0;
              }
            }
            (*DAT_0442d150)(0,local_3e0);
            local_3e0 = (undefined8 *)0x0;
            local_398 = (undefined8 *)0x0;
          }
          pMVar4 = DAT_0440a120;
          if ((*(byte *)(local_1c0 + 0x44) >> 2 & 1) != 0) break;
          if (*(uint **)(lVar8 + 0x50) == (uint *)0x0) {
            lVar12 = *param_4;
            puVar27 = (undefined8 *)(*DAT_0442d138)(0,0x58);
            if (puVar27 == (undefined8 *)0x0) {
              local_380 = (undefined8 *)0x0;
              break;
            }
          }
          else {
            uVar2 = **(uint **)(lVar8 + 0x50);
            nn::os::LockMutex(DAT_0440a120);
            uVar19 = *(uint *)(pMVar4 + 0x28);
            if (uVar19 != 0) {
              uVar17 = 0;
              if (uVar19 != 0) {
                uVar17 = uVar2 / uVar19;
              }
              for (plVar18 = *(long **)(*(long *)(pMVar4 + 0x20) +
                                       (ulong)(uVar2 - uVar17 * uVar19) * 8); plVar18 != (long *)0x0
                  ; plVar18 = (long *)plVar18[1]) {
                if (*(uint *)(plVar18 + 2) == uVar2) {
                  *(int *)((long)plVar18 + 0x14) = *(int *)((long)plVar18 + 0x14) + 1;
                  nn::os::UnlockMutex(pMVar4);
                  lVar12 = param_1[0xc];
                  local_3c0 = (long *)(**(code **)(*plVar18 + 0x268))
                                                (plVar18,param_1,*(undefined8 *)(lVar12 + 0x30),
                                                 lVar12 + 0x18,*(undefined1 *)(lVar12 + 0x38));
                  (**(code **)(*plVar18 + 0x18))(plVar18);
                  if (local_3c0 == (long *)0x0) goto LAB_02f46198;
                  puVar27 = (undefined8 *)(*DAT_0442d138)(0,0x58);
                  if (puVar27 == (undefined8 *)0x0) {
                    local_380 = (undefined8 *)0x0;
                  }
                  else {
                    *puVar27 = 0;
                    puVar27[1] = local_3c0;
                    *(int *)(local_3c0 + 9) = (int)local_3c0[9] + 1;
                    puVar27[8] = 0x400000000;
                    puVar27[2] = 0;
                    *(undefined1 *)(puVar27 + 3) = 0;
                    *(undefined1 *)(puVar27 + 9) = 0;
                    *(byte *)(puVar27 + 10) = *(byte *)(puVar27 + 10) & 0xf8;
                    local_380 = puVar27;
                  }
                  lVar12 = *param_4;
                  local_3e0 = (undefined8 *)(*DAT_0442d138)(0,0x58);
                  if (local_3e0 == (undefined8 *)0x0) {
                    if (local_380 != (undefined8 *)0x0) {
                      *(byte *)(local_380 + 10) = *(byte *)(local_380 + 10) & 0xfc;
                      (**(code **)(*(long *)local_380[1] + 0x10))((long *)local_380[1],0);
                      plVar18 = (long *)local_380[1];
                      local_380[1] = 0;
                      if (plVar18 != (long *)0x0) {
                        iVar6 = (int)plVar18[9] + -1;
                        *(int *)(plVar18 + 9) = iVar6;
                        if (iVar6 == 0) {
                          if (plVar18[2] == 0) {
                            FUN_02f37eb4(plVar18);
                          }
                          else {
                            FUN_02f3b8c0(plVar18[2],plVar18);
                            plVar18[2] = 0;
                          }
                          (**(code **)(*plVar18 + 0x50))(plVar18);
                          (*DAT_0442d150)(0,plVar18);
                        }
                        plVar18 = (long *)local_380[1];
                        if (plVar18 != (long *)0x0) {
                          iVar6 = (int)plVar18[9] + -1;
                          *(int *)(plVar18 + 9) = iVar6;
                          if (iVar6 == 0) {
                            if (plVar18[2] == 0) {
                              FUN_02f37eb4(plVar18);
                            }
                            else {
                              FUN_02f3b8c0(plVar18[2],plVar18);
                              plVar18[2] = 0;
                            }
                            (**(code **)(*plVar18 + 0x50))(plVar18);
                            (*DAT_0442d150)(0,plVar18);
                          }
                          local_380[1] = 0;
                        }
                      }
                      goto LAB_02f465e4;
                    }
                    (**(code **)(*local_3c0 + 0x10))(local_3c0,0);
                  }
                  else {
                    *local_3e0 = 0;
                    local_3e0[1] = lVar12;
                    if (lVar12 != 0) {
                      *(int *)(lVar12 + 0x48) = *(int *)(lVar12 + 0x48) + 1;
                    }
                    local_3e0[8] = 0x400000000;
                    local_3e0[2] = 0;
                    *(undefined1 *)(local_3e0 + 3) = 0;
                    *(undefined1 *)(local_3e0 + 9) = 0;
                    *(byte *)(local_3e0 + 10) = *(byte *)(local_3e0 + 10) & 0xf8;
                    if (local_380 != (undefined8 *)0x0) {
                      local_398 = local_3e0;
                      goto LAB_02f459c4;
                    }
                    (**(code **)(*local_3c0 + 0x10))(local_3c0,0);
                    plVar18 = (long *)local_3e0[1];
                    local_3e0[1] = 0;
                    if (plVar18 != (long *)0x0) {
                      iVar6 = (int)plVar18[9] + -1;
                      *(int *)(plVar18 + 9) = iVar6;
                      if (iVar6 == 0) {
                        if (plVar18[2] == 0) {
                          FUN_02f37eb4(plVar18);
                        }
                        else {
                          FUN_02f3b8c0(plVar18[2],plVar18);
                          plVar18[2] = 0;
                        }
                        (**(code **)(*plVar18 + 0x50))(plVar18);
                        (*DAT_0442d150)(0,plVar18);
                      }
                      plVar18 = (long *)local_3e0[1];
                      if (plVar18 != (long *)0x0) {
                        iVar6 = (int)plVar18[9] + -1;
                        *(int *)(plVar18 + 9) = iVar6;
                        if (iVar6 == 0) {
                          if (plVar18[2] == 0) {
                            FUN_02f37eb4(plVar18);
                          }
                          else {
                            FUN_02f3b8c0(plVar18[2],plVar18);
                            plVar18[2] = 0;
                          }
                          (**(code **)(*plVar18 + 0x50))(plVar18);
                          (*DAT_0442d150)(0,plVar18);
                        }
                        local_3e0[1] = 0;
                      }
                    }
                    puVar27 = local_3e0;
LAB_02f465e4:
                    (*DAT_0442d150)(0,puVar27);
                  }
                  lVar12 = *param_4;
                  puVar27 = (undefined8 *)(*DAT_0442d138)(0,0x58);
                  if (puVar27 == (undefined8 *)0x0) {
                    local_3e0 = (undefined8 *)0x0;
                    local_398 = (undefined8 *)0x0;
                    goto LAB_02f468c4;
                  }
                  *puVar27 = 0;
                  puVar27[1] = lVar12;
                  if (lVar12 != 0) {
                    local_3e0 = (undefined8 *)0x0;
                    local_398 = (undefined8 *)0x0;
                    goto LAB_02f45990;
                  }
                  local_3e0 = (undefined8 *)0x0;
                  local_398 = (undefined8 *)0x0;
                  goto LAB_02f4599c;
                }
              }
            }
            nn::os::UnlockMutex(pMVar4);
LAB_02f46198:
            lVar12 = *param_4;
            puVar27 = (undefined8 *)(*DAT_0442d138)(0,0x58);
            if (puVar27 == (undefined8 *)0x0) {
LAB_02f468c4:
              local_380 = (undefined8 *)0x0;
              break;
            }
          }
          *puVar27 = 0;
          puVar27[1] = lVar12;
          if (lVar12 != 0) {
LAB_02f45990:
            *(int *)(lVar12 + 0x48) = *(int *)(lVar12 + 0x48) + 1;
          }
LAB_02f4599c:
          puVar27[8] = 0x400000000;
          local_3c0 = (long *)0x0;
          puVar27[2] = 0;
          *(undefined1 *)(puVar27 + 3) = 0;
          *(undefined1 *)(puVar27 + 9) = 0;
          *(byte *)(puVar27 + 10) = *(byte *)(puVar27 + 10) & 0xf8;
          local_380 = puVar27;
LAB_02f459c4:
          local_2e8 = *(undefined8 *)(lVar8 + 0x20);
          local_2e0 = *(ulong *)(lVar8 + 0x28);
          local_2d8 = *(byte *)(lVar8 + 0x30);
          local_300 = *(undefined8 *)(lVar8 + 0x34);
          uVar15 = *(undefined8 *)(lVar8 + 0x3c);
          uStack_2f0 = (undefined4)((ulong)*(undefined8 *)(lVar8 + 0x41) >> 0x18);
          bStack_2ec = (byte)((ulong)*(undefined8 *)(lVar8 + 0x41) >> 0x38);
          uStack_2f8 = (undefined5)uVar15;
          local_2f3 = (undefined3)((ulong)uVar15 >> 0x28);
          lVar12 = *(long *)(lVar8 + 0x50);
          if (lVar12 == 0) {
            local_310 = (undefined4)uVar15;
            uStack_30c = (undefined4)((ulong)uVar15 >> 0x20);
            uStack_308 = uStack_2f0;
            bStack_304 = bStack_2ec;
            local_320 = local_2d8;
            local_330 = local_2e8;
            local_328 = local_2e0;
            local_318 = local_300;
          }
          else {
            local_318 = *(undefined8 *)(lVar12 + 4);
            local_310 = *(undefined4 *)(lVar12 + 0xc);
            uStack_30c = 0;
            bStack_304 = bStack_304 & 7 | (*(byte *)(lVar12 + 0x1c) & 1) << 6;
            local_330 = *(undefined8 *)(lVar12 + 0x10);
            local_328 = (ulong)*(uint *)(lVar12 + 0x18);
            local_320 = local_320 & 0xc0 | (*(byte *)(lVar12 + 0x1c) >> 1 & 1) << 5 | 7;
          }
          if ((char)param_3[1] == '\0') {
            if (plVar11 != (long *)0x0) goto LAB_02f45a28;
LAB_02f467f0:
            piVar28 = (int *)0x0;
          }
          else {
            bStack_2ec = (*(byte *)((long)param_3 + 0xc) & 7) << 3 | bStack_2ec & 199;
            if (plVar11 == (long *)0x0) goto LAB_02f467f0;
LAB_02f45a28:
            piVar28 = (int *)(**(code **)(*param_1 + 0xa0))(param_1,(int)plVar11[2]);
          }
          piVar13 = (int *)*param_3;
          if (piVar13 == (int *)0x0) {
            if ((piVar28 == (int *)0x0) || ((bStack_2ec & 0x38) != 0x20)) {
              local_340 = 0;
            }
            else {
              local_340 = *piVar28;
            }
            local_33c = 0;
          }
          else {
            local_340 = *piVar13;
            local_33c = (undefined1)piVar13[1];
          }
          if ((bStack_2ec & 7) == 1) {
            local_338 = *(undefined4 *)(lVar8 + 0x44);
          }
          local_3b4 = iVar7;
          if (((local_3b8 != '\0') && (piVar28 != (int *)0x0)) && ((bStack_2ec & 6) == 2)) {
            local_334 = 1;
          }
        }
        iVar7 = (**(code **)(*(long *)*param_4 + 0xb0))
                          ((long *)*param_4,&local_300,piVar28,&local_340,&local_348,auStack_344,0,0
                          );
        if (iVar7 == 2) {
          iVar7 = 3;
          local_3e4 = 2;
        }
        else if (iVar7 == 0) {
          *param_4 = 0;
          iVar7 = 2;
        }
        else {
          local_98 = 0;
          local_78 = 0;
          local_80 = 0;
          local_358 = 0;
          local_90 = 0;
          local_88 = (long *)0x0;
          _local_70 = 0x1000001;
          if (local_398 == (undefined8 *)0x0) {
            lVar12 = 0;
            auVar1 = SEXT816((long)((ulong)DAT_042ab258 * (long)(int)local_2e8)) *
                     SEXT816(0x20c49ba5e353f7cf);
            local_34c = local_348;
            iVar7 = ((int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f)) - (int)local_2e0;
            if (iVar7 <= local_348) {
              iVar7 = local_348;
            }
            lVar8 = lVar25 + iVar7;
          }
          else {
            local_368 = 0;
            uStack_364 = uStack_364 & 0xffffff00;
            local_360 = 0;
            local_35c = 0;
            (**(code **)(*local_3c0 + 0xb0))
                      (local_3c0,&local_318,0,&local_368,&local_34c,auStack_350,0,0);
            lVar8 = FUN_02f48328(lVar25,&local_2e8,local_34c,local_3c0,&local_330,local_348);
            auVar1 = SEXT816((long)((ulong)DAT_042ab258 * (long)(int)local_330)) *
                     SEXT816(0x20c49ba5e353f7cf);
            iVar7 = ((int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f)) - (int)local_328;
            if (iVar7 <= local_348) {
              iVar7 = local_348;
            }
            lVar12 = lVar25 + iVar7;
          }
          local_370 = 0;
          bVar10 = local_2d8;
          while( true ) {
            uVar2 = (uint)(int)(char)bStack_2ec >> 3 & 7;
            bVar5 = true;
            if (uVar2 != 1) {
              if ((char)bStack_2ec < 0) {
                bVar5 = (uVar2 | 1) == 3;
              }
              else {
                bVar5 = false;
              }
            }
            local_36c = local_2e0._4_4_;
            local_3e4 = FUN_02f4f0f4(local_2c8,lVar8,bVar10 & 0x1f,&local_36c,bVar5 ^ 1,1,&local_368
                                    );
            if (local_3e4 == 3) {
              if (local_1a0._2_1_ == '\0') {
                local_3e4 = 3;
              }
              else {
                plVar18 = (long *)*plVar24;
                plVar11 = plVar18;
                if ((plVar18 != (long *)0x0) && (plVar20 != plVar18)) {
                  do {
                    plVar11 = (long *)*plVar11;
                  } while (plVar11 != (long *)0x0 && plVar20 != plVar11);
                }
                if (plVar11 != (long *)0x0) {
                  plVar22 = (long *)*plVar11;
                  if ((long *)*plVar11 != (long *)0x0) {
                    while( true ) {
                      plVar16 = plVar22;
                      plVar23 = plVar24;
                      if (plVar18 != plVar16) {
                        plVar23 = plVar11;
                      }
                      plVar22 = (long *)*plVar16;
                      *plVar23 = (long)plVar22;
                      if ((long *)param_1[0x12] == plVar16) {
                        param_1[0x12] = (long)plVar11;
                      }
                      *plVar16 = 0;
                      plVar18 = plVar16;
                      if (local_390 != (long *)0x0) {
                        *local_3d8 = (long)plVar16;
                        plVar18 = local_390;
                      }
                      local_390 = plVar18;
                      local_3d8 = plVar16;
                      if (plVar22 == (long *)0x0) break;
                      plVar18 = (long *)*plVar24;
                    }
                    bVar10 = local_2d8;
                  }
                }
                (**(code **)(*param_1 + 0xc0))(param_1,local_2c8);
                uVar2 = (uint)(int)(char)bStack_2ec >> 3 & 7;
                bVar5 = true;
                if (uVar2 != 1) {
                  if ((char)bStack_2ec < 0) {
                    bVar5 = (uVar2 | 1) == 3;
                  }
                  else {
                    bVar5 = false;
                  }
                }
                local_3e4 = FUN_02f4f0f4(local_2c8,lVar8,bVar10 & 0x1f,&local_36c,bVar5 ^ 1,1,
                                         &local_368);
              }
            }
            local_98 = 0;
            local_78 = 0;
            local_80 = 0;
            local_90 = 0;
            local_88 = (long *)0x0;
            _local_70 = 0x1000001;
            if ((local_398 != (undefined8 *)0x0) && (local_3e4 == 1)) {
              FUN_02f47e90(local_380,CONCAT44(uStack_364,local_368),&local_198);
              local_3e4 = FUN_02f4f0f4(&local_198,lVar12,local_320 & 0x1f,&local_370,1,1,&local_358)
              ;
            }
            uVar2 = (uint)(int)(char)bStack_2ec >> 3 & 7;
            bVar5 = true;
            if (uVar2 != 1) break;
LAB_02f46830:
            if (((local_3e4 != 1) || (!bVar5)) || (*param_3 != 0)) goto LAB_02f45be4;
            if (*(long *)(local_1c0 + 0x18) == 0) goto LAB_02f45bec;
            if ((bStack_2ec & 0x38) == 8) {
              if (local_1c8 == 0) {
                iVar7 = 0;
              }
              else {
                lVar8 = *(long *)(*(long *)(local_2c8[0] + 8) + 0x68);
                iVar7 = (int)lVar8;
                if (local_1c8 != 1) {
                  lVar21 = (ulong)local_1c8 - 1;
                  plVar11 = local_2c8 + 1;
                  do {
                    lVar21 = lVar21 + -1;
                    lVar8 = *(long *)(*(long *)(*plVar11 + 8) + 0x68) + lVar8;
                    iVar7 = (int)lVar8;
                    plVar11 = plVar11 + 1;
                  } while (lVar21 != 0);
                }
              }
              local_33c = 0;
              local_340 = (int)local_1b8[0x11] + ((local_368 - iVar7) - *(int *)(local_1c0 + 8));
              plVar11 = (long *)*param_4;
              pcVar14 = *(code **)(*plVar11 + 0xb0);
              uVar26 = 0;
            }
            else {
              plVar11 = (long *)*param_4;
              pcVar14 = *(code **)(*plVar11 + 0xb0);
              uVar26 = local_36c;
            }
            (*pcVar14)(plVar11,&local_300,piVar28,&local_340,&local_348,auStack_344,uVar26,1);
            if (local_398 == (undefined8 *)0x0) {
              local_34c = local_348;
              iVar7 = local_348;
            }
            else {
              iVar7 = FUN_02f48410(local_3c0,local_34c,local_348);
            }
            if ((long)iVar7 <= CONCAT44(uStack_364,local_368) - lVar25) goto LAB_02f45bec;
            lVar8 = lVar25 + iVar7;
          }
          if ((char)bStack_2ec < 0) {
            bVar5 = (uVar2 | 1) == 3;
            goto LAB_02f46830;
          }
LAB_02f45be4:
          if (local_3e4 != 1) {
            (**(code **)(*param_1 + 0xb8))(param_1,local_2c8,0);
            iVar7 = 0;
            local_3b4 = -1;
            goto LAB_02f45d60;
          }
LAB_02f45bec:
          uVar2 = local_1b0;
          uVar9 = (ulong)local_1b0;
          local_1b0 = local_1b0 + 1;
          if (uVar2 == local_1c8) {
            plVar20 = (long *)0x0;
          }
          else {
            plVar20 = (long *)local_2c8[uVar9];
          }
          plVar18 = (long *)*plVar24;
          plVar11 = plVar18;
          if ((plVar18 != (long *)0x0) && (plVar18 != plVar20)) {
            do {
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0 && plVar11 != plVar20);
          }
          if (plVar11 == (long *)0x0) {
LAB_02f45c34:
            plVar23 = local_390;
          }
          else {
            plVar22 = (long *)*plVar11;
            if ((long *)*plVar11 == (long *)0x0) goto LAB_02f45c34;
            while( true ) {
              plVar16 = plVar22;
              plVar23 = plVar24;
              if (plVar18 != plVar16) {
                plVar23 = plVar11;
              }
              plVar22 = (long *)*plVar16;
              *plVar23 = (long)plVar22;
              if ((long *)param_1[0x12] == plVar16) {
                param_1[0x12] = (long)plVar11;
              }
              *plVar16 = 0;
              plVar23 = plVar16;
              if (local_390 != (long *)0x0) {
                *local_3d8 = (long)plVar16;
                plVar23 = local_390;
              }
              local_3d8 = plVar16;
              if (plVar22 == (long *)0x0) break;
              plVar18 = (long *)*plVar24;
              local_390 = plVar23;
            }
          }
          local_1b0 = uVar2;
          (**(code **)(*param_1 + 0xc0))(param_1,local_2c8);
          if ((*param_3 == 0) && (*(char *)(param_1[0xf] + 0x140) != '\0')) {
            lVar8 = (**(code **)(*(long *)plVar20[1] + 0xd0))();
            if (lVar8 == 0) {
              if (param_2 == 0) goto LAB_02f45f5c;
              goto LAB_02f45c88;
            }
            if (*(int *)(lVar8 + 0x10) != param_2) goto LAB_02f45c88;
LAB_02f45f5c:
            iVar7 = 2;
          }
          else {
LAB_02f45c88:
            param_1[0x15] = (long)plVar20;
            if (*(long *)(local_1c0 + 0x18) == 0) {
              plVar11 = (long *)(**(code **)(*local_1b8 + 0xd0))();
              if (plVar11 == (long *)0x0) {
                plVar11 = (long *)(**(code **)(*(long *)local_1b8[2] + 0xd0))();
              }
            }
            else {
              plVar11 = *(long **)(*(long *)(*(long *)(local_1c0 + 0x18) + 0x78) + 0x80);
            }
            if (plVar11 != (long *)0x0) {
              if (*(long *)(local_1c0 + 0x18) == 0) {
                iVar7 = 0;
              }
              else {
                if (local_1c8 == 0) {
                  iVar7 = 0;
                }
                else {
                  lVar8 = *(long *)(*(long *)(local_2c8[0] + 8) + 0x68);
                  iVar7 = (int)lVar8;
                  if (local_1c8 != 1) {
                    lVar12 = (ulong)local_1c8 - 1;
                    plVar18 = local_2c8 + 1;
                    do {
                      lVar12 = lVar12 + -1;
                      lVar8 = *(long *)(*(long *)(*plVar18 + 8) + 0x68) + lVar8;
                      iVar7 = (int)lVar8;
                      plVar18 = plVar18 + 1;
                    } while (lVar12 != 0);
                  }
                }
                iVar7 = (int)local_1b8[0x11] + ((local_368 - iVar7) - *(int *)(local_1c0 + 8));
              }
              iVar6 = (**(code **)(*plVar11 + 0x88))(plVar11);
              if (((iVar6 == 8) && (local_1c0 != 0)) && (*(long *)(local_1c0 + 0x18) != 0)) {
                uVar26 = *(undefined4 *)(*(long *)(local_1c0 + 0x18) + 0x98);
              }
              else {
                uVar26 = 0;
              }
              (**(code **)(*param_1 + 0x90))(param_1,(int)plVar11[2],iVar7,uVar26);
            }
            FUN_02f48468(param_1,lVar25,local_380,&local_2e8,&local_318,local_2c8,local_34c,
                         CONCAT44(uStack_364,local_368),0,&local_2d0);
            if (local_398 == (undefined8 *)0x0) {
              bVar3 = false;
              iVar7 = 0;
            }
            else {
              FUN_02f48468(param_1,lVar25,local_398,&local_330,&local_300,&local_198,local_348,
                           local_358,1,&local_2d0);
              bVar3 = false;
              iVar7 = 0;
            }
          }
          local_3e4 = 1;
          local_390 = plVar23;
        }
LAB_02f45d60:
      } while (local_3e4 != 1 && iVar7 != 2);
      if (bVar3) {
        if (local_380 != (undefined8 *)0x0) {
          if (local_398 == (undefined8 *)0x0) {
            plVar20 = (long *)local_380[1];
            local_380[1] = 0;
            if (plVar20 != (long *)0x0) {
              iVar7 = (int)plVar20[9] + -1;
              *(int *)(plVar20 + 9) = iVar7;
              if (iVar7 == 0) {
                if (plVar20[2] == 0) {
                  FUN_02f37eb4(plVar20);
                }
                else {
                  FUN_02f3b8c0(plVar20[2],plVar20);
                  plVar20[2] = 0;
                }
                (**(code **)(*plVar20 + 0x50))(plVar20);
                (*DAT_0442d150)(0,plVar20);
              }
              plVar20 = (long *)local_380[1];
              if (plVar20 != (long *)0x0) {
                iVar7 = (int)plVar20[9] + -1;
                *(int *)(plVar20 + 9) = iVar7;
                if (iVar7 == 0) {
                  if (plVar20[2] == 0) {
                    FUN_02f37eb4(plVar20);
                  }
                  else {
                    FUN_02f3b8c0(plVar20[2],plVar20);
                    plVar20[2] = 0;
                  }
                  (**(code **)(*plVar20 + 0x50))(plVar20);
                  (*DAT_0442d150)(0,plVar20);
                }
                local_380[1] = 0;
              }
            }
          }
          else {
            *(byte *)(local_380 + 10) = *(byte *)(local_380 + 10) & 0xfc;
            (**(code **)(*(long *)local_380[1] + 0x10))((long *)local_380[1],0);
            plVar20 = (long *)local_380[1];
            local_380[1] = 0;
            if (plVar20 != (long *)0x0) {
              iVar7 = (int)plVar20[9] + -1;
              *(int *)(plVar20 + 9) = iVar7;
              if (iVar7 == 0) {
                if (plVar20[2] == 0) {
                  FUN_02f37eb4(plVar20);
                }
                else {
                  FUN_02f3b8c0(plVar20[2],plVar20);
                  plVar20[2] = 0;
                }
                (**(code **)(*plVar20 + 0x50))(plVar20);
                (*DAT_0442d150)(0,plVar20);
              }
              plVar20 = (long *)local_380[1];
              if (plVar20 != (long *)0x0) {
                iVar7 = (int)plVar20[9] + -1;
                *(int *)(plVar20 + 9) = iVar7;
                if (iVar7 == 0) {
                  if (plVar20[2] == 0) {
                    FUN_02f37eb4(plVar20);
                  }
                  else {
                    FUN_02f3b8c0(plVar20[2],plVar20);
                    plVar20[2] = 0;
                  }
                  (**(code **)(*plVar20 + 0x50))(plVar20);
                  (*DAT_0442d150)(0,plVar20);
                }
                local_380[1] = 0;
              }
            }
            (*DAT_0442d150)(0,puVar27);
            plVar20 = (long *)local_398[1];
            local_398[1] = 0;
            if (plVar20 != (long *)0x0) {
              iVar7 = (int)plVar20[9] + -1;
              *(int *)(plVar20 + 9) = iVar7;
              if (iVar7 == 0) {
                if (plVar20[2] == 0) {
                  FUN_02f37eb4(plVar20);
                }
                else {
                  FUN_02f3b8c0(plVar20[2],plVar20);
                  plVar20[2] = 0;
                }
                (**(code **)(*plVar20 + 0x50))(plVar20);
                (*DAT_0442d150)(0,plVar20);
              }
              plVar20 = (long *)local_398[1];
              if (plVar20 != (long *)0x0) {
                iVar7 = (int)plVar20[9] + -1;
                *(int *)(plVar20 + 9) = iVar7;
                if (iVar7 == 0) {
                  if (plVar20[2] == 0) {
                    FUN_02f37eb4(plVar20);
                  }
                  else {
                    FUN_02f3b8c0(plVar20[2],plVar20);
                    plVar20[2] = 0;
                  }
                  (**(code **)(*plVar20 + 0x50))(plVar20);
                  (*DAT_0442d150)(0,plVar20);
                }
                local_398[1] = 0;
              }
            }
            puVar27 = local_3e0;
          }
          (*DAT_0442d150)(0,puVar27);
        }
        plVar20 = (long *)*param_4;
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x10))(plVar20,0);
          *param_4 = 0;
        }
        uVar9 = (**(code **)(**(long **)(param_1[0x12] + 8) + 0xd8))();
        if ((uVar9 & 1) != 0) {
          lVar8 = param_1[0x12];
          if ((*(byte *)(lVar8 + 0x50) & 6) == 4) {
            dVar30 = (double)NEON_ucvtf((ulong)DAT_042ab258);
            dVar30 = ((double)((int)lVar25 - *(int *)(lVar8 + 0x38)) * 1000.0) / dVar30;
            dVar29 = 0.5;
            if (dVar30 <= 0.0) {
              dVar29 = -0.5;
            }
            local_198 = (int)(dVar29 + dVar30);
            local_194 = *(undefined4 *)(lVar8 + 0x44);
            local_190 = 0;
            FUN_02f3bf24(*(undefined8 *)(lVar8 + 8),&local_198);
            bVar10 = *(byte *)(lVar8 + 0x50);
          }
          else {
            bVar10 = *(byte *)(lVar8 + 0x50) & 0xfd;
            *(byte *)(lVar8 + 0x50) = bVar10;
          }
          *(byte *)(lVar8 + 0x50) = bVar10 & 0xfb;
          *(undefined1 *)(lVar8 + 0x18) = 0;
        }
      }
      FUN_02f3dac0(param_1[0xc],&local_2d0);
      goto joined_r0x02f45f0c;
    }
  }
  plVar24 = param_1 + 0x13;
  plVar18 = (long *)*plVar24;
  plVar11 = plVar18;
  if ((plVar18 != (long *)0x0) && (plVar18 != plVar20)) {
    do {
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0 && plVar11 != plVar20);
  }
  if (plVar11 != (long *)0x0) {
    plVar20 = (long *)*plVar11;
    if ((long *)*plVar11 != (long *)0x0) {
      while( true ) {
        plVar23 = plVar20;
        plVar20 = (long *)*plVar23;
        plVar22 = plVar24;
        if (plVar18 != plVar23) {
          plVar22 = plVar11;
        }
        *plVar22 = (long)plVar20;
        if ((long *)param_1[0x12] == plVar23) {
          param_1[0x12] = (long)plVar11;
        }
        *plVar23 = 0;
        plVar18 = plVar23;
        if (local_390 != (long *)0x0) {
          *local_3d8 = (long)plVar23;
          plVar18 = local_390;
        }
        local_390 = plVar18;
        if (plVar20 == (long *)0x0) break;
        plVar18 = (long *)*plVar24;
        local_3d8 = plVar23;
      }
    }
  }
  (**(code **)(*param_1 + 0xc0))(param_1,local_2c8);
  (**(code **)(*(long *)*param_4 + 0x10))((long *)*param_4,0);
  *param_4 = 0;
  uVar9 = (**(code **)(**(long **)(param_1[0x12] + 8) + 0xd8))();
  if ((uVar9 & 1) != 0) {
    lVar8 = param_1[0x12];
    if ((*(byte *)(lVar8 + 0x50) & 6) == 4) {
      dVar30 = (double)NEON_ucvtf((ulong)DAT_042ab258);
      dVar30 = ((double)((int)lVar25 - *(int *)(lVar8 + 0x38)) * 1000.0) / dVar30;
      dVar29 = 0.5;
      if (dVar30 <= 0.0) {
        dVar29 = -0.5;
      }
      local_198 = (int)(dVar29 + dVar30);
      local_194 = *(undefined4 *)(lVar8 + 0x44);
      local_190 = 0;
      FUN_02f3bf24(*(undefined8 *)(lVar8 + 8),&local_198);
      bVar10 = *(byte *)(lVar8 + 0x50);
    }
    else {
      bVar10 = *(byte *)(lVar8 + 0x50) & 0xfd;
      *(byte *)(lVar8 + 0x50) = bVar10;
    }
    *(byte *)(lVar8 + 0x50) = bVar10 & 0xfb;
    *(undefined1 *)(lVar8 + 0x18) = 0;
  }
joined_r0x02f45f0c:
  if (local_390 != (long *)0x0) {
    do {
      plVar20 = (long *)*local_390;
      *(byte *)(local_390 + 10) = *(byte *)(local_390 + 10) & 0xfc;
      (**(code **)(*(long *)local_390[1] + 0x10))((long *)local_390[1],0);
      plVar11 = (long *)local_390[1];
      local_390[1] = 0;
      if (plVar11 != (long *)0x0) {
        iVar7 = (int)plVar11[9] + -1;
        *(int *)(plVar11 + 9) = iVar7;
        if (iVar7 == 0) {
          if (plVar11[2] == 0) {
            FUN_02f37eb4(plVar11);
          }
          else {
            FUN_02f3b8c0(plVar11[2],plVar11);
            plVar11[2] = 0;
          }
          (**(code **)(*plVar11 + 0x50))(plVar11);
          (*DAT_0442d150)(0,plVar11);
          plVar11 = (long *)local_390[1];
        }
        else {
          plVar11 = (long *)local_390[1];
        }
        if (plVar11 != (long *)0x0) {
          iVar7 = (int)plVar11[9] + -1;
          *(int *)(plVar11 + 9) = iVar7;
          if (iVar7 == 0) {
            if (plVar11[2] == 0) {
              FUN_02f37eb4(plVar11);
            }
            else {
              FUN_02f3b8c0(plVar11[2],plVar11);
              plVar11[2] = 0;
            }
            (**(code **)(*plVar11 + 0x50))(plVar11);
            (*DAT_0442d150)(0,plVar11);
          }
          local_390[1] = 0;
        }
      }
      (*DAT_0442d150)(0,local_390);
      local_390 = plVar20;
    } while (plVar20 != (long *)0x0);
  }
  return;
}


