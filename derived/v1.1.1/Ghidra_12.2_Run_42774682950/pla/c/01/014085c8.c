/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014085c8; name: FUN_014085c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014085c8(long param_1,uint *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined1 **ppuVar20;
  byte bVar21;
  long lVar22;
  int *piVar23;
  byte *pbVar24;
  code *pcVar25;
  ulong uVar26;
  uint uVar27;
  long *plVar28;
  long *plVar29;
  undefined1 *puVar30;
  size_t *psVar31;
  long lVar32;
  long *plVar33;
  long *local_3d20;
  long *local_3d18;
  long *local_3d10;
  undefined8 local_3d08;
  undefined8 local_3d00;
  size_t local_3cf8 [20];
  long *local_3c58;
  long *local_3c50;
  long local_3c48 [5];
  uint local_3c20 [3300];
  uint local_890 [2];
  byte local_888 [1024];
  undefined1 *local_488;
  byte *local_480;
  size_t local_478;
  long *local_470;
  undefined1 *local_88;
  undefined1 **ppuStack_80;
  size_t local_78;
  undefined8 uStack_70;
  
  lVar22 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar27 = *(uint *)(lVar22 + 400);
  if (uVar27 != 0) {
    uVar26 = 0;
    piVar23 = (int *)(lVar22 + 0x20);
LAB_01408624:
    puVar5 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(piVar23 + -4) != 0) {
      puVar5 = (undefined8 *)(*(long *)(piVar23 + -4) + 0x58);
    }
    if (((undefined1 *)*puVar5 != &DAT_304928236d5bcabe) || (*piVar23 != 10)) goto LAB_01408a40;
    if (0xf < (uint)uVar26) {
      plVar28 = (long *)0x0;
      goto LAB_01408658;
    }
    plVar28 = *(long **)(piVar23 + -2);
    if (plVar28 == (long *)0x0) goto LAB_01408658;
    lVar22 = plVar28[0xb];
    if (*(undefined8 **)(lVar22 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar22 + 0x10) == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
        *(undefined8 *)(lVar22 + 0x10) = uVar15;
      }
      piVar23 = (int *)(lVar22 + 0xc);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar23,0x10);
        if (bVar11) {
          *piVar23 = *piVar23 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
LAB_01408658:
      plVar13 = (long *)plVar28[0xd];
      goto joined_r0x0140865c;
    }
    goto LAB_01409a14;
  }
LAB_01408a50:
  plVar28 = (long *)0x0;
  plVar13 = _DAT_00000068;
joined_r0x0140865c:
  if (plVar13 != (long *)0x0) {
    plVar33 = plVar13 + 10;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar11) {
        *(int *)plVar33 = (int)*plVar33 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  if (plVar28 == (long *)0x0) {
LAB_01408694:
    plVar28 = *(long **)(param_1 + 0x2c8);
  }
  else {
    lVar22 = plVar28[0xb];
    piVar23 = (int *)(lVar22 + 0xc);
    do {
      iVar14 = *piVar23;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar11) {
        *piVar23 = iVar14 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar14 + -1 != 0) goto LAB_01408694;
    *(undefined8 *)(lVar22 + 0x18) = 0;
    (**(code **)(*plVar28 + 0x20))(plVar28);
    plVar28 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar28 != (long *)0x0) {
    plVar33 = plVar28 + 10;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar11) {
        *(int *)plVar33 = (int)*plVar33 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  memset(local_888,0,0x400);
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar22 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar22;
  plVar33 = *(long **)(lVar22 + 0x298);
  if (plVar33 != (long *)0x0) {
    lVar22 = plVar33[0xb];
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) {
LAB_01409a14:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar15;
    }
    piVar23 = (int *)(lVar22 + 0xc);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar11) {
        *piVar23 = *piVar23 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  lVar22 = *(long *)(*(long *)(*(long *)(param_1 + 0x5b0) + 0x80) + 8);
  memset(local_3c20,0,0x3394);
  uVar27 = *(uint *)(lVar22 + 0x3398);
  uVar26 = (ulong)uVar27;
  if (uVar27 == 0) {
    uVar27 = 0;
    local_890[0] = 0;
  }
  else {
    lVar16 = -0x3390;
    do {
      if (lVar16 == 0) goto LAB_01409a08;
      lVar17 = lVar22 + 8 + lVar16;
      *(undefined4 *)((long)local_890 + lVar16) = *(undefined4 *)(lVar17 + 0x3390);
      *(undefined4 *)((long)local_890 + lVar16 + 4) = *(undefined4 *)(lVar17 + 0x3394);
      uVar26 = uVar26 - 1;
      *(undefined4 *)(local_888 + lVar16) = *(undefined4 *)(lVar17 + 0x3398);
      lVar16 = lVar16 + 0xc;
    } while (uVar26 != 0);
    uVar8 = *param_2;
    local_890[0] = uVar27;
    if (uVar8 < uVar27) {
      if (1099 < uVar8) {
LAB_01409a08:
                    /* WARNING: Subroutine does not return */
        FUN_013dd720();
      }
      uVar27 = local_3c20[(ulong)uVar8 * 3];
    }
    else {
      uVar27 = 0;
    }
  }
  lVar22 = param_1 + 0x180;
  plVar1 = (long *)(param_1 + 0x2c8);
  snprintf((char *)local_888,0x400,"pane_%s%02d","N_info_area_",0);
  local_3c48[0] = FUN_01306260(lVar22,local_888);
  snprintf((char *)local_888,0x400,"pane_%s%02d","N_info_area_",1);
  local_3c48[1] = FUN_01306260(lVar22,local_888);
  snprintf((char *)local_888,0x400,"pane_%s%02d","N_info_area_",2);
  local_3c48[2] = FUN_01306260(lVar22,local_888);
  snprintf((char *)local_888,0x400,"pane_%s%02d","N_info_area_",3);
  local_3c48[3] = FUN_01306260(lVar22,local_888);
  snprintf((char *)local_888,0x400,"pane_%s%02d","N_info_area_",4);
  local_3c48[4] = FUN_01306260(lVar22,local_888);
  lVar16 = FUN_01306260(lVar22,"pane_N_habitat_unknown_00");
  lVar17 = FUN_01306260(lVar22,"pane_N_investigating_00");
  if (((int)uVar27 < 0x3d5) && ((*(byte *)((long)plVar33 + (ulong)uVar27 * 0x58 + 0xdc) & 1) != 0))
  {
    uVar26 = FUN_013e1f88(uVar27);
    if ((uVar26 & 1) == 0) goto LAB_0140ab08;
    local_470 = (long *)0x0;
    local_488 = (undefined1 *)0x315a8dbec6b62037;
    local_480 = (byte *)0x3988622;
    local_478 = 0x10;
    if (plVar13 != (long *)0x0) {
      plVar2 = plVar13 + 10;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    local_3d08 = (undefined1 *)0xbbb02248be0f8870;
    local_3c58 = plVar13;
    FUN_0133fa78(lVar22,&local_488,&local_3c58,&local_3d08,0,uVar27);
    if (local_3c58 != (long *)0x0) {
      plVar2 = local_3c58 + 10;
      do {
        iVar14 = (int)*plVar2 + -1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *(int *)plVar2 = iVar14;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*local_3c58 + 0x10))();
      }
    }
    if (local_470 != (long *)0x0) {
      (**(code **)(*local_470 + 0x20))();
    }
    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x5b0) + 0xf08);
    local_3d08 = (undefined1 *)0x0;
    local_3d00 = (undefined1 **)0x0;
    puVar30 = &DAT_cbf29ce484222645;
    memcpy(local_3cf8,&DAT_03a7b880,0xa0);
    FUN_013f5e5c(uVar15,uVar27,&local_3d08);
    uVar26 = 0;
    plVar2 = plVar13 + 10;
    bVar11 = false;
    plVar3 = plVar28 + 10;
    do {
      lVar32 = 0;
      bVar21 = 0;
      do {
        iVar14 = (int)uVar26;
        snprintf((char *)local_888,0x400,"pane_%s%02d_%s%02d","L_info_area_",iVar14,
                 "N_locationname_",(int)lVar32);
        lVar19 = FUN_01306260(lVar22,local_888);
        psVar31 = local_3cf8 + uVar26 * 4 + lVar32;
        if ((undefined1 *)*psVar31 == &DAT_cbf29ce484222645) {
          *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
        }
        else {
          *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
          snprintf((char *)local_888,0x400,"pane_%s%02d_%s%02d","L_info_area_",iVar14,
                   "T_h_locationname_",(int)lVar32);
          uVar18 = FUN_0140bfa8(uVar26 & 0xffffffff,psVar31);
          if ((uVar18 & 1) == 0) {
            local_478 = strlen((char *)local_888);
            local_488 = &DAT_cbf29ce484222645;
            if (local_888[0] != 0) {
              local_488 = &DAT_cbf29ce484222645;
              pbVar24 = (byte *)((ulong)local_888 | 1);
              bVar21 = local_888[0];
              do {
                local_488 = (undefined1 *)(((ulong)local_488 ^ (ulong)bVar21) * 0x100000001b3);
                bVar21 = *pbVar24;
                pbVar24 = pbVar24 + 1;
              } while (bVar21 != 0);
            }
            local_480 = local_888;
            local_470 = (long *)0x0;
            if (plVar13 != (long *)0x0) {
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar11) {
                  *(int *)plVar2 = (int)*plVar2 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            local_88 = (undefined1 *)0xbbb02848be0f92a2;
            local_3d20 = plVar13;
            FUN_011845f4(lVar22,&local_488,&local_3d20,&local_88,10);
            if (local_3d20 != (long *)0x0) {
              plVar29 = local_3d20 + 10;
              do {
                iVar12 = (int)*plVar29 + -1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar11) {
                  *(int *)plVar29 = iVar12;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar12 == 0) {
                (**(code **)(*local_3d20 + 0x10))();
              }
            }
            if (local_470 != (long *)0x0) {
              pcVar25 = *(code **)(*local_470 + 0x20);
LAB_01409d90:
              (*pcVar25)();
            }
          }
          else {
            if (plVar28 != (long *)0x0) {
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar11) {
                  *(int *)plVar3 = (int)*plVar3 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
            }
            local_3d10 = plVar28;
            local_478 = strlen((char *)local_888);
            local_488 = &DAT_cbf29ce484222645;
            if (local_888[0] != 0) {
              local_488 = &DAT_cbf29ce484222645;
              pbVar24 = (byte *)((ulong)local_888 | 1);
              bVar21 = local_888[0];
              do {
                local_488 = (undefined1 *)(((ulong)local_488 ^ (ulong)bVar21) * 0x100000001b3);
                bVar21 = *pbVar24;
                pbVar24 = pbVar24 + 1;
              } while (bVar21 != 0);
            }
            local_480 = local_888;
            local_470 = (long *)0x0;
            if (plVar13 == (long *)0x0) {
              plVar29 = (long *)0x0;
            }
            else {
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar11) {
                  *(int *)plVar2 = (int)*plVar2 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              plVar29 = plVar13;
            }
            local_88 = (undefined1 *)0x1e0b5b1836ed2624;
            local_3d18 = plVar13;
            FUN_014082d4(&local_3d10,&local_488,&local_3d18,&local_88,psVar31);
            if (plVar29 != (long *)0x0) {
              plVar4 = plVar29 + 10;
              do {
                iVar12 = (int)*plVar4 + -1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar11) {
                  *(int *)plVar4 = iVar12;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar12 == 0) {
                (**(code **)(*plVar29 + 0x10))(plVar29);
              }
            }
            if (local_470 != (long *)0x0) {
              (**(code **)(*local_470 + 0x20))();
            }
            if (local_3d10 != (long *)0x0) {
              plVar29 = local_3d10 + 10;
              do {
                lVar19 = *plVar29;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar11) {
                  *(int *)plVar29 = (int)lVar19 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if ((int)lVar19 == 1) {
                pcVar25 = *(code **)(*local_3d10 + 0x10);
                goto LAB_01409d90;
              }
            }
          }
          bVar11 = true;
          bVar21 = 1;
        }
        lVar32 = lVar32 + 1;
      } while (lVar32 != 4);
      snprintf((char *)local_888,0x400,"pane_%s%02d_%s","L_info_area_",iVar14,"N_not_inhabiting_00")
      ;
      lVar32 = FUN_01306260(lVar22,local_888);
      *(byte *)(lVar32 + 0x58) = *(byte *)(lVar32 + 0x58) & 0xfe | ~bVar21 & 1;
      snprintf((char *)local_888,0x400,"pane_%s%02d_%s","L_info_area_",iVar14,"N_info_habitat_00");
      lVar32 = FUN_01306260(lVar22,local_888);
      *(byte *)(lVar32 + 0x58) = *(byte *)(lVar32 + 0x58) & 0xfe | bVar21;
      uVar18 = FUN_0140bd64(uVar26 & 0xffffffff);
      plVar29 = local_3c48 + uVar26;
      uVar26 = uVar26 + 1;
      bVar9 = *(byte *)(*plVar29 + 0x58);
      bVar21 = bVar9 | 1;
      if ((uVar18 & 1) == 0) {
        bVar21 = bVar9 & 0xfe;
      }
      *(byte *)(*plVar29 + 0x58) = bVar21;
    } while (uVar26 != 5);
    if (bVar11) {
      bVar21 = *(byte *)(lVar16 + 0x58) & 0xfe;
    }
    else {
      *(byte *)(local_3c48[0] + 0x58) = *(byte *)(local_3c48[0] + 0x58) & 0xfe;
      *(byte *)(local_3c48[1] + 0x58) = *(byte *)(local_3c48[1] + 0x58) & 0xfe;
      *(byte *)(local_3c48[2] + 0x58) = *(byte *)(local_3c48[2] + 0x58) & 0xfe;
      *(byte *)(local_3c48[3] + 0x58) = *(byte *)(local_3c48[3] + 0x58) & 0xfe;
      *(byte *)(local_3c48[4] + 0x58) = *(byte *)(local_3c48[4] + 0x58) & 0xfe;
      bVar21 = *(byte *)(lVar16 + 0x58) | 1;
    }
    *(byte *)(lVar16 + 0x58) = bVar21;
    *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
    cVar10 = local_3d08._4_1_;
    memset(&local_488,0,0x400);
    pcVar6 = "passive";
    if (cVar10 == '\0') {
      pcVar6 = "active";
    }
    pcVar7 = "active";
    if (cVar10 == '\0') {
      pcVar7 = "passive";
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",0,pcVar6);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",0,pcVar7);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_88);
    }
    cVar10 = local_3d08._5_1_;
    memset(&local_488,0,0x400);
    pcVar6 = "passive";
    if (cVar10 == '\0') {
      pcVar6 = "active";
    }
    pcVar7 = "active";
    if (cVar10 == '\0') {
      pcVar7 = "passive";
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",1,pcVar6);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",1,pcVar7);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_88);
    }
    cVar10 = local_3d08._6_1_;
    memset(&local_488,0,0x400);
    pcVar6 = "passive";
    if (cVar10 == '\0') {
      pcVar6 = "active";
    }
    pcVar7 = "active";
    if (cVar10 == '\0') {
      pcVar7 = "passive";
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",2,pcVar6);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",2,pcVar7);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_88);
    }
    cVar10 = local_3d08._7_1_;
    memset(&local_488,0,0x400);
    pcVar6 = "passive";
    if (cVar10 == '\0') {
      pcVar6 = "active";
    }
    pcVar7 = "active";
    if (cVar10 == '\0') {
      pcVar7 = "passive";
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",3,pcVar6);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",3,pcVar7);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_88);
    }
    cVar10 = (char)local_3d00;
    memset(&local_488,0,0x400);
    pcVar6 = "passive";
    if (cVar10 == '\0') {
      pcVar6 = "active";
    }
    pcVar7 = "active";
    if (cVar10 == '\0') {
      pcVar7 = "passive";
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",0,pcVar6);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",0,pcVar7);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_88);
    }
    cVar10 = local_3d00._1_1_;
    memset(&local_488,0,0x400);
    pcVar6 = "passive";
    if (cVar10 == '\0') {
      pcVar6 = "active";
    }
    pcVar7 = "active";
    if (cVar10 == '\0') {
      pcVar7 = "passive";
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",1,pcVar6);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",1,pcVar7);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_88);
    }
    cVar10 = local_3d00._2_1_;
    memset(&local_488,0,0x400);
    pcVar6 = "passive";
    if (cVar10 == '\0') {
      pcVar6 = "active";
    }
    pcVar7 = "active";
    if (cVar10 == '\0') {
      pcVar7 = "passive";
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",2,pcVar6);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",2,pcVar7);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_88);
    }
    cVar10 = local_3d00._3_1_;
    memset(&local_488,0,0x400);
    pcVar6 = "passive";
    if (cVar10 == '\0') {
      pcVar6 = "active";
    }
    pcVar7 = "active";
    if (cVar10 == '\0') {
      pcVar7 = "passive";
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",3,pcVar6);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",3,pcVar7);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_88);
    }
    cVar10 = local_3d00._4_1_;
    memset(&local_488,0,0x400);
    pcVar6 = "passive";
    if (cVar10 == '\0') {
      pcVar6 = "active";
    }
    pcVar7 = "active";
    if (cVar10 == '\0') {
      pcVar7 = "passive";
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",4,pcVar6);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",4,pcVar7);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_88);
    }
    cVar10 = local_3d00._5_1_;
    memset(&local_488,0,0x400);
    pcVar6 = "passive";
    if (cVar10 == '\0') {
      pcVar6 = "active";
    }
    pcVar7 = "active";
    if (cVar10 == '\0') {
      pcVar7 = "passive";
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",5,pcVar6);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",5,pcVar7);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_88);
    }
    cVar10 = local_3d00._6_1_;
    memset(&local_488,0,0x400);
    pcVar6 = "passive";
    if (cVar10 == '\0') {
      pcVar6 = "active";
    }
    pcVar7 = "active";
    if (cVar10 == '\0') {
      pcVar7 = "passive";
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",6,pcVar6);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",6,pcVar7);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_88);
    }
    cVar10 = local_3d00._7_1_;
    memset(&local_488,0,0x400);
    pcVar6 = "passive";
    if (cVar10 == '\0') {
      pcVar6 = "active";
    }
    pcVar7 = "active";
    if (cVar10 == '\0') {
      pcVar7 = "passive";
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",7,pcVar6);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",7,pcVar7);
    local_78 = strlen((char *)&local_488);
    if ((byte)local_488 != 0) {
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        puVar30 = (undefined1 *)(((ulong)puVar30 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    uStack_70 = 0;
    lVar22 = *plVar1;
    local_88 = puVar30;
    ppuStack_80 = &local_488;
    if (lVar22 == 0) goto LAB_0140ab08;
    ppuVar20 = &local_88;
  }
  else {
    local_470 = (long *)0x0;
    local_488 = (undefined1 *)0x315a8dbec6b62037;
    local_480 = (byte *)0x3988622;
    local_478 = 0x10;
    if (plVar13 != (long *)0x0) {
      plVar2 = plVar13 + 10;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    local_3d08 = (undefined1 *)0xbbb02948be0f9455;
    local_3c50 = plVar13;
    FUN_011845f4(lVar22,&local_488,&local_3c50,&local_3d08,10);
    if (local_3c50 != (long *)0x0) {
      plVar2 = local_3c50 + 10;
      do {
        iVar14 = (int)*plVar2 + -1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *(int *)plVar2 = iVar14;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*local_3c50 + 0x10))();
      }
    }
    if (local_470 != (long *)0x0) {
      (**(code **)(*local_470 + 0x20))();
    }
    *(byte *)(local_3c48[0] + 0x58) = *(byte *)(local_3c48[0] + 0x58) & 0xfe;
    *(byte *)(local_3c48[1] + 0x58) = *(byte *)(local_3c48[1] + 0x58) & 0xfe;
    *(byte *)(local_3c48[2] + 0x58) = *(byte *)(local_3c48[2] + 0x58) & 0xfe;
    *(byte *)(local_3c48[3] + 0x58) = *(byte *)(local_3c48[3] + 0x58) & 0xfe;
    *(byte *)(local_3c48[4] + 0x58) = *(byte *)(local_3c48[4] + 0x58) & 0xfe;
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
    puVar30 = &DAT_cbf29ce484222645;
    *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 1;
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",0,"active");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_3d08);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",0,"passive");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_3d08);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",1,"active");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_3d08);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",1,"passive");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_3d08);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",2,"active");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_3d08);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",2,"passive");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_3d08);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",3,"active");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_3d08);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",3,"passive");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_3d08);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",0,"active");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_3d08);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",0,"passive");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_3d08);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",1,"active");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_3d08);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",1,"passive");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_3d08);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",2,"active");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_3d08);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",2,"passive");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_3d08);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",3,"active");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_3d08);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",3,"passive");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_3d08);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",4,"active");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_3d08);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",4,"passive");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_3d08);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",5,"active");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_3d08);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",5,"passive");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_3d08);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",6,"active");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_3d08);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",6,"passive");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b1e8(*plVar1,&local_3d08);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",7,"active");
    local_3cf8[0] = strlen((char *)&local_488);
    local_3d08 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_3d08 = &DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        local_3d08 = (undefined1 *)(((ulong)local_3d08 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    local_3d00 = &local_488;
    if (*plVar1 != 0) {
      FUN_0283b430(*plVar1,&local_3d08);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",7,"passive");
    local_3cf8[0] = strlen((char *)&local_488);
    if ((byte)local_488 != 0) {
      pbVar24 = (byte *)((ulong)&local_488 | 1);
      bVar21 = (byte)local_488;
      do {
        puVar30 = (undefined1 *)(((ulong)puVar30 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar21 != 0);
    }
    local_3cf8[1] = 0;
    lVar22 = *plVar1;
    local_3d08 = puVar30;
    local_3d00 = &local_488;
    if (lVar22 == 0) goto LAB_0140ab08;
    ppuVar20 = (undefined1 **)&local_3d08;
  }
  FUN_0283b1e8(lVar22,ppuVar20);
LAB_0140ab08:
  if (plVar33 != (long *)0x0) {
    lVar22 = plVar33[0xb];
    piVar23 = (int *)(lVar22 + 0xc);
    do {
      iVar14 = *piVar23;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar11) {
        *piVar23 = iVar14 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*plVar33 + 0x20))(plVar33);
    }
  }
  if (plVar28 != (long *)0x0) {
    plVar33 = plVar28 + 10;
    do {
      iVar14 = (int)*plVar33 + -1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar11) {
        *(int *)plVar33 = iVar14;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar28 + 0x10))(plVar28);
    }
  }
  if (plVar13 != (long *)0x0) {
    plVar28 = plVar13 + 10;
    do {
      iVar14 = (int)*plVar28 + -1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar11) {
        *(int *)plVar28 = iVar14;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  return;
LAB_01408a40:
  uVar26 = uVar26 + 1;
  piVar23 = piVar23 + 6;
  if (uVar27 == uVar26) goto LAB_01408a50;
  goto LAB_01408624;
}


