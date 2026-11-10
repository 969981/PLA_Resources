/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e93308; name: FUN_02e93308
 */


int FUN_02e93308(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  uint local_6c;
  undefined8 local_68;
  uint local_58;
  undefined4 local_54;
  
  if (param_2 == 0) {
    return 1;
  }
  nn::os::LockMutex((MutexType *)&DAT_0440a210);
  param_1 = param_1 + 8;
  local_a8 = 0;
  iVar4 = FUN_02e9b7a4(param_1,&local_54,4,&local_a8);
  if ((iVar4 == 1) && (iVar4 = 0x38, local_a8 == 4)) {
    iVar4 = 1;
  }
  FUN_02e76d50(local_54,2);
  if (iVar4 == 1) {
    local_a8 = 0;
    iVar4 = FUN_02e9b7a4(param_1,&local_58,2,&local_a8);
    if ((iVar4 == 1) && (iVar4 = 0x38, local_a8 == 2)) {
      iVar4 = 1;
    }
    FUN_02e76e60((undefined2)local_58,2);
    if (iVar4 == 1) {
      local_a8 = 0;
      iVar4 = FUN_02e9b7a4(param_1,&local_58,2,&local_a8);
      if ((iVar4 == 1) && (iVar4 = 0x38, local_a8 == 2)) {
        iVar4 = 1;
      }
      FUN_02e76f10((undefined2)local_58,2);
      local_58 = 0;
      if (iVar4 != 1) goto LAB_02e93a38;
      local_a8 = 0;
      iVar4 = FUN_02e9b7a4(param_1,&local_58,4,&local_a8);
      if (iVar4 != 1) goto LAB_02e93a38;
      if (local_a8 == 4) {
        if (local_58 != 0) {
          uVar9 = 0;
          do {
            local_68 = 0;
            local_6c = 0;
            local_a8 = 0;
            iVar4 = FUN_02e9b7a4(param_1,(long)&local_68 + 4,4,&local_a8);
            if (iVar4 != 1) {
LAB_02e9363c:
              local_68 = 0;
              local_6c = 0;
              goto LAB_02e93a38;
            }
            if (local_a8 != 4) {
LAB_02e93638:
              iVar4 = 0x38;
              goto LAB_02e9363c;
            }
            local_a8 = 0;
            iVar4 = FUN_02e9b7a4(param_1,&local_68,4,&local_a8);
            if (iVar4 != 1) goto LAB_02e9363c;
            if (local_a8 != 4) goto LAB_02e93638;
            iVar4 = FUN_02f05e08(DAT_0440a138,local_68._4_4_);
            if (iVar4 == 0) {
              iVar4 = 2;
              goto LAB_02e9363c;
            }
            piVar5 = (int *)*DAT_0440a138;
            uVar10 = *(uint *)(DAT_0440a138 + 1);
            if ((uVar10 == 0) || (*piVar5 == local_68._4_4_)) {
              piVar7 = piVar5;
            }
            else {
              lVar6 = (ulong)uVar10 * 0x10;
              piVar8 = piVar5;
              do {
                lVar6 = lVar6 + -0x10;
                if (lVar6 == 0) goto LAB_02e93648;
                piVar1 = piVar8 + 4;
                piVar7 = piVar8 + 4;
                piVar8 = piVar8 + 4;
              } while (*piVar1 != local_68._4_4_);
            }
            if (piVar7 == piVar5 + (ulong)uVar10 * 4) {
LAB_02e93648:
              iVar4 = 0x14;
              goto LAB_02e9363c;
            }
            **(undefined4 **)(piVar7 + 2) = (int)local_68;
            local_a8 = 0;
            iVar4 = FUN_02e9b7a4(param_1,&local_6c,4,&local_a8);
            if (iVar4 != 1) goto LAB_02e9363c;
            if (local_a8 != 4) goto LAB_02e93638;
            if (local_6c != 0) {
              uVar10 = 0;
              do {
                local_a8 = 0;
                iVar4 = FUN_02e9b7a4(param_1,&local_70,4,&local_a8);
                if (iVar4 == 1) {
                  if (local_a8 != 4) {
LAB_02e93500:
                    iVar4 = 0x38;
                    goto LAB_02e9363c;
                  }
                  local_a8 = 0;
                  iVar4 = FUN_02e9b7a4(param_1,&local_74,4,&local_a8);
                  if (iVar4 == 1) {
                    if (local_a8 != 4) goto LAB_02e93500;
                    local_a8 = 0;
                    iVar4 = FUN_02e9b7a4(param_1,&local_78,4,&local_a8);
                    if (iVar4 == 1) {
                      if (local_a8 != 4) goto LAB_02e93500;
                      iVar4 = FUN_02f060a8(DAT_0440a138,local_68._4_4_,local_70,local_74,local_78,0)
                      ;
                    }
                  }
                }
                if (iVar4 != 1) goto LAB_02e9363c;
                uVar10 = uVar10 + 1;
              } while (uVar10 < local_6c);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < local_58);
        }
        local_68 = local_68 & 0xffffffff;
        local_a8 = 0;
        iVar4 = FUN_02e9b7a4(param_1,(long)&local_68 + 4,4,&local_a8);
        if (iVar4 != 1) {
          local_6c = 0;
          local_68 = (ulong)local_68._4_4_ << 0x20;
          goto LAB_02e93a38;
        }
        if (local_a8 != 4) {
          iVar4 = 0x38;
          local_6c = 0;
          local_68 = (ulong)local_68._4_4_ << 0x20;
          goto LAB_02e93a38;
        }
        if (local_68._4_4_ == 0) {
          local_68 = 0;
LAB_02e93834:
          local_a8 = 0;
          iVar4 = FUN_02e9b7a4(param_1,&local_68,4,&local_a8);
          if (iVar4 != 1) {
            local_6c = 0;
            goto LAB_02e93a38;
          }
          if (local_a8 == 4) {
            iVar4 = (int)local_68;
            while (iVar4 != 0) {
              local_a8 = 0;
              iVar4 = FUN_02e9b7a4(param_1,&local_70,4,&local_a8);
              if (iVar4 == 1) {
                if (local_a8 == 4) {
                  local_a8 = 0;
                  iVar4 = FUN_02e9b7a4(param_1,&local_6c,4,&local_a8);
                  if (iVar4 == 1) {
                    if (local_a8 != 4) {
LAB_02e939c0:
                      iVar4 = 0x38;
                      goto LAB_02e939e0;
                    }
                    FUN_02ee34a0(local_6c,DAT_0440a160,local_70);
                    local_a8 = 0;
                    iVar4 = FUN_02e9b7a4(param_1,&local_74,4,&local_a8);
                    if (iVar4 == 1) {
                      if (local_a8 != 4) goto LAB_02e939c0;
                      local_a8 = 0;
                      iVar4 = FUN_02e9b7a4(param_1,&local_78,4,&local_a8);
                      if (iVar4 == 1) {
                        if (local_a8 != 4) goto LAB_02e939c0;
                        local_a8 = 0;
                        iVar4 = FUN_02e9b7a4(param_1,&local_7c,4,&local_a8);
                        if (iVar4 == 1) {
                          if (local_a8 != 4) goto LAB_02e939c0;
                          FUN_02ee34c8(local_78,local_7c,DAT_0440a160,local_70,local_74);
                          local_a8 = 0;
                          iVar4 = FUN_02e9b7a4(param_1,&local_80,1,&local_a8);
                          if (iVar4 == 1) {
                            if (local_a8 == 1) {
                              iVar4 = 1;
                            }
                            else {
                              iVar4 = 0x38;
                            }
                          }
                          else if (iVar4 == 0) goto joined_r0x02e939a8;
                          if ((char)local_80 != '\0') {
                            FUN_02ee3648(DAT_0440a160,(char)local_80,local_70);
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  iVar4 = 0x38;
                }
              }
joined_r0x02e939a8:
              if (iVar4 != 1) goto LAB_02e939e0;
              iVar4 = (int)local_68 + -1;
              local_68._4_4_ = (uint)(local_68 >> 0x20);
              local_68 = CONCAT44(local_68._4_4_,iVar4);
            }
            local_6c = 0;
            local_a8 = 0;
            iVar4 = FUN_02e9b7a4(param_1,&local_6c,4,&local_a8);
            if (iVar4 != 1) goto LAB_02e93a38;
            if (local_a8 == 4) {
              if (local_6c != 0) {
                do {
                  local_a8 = 0;
                  iVar4 = FUN_02e9b7a4(param_1,&local_70,4,&local_a8);
                  if (iVar4 == 1) {
                    if (local_a8 != 4) {
LAB_02e93bb4:
                      iVar4 = 0x38;
                      goto LAB_02e93a38;
                    }
                    local_a8 = 0;
                    iVar4 = FUN_02e9b7a4(param_1,&local_74,4,&local_a8);
                    if (iVar4 == 1) {
                      if (local_a8 != 4) goto LAB_02e93bb4;
                      local_a8 = 0;
                      iVar4 = FUN_02e9b7a4(param_1,&local_78,4,&local_a8);
                      if (iVar4 == 1) {
                        if (local_a8 != 4) goto LAB_02e93bb4;
                        local_a8 = 0;
                        iVar4 = FUN_02e9b7a4(param_1,&local_7c,4,&local_a8);
                        if (iVar4 == 1) {
                          if (local_a8 != 4) goto LAB_02e93bb4;
                          local_a8 = 0;
                          iVar4 = FUN_02e9b7a4(param_1,&local_80,4,&local_a8);
                          if (iVar4 == 1) {
                            if (local_a8 != 4) goto LAB_02e93bb4;
                            local_a8 = 0;
                            iVar4 = FUN_02e9b7a4(param_1,&local_84,4,&local_a8);
                            if (iVar4 == 1) {
                              if (local_a8 != 4) goto LAB_02e93bb4;
                              local_a8 = 0;
                              iVar4 = FUN_02e9b7a4(param_1,&local_88,4,&local_a8);
                              if (iVar4 == 1) {
                                if (local_a8 != 4) goto LAB_02e93bb4;
                                local_a8 = local_70;
                                uStack_a4 = local_74;
                                local_a0 = local_78;
                                uStack_9c = local_7c;
                                local_98 = local_80;
                                uStack_94 = local_84;
                                local_90 = local_88;
                                iVar4 = FUN_02f132bc(local_70,&local_a8);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  if ((iVar4 != 1) || (local_6c = local_6c - 1, local_6c == 0)) goto LAB_02e93a38;
                } while( true );
              }
              iVar4 = 1;
              goto LAB_02e93a38;
            }
            goto LAB_02e93a34;
          }
          iVar4 = 0x38;
        }
        else {
          uVar9 = 1;
          do {
            local_a8 = 0;
            iVar4 = FUN_02e9b7a4(param_1,&local_68,4,&local_a8);
            if (iVar4 != 1) break;
            if (local_a8 != 4) {
LAB_02e937e8:
              iVar4 = 0x38;
              break;
            }
            local_a8 = 0;
            iVar4 = FUN_02e9b7a4(param_1,&local_6c,4,&local_a8);
            if (iVar4 != 1) break;
            if (local_a8 != 4) goto LAB_02e937e8;
            local_a8 = 0;
            iVar4 = FUN_02e9b7a4(param_1,&local_74,1,&local_a8);
            if (iVar4 != 1) break;
            if (local_a8 != 1) goto LAB_02e937e8;
            local_a8 = 0;
            iVar4 = FUN_02e9b7a4(param_1,&local_70,4,&local_a8);
            if (iVar4 == 1) {
              if (local_a8 == 4) {
                iVar4 = 1;
              }
              else {
                iVar4 = 0x38;
                if (local_a8 != 4) goto LAB_02e93818;
              }
              if (local_70 != 0) {
                iVar2 = local_70 * 0xc;
                lVar6 = (*DAT_0442d138)(0,iVar2);
                if (lVar6 == 0) {
                  iVar4 = 0x34;
                  break;
                }
                local_a8 = 0;
                iVar4 = FUN_02e9b7a4(param_1,lVar6,iVar2,&local_a8);
                if (iVar4 == 1) {
                  if (local_a8 == iVar2) {
                    iVar4 = FUN_02f0cce8(DAT_0440a130,local_68 & 0xffffffff,local_6c,
                                         (undefined1)local_74,lVar6,local_70);
                  }
                  else {
                    iVar4 = 0x38;
                  }
                }
                (*DAT_0442d150)(0,lVar6);
              }
            }
LAB_02e93818:
            if (iVar4 != 1) break;
            bVar3 = uVar9 < local_68._4_4_;
            uVar9 = uVar9 + 1;
          } while (bVar3);
          local_68 = local_68 & 0xffffffff00000000;
          if (iVar4 == 1) goto LAB_02e93834;
        }
LAB_02e939e0:
        local_6c = 0;
      }
      else {
LAB_02e93a34:
        iVar4 = 0x38;
      }
      goto LAB_02e93a38;
    }
  }
  local_58 = 0;
LAB_02e93a38:
  nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
  return iVar4;
}


