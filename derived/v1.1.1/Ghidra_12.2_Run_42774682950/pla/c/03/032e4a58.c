/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e4a58; name: FUN_032e4a58
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_032e4a58(long *param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  byte bVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar15;
  char *pcVar14;
  long *plVar16;
  byte *pbVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long local_178;
  long lStack_170;
  ulong local_168;
  ulong uStack_160;
  undefined8 *local_158;
  ulong local_150;
  long local_148;
  long local_140;
  long local_138;
  ulong local_130;
  long local_128;
  byte *pbStack_120;
  ulong local_118;
  undefined8 *local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  char *local_78;
  char *pcStack_70;
  
  pcStack_70 = param_4;
  if ((param_3 == param_4) || (*param_3 != '!')) {
    local_78 = param_3;
    FUN_032e2c7c(&local_110,param_1[1],&DAT_04358310);
    puVar2 = local_110;
    if ((local_100 & 1) != 0) {
      FUN_032e0c40(local_100 & 0xfffffffffffffffe);
    }
    if ((puVar2 != (undefined8 *)0x0) &&
       (lVar19 = FUN_032d6e7c(puVar2,param_1,param_2), lVar19 != 0)) {
      return;
    }
    uVar6 = FUN_032e2598(param_1[1]);
    if ((uVar6 >> 3 & 1) == 0) {
      FUN_032e2c7c(&local_110,param_1[1],&DAT_04358730);
      puVar2 = local_110;
      if ((local_100 & 1) != 0) {
        FUN_032e0c40(local_100 & 0xfffffffffffffffe);
      }
      if (puVar2 != (undefined8 *)0x0) {
        (*(code *)*puVar2)(param_1,param_2,&local_78);
        return;
      }
    }
  }
  else {
    local_78 = param_3 + 1;
  }
  pbVar17 = (byte *)param_1[1];
  if (pbVar17 == (byte *)0x0) {
    uVar23 = 0;
LAB_032e4bd8:
    uVar22 = 0;
LAB_032e4bdc:
    uVar25 = 0;
    local_138 = 0;
    local_130 = 0;
    local_140 = 0;
    goto LAB_032e4be8;
  }
  pbVar11 = pbVar17;
  if ((*pbVar17 & 1) == 0) {
    pbVar11 = *(byte **)(pbVar17 + 8);
    bVar4 = *pbVar11;
    while ((bVar4 & 1) == 0) {
      pbVar11 = *(byte **)(pbVar11 + 8);
      bVar4 = *pbVar11;
    }
  }
  if ((*(ulong *)(pbVar11 + 0x10) & 0x1f) == 4) {
    lVar19 = *param_1;
    uVar23 = param_1[2];
    if ((uVar23 & 1) != 0) {
      FUN_032e0c28(uVar23 & 0xfffffffffffffffe);
      uVar23 = param_1[2];
    }
    if (lVar19 != 0) {
      local_110 = (undefined8 *)0x0;
      local_108 = local_108 & 0xffffffffffffff00;
      (**(code **)(*(long *)(uVar23 & 0xfffffffffffffffe) + 0x38))
                ((long *)(uVar23 & 0xfffffffffffffffe),lVar19,pbVar17,&local_110);
      uVar22 = local_108;
      puVar5 = local_110;
      FUN_032c4d3c(&local_110);
      FUN_032e5780(puVar5,uVar22,local_78,pcStack_70,&local_110);
      puVar2 = (undefined8 *)-(long)puVar5;
      if ((uVar22 & 0xff) == 0) {
        puVar2 = puVar5;
      }
      FUN_032c53d8(param_2,local_110,puVar2);
      FUN_032c4ce8(&local_110);
      goto joined_r0x032e4f18;
    }
    pbVar17 = (byte *)param_1[1];
    if (pbVar17 == (byte *)0x0) goto LAB_032e4bd8;
  }
  else {
    uVar23 = 0;
    if (pbVar17 == (byte *)0x0) goto LAB_032e4bd8;
  }
  pbVar11 = pbVar17;
  if ((*pbVar17 & 1) == 0) {
    pbVar11 = *(byte **)(pbVar17 + 8);
    bVar4 = *pbVar11;
    while ((bVar4 & 1) == 0) {
      pbVar11 = *(byte **)(pbVar11 + 8);
      bVar4 = *pbVar11;
    }
  }
  if ((*(ulong *)(pbVar11 + 0x10) & 0x1f) == 3) {
    lVar19 = *param_1;
    uVar22 = param_1[2];
    if ((uVar22 & 1) != 0) {
      FUN_032e0c28(uVar22 & 0xfffffffffffffffe);
      uVar22 = param_1[2];
    }
    if (lVar19 == 0) {
      pbVar17 = (byte *)param_1[1];
      if (pbVar17 != (byte *)0x0) goto LAB_032e520c;
      goto LAB_032e4bdc;
    }
    local_110 = (undefined8 *)0x0;
    (**(code **)(*(long *)(uVar22 & 0xfffffffffffffffe) + 0x38))
              ((long *)(uVar22 & 0xfffffffffffffffe),lVar19,pbVar17,&local_110);
    FUN_032c4d7c(param_2,local_110,0xffffffff);
  }
  else {
    uVar22 = 0;
    if (pbVar17 == (byte *)0x0) goto LAB_032e4bdc;
LAB_032e520c:
    pbVar11 = pbVar17;
    if ((*pbVar17 & 1) == 0) {
      pbVar11 = *(byte **)(pbVar17 + 8);
      bVar4 = *pbVar11;
      while ((bVar4 & 1) == 0) {
        pbVar11 = *(byte **)(pbVar11 + 8);
        bVar4 = *pbVar11;
      }
    }
    if ((*(ulong *)(pbVar11 + 0x10) & 0x1f) == 5) {
      lVar19 = *param_1;
      uVar25 = param_1[2];
      if ((uVar25 & 1) != 0) {
        FUN_032e0c28(uVar25 & 0xfffffffffffffffe);
        uVar25 = param_1[2];
      }
      if (lVar19 == 0) {
        pbVar17 = (byte *)param_1[1];
        goto LAB_032e5358;
      }
      FUN_032c4d3c(&local_110);
      plVar16 = (long *)(uVar25 & 0xfffffffffffffffe);
      local_128 = lVar19;
      pbStack_120 = pbVar17;
      local_118 = uVar25;
      if ((uVar25 & 1) == 0) {
        FUN_032e5b00(&local_128,local_78,pcStack_70,&local_110);
      }
      else {
        FUN_032e0c28(plVar16);
        FUN_032e5b00(&local_128,local_78,pcStack_70,&local_110);
        FUN_032e0c40(plVar16);
      }
      puVar2 = local_110;
      local_178 = 0;
      (**(code **)(*plVar16 + 0x38))(plVar16,lVar19,pbVar17,&local_178);
      FUN_032c53d8(local_178,param_2,puVar2);
      iVar7 = FUN_032c5124(param_2,&DAT_038edd3a);
      if (-1 < iVar7) {
        iVar13 = (int)param_2[1];
        if (iVar7 + 2 < (int)((long)iVar13 + -2)) {
          pcVar12 = (char *)(*param_2 + (long)(iVar7 + 2));
          pcVar1 = (char *)(*param_2 + (long)iVar13 + -2);
          pcVar15 = pcVar12;
          do {
            if (*pcVar15 != '0') break;
            pcVar15 = pcVar15 + 1;
          } while (pcVar15 < pcVar1);
          uVar6 = (int)pcVar15 - (int)pcVar12;
          if (0 < (int)uVar6) {
            if (pcVar15 <= pcVar1) {
              do {
                pcVar14 = pcVar15 + 1;
                *pcVar12 = *pcVar15;
                pcVar12 = pcVar12 + 1;
                pcVar15 = pcVar14;
              } while (pcVar14 <= pcVar1);
              iVar13 = (int)param_2[1];
            }
            FUN_032c4fd4(param_2,iVar13 + ~uVar6);
          }
        }
      }
      FUN_032c4ce8(&local_110);
    }
    else {
      uVar25 = 0;
LAB_032e5358:
      local_138 = 0;
      local_130 = 0;
      local_140 = 0;
      if (pbVar17 == (byte *)0x0) {
LAB_032e4be8:
        pbVar17 = (byte *)param_1[1];
        if (pbVar17 != (byte *)0x0) {
          pbVar11 = pbVar17;
          if ((*pbVar17 & 1) == 0) {
            pbVar11 = *(byte **)(pbVar17 + 8);
            bVar4 = *pbVar11;
            while ((bVar4 & 1) == 0) {
              pbVar11 = *(byte **)(pbVar11 + 8);
              bVar4 = *pbVar11;
            }
          }
          if ((*(ulong *)(pbVar11 + 0x10) & 0x1f) == 7) {
            lVar19 = *param_1;
            uVar24 = param_1[2];
            if ((uVar24 & 1) != 0) {
              FUN_032e0c28(uVar24 & 0xfffffffffffffffe);
              uVar24 = param_1[2];
            }
            if (lVar19 == 0) {
              pbVar17 = (byte *)param_1[1];
              goto joined_r0x032e4f9c;
            }
            uVar9 = FUN_032e239c(pbVar17);
            FUN_032c5bd8(param_2,uVar9,&DAT_039a7767,0,0,0,0);
            (**(code **)(*(long *)(uVar24 & 0xfffffffffffffffe) + 0x38))
                      (&local_178,(long *)(uVar24 & 0xfffffffffffffffe),lVar19,pbVar17);
            if (local_148 != -1) {
              FUN_032c5d4c(param_2,&DAT_03996322,0xffffffff);
              if ((local_158 < (undefined8 *)0x2) ||
                 (uVar6 = (uint)*local_158, (uVar6 >> 0x11 & 1) == 0)) {
                local_110 = (undefined8 *)0x0;
              }
              else {
                uVar6 = (uVar6 & 0x1ffff) - (uVar6 >> 1 & 0x5555);
                uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
                local_110 = (undefined8 *)0x0;
                if ((local_158[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
                    & 0x300000) != 0) {
                  local_110 = local_158;
                }
              }
              uVar9 = FUN_032e2c18(&local_110);
              FUN_032c5d4c(param_2,uVar9,0xffffffff);
              FUN_032c5d4c(param_2,&DAT_039373c7,0xffffffff);
              FUN_032c4d3c(&local_110);
              FUN_032e4a58(&uStack_160,&local_110,0,0);
              FUN_032c55f0(param_2,local_110);
              FUN_032c4ce8(&local_110);
              (**(code **)(*(long *)(local_168 & 0xfffffffffffffffe) + 0x40))
                        ((long *)(local_168 & 0xfffffffffffffffe),&local_178);
              while (local_148 != -1) {
                FUN_032c5d4c(param_2,&DAT_0398d5c8,0xffffffff);
                if ((local_158 < (undefined8 *)0x2) ||
                   (uVar6 = (uint)*local_158, (uVar6 >> 0x11 & 1) == 0)) {
                  local_110 = (undefined8 *)0x0;
                }
                else {
                  uVar6 = (uVar6 & 0x1ffff) - (uVar6 >> 1 & 0x5555);
                  uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
                  local_110 = (undefined8 *)0x0;
                  if ((local_158[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2
                                ] & 0x300000) != 0) {
                    local_110 = local_158;
                  }
                }
                uVar9 = FUN_032e2c18(&local_110);
                FUN_032c5d4c(param_2,uVar9,0xffffffff);
                FUN_032c5d4c(param_2,&DAT_039373c7,0xffffffff);
                FUN_032c4d3c(&local_110);
                FUN_032e4a58(&uStack_160,&local_110,0,0);
                FUN_032c55f0(param_2,local_110);
                FUN_032c4ce8(&local_110);
                (**(code **)(*(long *)(local_168 & 0xfffffffffffffffe) + 0x40))
                          ((long *)(local_168 & 0xfffffffffffffffe),&local_178);
              }
            }
            if ((local_150 & 1) != 0) {
              FUN_032e0c40(local_150 & 0xfffffffffffffffe);
            }
            if ((local_168 & 1) != 0) {
              FUN_032e0c40(local_168 & 0xfffffffffffffffe);
            }
            FUN_032c5d4c(param_2,&DAT_03938a42,0xffffffff);
          }
          else {
            uVar24 = 0;
joined_r0x032e4f9c:
            if (pbVar17 != (byte *)0x0) {
              pbVar11 = pbVar17;
              if ((*pbVar17 & 1) == 0) {
                pbVar11 = *(byte **)(pbVar17 + 8);
                bVar4 = *pbVar11;
                while ((bVar4 & 1) == 0) {
                  pbVar11 = *(byte **)(pbVar11 + 8);
                  bVar4 = *pbVar11;
                }
              }
              if ((*(ulong *)(pbVar11 + 0x10) & 0x1f) == 6) {
                lVar19 = *param_1;
                uVar21 = param_1[2];
                if ((uVar21 & 1) != 0) {
                  FUN_032e0c28(uVar21 & 0xfffffffffffffffe);
                  uVar21 = param_1[2];
                }
                if (lVar19 == 0) {
                  pbVar17 = (byte *)param_1[1];
                  goto joined_r0x032e5098;
                }
                local_108 = 0;
                local_100 = 0;
                local_110 = (undefined8 *)0x0;
                (**(code **)(*(long *)(uVar21 & 0xfffffffffffffffe) + 0x50))
                          ((long *)(uVar21 & 0xfffffffffffffffe),lVar19,pbVar17,&local_110);
                if ((((local_110 == (undefined8 *)0x0) || (local_108 == 0)) ||
                    (uVar10 = FUN_032dda60(local_108,&DAT_0435a6e8), (uVar10 & 1) == 0)) ||
                   (local_110 == (undefined8 *)0x0)) {
                  if ((local_78 == pcStack_70) || (*local_78 != '*')) {
                    FUN_032c53d8(param_2,&DAT_03952e05,local_110);
                  }
                  else {
                    FUN_032e4a58(&local_110,param_2,local_78 + 1);
                  }
                }
                else {
                  FUN_032e260c(local_110,param_2,0,0);
                }
                if ((local_100 & 1) != 0) {
                  FUN_032e0c40(local_100 & 0xfffffffffffffffe);
                }
              }
              else {
                uVar21 = 0;
joined_r0x032e5098:
                if (pbVar17 != (byte *)0x0) {
                  pbVar11 = pbVar17;
                  if ((*pbVar17 & 1) == 0) {
                    pbVar11 = *(byte **)(pbVar17 + 8);
                    bVar4 = *pbVar11;
                    while ((bVar4 & 1) == 0) {
                      pbVar11 = *(byte **)(pbVar11 + 8);
                      bVar4 = *pbVar11;
                    }
                  }
                  if ((*(ulong *)(pbVar11 + 0x10) & 0x1f) == 2) {
                    lVar19 = *param_1;
                    uVar10 = param_1[2];
                    if ((uVar10 & 1) != 0) {
                      FUN_032e0c28(uVar10 & 0xfffffffffffffffe);
                      uVar10 = param_1[2];
                    }
                    if (lVar19 == 0) {
                      pbVar17 = (byte *)param_1[1];
                      goto joined_r0x032e5138;
                    }
                    local_110 = (undefined8 *)((ulong)local_110 & 0xffffffffffffff00);
                    (**(code **)(*(long *)(uVar10 & 0xfffffffffffffffe) + 0x38))
                              ((long *)(uVar10 & 0xfffffffffffffffe),lVar19,pbVar17,&local_110);
                    pcVar12 = "false";
                    if ((char)local_110 != '\0') {
                      pcVar12 = "true";
                    }
                    FUN_032c4d7c(param_2,pcVar12,0xffffffff);
                  }
                  else {
                    uVar10 = 0;
joined_r0x032e5138:
                    if (pbVar17 != (byte *)0x0) {
                      pbVar11 = pbVar17;
                      if ((*pbVar17 & 1) == 0) {
                        pbVar11 = *(byte **)(pbVar17 + 8);
                        bVar4 = *pbVar11;
                        while ((bVar4 & 1) == 0) {
                          pbVar11 = *(byte **)(pbVar11 + 8);
                          bVar4 = *pbVar11;
                        }
                      }
                      if ((pbVar11[0x10] & 0x1f) == 0) {
                        lVar19 = *param_1;
                        uVar20 = param_1[2];
                        if ((uVar20 & 1) != 0) {
                          FUN_032e0c28(uVar20 & 0xfffffffffffffffe);
                          uVar20 = param_1[2];
                        }
                        if (lVar19 == 0) {
                          pbVar17 = (byte *)param_1[1];
                          goto joined_r0x032e56c4;
                        }
                        FUN_032c4d7c(param_2,&DAT_0399fd57,0xffffffff);
                      }
                      else {
                        uVar20 = 0;
joined_r0x032e56c4:
                        if (pbVar17 != (byte *)0x0) {
                          for (; (*pbVar17 & 1) == 0; pbVar17 = *(byte **)(pbVar17 + 8)) {
                          }
                          if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) == 1) {
                            lVar19 = *param_1;
                            uVar18 = param_1[2];
                            if ((uVar18 & 1) != 0) {
                              FUN_032e0c28(uVar18 & 0xfffffffffffffffe);
                              uVar18 = param_1[2];
                            }
                            if (lVar19 != 0) {
                              FUN_032c4d7c(param_2,"incomplete",0xffffffff);
                            }
                            if ((uVar18 & 1) != 0) {
                              FUN_032e0c40(uVar18 & 0xfffffffffffffffe);
                            }
                          }
                        }
                      }
                      if ((uVar20 & 1) != 0) {
                        FUN_032e0c40(uVar20 & 0xfffffffffffffffe);
                      }
                    }
                  }
                  if ((uVar10 & 1) != 0) {
                    FUN_032e0c40(uVar10 & 0xfffffffffffffffe);
                  }
                }
              }
              if ((uVar21 & 1) != 0) {
                FUN_032e0c40(uVar21 & 0xfffffffffffffffe);
              }
            }
          }
          if ((uVar24 & 1) != 0) {
            FUN_032e0c40(uVar24 & 0xfffffffffffffffe);
          }
        }
      }
      else {
        bVar4 = *pbVar17;
        while ((bVar4 & 1) == 0) {
          pbVar17 = *(byte **)(pbVar17 + 8);
          bVar4 = *pbVar17;
        }
        if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) != 8) goto LAB_032e4be8;
        local_140 = *param_1;
        local_138 = param_1[1];
        if (((param_1[2] & 1U) != 0) &&
           (FUN_032e0c28(param_1[2] & 0xfffffffffffffffe), (local_130 & 1) != 0)) {
          FUN_032e0c40(local_130 & 0xfffffffffffffffe);
        }
        lVar19 = local_140;
        local_130 = param_1[2];
        if (local_140 == 0) goto LAB_032e4be8;
        plVar16 = (long *)(local_130 & 0xfffffffffffffffe);
        FUN_032c4d7c(param_2,&DAT_038d9cef,0xffffffff);
        local_100 = 0;
        local_f8 = 0;
        local_110 = (undefined8 *)0x0;
        local_108 = 0;
        (**(code **)(*plVar16 + 0x50))(plVar16,lVar19,local_138,&local_110);
        iVar7 = (int)local_100;
        if ((local_f8 & 1) != 0) {
          FUN_032e0c40(local_f8 & 0xfffffffffffffffe);
        }
        if (local_78 == pcStack_70) {
          iVar13 = 0;
          if (0 < iVar7) goto LAB_032e5498;
        }
        else {
          FUN_032d7ae0(&local_178,&local_78,0x2c,0);
          if (local_178 == lStack_170) {
            iVar13 = 0;
          }
          else {
            FUN_032c4e24(&local_110,&local_178);
            iVar8 = FUN_032c4920(local_110,10);
            iVar3 = iVar7;
            if (iVar8 <= iVar7) {
              iVar3 = iVar8;
            }
            iVar13 = 0;
            if (-1 < iVar8) {
              iVar13 = iVar3;
            }
            FUN_032c4ce8(&local_110);
          }
          if (local_168 != uStack_160) {
            FUN_032c4e24(&local_110,&local_168);
            iVar8 = FUN_032c4920(local_110,10);
            iVar3 = iVar7;
            if (iVar8 + iVar13 <= iVar7) {
              iVar3 = iVar8 + iVar13;
            }
            iVar7 = iVar13;
            if (-1 < iVar8) {
              iVar7 = iVar3;
            }
            FUN_032c4ce8(&local_110);
          }
          if (iVar13 < iVar7) {
LAB_032e5498:
            FUN_032c5d4c(param_2,&DAT_03996322,0xffffffff);
            FUN_032c4d3c(&local_110);
            FUN_032b7a44(&local_178,&local_140,iVar13);
            FUN_032e4a58(&local_178,&local_110,0,0);
            if ((local_168 & 1) != 0) {
              FUN_032e0c40(local_168 & 0xfffffffffffffffe);
            }
            FUN_032c55f0(param_2,local_110);
            FUN_032c4ce8(&local_110);
            while (iVar13 = iVar13 + 1, iVar13 != iVar7) {
              FUN_032c5d4c(param_2,&DAT_0398d5c8,0xffffffff);
              FUN_032c4d3c(&local_110);
              FUN_032b7a44(&local_178,&local_140,iVar13);
              FUN_032e4a58(&local_178,&local_110,0,0);
              if ((local_168 & 1) != 0) {
                FUN_032e0c40(local_168 & 0xfffffffffffffffe);
              }
              FUN_032c55f0(param_2,local_110);
              FUN_032c4ce8(&local_110);
            }
          }
        }
        FUN_032c5d4c(param_2,&DAT_03952899,0xffffffff);
      }
      if ((local_130 & 1) != 0) {
        FUN_032e0c40(local_130 & 0xfffffffffffffffe);
      }
    }
    if ((uVar25 & 1) != 0) {
      FUN_032e0c40(uVar25 & 0xfffffffffffffffe);
    }
  }
  if ((uVar22 & 1) != 0) {
    FUN_032e0c40(uVar22 & 0xfffffffffffffffe);
  }
joined_r0x032e4f18:
  if ((uVar23 & 1) != 0) {
    FUN_032e0c40(uVar23 & 0xfffffffffffffffe);
  }
  return;
}


