/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0140ac74; name: FUN_0140ac74
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0140ac74(long param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  byte *pbVar19;
  ulong uVar20;
  long *plVar21;
  undefined1 *puVar22;
  long *local_890;
  char acStack_888 [1024];
  undefined8 local_488;
  char *local_480;
  undefined8 local_478;
  long *local_470;
  undefined1 *local_88;
  undefined8 *puStack_80;
  size_t local_78;
  undefined8 uStack_70;
  
  lVar17 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar4 = *(uint *)(lVar17 + 400);
  if (uVar4 != 0) {
    uVar20 = 0;
    piVar18 = (int *)(lVar17 + 0x20);
    do {
      puVar2 = (undefined8 *)PTR_DAT_04379c88;
      if (*(long *)(piVar18 + -4) != 0) {
        puVar2 = (undefined8 *)(*(long *)(piVar18 + -4) + 0x58);
      }
      if (((undefined1 *)*puVar2 == &DAT_304928236d5bcabe) && (*piVar18 == 10)) {
        if ((uint)uVar20 < 0x10) {
          plVar21 = *(long **)(piVar18 + -2);
          if (plVar21 != (long *)0x0) {
            lVar17 = plVar21[0xb];
            if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar17 + 0x10) == 0) {
              uVar16 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
              *(undefined8 *)(lVar17 + 0x10) = uVar16;
            }
            piVar18 = (int *)(lVar17 + 0xc);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar7) {
                *piVar18 = *piVar18 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
        }
        else {
          plVar21 = (long *)0x0;
        }
        plVar8 = (long *)plVar21[0xd];
        goto joined_r0x0140ad04;
      }
      uVar20 = uVar20 + 1;
      piVar18 = piVar18 + 6;
    } while (uVar4 != uVar20);
  }
  plVar21 = (long *)0x0;
  plVar8 = _DAT_00000068;
joined_r0x0140ad04:
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar21 != (long *)0x0) {
    lVar17 = plVar21[0xb];
    piVar18 = (int *)(lVar17 + 0xc);
    do {
      iVar3 = *piVar18;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar7) {
        *piVar18 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  lVar17 = param_1 + 0x180;
  memset(acStack_888,0,0x400);
  snprintf(acStack_888,0x400,"pane_%s%02d","N_info_area_",0);
  lVar9 = FUN_01306260(lVar17,acStack_888);
  snprintf(acStack_888,0x400,"pane_%s%02d","N_info_area_",1);
  lVar10 = FUN_01306260(lVar17,acStack_888);
  snprintf(acStack_888,0x400,"pane_%s%02d","N_info_area_",2);
  lVar11 = FUN_01306260(lVar17,acStack_888);
  snprintf(acStack_888,0x400,"pane_%s%02d","N_info_area_",3);
  lVar12 = FUN_01306260(lVar17,acStack_888);
  snprintf(acStack_888,0x400,"pane_%s%02d","N_info_area_",4);
  lVar13 = FUN_01306260(lVar17,acStack_888);
  lVar14 = FUN_01306260(lVar17,"pane_N_habitat_unknown_00");
  lVar15 = FUN_01306260(lVar17,"pane_N_investigating_00");
  if (param_2 == 0) {
    local_470 = (long *)0x0;
    local_488 = 0x315a8dbec6b62037;
    local_478 = 0x10;
    local_480 = "pane_T_h_dmap_00";
    if (plVar8 != (long *)0x0) {
      plVar21 = plVar8 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar7) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_88 = (undefined1 *)0xbbb02948be0f9455;
    local_890 = plVar8;
    FUN_011845f4(lVar17,&local_488,&local_890,&local_88,10);
    if (local_890 != (long *)0x0) {
      plVar21 = local_890 + 10;
      do {
        iVar3 = (int)*plVar21 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar7) {
          *(int *)plVar21 = iVar3;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_890 + 0x10))();
      }
    }
    if (local_470 != (long *)0x0) {
      (**(code **)(*local_470 + 0x20))();
    }
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
    *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe;
    puVar22 = &DAT_cbf29ce484222645;
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",0,"active");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_88);
    }
    plVar21 = (long *)(param_1 + 0x2c8);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",0,"passive");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b1e8(*plVar21,&local_88);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",1,"active");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b430(*plVar21,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",1,"passive");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b1e8(*plVar21,&local_88);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",2,"active");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b430(*plVar21,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",2,"passive");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b1e8(*plVar21,&local_88);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",3,"active");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b430(*plVar21,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_time_",3,"passive");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b1e8(*plVar21,&local_88);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",0,"active");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b430(*plVar21,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",0,"passive");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b1e8(*plVar21,&local_88);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",1,"active");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b430(*plVar21,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",1,"passive");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b1e8(*plVar21,&local_88);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",2,"active");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b430(*plVar21,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",2,"passive");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b1e8(*plVar21,&local_88);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",3,"active");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b430(*plVar21,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",3,"passive");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b1e8(*plVar21,&local_88);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",4,"active");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b430(*plVar21,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",4,"passive");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b1e8(*plVar21,&local_88);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",5,"active");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b430(*plVar21,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",5,"passive");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b1e8(*plVar21,&local_88);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",6,"active");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b430(*plVar21,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",6,"passive");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b1e8(*plVar21,&local_88);
    }
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",7,"active");
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b430(*plVar21,&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s%02d_%s","L_icon_weather_",7,"passive");
    local_78 = strlen((char *)&local_488);
    if ((byte)local_488 != 0) {
      pbVar19 = (byte *)((ulong)&local_488 | 1);
      bVar5 = (byte)local_488;
      do {
        puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar5 != 0);
    }
    uStack_70 = 0;
    local_88 = puVar22;
    puStack_80 = &local_488;
    if (*plVar21 != 0) {
      FUN_0283b1e8(*plVar21,&local_88);
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar21 = plVar8 + 10;
    do {
      iVar3 = (int)*plVar21 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *(int *)plVar21 = iVar3;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return;
}


