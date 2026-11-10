/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01478714; name: FUN_01478714
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01478714(long param_1,float *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long **pplVar8;
  long **pplVar9;
  long *plVar10;
  ushort uVar11;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  long *local_190;
  long local_188;
  long lStack_180;
  long local_178;
  long *local_170;
  long local_168;
  long lStack_160;
  long local_158;
  long *local_150;
  long local_148;
  long lStack_140;
  long local_138;
  long *local_130;
  long local_128 [8];
  long **local_e8;
  long *local_e0;
  long *plStack_d8;
  long *local_d0;
  long **local_c8;
  long **local_c0;
  long *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  
  if (param_2 == (float *)0x0) goto LAB_01479758;
  if ((*(long *)(param_1 + 0x2c8) != 0) &&
     (uVar12 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&DAT_043acdb8), (uVar12 & 1) == 0)) {
    return 0;
  }
  if (*(char *)(param_2 + 0xc) == '\0') {
    return 1;
  }
  plVar22 = (long *)(param_1 + 0x2c8);
  plVar20 = (long *)*plVar22;
  if (plVar20 != (long *)0x0) {
    plVar26 = plVar20 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar5) {
        *(int *)plVar26 = (int)*plVar26 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  fVar31 = param_2[1];
  snprintf((char *)local_128,0x40,"anime_L_result_plate_%02d_L_gauge_exp_00_gauge_scale",(int)fVar31
          );
  local_e0 = local_128;
  FUN_009313e8(&local_b8,&local_e0);
  plVar26 = local_b8;
  if (local_b8 == (long *)0x0) {
    lVar27 = *(long *)PTR_DAT_04379c88;
LAB_0147948c:
    lStack_140 = *(long *)PTR_PTR_04379d00;
    if (local_b8 != (long *)0x0) goto LAB_014787d4;
LAB_0147949c:
    local_138 = 0;
  }
  else {
    lVar27 = local_b8[0xb];
    if (local_b8 == (long *)0x0) goto LAB_0147948c;
    lStack_140 = local_b8[0xc];
    if (local_b8 == (long *)0x0) goto LAB_0147949c;
LAB_014787d4:
    local_138 = local_b8[0xd];
  }
  local_130 = (long *)0x0;
  local_148 = lVar27;
  if (local_b8 == (long *)0x0) {
    local_130 = local_b8;
  }
  else {
    (**(code **)(*local_b8 + 0x18))(local_b8);
    local_130 = plVar26;
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  snprintf((char *)local_128,0x40,"anime_L_result_plate_%02d_lvup",(int)fVar31);
  local_e0 = local_128;
  FUN_009313e8(&local_b8,&local_e0);
  plVar28 = local_b8;
  if (local_b8 == (long *)0x0) {
    lVar29 = *(long *)PTR_DAT_04379c88;
LAB_014794b4:
    lStack_160 = *(long *)PTR_PTR_04379d00;
    if (local_b8 != (long *)0x0) goto LAB_01478834;
LAB_014794c4:
    local_158 = 0;
  }
  else {
    lVar29 = local_b8[0xb];
    if (local_b8 == (long *)0x0) goto LAB_014794b4;
    lStack_160 = local_b8[0xc];
    if (local_b8 == (long *)0x0) goto LAB_014794c4;
LAB_01478834:
    local_158 = local_b8[0xd];
  }
  local_150 = (long *)0x0;
  local_168 = lVar29;
  if (local_b8 == (long *)0x0) {
    local_150 = local_b8;
  }
  else {
    (**(code **)(*local_b8 + 0x18))(local_b8);
    local_150 = plVar28;
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  snprintf((char *)local_128,0x40,"anime_L_result_plate_%02d_L_lvup_00_keep",(int)fVar31);
  local_e0 = local_128;
  FUN_009313e8(&local_b8,&local_e0);
  plVar10 = local_b8;
  if (local_b8 == (long *)0x0) {
    local_188 = *(long *)PTR_DAT_04379c88;
LAB_014794dc:
    lStack_180 = *(long *)PTR_PTR_04379d00;
    if (local_b8 != (long *)0x0) goto LAB_01478894;
LAB_014794ec:
    local_178 = 0;
  }
  else {
    local_188 = local_b8[0xb];
    if (local_b8 == (long *)0x0) goto LAB_014794dc;
    lStack_180 = local_b8[0xc];
    if (local_b8 == (long *)0x0) goto LAB_014794ec;
LAB_01478894:
    local_178 = local_b8[0xd];
  }
  local_170 = (long *)0x0;
  if (local_b8 == (long *)0x0) {
    local_170 = local_b8;
  }
  else {
    (**(code **)(*local_b8 + 0x18))(local_b8);
    local_170 = plVar10;
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  snprintf((char *)local_128,0x40,"anime_L_result_plate_%02d_lv_exp_out",(int)fVar31);
  local_e0 = local_128;
  FUN_009313e8(&local_b8,&local_e0);
  plVar10 = local_b8;
  if (local_b8 == (long *)0x0) {
    local_1a8 = *(long *)PTR_DAT_04379c88;
LAB_01479504:
    lStack_1a0 = *(long *)PTR_PTR_04379d00;
    if (local_b8 != (long *)0x0) goto LAB_014788f4;
LAB_01479514:
    local_198 = 0;
  }
  else {
    local_1a8 = local_b8[0xb];
    if (local_b8 == (long *)0x0) goto LAB_01479504;
    lStack_1a0 = local_b8[0xc];
    if (local_b8 == (long *)0x0) goto LAB_01479514;
LAB_014788f4:
    local_198 = local_b8[0xd];
  }
  local_190 = (long *)0x0;
  if (local_b8 == (long *)0x0) {
    local_190 = local_b8;
  }
  else {
    (**(code **)(*local_b8 + 0x18))(local_b8);
    local_190 = plVar10;
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  snprintf((char *)local_128,0x40,"anime_L_result_plate_%02d_info_add_in",(int)fVar31);
  local_e0 = local_128;
  FUN_009313e8(&local_b8,&local_e0);
  plVar10 = local_b8;
  if ((local_b8 != (long *)0x0) &&
     ((**(code **)(*local_b8 + 0x18))(local_b8), local_b8 != (long *)0x0)) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (param_2[9] == 5.60519e-45) {
    uVar21 = 1;
    goto joined_r0x014792f8;
  }
  switch(param_2[9]) {
  case 0.0:
    break;
  case 1.4013e-45:
    goto switchD_01478a38_caseD_1;
  case 2.8026e-45:
    plVar22 = (long *)plVar20[0x34];
    lVar27 = plVar20[0x35];
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x18))(plVar28);
    }
    plVar17 = plVar22;
    if ((lVar27 != 0) && (*plVar22 != lVar29)) {
      lVar16 = lVar27 * 0x30;
      plVar24 = plVar22 + lVar27 * 6;
      do {
        lVar16 = lVar16 + -0x30;
        plVar17 = plVar24;
        if (lVar16 == 0) break;
        plVar14 = plVar22 + 6;
        plVar22 = plVar22 + 6;
        plVar17 = plVar22;
      } while (*plVar14 != lVar29);
    }
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
    if (plVar17 != (long *)(plVar20[0x34] + plVar20[0x35] * 0x30)) {
      uVar12 = (ulong)*(uint *)(plVar17 + 5);
      if (((*(uint *)(plVar17 + 5) < *(uint *)(plVar17[4] + 0x278)) &&
          (lVar27 = *(long *)(plVar17[4] + 600), *(char *)(lVar27 + uVar12 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar27 + uVar12 * 0x48 + 0xb) != '\0')) {
        plVar22 = (long *)(lVar27 + uVar12 * 0x48 + 0x10);
        lVar29 = *plVar22;
        if ((lVar29 != 0) && (*(char *)(lVar27 + uVar12 * 0x48 + 9) == '\0')) {
          fVar31 = *(float *)(lVar29 + 0x20);
          uVar11 = FUN_00227728();
          uVar12 = FUN_00227744(*plVar22);
          if (((float)uVar11 <= fVar31) && ((uVar12 & 1) == 0)) goto LAB_01479708;
        }
        goto switchD_01478a38_default;
      }
    }
LAB_01479708:
    FUN_0283b1e8(plVar20,&local_188);
    FUN_0283b748(0x42c80000,plVar20,&local_148);
    *param_2 = (float)(100 - (int)param_2[3]) / (float)(int)param_2[6];
    fVar31 = 1.4013e-45;
    goto LAB_01479648;
  case 4.2039e-45:
    if (*(char *)((long)param_2 + 0x2d) == '\0') {
      if (*(char *)(param_2 + 0xb) == '\0') {
        if ((*(char *)((long)param_2 + 0x2e) == '\0') ||
           (uVar12 = FUN_0147a958(param_1,param_2,1), (uVar12 & 1) == 0)) goto LAB_014790cc;
        *(undefined1 *)((long)param_2 + 0x2e) = 0;
        cVar4 = *(char *)((long)param_2 + 0x2d);
      }
      else {
        uVar12 = FUN_0147a958(param_1,param_2,0);
        if ((uVar12 & 1) == 0) {
LAB_014790cc:
          cVar4 = *(char *)((long)param_2 + 0x2d);
        }
        else {
          *(undefined1 *)(param_2 + 0xb) = 0;
          cVar4 = *(char *)((long)param_2 + 0x2d);
        }
      }
      if (cVar4 != '\0') goto switchD_01478a38_default;
      cVar4 = *(char *)(param_2 + 0xb);
    }
    else {
      uVar12 = FUN_0147a958(param_1,param_2,2);
      if ((uVar12 & 1) == 0) goto LAB_014790cc;
      *(undefined1 *)((long)param_2 + 0x2d) = 0;
      cVar4 = *(char *)(param_2 + 0xb);
    }
    if ((cVar4 != '\0') || (*(char *)((long)param_2 + 0x2e) != '\0')) goto switchD_01478a38_default;
    goto LAB_014792ec;
  default:
    goto switchD_01478a38_default;
  }
  fVar32 = param_2[1];
  if (0 < (int)param_2[4]) {
    plVar26 = (long *)*plVar22;
    if (plVar26 != (long *)0x0) {
      plVar28 = plVar26 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar5) {
          *(int *)plVar28 = (int)*plVar28 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar28 = (long *)plVar26[0x37];
    if (plVar28 == (long *)0x0) {
      FUN_02c395d0(0,0,param_2[4],3,0,1);
    }
    else {
      lVar27 = plVar28[0xb];
      if (*(undefined8 **)(lVar27 + 0x18) == (undefined8 *)0x0) {
LAB_01479758:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar27 + 0x10) == 0) {
        uVar21 = (**(code **)**(undefined8 **)(lVar27 + 0x18))();
        *(undefined8 *)(lVar27 + 0x10) = uVar21;
      }
      piVar3 = (int *)(lVar27 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = *piVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_02c395d0(plVar28,0,param_2[4],3,0,1);
      lVar27 = plVar28[0xb];
      piVar3 = (int *)(lVar27 + 0xc);
      do {
        iVar6 = *piVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar27 + 0x18) = 0;
        (**(code **)(*plVar28 + 0x20))(plVar28);
      }
    }
    plVar28 = plVar26 + 10;
    do {
      iVar6 = (int)*plVar28 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar5) {
        *(int *)plVar28 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
    }
    snprintf((char *)&local_b8,0x40,"pane_L_result_plate_%02d_T_lv_01",(int)fVar32);
    local_e8 = &local_b8;
    FUN_009313e8(&local_c0,&local_e8);
    pplVar9 = local_c0;
    if (local_c0 == (long **)0x0) {
      local_e0 = *(long **)PTR_DAT_04379c88;
LAB_014797c4:
      plStack_d8 = *(long **)PTR_PTR_04379d00;
      if (local_c0 != (long **)0x0) goto LAB_0147925c;
LAB_014797d4:
      local_d0 = (long *)0x0;
    }
    else {
      local_e0 = local_c0[0xb];
      if (local_c0 == (long **)0x0) goto LAB_014797c4;
      plStack_d8 = local_c0[0xc];
      if (local_c0 == (long **)0x0) goto LAB_014797d4;
LAB_0147925c:
      local_d0 = local_c0[0xd];
    }
    local_c8 = (long **)0x0;
    if (local_c0 == (long **)0x0) {
      local_c8 = local_c0;
    }
    else {
      (*(code *)(*local_c0)[3])(local_c0);
      pplVar8 = local_c8;
      local_c8 = pplVar9;
      if (pplVar8 != (long **)0x0) {
        (**(code **)((long)*pplVar8 + 0x20))();
      }
    }
    FUN_0147748c(param_1,&local_e0);
    if (local_c8 != (long **)0x0) {
      (*(code *)(*local_c8)[4])();
    }
    if (local_c0 != (long **)0x0) {
      (*(code *)(*local_c0)[4])();
    }
  }
  snprintf((char *)&local_b8,0x40,"pane_L_result_plate_%02d_L_info_00",(int)fVar32);
  local_c0 = &local_b8;
  FUN_009313e8(&local_e0,&local_c0);
  plVar26 = local_e0;
  if (local_e0 == (long *)0x0) {
    plVar28 = (long *)PTR_DAT_04379c88;
  }
  else {
    plVar28 = local_e0 + 0xb;
  }
  lVar27 = *plVar28;
  if (local_e0 == (long *)0x0) {
    lVar16 = *plVar22;
    plVar28 = *(long **)(lVar16 + 0x148);
    lVar29 = *(long *)(lVar16 + 0x150);
    plVar17 = plVar28 + lVar29 * 6;
  }
  else {
    (**(code **)(*local_e0 + 0x18))(local_e0);
    lVar16 = *plVar22;
    plVar28 = *(long **)(lVar16 + 0x148);
    lVar29 = *(long *)(lVar16 + 0x150);
    plVar17 = plVar28 + lVar29 * 6;
    (**(code **)(*plVar26 + 0x18))(plVar26);
  }
  if (lVar29 != 0) {
    lVar29 = *plVar28;
    while ((lVar29 != lVar27 && (plVar24 = plVar28 + 6, plVar28 = plVar17, plVar17 != plVar24))) {
      lVar29 = *plVar24;
      plVar28 = plVar24;
    }
  }
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x20))(plVar26);
  }
  if (plVar28 == (long *)(*(long *)(lVar16 + 0x148) + *(long *)(lVar16 + 0x150) * 0x30)) {
    lVar27 = 0;
  }
  else {
    lVar27 = plVar28[4];
  }
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x20))(plVar26);
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) & 0xfe | *(byte *)(param_2 + 0xb);
  snprintf((char *)&local_b8,0x40,"pane_L_result_plate_%02d_L_info_01",(int)fVar32);
  local_c0 = &local_b8;
  FUN_009313e8(&local_e0,&local_c0);
  plVar26 = local_e0;
  if (local_e0 == (long *)0x0) {
    lVar27 = *(long *)PTR_DAT_04379c88;
LAB_01479784:
    lVar16 = *plVar22;
    plVar28 = *(long **)(lVar16 + 0x148);
    lVar29 = *(long *)(lVar16 + 0x150);
    plVar17 = plVar28 + lVar29 * 6;
  }
  else {
    lVar27 = local_e0[0xb];
    if (local_e0 == (long *)0x0) goto LAB_01479784;
    (**(code **)(*local_e0 + 0x18))(local_e0);
    lVar16 = *plVar22;
    plVar28 = *(long **)(lVar16 + 0x148);
    lVar29 = *(long *)(lVar16 + 0x150);
    plVar17 = plVar28 + lVar29 * 6;
    (**(code **)(*plVar26 + 0x18))(plVar26);
  }
  if (lVar29 != 0) {
    lVar29 = *plVar28;
    while ((lVar29 != lVar27 && (plVar24 = plVar28 + 6, plVar28 = plVar17, plVar17 != plVar24))) {
      lVar29 = *plVar24;
      plVar28 = plVar24;
    }
  }
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x20))(plVar26);
  }
  if (plVar28 == (long *)(*(long *)(lVar16 + 0x148) + *(long *)(lVar16 + 0x150) * 0x30)) {
    lVar27 = 0;
  }
  else {
    lVar27 = plVar28[4];
  }
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x20))(plVar26);
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) & 0xfe | *(byte *)((long)param_2 + 0x2e);
  fVar32 = param_2[7];
  if (fVar32 != 0.0) {
    dVar30 = log10((double)(uint)fVar32);
    *(undefined8 *)(param_1 + 0x5b0) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x5b8) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x5c0) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x5c8) = 0xffffffff;
    uVar13 = (uint)(dVar30 + 1.0);
    if (uVar13 < 8) {
      *(uint *)(param_1 + (ulong)(uVar13 - 1) * 4 + 0x5b0) = (uint)fVar32 % 10;
      if (((9 < (uint)fVar32) &&
          (*(uint *)(param_1 + (ulong)(uVar13 - 2) * 4 + 0x5b0) =
                (uint)fVar32 / 10 + ((uint)fVar32 / 100) * -10, 99 < (uint)fVar32)) &&
         (*(uint *)(param_1 + (ulong)(uVar13 - 3) * 4 + 0x5b0) =
               (uint)fVar32 / 100 + ((uint)fVar32 / 1000) * -10, 999 < (uint)fVar32)) {
        uVar19 = uVar13 - 4;
        uVar12 = (ulong)(uint)fVar32 / 1000;
        do {
          uVar18 = (uint)uVar12;
          uVar1 = (ulong)uVar19;
          uVar19 = uVar19 - 1;
          *(uint *)(param_1 + uVar1 * 4 + 0x5b0) = uVar18 + (int)(uVar12 / 10) * -10;
          uVar12 = uVar12 / 10;
        } while (9 < uVar18);
      }
      if (uVar13 < 7) {
        memset((void *)(param_1 + (ulong)uVar13 * 4 + 0x5b0),0xff,(ulong)(6 - uVar13) * 4 + 4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x5b0) = 0x98967f0098967f;
      *(undefined8 *)(param_1 + 0x5b8) = 0x98967f0098967f;
      *(undefined8 *)(param_1 + 0x5c0) = 0x98967f0098967f;
      *(undefined4 *)(param_1 + 0x5c8) = 9999999;
    }
    lVar27 = 0;
    do {
      iVar6 = *(int *)(param_1 + lVar27 * 4 + 0x5b0);
      snprintf((char *)&local_b8,0x40,"pane_L_result_plate_%02d_L_num_%02d",(int)fVar31,(int)lVar27)
      ;
      local_c0 = &local_b8;
      FUN_009313e8(&local_e0,&local_c0);
      plVar28 = local_e0;
      plVar26 = (long *)PTR_DAT_04379c88;
      if (local_e0 != (long *)0x0) {
        plVar26 = local_e0 + 0xb;
      }
      lVar29 = *plVar26;
      if (local_e0 != (long *)0x0) {
        (**(code **)(*local_e0 + 0x18))(local_e0);
      }
      lVar25 = *plVar22;
      plVar26 = *(long **)(lVar25 + 0x148);
      lVar16 = *(long *)(lVar25 + 0x150);
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 0x18))(plVar28);
      }
      plVar17 = plVar26;
      if ((lVar16 != 0) && (*plVar26 != lVar29)) {
        plVar24 = plVar26 + lVar16 * 6;
        lVar16 = lVar16 * 0x30;
        do {
          lVar16 = lVar16 + -0x30;
          plVar17 = plVar24;
          if (lVar16 == 0) break;
          plVar14 = plVar26 + 6;
          plVar26 = plVar26 + 6;
          plVar17 = plVar26;
        } while (*plVar14 != lVar29);
      }
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 0x20))(plVar28);
      }
      if (plVar17 == (long *)(*(long *)(lVar25 + 0x148) + *(long *)(lVar25 + 0x150) * 0x30)) {
        lVar29 = 0;
      }
      else {
        lVar29 = plVar17[4];
      }
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 0x20))(plVar28);
      }
      if (local_e0 != (long *)0x0) {
        (**(code **)(*local_e0 + 0x20))();
      }
      if (iVar6 < 0) {
        *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe;
      }
      else {
        *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 1;
        snprintf((char *)&local_b8,0x40,"anime_L_result_plate_%02d_L_num_%02d_switch_num",
                 (int)fVar31,(int)lVar27);
        local_e8 = &local_b8;
        FUN_009313e8(&local_c0,&local_e8);
        pplVar9 = local_c0;
        if (local_c0 == (long **)0x0) {
          local_e0 = *(long **)PTR_DAT_04379c88;
LAB_01479d84:
          plStack_d8 = *(long **)PTR_PTR_04379d00;
          if (local_c0 != (long **)0x0) goto LAB_01479978;
LAB_01479d94:
          local_d0 = (long *)0x0;
        }
        else {
          local_e0 = local_c0[0xb];
          if (local_c0 == (long **)0x0) goto LAB_01479d84;
          plStack_d8 = local_c0[0xc];
          if (local_c0 == (long **)0x0) goto LAB_01479d94;
LAB_01479978:
          local_d0 = local_c0[0xd];
          local_c8 = (long **)0x0;
          (*(code *)(*local_c0)[3])(local_c0);
        }
        local_c8 = pplVar9;
        if (*(long *)(param_1 + 0x2c8) != 0) {
          FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_e0);
        }
        if (pplVar9 != (long **)0x0) {
          (*(code *)(*pplVar9)[4])(pplVar9);
        }
        if (local_c0 != (long **)0x0) {
          (*(code *)(*local_c0)[4])();
        }
        local_e8 = &local_b8;
        FUN_009313e8(&local_c0,&local_e8);
        pplVar9 = local_c0;
        if (local_c0 == (long **)0x0) {
          plVar26 = *(long **)PTR_DAT_04379c88;
LAB_01479db0:
          plStack_d8 = *(long **)PTR_PTR_04379d00;
          if (local_c0 != (long **)0x0) goto LAB_01479a04;
LAB_01479dc0:
          local_d0 = (long *)0x0;
          local_e0 = plVar26;
        }
        else {
          plVar26 = local_c0[0xb];
          if (local_c0 == (long **)0x0) goto LAB_01479db0;
          plStack_d8 = local_c0[0xc];
          if (local_c0 == (long **)0x0) goto LAB_01479dc0;
LAB_01479a04:
          local_d0 = local_c0[0xd];
          local_c8 = (long **)0x0;
          local_e0 = plVar26;
          (*(code *)(*local_c0)[3])(local_c0);
        }
        local_c8 = pplVar9;
        lVar29 = *(long *)(param_1 + 0x2c8);
        if (lVar29 != 0) {
          puVar23 = *(undefined8 **)(lVar29 + 0x1a0);
          lVar16 = *(long *)(lVar29 + 0x1a8);
          if (pplVar9 != (long **)0x0) {
            (*(code *)(*pplVar9)[3])(pplVar9);
          }
          puVar7 = puVar23;
          if ((lVar16 != 0) && ((long *)*puVar23 != plVar26)) {
            puVar15 = puVar23 + lVar16 * 6;
            lVar16 = lVar16 * 0x30;
            do {
              lVar16 = lVar16 + -0x30;
              puVar7 = puVar15;
              if (lVar16 == 0) break;
              puVar2 = puVar23 + 6;
              puVar23 = puVar23 + 6;
              puVar7 = puVar23;
            } while ((long *)*puVar2 != plVar26);
          }
          if (pplVar9 != (long **)0x0) {
            (*(code *)(*pplVar9)[4])(pplVar9);
          }
          if (puVar7 == (undefined8 *)(*(long *)(lVar29 + 0x1a0) + *(long *)(lVar29 + 0x1a8) * 0x30)
             ) {
LAB_01479b24:
            if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_01479b48;
            FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_e0);
          }
          else {
            uVar12 = (ulong)*(uint *)(puVar7 + 5);
            if (((*(uint *)(puVar7[4] + 0x278) <= *(uint *)(puVar7 + 5)) ||
                (lVar29 = *(long *)(puVar7[4] + 600), *(char *)(lVar29 + uVar12 * 0x48 + 8) == '\0')
                ) || (*(char *)(lVar29 + uVar12 * 0x48 + 0xb) == '\0')) goto LAB_01479b24;
            plVar26 = (long *)(lVar29 + uVar12 * 0x48 + 0x10);
            lVar16 = *plVar26;
            if ((lVar16 != 0) && (*(char *)(lVar29 + uVar12 * 0x48 + 9) == '\0')) {
              fVar32 = *(float *)(lVar16 + 0x20);
              uVar11 = FUN_00227728();
              uVar12 = FUN_00227744(*plVar26);
              if (((float)uVar11 <= fVar32) && ((uVar12 & 1) == 0)) goto LAB_01479b24;
            }
          }
          FUN_0283b748((float)iVar6,*(undefined8 *)(param_1 + 0x2c8),&local_e0);
        }
LAB_01479b48:
        if (pplVar9 != (long **)0x0) {
          (*(code *)(*pplVar9)[4])(pplVar9);
        }
        if (local_c0 != (long **)0x0) {
          (*(code *)(*local_c0)[4])();
        }
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 != 7);
    snprintf((char *)&local_b8,0x40,"anime_L_result_plate_%02d_exp_in",(int)fVar31);
    local_e8 = &local_b8;
    FUN_009313e8(&local_c0,&local_e8);
    pplVar9 = local_c0;
    if (local_c0 == (long **)0x0) {
      local_e0 = *(long **)PTR_DAT_04379c88;
LAB_01479df0:
      plStack_d8 = *(long **)PTR_PTR_04379d00;
      if (local_c0 != (long **)0x0) goto LAB_01479c00;
LAB_01479e00:
      local_d0 = (long *)0x0;
    }
    else {
      local_e0 = local_c0[0xb];
      if (local_c0 == (long **)0x0) goto LAB_01479df0;
      plStack_d8 = local_c0[0xc];
      if (local_c0 == (long **)0x0) goto LAB_01479e00;
LAB_01479c00:
      local_d0 = local_c0[0xd];
    }
    local_c8 = (long **)0x0;
    if (local_c0 != (long **)0x0) {
      (*(code *)(*local_c0)[3])(local_c0);
    }
    local_c8 = pplVar9;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_e0);
    }
    if (pplVar9 != (long **)0x0) {
      (*(code *)(*pplVar9)[4])(pplVar9);
    }
    if (local_c0 != (long **)0x0) {
      (*(code *)(*local_c0)[4])();
    }
  }
  plVar26 = local_130;
  lVar27 = local_148;
  plVar22 = (long *)plVar20[0x34];
  lVar29 = plVar20[0x35];
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x18))(local_130);
  }
  plVar28 = plVar22;
  if ((lVar29 != 0) && (*plVar22 != lVar27)) {
    lVar16 = lVar29 * 0x30;
    plVar17 = plVar22 + lVar29 * 6;
    do {
      lVar16 = lVar16 + -0x30;
      plVar28 = plVar17;
      if (lVar16 == 0) break;
      plVar24 = plVar22 + 6;
      plVar22 = plVar22 + 6;
      plVar28 = plVar22;
    } while (*plVar24 != lVar27);
  }
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x20))(plVar26);
  }
  plVar22 = (long *)(plVar20[0x34] + plVar20[0x35] * 0x30);
  if (plVar28 == plVar22) {
    plVar17 = (long *)0x0;
    if (plVar28 != plVar22) goto LAB_01479cd0;
LAB_01479e14:
    FUN_0283b1e8(plVar20,&local_148);
  }
  else {
    plVar17 = plVar28 + 4;
    if (plVar28 == plVar22) goto LAB_01479e14;
LAB_01479cd0:
    uVar13 = *(uint *)(plVar17 + 1);
    if (((*(uint *)(*plVar17 + 0x278) <= uVar13) ||
        (lVar29 = *(long *)(*plVar17 + 600), *(char *)(lVar29 + (ulong)uVar13 * 0x48 + 8) == '\0'))
       || (*(char *)(lVar29 + (ulong)uVar13 * 0x48 + 0xb) == '\0')) goto LAB_01479e14;
  }
  param_2[9] = 1.4013e-45;
switchD_01478a38_caseD_1:
  if ((*param_2 == 0.0) && (param_2[4] == -NAN)) {
    if (((*(char *)(param_2 + 0xb) != '\0') || (*(char *)((long)param_2 + 0x2e) != '\0')) ||
       (*(char *)((long)param_2 + 0x2d) != '\0')) {
      FUN_0283b1e8(plVar20,&local_1a8);
      param_2[9] = 4.2039e-45;
      plVar22 = (long *)plVar20[0x34];
      lVar29 = plVar20[0x35];
      goto joined_r0x014793b8;
    }
LAB_014792ec:
    param_2[9] = 5.60519e-45;
    uVar21 = 1;
    goto joined_r0x014792f8;
  }
  plVar22 = (long *)plVar20[0x34];
  lVar29 = plVar20[0x35];
joined_r0x014793b8:
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x18))(plVar26);
  }
  plVar28 = plVar22;
  if ((lVar29 != 0) && (*plVar22 != lVar27)) {
    lVar16 = lVar29 * 0x30;
    plVar17 = plVar22 + lVar29 * 6;
    do {
      lVar16 = lVar16 + -0x30;
      plVar28 = plVar17;
      if (lVar16 == 0) break;
      plVar24 = plVar22 + 6;
      plVar22 = plVar22 + 6;
      plVar28 = plVar22;
    } while (*plVar24 != lVar27);
  }
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x20))(plVar26);
  }
  plVar17 = local_150;
  lVar29 = local_168;
  plVar22 = (long *)plVar20[0x34];
  lVar27 = plVar20[0x35];
  plVar24 = plVar22 + lVar27 * 6;
  if (plVar28 == plVar24) {
    plVar14 = (long *)0x0;
    if (plVar28 != plVar24) goto LAB_01478ac4;
LAB_01479534:
    if (local_150 != (long *)0x0) {
      (**(code **)(*local_150 + 0x18))(local_150);
    }
    plVar28 = plVar22;
    if ((lVar27 != 0) && (*plVar22 != lVar29)) {
      lVar27 = lVar27 * 0x30;
      do {
        lVar27 = lVar27 + -0x30;
        plVar28 = plVar24;
        if (lVar27 == 0) break;
        plVar14 = plVar22 + 6;
        plVar22 = plVar22 + 6;
        plVar28 = plVar22;
      } while (*plVar14 != lVar29);
    }
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
    if (plVar28 == (long *)(plVar20[0x34] + plVar20[0x35] * 0x30)) {
LAB_014795e4:
      if (param_2[4] == -NAN) {
        if (((*(char *)(param_2 + 0xb) != '\0') || (*(char *)((long)param_2 + 0x2e) != '\0')) ||
           (*(char *)((long)param_2 + 0x2d) != '\0')) {
          FUN_0283b1e8(plVar20,&local_1a8);
          uVar21 = 0;
          param_2[9] = 4.2039e-45;
          goto joined_r0x014792f8;
        }
        goto LAB_014792ec;
      }
      param_2[4] = -NAN;
      FUN_0283b1e8(plVar20,&local_168);
      local_b8 = (long *)0x79cdb636c2a95140;
      pcStack_b0 = "PLAY_ME_HA_SYS_LVUP";
      local_a8 = 0x13;
      local_a0 = (long *)0x0;
      FUN_028354b0(&local_b8);
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      fVar31 = 2.8026e-45;
      goto LAB_01479648;
    }
    lVar27 = plVar28[4];
    uVar13 = *(uint *)(plVar28 + 4 + 1);
    if (((*(uint *)(lVar27 + 0x278) <= uVar13) ||
        (lVar27 = *(long *)(lVar27 + 600), *(char *)(lVar27 + (ulong)uVar13 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar27 + (ulong)uVar13 * 0x48 + 0xb) == '\0')) goto LAB_014795e4;
  }
  else {
    plVar14 = plVar28 + 4;
    if (plVar28 == plVar24) goto LAB_01479534;
LAB_01478ac4:
    uVar12 = (ulong)*(uint *)(plVar14 + 1);
    if ((((*(uint *)(*plVar14 + 0x278) <= *(uint *)(plVar14 + 1)) ||
         (lVar16 = *(long *)(*plVar14 + 600), *(char *)(lVar16 + uVar12 * 0x48 + 8) == '\0')) ||
        (*(char *)(lVar16 + uVar12 * 0x48 + 0xb) == '\0')) ||
       (fVar31 = *(float *)(*(long *)(lVar16 + uVar12 * 0x48 + 0x10) + 0x20), fVar31 <= 0.0))
    goto LAB_01479534;
    if (0 < (int)param_2[6]) {
      fVar31 = fVar31 - *param_2;
      if (fVar31 < 0.0) {
        fVar31 = 0.0;
      }
      FUN_0283b748(fVar31,plVar20,&local_148);
      fVar31 = param_2[6];
      param_2[6] = (float)((int)fVar31 + -1);
      if (((float)((int)fVar31 + -1) == 0.0) && (0 < (int)param_2[4])) {
        FUN_0283b748(0,plVar20,&local_148);
        uVar21 = 0;
        goto joined_r0x014792f8;
      }
      goto switchD_01478a38_default;
    }
    if ((param_2[4] == -NAN) &&
       (((FUN_0283b748((float)(int)param_2[3],plVar20,&local_148), *(char *)(param_2 + 0xb) != '\0'
         || (*(char *)((long)param_2 + 0x2e) != '\0')) || (*(char *)((long)param_2 + 0x2d) != '\0'))
       )) {
      FUN_0283b1e8(plVar20,&local_1a8);
      fVar31 = 4.2039e-45;
    }
    else {
      fVar31 = 5.60519e-45;
    }
LAB_01479648:
    param_2[9] = fVar31;
  }
switchD_01478a38_default:
  uVar21 = 0;
joined_r0x014792f8:
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  if (local_170 != (long *)0x0) {
    (**(code **)(*local_170 + 0x20))();
  }
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x20))(plVar26);
  }
  if (plVar20 != (long *)0x0) {
    plVar22 = plVar20 + 10;
    do {
      iVar6 = (int)*plVar22 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  return uVar21;
}


