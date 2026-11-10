/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008714d4; name: FUN_008714d4
 */


void FUN_008714d4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int local_b0 [8];
  undefined *local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  uVar6 = FUN_00847434();
  uVar5 = (**(code **)(*param_1 + 0x18))(param_1);
  local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar5);
  plVar7 = (long *)FUN_00844598(uVar6,&local_90);
  uVar8 = (**(code **)(*(long *)*plVar7 + 0x80))();
  if ((uVar8 & 1) == 0) {
    puVar1 = PTR_DAT_04378438 + 0x10;
    do {
      plVar3 = (long *)0x0;
      if (*(long *)(*plVar7 + 0x50) != 0) {
        plVar3 = (long *)(*plVar7 + 0x50);
      }
      if (*(short *)((long)plVar3 + 0x2a) == 0x19) {
        local_88 = 0;
        local_84 = 0;
        local_80 = 0;
        local_7c = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        bVar4 = *(byte *)(plVar3 + 5);
        uVar10 = 1;
        if ((bVar4 & 1) != 0) {
          uVar10 = 2;
        }
        if ((bVar4 & 2) != 0) {
          uVar10 = uVar10 + 2;
        }
        if ((bVar4 & 4) != 0) {
          uVar10 = uVar10 + 4;
        }
        if ((bVar4 & 8) != 0) {
          uVar10 = uVar10 + 8;
        }
        local_90 = puVar1;
        FUN_00875c64(local_b0,&local_90,*plVar3 + (ulong)uVar10,0x19);
        if (local_b0[0] != 0) {
          return;
        }
        FUN_007f0fc8(local_b0,plVar3 + 8);
        FUN_00875d30(param_1,&local_90);
        FUN_007e34a4(local_b0);
      }
      else {
        plVar2 = plVar3 + 8;
        FUN_007f0fc8(&local_90,plVar2);
        uVar8 = FUN_007e45a8(param_1 + 0x10e,&local_90);
        FUN_007e34a4(&local_90);
        if ((uVar8 & 1) == 0) {
          FUN_007f0fc8(&local_90,plVar2);
          uVar8 = FUN_007e45a8(param_1 + 0x124,&local_90);
          FUN_007e34a4(&local_90);
          if ((uVar8 & 1) == 0) {
            FUN_007f0fc8(&local_90,plVar2);
            uVar8 = FUN_007e45a8(param_1 + 0x13a,&local_90);
            FUN_007e34a4(&local_90);
            if ((uVar8 & 1) == 0) {
              FUN_007f0fc8(&local_90,plVar2);
              uVar8 = FUN_007e45a8(param_1 + 0x150,&local_90);
              FUN_007e34a4(&local_90);
              if ((uVar8 & 1) == 0) {
                FUN_007f0fc8(&local_90,plVar2);
                uVar8 = FUN_007e45a8(param_1 + 0x166,&local_90);
                FUN_007e34a4(&local_90);
                if ((uVar8 & 1) == 0) {
                  FUN_007f0fc8(&local_90,plVar2);
                  uVar8 = FUN_007e45a8(param_1 + 0x17c,&local_90);
                  FUN_007e34a4(&local_90);
                  if ((uVar8 & 1) == 0) {
                    FUN_007f0fc8(&local_90,plVar2);
                    uVar8 = FUN_007e45a8(param_1 + 0x192,&local_90);
                    FUN_007e34a4(&local_90);
                    if ((uVar8 & 1) == 0) {
                      FUN_007f0fc8(&local_90,plVar2);
                      uVar8 = FUN_007e45a8(param_1 + 0x1a8,&local_90);
                      FUN_007e34a4(&local_90);
                      if ((uVar8 & 1) == 0) {
                        FUN_007f0fc8(&local_90,plVar2);
                        uVar8 = FUN_007e45a8(param_1 + 0x1be,&local_90);
                        FUN_007e34a4(&local_90);
                        if ((uVar8 & 1) == 0) {
                          FUN_007f0fc8(&local_90,plVar2);
                          uVar8 = FUN_007e45a8(param_1 + 0x1d4,&local_90);
                          FUN_007e34a4(&local_90);
                          if ((uVar8 & 1) == 0) {
                            FUN_007f0fc8(&local_90,plVar2);
                            uVar8 = FUN_007e45a8(param_1 + 0x1ea,&local_90);
                            FUN_007e34a4(&local_90);
                            if ((uVar8 & 1) == 0) {
                              FUN_007f0fc8(&local_90,plVar2);
                              uVar8 = FUN_007e45a8(param_1 + 0x200,&local_90);
                              FUN_007e34a4(&local_90);
                              if ((uVar8 & 1) == 0) {
                                FUN_007f0fc8(&local_90,plVar2);
                                uVar8 = FUN_007e45a8(param_1 + 0x216,&local_90);
                                FUN_007e34a4(&local_90);
                                if ((uVar8 & 1) == 0) {
                                  FUN_007f0fc8(&local_90,plVar2);
                                  uVar8 = FUN_007e45a8(param_1 + 0x22c,&local_90);
                                  FUN_007e34a4(&local_90);
                                  if ((uVar8 & 1) == 0) {
                                    FUN_007f0fc8(&local_90,plVar2);
                                    uVar8 = FUN_007e45a8(param_1 + 0x242,&local_90);
                                    FUN_007e34a4(&local_90);
                                    if ((uVar8 & 1) == 0) {
                                      FUN_007f0fc8(&local_90,plVar2);
                                      uVar8 = FUN_007e45a8(param_1 + 600,&local_90);
                                      FUN_007e34a4(&local_90);
                                      if ((uVar8 & 1) == 0) {
                                        FUN_007f0fc8(&local_90,plVar2);
                                        uVar8 = FUN_007e45a8(param_1 + 0x26e,&local_90);
                                        FUN_007e34a4(&local_90);
                                        if ((uVar8 & 1) == 0) {
                                          FUN_007f0fc8(&local_90,plVar2);
                                          uVar8 = FUN_007e45a8(param_1 + 0x284,&local_90);
                                          FUN_007e34a4(&local_90);
                                          if ((uVar8 & 1) == 0) {
                                            FUN_007f0fc8(&local_90,plVar2);
                                            uVar8 = FUN_007e45a8(param_1 + 0x29a,&local_90);
                                            FUN_007e34a4(&local_90);
                                            if ((uVar8 & 1) == 0) {
                                              FUN_007f0fc8(&local_90,plVar2);
                                              uVar8 = FUN_007e45a8(param_1 + 0x2b0,&local_90);
                                              FUN_007e34a4(&local_90);
                                              if ((uVar8 & 1) == 0) {
                                                FUN_007f0fc8(&local_90,plVar2);
                                                uVar8 = FUN_007e45a8(param_1 + 0x2c6,&local_90);
                                                FUN_007e34a4(&local_90);
                                                if ((uVar8 & 1) == 0) {
                                                  FUN_007f0fc8(&local_90,plVar2);
                                                  uVar8 = FUN_007e45a8(param_1 + 0x2dc,&local_90);
                                                  FUN_007e34a4(&local_90);
                                                  if ((uVar8 & 1) == 0) {
                                                    FUN_007f0fc8(&local_90,plVar2);
                                                    uVar8 = FUN_007e45a8(param_1 + 0x2f2,&local_90);
                                                    FUN_007e34a4(&local_90);
                                                    if ((uVar8 & 1) == 0) goto LAB_00871684;
                                                    lVar9 = 0x16;
                                                  }
                                                  else {
                                                    lVar9 = 0x15;
                                                  }
                                                }
                                                else {
                                                  lVar9 = 0x14;
                                                }
                                              }
                                              else {
                                                lVar9 = 0x13;
                                              }
                                            }
                                            else {
                                              lVar9 = 0x12;
                                            }
                                          }
                                          else {
                                            lVar9 = 0x11;
                                          }
                                        }
                                        else {
                                          lVar9 = 0x10;
                                        }
                                      }
                                      else {
                                        lVar9 = 0xf;
                                      }
                                    }
                                    else {
                                      lVar9 = 0xe;
                                    }
                                  }
                                  else {
                                    lVar9 = 0xd;
                                  }
                                }
                                else {
                                  lVar9 = 0xc;
                                }
                              }
                              else {
                                lVar9 = 0xb;
                              }
                            }
                            else {
                              lVar9 = 10;
                            }
                          }
                          else {
                            lVar9 = 9;
                          }
                        }
                        else {
                          lVar9 = 8;
                        }
                      }
                      else {
                        lVar9 = 7;
                      }
                    }
                    else {
                      lVar9 = 6;
                    }
                  }
                  else {
                    lVar9 = 5;
                  }
                }
                else {
                  lVar9 = 4;
                }
              }
              else {
                lVar9 = 3;
              }
            }
            else {
              lVar9 = 2;
            }
          }
          else {
            lVar9 = 1;
          }
        }
        else {
          lVar9 = 0;
        }
        bVar4 = *(byte *)(plVar3 + 5);
        uVar10 = 1;
        if ((bVar4 & 1) != 0) {
          uVar10 = 2;
        }
        if ((bVar4 & 2) != 0) {
          uVar10 = uVar10 + 2;
        }
        if ((bVar4 & 4) != 0) {
          uVar10 = uVar10 + 4;
        }
        if ((bVar4 & 8) != 0) {
          uVar10 = uVar10 + 8;
        }
        (**(code **)(*(long *)param_1[0xdc] + 0x3f0))
                  ((long *)param_1[0xdc],param_1[lVar9 * 0x16 + 0x10c],*plVar3 + (ulong)uVar10,
                   *(undefined2 *)((long)plVar3 + 0x2a));
      }
LAB_00871684:
      (**(code **)(*(long *)*plVar7 + 0x88))();
      uVar8 = (**(code **)(*(long *)*plVar7 + 0x80))();
    } while ((uVar8 & 1) == 0);
  }
  return;
}


