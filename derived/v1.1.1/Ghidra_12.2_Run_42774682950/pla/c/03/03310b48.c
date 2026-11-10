/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03310b48; name: FUN_03310b48
 */


void FUN_03310b48(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulong *puVar22;
  uint uVar23;
  long *plVar24;
  ulong uVar25;
  undefined1 *puVar26;
  long lVar27;
  uint local_10bc;
  uint local_10b8;
  char *local_10b0;
  undefined *local_10a8;
  uint *local_10a0;
  undefined8 uStack_1098;
  undefined8 local_1090;
  undefined8 uStack_1088;
  undefined8 local_1080;
  char *local_1078;
  undefined8 local_1070;
  undefined8 uStack_1068;
  long *local_f60;
  long *local_f58;
  undefined8 *local_f50;
  undefined8 uStack_f48;
  undefined8 local_f40;
  undefined8 uStack_f38;
  undefined8 local_f30;
  char *local_f28;
  undefined8 local_f20;
  undefined8 uStack_f18;
  undefined1 *local_ec0;
  code *local_eb0;
  undefined1 *local_ea8;
  undefined1 *local_e70;
  undefined1 *local_e30;
  code *local_e20;
  undefined1 *local_e18;
  undefined1 *local_de8;
  undefined1 *local_dd8;
  undefined1 *local_dd0;
  undefined8 *local_cd8;
  undefined1 **local_cd0;
  undefined8 local_cc8;
  undefined8 *local_cc0;
  long local_cb8;
  byte *local_cb0;
  ulong local_ca8;
  char *local_ca0;
  byte *local_c98;
  ulong local_c90;
  undefined1 *local_c88;
  undefined8 local_c80;
  undefined1 local_c78 [3072];
  ulong local_78;
  uint local_6c [3];
  
  local_c88 = local_c78;
  local_c80 = 0x8000004000000000;
  uVar17 = 0;
  puVar22 = (ulong *)param_3[1];
  do {
    uVar21 = (uint)uVar17;
    uVar23 = (uint)*puVar22;
    if ((uVar23 >> 0x15 & 1) != 0) {
      uVar21 = (uVar23 & 0x1fffff) - (uVar23 >> 1 & 0x55555);
      uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
      uVar17 = puVar22[(ulong)((uVar21 + (uVar21 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] |
               uVar17;
      uVar21 = (uint)uVar17;
    }
    if ((*puVar22 & 1) != 0) break;
    uVar21 = (uint)uVar17;
    puVar22 = (ulong *)puVar22[1];
  } while (puVar22 != (ulong *)0x0);
  if ((uVar21 >> 3 & 1) != 0) {
    FUN_032e2dd4(&local_f60,param_2[1],0);
LAB_03310e1c:
    if (local_f60 + 1 < local_f58) {
      local_f60 = local_f60 + 1;
    }
    else {
      uVar17 = FUN_032e2de0(&local_f60);
      if ((uVar17 & 1) == 0) goto LAB_03310d98;
    }
    uVar21 = (uint)*(undefined8 *)*local_f60;
    if (((uVar21 >> 0x11 & 1) != 0) &&
       (uVar21 = (uVar21 & 0x1ffff) - (uVar21 >> 1 & 0x5555),
       uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333),
       (*(ushort *)
         (*local_f60 + (ulong)((uVar21 + (uVar21 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12)
       & 0x30) != 0)) {
      FUN_032e4868(&local_ca0,param_2,*local_f60);
      uVar10 = FUN_032e2c18(local_f60);
      FUN_032e47dc(&local_cb8,param_3,uVar10);
      puVar5 = local_c88;
      if (local_cb8 != 0) {
        bVar2 = *local_cb0;
        pbVar19 = local_cb0;
        while ((bVar2 & 1) == 0) {
          pbVar19 = *(byte **)(pbVar19 + 8);
          bVar2 = *pbVar19;
        }
        uVar21 = *(uint *)(pbVar19 + 0x10) & 0x1f;
        if (uVar21 == 8) {
LAB_03310f04:
          uVar23 = *(uint *)(param_1 + 8);
          local_10b8 = *(uint *)((long)param_1 + 0x44);
          uVar21 = uVar23 + 1;
          lVar27 = param_1[7];
          local_10bc = local_10b8 & 0x3fffffff;
          lVar9 = lVar27;
          if ((int)local_10bc <= (int)uVar23) {
            if (0x3ffffffe < (int)uVar23) {
              FUN_032bd0a8(uVar21);
              local_10b8 = *(uint *)((long)param_1 + 0x44);
              local_10bc = local_10b8 & 0x3fffffff;
            }
            puVar7 = PTR_PTR_0434a080;
            uVar16 = (local_10b8 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar16) {
              uVar16 = 0x3fffffff;
            }
            local_6c[0] = uVar21;
            if ((int)uVar21 <= (int)uVar16) {
              local_6c[0] = uVar16;
            }
            local_78 = (ulong)local_6c[0] * 0x30;
            if (((int)local_6c[0] < (int)local_10bc) || (0x3fffffff < (int)local_6c[0])) {
              local_10b0 = (char *)0x1;
              local_10a0 = local_6c;
              local_10a8 = &DAT_0411b3b8;
              FUN_03320b50(0x65816502,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x5a,"Invalid requestedCapacity {}",&local_10b0);
              local_10b8 = *(uint *)((long)param_1 + 0x44);
              local_10bc = local_10b8 & 0x3fffffff;
            }
            lVar9 = (**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_78,&local_78);
            if (0 < (int)uVar23) {
              puVar11 = (undefined8 *)(lVar9 + 0x18);
              puVar20 = (undefined8 *)(lVar27 + 0x18);
              uVar17 = (ulong)uVar23;
              do {
                puVar11[-3] = puVar20[-3];
                puVar11[-2] = puVar20[-2];
                puVar11[-1] = puVar20[-1];
                puVar20[-2] = 0;
                puVar20[-1] = 0;
                puVar20[-3] = 0;
                *puVar11 = *puVar20;
                puVar11[1] = puVar20[1];
                uVar17 = uVar17 - 1;
                puVar11[2] = puVar20[2];
                puVar20[1] = 0;
                puVar20[2] = 0;
                *puVar20 = 0;
                puVar11 = puVar11 + 6;
                puVar20 = puVar20 + 6;
              } while (uVar17 != 0);
              uVar17 = 0;
              do {
                uVar18 = *(ulong *)(lVar27 + uVar17 * 0x30 + 0x28);
                if ((uVar18 & 1) != 0) {
                  plVar12 = (long *)(uVar18 & 0xfffffffffffffffe);
                  plVar24 = plVar12 + 1;
                  do {
                    lVar6 = *plVar24;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                    if (bVar4) {
                      *(int *)plVar24 = (int)lVar6 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if ((plVar12 != (long *)0x0) && ((int)lVar6 == 1)) {
                    (**(code **)(*plVar12 + 8))();
                  }
                }
                uVar18 = *(ulong *)(lVar27 + uVar17 * 0x30 + 0x10);
                if ((uVar18 & 1) != 0) {
                  plVar12 = (long *)(uVar18 & 0xfffffffffffffffe);
                  plVar24 = plVar12 + 1;
                  do {
                    lVar6 = *plVar24;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                    if (bVar4) {
                      *(int *)plVar24 = (int)lVar6 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if ((plVar12 != (long *)0x0) && ((int)lVar6 == 1)) {
                    (**(code **)(*plVar12 + 8))();
                  }
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 != uVar23);
            }
            if (-1 < (int)local_10b8) {
              (**(code **)(*(long *)puVar7 + 0x18))(puVar7,lVar27,(ulong)local_10bc * 0x30);
            }
            if (local_78 < 0xbffffffd0) {
              uVar15 = (undefined4)(local_78 / 0x30);
            }
            else {
              uVar15 = 0x3fffffff;
            }
            *(undefined4 *)((long)param_1 + 0x44) = uVar15;
            uVar23 = *(uint *)(param_1 + 8);
            param_1[7] = lVar9;
          }
          plVar24 = (long *)(lVar9 + (long)(int)uVar23 * 0x30);
          *plVar24 = local_cb8;
          plVar24[1] = (long)local_cb0;
          plVar24[2] = local_ca8;
          if ((local_ca8 & 1) != 0) {
            piVar1 = (int *)((local_ca8 & 0xfffffffffffffffe) + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar9 = lVar9 + (long)(int)uVar23 * 0x30;
          *(char **)(lVar9 + 0x18) = local_ca0;
          *(byte **)(lVar9 + 0x20) = local_c98;
          *(ulong *)(lVar9 + 0x28) = local_c90;
          if ((local_c90 & 1) != 0) {
            piVar1 = (int *)((local_c90 & 0xfffffffffffffffe) + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          *(uint *)(param_1 + 8) = uVar21;
        }
        else if (uVar21 == 6) {
          iVar8 = (int)local_c80;
          uVar17 = local_c80 & 0xffffffff;
          uVar21 = (int)local_c80 + 1;
          local_10b8 = local_c80._4_4_;
          local_10bc = local_c80._4_4_ & 0x3fffffff;
          if ((int)local_10bc <= (int)local_c80) {
            if (0x3ffffffe < (int)local_c80) {
              FUN_032bd0a8(uVar21);
              local_10b8 = local_c80._4_4_;
              local_10bc = local_c80._4_4_ & 0x3fffffff;
            }
            puVar7 = PTR_PTR_0434a080;
            uVar23 = (local_10b8 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar23) {
              uVar23 = 0x3fffffff;
            }
            local_6c[0] = uVar21;
            if ((int)uVar21 <= (int)uVar23) {
              local_6c[0] = uVar23;
            }
            local_78 = (ulong)local_6c[0] * 0x30;
            if (((int)local_6c[0] < (int)local_10bc) || (0x3fffffff < (int)local_6c[0])) {
              local_10b0 = (char *)0x1;
              local_10a0 = local_6c;
              local_10a8 = &DAT_0411b3b8;
              FUN_03320b50(0x65816502,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x5a,"Invalid requestedCapacity {}",&local_10b0);
              local_10b8 = local_c80._4_4_;
              local_10bc = local_c80._4_4_ & 0x3fffffff;
            }
            puVar26 = (undefined1 *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_78,&local_78)
            ;
            if (0 < iVar8) {
              uVar18 = 0;
              do {
                puVar11 = (undefined8 *)(puVar26 + uVar18 * 0x30);
                puVar20 = (undefined8 *)(puVar5 + uVar18 * 0x30);
                uVar10 = puVar20[1];
                *puVar11 = *puVar20;
                puVar11[1] = uVar10;
                uVar25 = puVar20[2];
                puVar11[2] = uVar25;
                if ((uVar25 & 1) != 0) {
                  piVar1 = (int *)((uVar25 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = *piVar1 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                uVar10 = puVar20[4];
                puVar11[3] = puVar20[3];
                puVar11[4] = uVar10;
                uVar25 = puVar20[5];
                puVar11[5] = uVar25;
                if ((uVar25 & 1) != 0) {
                  piVar1 = (int *)((uVar25 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = *piVar1 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 != uVar17);
              uVar18 = 0;
              do {
                if ((*(ulong *)(puVar5 + uVar18 * 0x30 + 0x28) & 1) != 0) {
                  plVar12 = (long *)(*(ulong *)(puVar5 + uVar18 * 0x30 + 0x28) & 0xfffffffffffffffe)
                  ;
                  plVar24 = plVar12 + 1;
                  do {
                    lVar9 = *plVar24;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                    if (bVar4) {
                      *(int *)plVar24 = (int)lVar9 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if ((plVar12 != (long *)0x0) && ((int)lVar9 == 1)) {
                    (**(code **)(*plVar12 + 8))();
                  }
                }
                if ((*(ulong *)(puVar5 + uVar18 * 0x30 + 0x10) & 1) != 0) {
                  plVar12 = (long *)(*(ulong *)(puVar5 + uVar18 * 0x30 + 0x10) & 0xfffffffffffffffe)
                  ;
                  plVar24 = plVar12 + 1;
                  do {
                    lVar9 = *plVar24;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                    if (bVar4) {
                      *(int *)plVar24 = (int)lVar9 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if ((plVar12 != (long *)0x0) && ((int)lVar9 == 1)) {
                    (**(code **)(*plVar12 + 8))();
                  }
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 != uVar17);
            }
            if (-1 < (int)local_10b8) {
              (**(code **)(*(long *)puVar7 + 0x18))(puVar7,puVar5,(ulong)local_10bc * 0x30);
            }
            if (local_78 < 0xbffffffd0) {
              uVar15 = (undefined4)(local_78 / 0x30);
            }
            else {
              uVar15 = 0x3fffffff;
            }
            local_c80 = CONCAT44(uVar15,(int)local_c80);
            iVar8 = (int)local_c80;
            local_c88 = puVar26;
          }
          puVar5 = local_c88;
          plVar24 = (long *)(local_c88 + (long)iVar8 * 0x30);
          *plVar24 = 0;
          plVar24[1] = 0;
          plVar24[2] = 0;
          lVar9 = (long)iVar8;
          if (local_cb0 != (byte *)0x0) {
            bVar2 = *local_cb0;
            pbVar19 = local_cb0;
            while ((bVar2 & 1) == 0) {
              pbVar19 = *(byte **)(pbVar19 + 8);
              bVar2 = *pbVar19;
            }
            if ((*(ulong *)(pbVar19 + 0x10) & 0x1f) == 6) {
              *plVar24 = local_cb8;
              plVar24[1] = (long)local_cb0;
              puVar22 = (ulong *)(local_c88 + lVar9 * 0x30 + 0x10);
              if ((local_ca8 & 1) != 0) {
                piVar1 = (int *)((local_ca8 & 0xfffffffffffffffe) + 8);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              uVar17 = *puVar22;
              if ((uVar17 & 1) != 0) {
                plVar12 = (long *)(uVar17 & 0xfffffffffffffffe);
                plVar24 = plVar12 + 1;
                do {
                  lVar27 = *plVar24;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar4) {
                    *(int *)plVar24 = (int)lVar27 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((plVar12 != (long *)0x0) && ((int)lVar27 == 1)) {
                  (**(code **)(*plVar12 + 8))();
                }
              }
              *puVar22 = local_ca8;
            }
          }
          *(undefined8 *)(puVar5 + lVar9 * 0x30 + 0x18) = 0;
          *(undefined8 *)(puVar5 + lVar9 * 0x30 + 0x20) = 0;
          *(undefined8 *)(puVar5 + lVar9 * 0x30 + 0x28) = 0;
          if (local_c98 != (byte *)0x0) {
            bVar2 = *local_c98;
            pbVar19 = local_c98;
            while ((bVar2 & 1) == 0) {
              pbVar19 = *(byte **)(pbVar19 + 8);
              bVar2 = *pbVar19;
            }
            if ((*(ulong *)(pbVar19 + 0x10) & 0x1f) == 6) {
              *(char **)(puVar5 + lVar9 * 0x30 + 0x18) = local_ca0;
              *(byte **)(puVar5 + lVar9 * 0x30 + 0x20) = local_c98;
              if ((local_c90 & 1) != 0) {
                piVar1 = (int *)((local_c90 & 0xfffffffffffffffe) + 8);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              uVar17 = *(ulong *)(puVar5 + lVar9 * 0x30 + 0x28);
              if ((uVar17 & 1) != 0) {
                plVar12 = (long *)(uVar17 & 0xfffffffffffffffe);
                plVar24 = plVar12 + 1;
                do {
                  lVar27 = *plVar24;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar4) {
                    *(int *)plVar24 = (int)lVar27 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((plVar12 != (long *)0x0) && ((int)lVar27 == 1)) {
                  (**(code **)(*plVar12 + 8))();
                }
              }
              *(ulong *)(puVar5 + lVar9 * 0x30 + 0x28) = local_c90;
            }
          }
          local_c80 = CONCAT44(local_c80._4_4_,uVar21);
        }
        else {
          if (uVar21 == 3) goto LAB_03310f04;
          FUN_0330d128(param_1,&local_ca0,&local_cb8);
        }
      }
      if ((local_ca8 & 1) != 0) {
        plVar12 = (long *)(local_ca8 & 0xfffffffffffffffe);
        plVar24 = plVar12 + 1;
        do {
          lVar9 = *plVar24;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar4) {
            *(int *)plVar24 = (int)lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar9 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      if ((local_c90 & 1) != 0) {
        plVar12 = (long *)(local_c90 & 0xfffffffffffffffe);
        plVar24 = plVar12 + 1;
        do {
          lVar9 = *plVar24;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar4) {
            *(int *)plVar24 = (int)lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar9 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    goto LAB_03310e1c;
  }
  if ((ulong *)param_3[1] == (ulong *)param_2[1]) {
    lVar9 = FUN_032f7d50(param_1 + 0xb);
    if (lVar9 == 0) goto LAB_03311270;
LAB_03310c2c:
    memset(&local_f60,0,0x288);
    local_e20 = FUN_0331f65c;
    local_ea8 = &LAB_0331f8e8;
    local_ec0 = &LAB_0331f6d4;
    local_eb0 = FUN_0331f870;
    local_e18 = &LAB_0331f9d0;
    local_e70 = &LAB_0331f79c;
    local_e30 = &LAB_0331f954;
    local_cd0 = &local_c88;
    local_de8 = &LAB_0331fb18;
    local_cd8 = param_1 + 7;
    local_dd0 = &LAB_0331f738;
    local_dd8 = &LAB_0331fb8c;
    local_cc8 = *param_1;
    puVar22 = (ulong *)param_3[1];
    while( true ) {
      uVar21 = (uint)*puVar22;
      if ((uVar21 >> 0x14 & 1) != 0) break;
      if (((*puVar22 & 1) != 0) || (puVar22 = (ulong *)puVar22[1], puVar22 == (ulong *)0x0))
      goto LAB_03310ce8;
    }
    if (puVar22 != (ulong *)0x0) {
      uVar21 = (uVar21 & 0xfffff) - (uVar21 >> 1 & 0x55555);
      uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
      uVar14 = (undefined2)
               puVar22[(ulong)((uVar21 + (uVar21 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      goto LAB_03310d24;
    }
LAB_03310ce8:
    uVar14 = 0;
LAB_03310d24:
    puVar22 = (ulong *)param_2[1];
    while( true ) {
      uVar21 = (uint)*puVar22;
      if ((uVar21 >> 0x14 & 1) != 0) break;
      if (((*puVar22 & 1) != 0) || (puVar22 = (ulong *)puVar22[1], puVar22 == (ulong *)0x0))
      goto LAB_03310d3c;
    }
    if (puVar22 != (ulong *)0x0) {
      uVar21 = (uVar21 & 0xfffff) - (uVar21 >> 1 & 0x55555);
      uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
      uVar13 = (undefined2)
               puVar22[(ulong)((uVar21 + (uVar21 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      goto LAB_03310d78;
    }
LAB_03310d3c:
    uVar13 = 0;
LAB_03310d78:
    local_cc0 = param_1;
    iVar8 = FUN_03311a18(&local_f60,lVar9,*param_3,*param_2,uVar13,uVar14,1);
    if (-1 < iVar8) {
      FUN_03306e04(param_1[6],param_3);
LAB_03310d98:
      FUN_0330fd24(param_1,local_c88,local_c80 & 0xffffffff);
      iVar8 = (int)local_c80;
      puVar5 = local_c88;
      goto joined_r0x03311310;
    }
    if (DAT_0444ad18 < 2) {
      if (DAT_04350668 == '\0') goto LAB_03311300;
    }
    else if (DAT_04350668 == '\0') {
      local_10b0 = (char *)0x0;
      local_10a0 = (uint *)&DAT_0444acc8;
      uStack_1098 = 2;
      local_1090 = FUN_032ba19c();
      uStack_1088 = 0;
      local_1080 = 0;
      local_1078 = (char *)0x0;
      puVar11 = &uStack_1088;
      local_1070 = 0;
      uStack_1068 = 0;
      FUN_03326338(&local_10b0,"Cannot copy object",PTR_DAT_04372528);
      local_1078 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
      local_1070 = 0x185;
      FUN_033266e0(&local_10b0);
      goto LAB_033112fc;
    }
    FUN_03326a7c(&local_10b0,&DAT_0444acc8,2);
    FUN_03326338(&local_10b0,"Cannot copy object",PTR_DAT_04372528);
    local_1078 = 
    "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
    local_1070 = 0x185;
    FUN_03326adc(&local_10b0);
  }
  else {
    lVar9 = FUN_032f800c();
    if (lVar9 != 0) goto LAB_03310c2c;
LAB_03311270:
    if (DAT_0444ad18 < 2) {
      if (DAT_04350668 != '\0') goto LAB_03311364;
    }
    else {
      if (DAT_04350668 != '\0') {
LAB_03311364:
        FUN_03326a7c(&local_f60,&DAT_0444acc8,2);
        if (param_3[1] == 0) {
          local_ca0 = "<No name>";
        }
        else {
          local_ca0 = (char *)FUN_032e239c();
        }
        FUN_03326338(&local_f60,"Cannot compile type {}",&DAT_0411bac8,&local_ca0);
        local_f28 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
        local_f20 = 0x17b;
        FUN_03326adc(&local_f60);
        goto LAB_03311300;
      }
      local_f60 = (long *)0x0;
      local_f50 = &DAT_0444acc8;
      uStack_f48 = 2;
      local_f40 = FUN_032ba19c();
      uStack_f38 = 0;
      local_f30 = 0;
      local_f28 = (char *)0x0;
      local_f20 = 0;
      uStack_f18 = 0;
      if (param_3[1] == 0) {
        local_10b0 = "<No name>";
      }
      else {
        local_10b0 = (char *)FUN_032e239c();
      }
      FUN_03326338(&local_f60,"Cannot compile type {}",&DAT_0411bac8,&local_10b0);
      local_f28 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
      local_f20 = 0x17b;
      FUN_033266e0(&local_f60);
      puVar11 = &uStack_f38;
LAB_033112fc:
      FUN_032c7b9c(puVar11);
    }
  }
LAB_03311300:
  *(undefined4 *)(param_1 + 1) = 0x80040200;
  iVar8 = (int)local_c80;
  puVar5 = local_c88;
joined_r0x03311310:
  local_c88 = puVar5;
  if (iVar8 != 0) {
    if ((*(ulong *)(puVar5 + (long)iVar8 * 0x30 + -8) & 1) != 0) {
      plVar12 = (long *)(*(ulong *)(puVar5 + (long)iVar8 * 0x30 + -8) & 0xfffffffffffffffe);
      plVar24 = plVar12 + 1;
      do {
        lVar9 = *plVar24;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar4) {
          *(int *)plVar24 = (int)lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar12 != (long *)0x0) && ((int)lVar9 == 1)) {
        (**(code **)(*plVar12 + 8))();
      }
    }
    puVar26 = puVar5 + (long)iVar8 * 0x30 + -0x30;
    if ((*(ulong *)(puVar5 + (long)iVar8 * 0x30 + -0x20) & 1) != 0) {
      plVar12 = (long *)(*(ulong *)(puVar5 + (long)iVar8 * 0x30 + -0x20) & 0xfffffffffffffffe);
      plVar24 = plVar12 + 1;
      do {
        lVar9 = *plVar24;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar4) {
          *(int *)plVar24 = (int)lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar12 != (long *)0x0) && ((int)lVar9 == 1)) {
        (**(code **)(*plVar12 + 8))();
      }
    }
    while (puVar26 != puVar5) {
      if ((*(ulong *)(puVar26 + -8) & 1) != 0) {
        plVar12 = (long *)(*(ulong *)(puVar26 + -8) & 0xfffffffffffffffe);
        plVar24 = plVar12 + 1;
        do {
          lVar9 = *plVar24;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar4) {
            *(int *)plVar24 = (int)lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar9 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      puVar22 = (ulong *)(puVar26 + -0x20);
      puVar26 = puVar26 + -0x30;
      if ((*puVar22 & 1) != 0) {
        plVar12 = (long *)(*puVar22 & 0xfffffffffffffffe);
        plVar24 = plVar12 + 1;
        do {
          lVar9 = *plVar24;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar4) {
            *(int *)plVar24 = (int)lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar9 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
  }
  uVar17 = local_c80;
  uVar18 = (ulong)local_c80._4_4_;
  local_c80 = (ulong)local_c80._4_4_ << 0x20;
  if ((-1 < (long)uVar17) && (local_c88 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_c88,(uVar18 & 0x3fffffff) * 0x30);
  }
  return;
}


