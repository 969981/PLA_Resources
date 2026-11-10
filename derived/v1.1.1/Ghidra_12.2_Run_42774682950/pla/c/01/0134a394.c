/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134a394; name: FUN_0134a394
 */


void FUN_0134a394(long param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  float *pfVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  long *plVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  long lVar16;
  uint *puVar17;
  byte *pbVar18;
  float fVar19;
  uint uVar20;
  uint uVar21;
  byte bVar22;
  long *plVar23;
  uint uVar24;
  char *param3;
  byte bVar25;
  long **pplVar26;
  float fVar27;
  float local_488;
  float fStack_484;
  long **local_88;
  float *local_80;
  char *local_78;
  long *local_70;
  long *local_68;
  long *local_58;
  
  uVar14 = *param_2;
  pfVar1 = (float *)(param_1 + 0x95c);
  *(undefined8 *)pfVar1 = uVar14;
  fVar27 = (float)uVar14;
  fVar12 = -940.0;
  fVar19 = (float)((ulong)uVar14 >> 0x20);
  if ((fVar27 < -940.0) || (fVar12 = 940.0, 940.0 < fVar27)) {
    *pfVar1 = fVar12;
    fVar27 = fVar12;
  }
  fVar12 = 480.0;
  if ((480.0 < fVar19) || (fVar12 = -480.0, fVar19 < -480.0)) {
    *(float *)(param_1 + 0x960) = fVar12;
    pcVar15 = *(code **)(param_1 + 0x650);
    fVar19 = fVar12;
  }
  else {
    pcVar15 = *(code **)(param_1 + 0x650);
  }
  if (pcVar15 != (code *)0x0) {
    local_488 = fVar27 + (fVar27 - fVar27) * *(float *)(param_1 + 0x980);
    fStack_484 = fVar19 + (fVar19 - fVar19) * *(float *)(param_1 + 0x980);
    (*pcVar15)(param_1 + 0x670,&local_488);
  }
  lVar16 = *(long *)(param_1 + 0x5c0);
  *(undefined1 *)(lVar16 + 0x104) = 1;
  *(undefined8 *)(lVar16 + 0x108) = *(undefined8 *)pfVar1;
  lVar16 = *(long *)(param_1 + 0x5c0);
  uVar20 = (uint)(*(float *)(param_1 + 0x95c) + 960.0);
  puVar17 = *(uint **)(*(long *)(*(long *)(lVar16 + 0x168) + 0x10) + 0x250);
  uVar3 = *puVar17;
  uVar4 = puVar17[1];
  if ((int)uVar20 < 1) {
    uVar20 = 0;
  }
  uVar21 = (uint)(540.0 - *(float *)(param_1 + 0x960));
  if (uVar20 < uVar3) {
    if (0 < (int)uVar21) goto LAB_0134a4b4;
LAB_0134b444:
    uVar21 = 0;
    if (uVar4 == 0) goto LAB_0134b450;
  }
  else {
    uVar20 = uVar3 - 1;
    if ((int)uVar21 < 1) goto LAB_0134b444;
LAB_0134a4b4:
    if (uVar4 <= uVar21) {
LAB_0134b450:
      uVar21 = uVar4 - 1;
    }
  }
  uVar24 = 7;
  if ((uVar20 < uVar3) && (uVar21 < uVar4)) {
    uVar20 = *(byte *)((long)puVar17 + (ulong)(uVar20 + uVar21 * uVar3) + 8) - 3;
    if (uVar20 < 7) {
      uVar24 = *(uint *)(&DAT_03a7b310 + (long)(char)uVar20 * 4);
    }
    else {
      uVar24 = 7;
    }
  }
  memset(&local_488,0,0x400);
  uVar20 = *(uint *)(lVar16 + 0x88);
  *(uint *)(lVar16 + 0x88) = uVar24;
  uVar10 = FUN_0131d328(uVar24);
  lVar16 = *(long *)(param_1 + 0x5c0);
  uVar13 = 1;
  if ((uVar10 & 1) != 0) {
    uVar13 = 2;
  }
  *(undefined4 *)(lVar16 + 0xd4) = uVar13;
  *(uint *)(lVar16 + 0xd8) = uVar24;
  if ((((uVar24 == 7) || ((param_3 & 1) != 0)) || (uVar20 != uVar24)) ||
     (uVar10 = FUN_0131d328(uVar24), (uVar10 & 1) == 0)) {
    pplVar26 = (long **)&DAT_cbf29ce484222645;
    snprintf((char *)&local_488,0x400,"anime_%s_select_state","L_area_vfx_00");
    local_78 = (char *)strlen((char *)&local_488);
    local_88 = (long **)&DAT_cbf29ce484222645;
    if (local_488._0_1_ != 0) {
      local_88 = (long **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        local_88 = (long **)(((ulong)local_88 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s_unselect_state","L_area_vfx_00");
    local_78 = (char *)strlen((char *)&local_488);
    local_88 = (long **)&DAT_cbf29ce484222645;
    if (local_488._0_1_ != 0) {
      local_88 = (long **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        local_88 = (long **)(((ulong)local_88 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s_select_state","L_area_vfx_01");
    local_78 = (char *)strlen((char *)&local_488);
    local_88 = (long **)&DAT_cbf29ce484222645;
    if (local_488._0_1_ != 0) {
      local_88 = (long **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        local_88 = (long **)(((ulong)local_88 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s_unselect_state","L_area_vfx_01");
    local_78 = (char *)strlen((char *)&local_488);
    local_88 = (long **)&DAT_cbf29ce484222645;
    if (local_488._0_1_ != 0) {
      local_88 = (long **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        local_88 = (long **)(((ulong)local_88 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s_select_state","L_area_vfx_02");
    local_78 = (char *)strlen((char *)&local_488);
    local_88 = (long **)&DAT_cbf29ce484222645;
    if (local_488._0_1_ != 0) {
      local_88 = (long **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        local_88 = (long **)(((ulong)local_88 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s_unselect_state","L_area_vfx_02");
    local_78 = (char *)strlen((char *)&local_488);
    local_88 = (long **)&DAT_cbf29ce484222645;
    if (local_488._0_1_ != 0) {
      local_88 = (long **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        local_88 = (long **)(((ulong)local_88 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s_select_state","L_area_vfx_03");
    local_78 = (char *)strlen((char *)&local_488);
    local_88 = (long **)&DAT_cbf29ce484222645;
    if (local_488._0_1_ != 0) {
      local_88 = (long **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        local_88 = (long **)(((ulong)local_88 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s_unselect_state","L_area_vfx_03");
    local_78 = (char *)strlen((char *)&local_488);
    local_88 = (long **)&DAT_cbf29ce484222645;
    if (local_488._0_1_ != 0) {
      local_88 = (long **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        local_88 = (long **)(((ulong)local_88 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s_select_state","L_area_vfx_04");
    local_78 = (char *)strlen((char *)&local_488);
    local_88 = (long **)&DAT_cbf29ce484222645;
    if (local_488._0_1_ != 0) {
      local_88 = (long **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        local_88 = (long **)(((ulong)local_88 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s_unselect_state","L_area_vfx_04");
    local_78 = (char *)strlen((char *)&local_488);
    local_88 = (long **)&DAT_cbf29ce484222645;
    if (local_488._0_1_ != 0) {
      local_88 = (long **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        local_88 = (long **)(((ulong)local_88 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s_select_state","L_area_vfx_05");
    local_78 = (char *)strlen((char *)&local_488);
    local_88 = (long **)&DAT_cbf29ce484222645;
    if (local_488._0_1_ != 0) {
      local_88 = (long **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        local_88 = (long **)(((ulong)local_88 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s_unselect_state","L_area_vfx_05");
    local_78 = (char *)strlen((char *)&local_488);
    local_88 = (long **)&DAT_cbf29ce484222645;
    if (local_488._0_1_ != 0) {
      local_88 = (long **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        local_88 = (long **)(((ulong)local_88 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s_select_state","L_area_vfx_06");
    local_78 = (char *)strlen((char *)&local_488);
    local_88 = (long **)&DAT_cbf29ce484222645;
    if (local_488._0_1_ != 0) {
      local_88 = (long **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        local_88 = (long **)(((ulong)local_88 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s_unselect_state","L_area_vfx_06");
    local_78 = (char *)strlen((char *)&local_488);
    if (local_488._0_1_ != 0) {
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        pplVar26 = (long **)(((ulong)pplVar26 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_88 = pplVar26;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_88);
    }
  }
  if (((uVar24 != 7) && (uVar20 != uVar24 || (param_3 & 1) != 0)) &&
     (uVar10 = FUN_0131d328(uVar24), (uVar10 & 1) != 0)) {
    param3 = (&PTR_s_L_area_vfx_00_042066f8)[uVar24];
    pplVar26 = (long **)&DAT_cbf29ce484222645;
    snprintf((char *)&local_488,0x400,"anime_%s_unselect_state",param3);
    local_78 = (char *)strlen((char *)&local_488);
    local_88 = (long **)&DAT_cbf29ce484222645;
    if (local_488._0_1_ != 0) {
      local_88 = (long **)&DAT_cbf29ce484222645;
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        local_88 = (long **)(((ulong)local_88 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_88);
    }
    snprintf((char *)&local_488,0x400,"anime_%s_select_state",param3);
    local_78 = (char *)strlen((char *)&local_488);
    if (local_488._0_1_ != 0) {
      pbVar18 = (byte *)((ulong)&local_488 | 1);
      bVar8 = local_488._0_1_;
      do {
        pplVar26 = (long **)(((ulong)pplVar26 ^ (ulong)bVar8) * 0x100000001b3);
        bVar8 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar8 != 0);
    }
    local_70 = (long *)0x0;
    local_88 = pplVar26;
    local_80 = &local_488;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_88);
    }
    if ((param_4 & 1) != 0) {
      local_88 = (long **)0xa77e6c11944d07fb;
      local_80 = (float *)0x3945217;
      local_78 = (char *)0x1b;
      local_70 = (long *)0x0;
      FUN_028354b0(&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
  }
  if (uVar20 != uVar24) {
    lVar16 = *(long *)(param_1 + 0x5c0);
    *(undefined1 *)(lVar16 + 0x110) = 0;
    *(undefined8 *)(lVar16 + 0x120) = 0;
    *(undefined8 *)(lVar16 + 0x114) = 0;
    *(undefined1 *)(lVar16 + 0x11c) = 0;
  }
  *(undefined2 *)(param_1 + 0x959) = 0;
  iVar9 = FUN_0131a338();
  uVar10 = FUN_0131d328(uVar24);
  if ((uVar10 & 1) != 0) {
    if (iVar9 == 7) {
      iVar9 = 5;
    }
    *(undefined1 *)(param_1 + 0x959) = 1;
    iVar9 = FUN_0131c8b8(uVar24,iVar9,*(long *)(param_1 + 0x5c0) + 0xe4,0);
    if ((iVar9 != 0) && (*(int *)(*(long *)(param_1 + 0x5c0) + 0x80) == 1)) {
      *(undefined1 *)(param_1 + 0x95a) = 1;
    }
  }
  bVar8 = FUN_0131d0f4();
  *(byte *)(param_1 + 0x958) = bVar8 & 1;
  plVar23 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar23 != (long *)0x0) {
    lVar16 = plVar23[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0134b474;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_88 = &local_58;
  local_58 = (long *)0x0;
  local_80 = (float *)0x88fe927d6b3f3e86;
  local_78 = "ShortcutInputZoom";
  local_70 = (long *)&DAT_00000011;
  local_68 = (long *)0x0;
  FUN_00d6190c(plVar23,&local_88,0);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  plVar6 = local_58;
  if (plVar23 != (long *)0x0) {
    lVar16 = plVar23[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if ((plVar6 != (long *)0x0) &&
     (cVar5 = *(char *)(param_1 + 0x959), *(char *)((long)plVar6 + 0xa2) != cVar5)) {
    *(char *)((long)plVar6 + 0xa2) = cVar5;
    (**(code **)(*plVar6 + 0x98))(plVar6,cVar5 != '\0');
  }
  plVar23 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar23 != (long *)0x0) {
    lVar16 = plVar23[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0134b474;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_88 = &local_58;
  local_58 = (long *)0x0;
  local_80 = (float *)0xeb5a15be1585388e;
  local_78 = "ShortcutInputZoomHidden";
  local_70 = (long *)0x17;
  local_68 = (long *)0x0;
  FUN_00d6190c(plVar23,&local_88,0);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  plVar6 = local_58;
  if (plVar23 != (long *)0x0) {
    lVar16 = plVar23[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if ((plVar6 != (long *)0x0) &&
     (cVar5 = *(char *)(param_1 + 0x959), *(char *)((long)plVar6 + 0xa2) != cVar5)) {
    *(char *)((long)plVar6 + 0xa2) = cVar5;
    (**(code **)(*plVar6 + 0x98))(plVar6,cVar5 != '\0');
  }
  plVar23 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar23 != (long *)0x0) {
    lVar16 = plVar23[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0134b474;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_88 = &local_58;
  local_58 = (long *)0x0;
  local_80 = (float *)0x8c9f5041309993d0;
  local_78 = "ShortcutInputA";
  local_70 = (long *)0xe;
  local_68 = (long *)0x0;
  FUN_00d6190c(plVar23,&local_88,0);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  plVar6 = local_58;
  if (plVar23 != (long *)0x0) {
    lVar16 = plVar23[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if ((plVar6 != (long *)0x0) &&
     (cVar5 = *(char *)(param_1 + 0x95a), *(char *)((long)plVar6 + 0xa2) != cVar5)) {
    *(char *)((long)plVar6 + 0xa2) = cVar5;
    (**(code **)(*plVar6 + 0x98))(plVar6,cVar5 != '\0');
  }
  plVar23 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar23 != (long *)0x0) {
    lVar16 = plVar23[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0134b474;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_88 = &local_58;
  local_58 = (long *)0x0;
  local_80 = (float *)0x8c9f484130998638;
  local_78 = "ShortcutInputY";
  local_70 = (long *)0xe;
  local_68 = (long *)0x0;
  FUN_00d6190c(plVar23,&local_88,0);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  plVar6 = local_58;
  if (plVar23 != (long *)0x0) {
    lVar16 = plVar23[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if ((plVar6 != (long *)0x0) &&
     (cVar5 = *(char *)(param_1 + 0x958), *(char *)((long)plVar6 + 0xa2) != cVar5)) {
    *(char *)((long)plVar6 + 0xa2) = cVar5;
    (**(code **)(*plVar6 + 0x98))(plVar6,cVar5 != '\0');
  }
  iVar9 = *(int *)(*(long *)(param_1 + 0x5c0) + 0x88);
  bVar8 = FUN_0131d328(0);
  bVar25 = bVar8 & iVar9 == 0;
  bVar8 = bVar8 & 1;
  uVar10 = FUN_0131d328(1);
  if ((uVar10 & 1) != 0) {
    bVar7 = bVar8 != 0;
    bVar25 = iVar9 == 1 | bVar25;
    bVar8 = 1;
    if (bVar7) {
      bVar8 = 2;
    }
  }
  uVar10 = FUN_0131d328(2);
  if ((uVar10 & 1) != 0) {
    bVar25 = iVar9 == 2 | bVar25;
    bVar8 = bVar8 + 1;
  }
  uVar10 = FUN_0131d328(3);
  if ((uVar10 & 1) != 0) {
    bVar25 = iVar9 == 3 | bVar25;
    bVar8 = bVar8 + 1;
  }
  uVar10 = FUN_0131d328(4);
  uVar11 = FUN_0131d328(6);
  bVar22 = 1;
  if ((((uVar10 & 1) == 0) && (bVar8 == 0)) && ((uVar11 & 1) == 0)) {
    bVar22 = iVar9 != 5 & (bVar25 ^ 1);
  }
  plVar23 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar23 != (long *)0x0) {
    lVar16 = plVar23[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0134b474;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_88 = &local_58;
  local_58 = (long *)0x0;
  local_80 = (float *)0x662bf4049b3fdeb1;
  local_78 = "ShortcutInputListMoveUp";
  local_70 = (long *)0x17;
  local_68 = (long *)0x0;
  FUN_00d6190c(plVar23,&local_88,0);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  plVar6 = local_58;
  if (plVar23 != (long *)0x0) {
    lVar16 = plVar23[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if ((plVar6 != (long *)0x0) && (*(byte *)((long)plVar6 + 0xa2) != bVar22)) {
    *(byte *)((long)plVar6 + 0xa2) = bVar22;
    (**(code **)(*plVar6 + 0x98))(plVar6,bVar22);
  }
  plVar23 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar23 != (long *)0x0) {
    lVar16 = plVar23[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_0134b474:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_88 = &local_58;
  local_58 = (long *)0x0;
  local_80 = (float *)0xaed23f5c7b3ec6d8;
  local_78 = "ShortcutInputListMoveDown";
  local_70 = (long *)0x19;
  local_68 = (long *)0x0;
  FUN_00d6190c(plVar23,&local_88,0);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  plVar6 = local_58;
  if (plVar23 != (long *)0x0) {
    lVar16 = plVar23[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if ((plVar6 != (long *)0x0) && (*(byte *)((long)plVar6 + 0xa2) != bVar22)) {
    *(byte *)((long)plVar6 + 0xa2) = bVar22;
    (**(code **)(*plVar6 + 0x98))(plVar6,bVar22);
  }
  FUN_01308e60(*(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x188),*(undefined1 *)(param_1 + 0x958),
               *(undefined1 *)(param_1 + 0x959),*(undefined1 *)(param_1 + 0x95a),0,0);
  return;
}


