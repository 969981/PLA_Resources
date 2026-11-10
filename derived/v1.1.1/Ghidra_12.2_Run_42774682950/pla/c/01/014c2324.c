/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c2324; name: FUN_014c2324
 */


void FUN_014c2324(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  ulong local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  plVar20 = *(long **)(param_1 + 0x2c8);
  if (plVar20 != (long *)0x0) {
    plVar18 = plVar20 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar18 = (long *)plVar20[0x37];
  if (plVar18 != (long *)0x0) {
    lVar19 = plVar18[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar11;
    }
    piVar13 = (int *)(lVar19 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar17 = plVar20 + 10;
  do {
    iVar5 = (int)*plVar17 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *(int *)plVar17 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  FUN_014c3a70(param_1,param_2);
  local_80 = 0x4d4c6716468c8141;
  pcStack_78 = "pane_L_scr_01_basic_L_pt_bg_basic_00_T_pokemon_name_03";
  local_70 = 0x36;
  local_68 = (long *)0x0;
  local_a0 = 0x51bde934df03265b;
  pcStack_98 = "pane_L_scr_01_basic_L_pt_bg_basic_00_P_icon_poke_type_00";
  local_90 = 0x38;
  local_88 = (long *)0x0;
  local_c0 = 0x51bde834df0324a8;
  pcStack_b8 = "pane_L_scr_01_basic_L_pt_bg_basic_00_P_icon_poke_type_01";
  local_b0 = 0x38;
  local_a8 = (long *)0x0;
  FUN_014c3fa4(param_1,param_2,&local_80,&local_a0,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar12 = FUN_02c628dc(param_2);
  if ((uVar12 & 1) == 0) {
    uVar12 = FUN_02c62544(param_2);
    uVar22 = FUN_02c6254c(param_2);
  }
  else {
    uVar8 = FUN_02c6849c(*(undefined8 *)(param_2 + 0x98));
    uVar9 = FUN_02c6f924(*(undefined8 *)(param_2 + 0x98));
    if (((*PTR_DAT_0437a708 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
    uVar11 = *(undefined8 *)PTR_DAT_0437a710;
    *(undefined8 *)PTR_DAT_0437a718 = uVar11;
    uVar10 = FUN_02c624c8(param_2);
    piVar13 = (int *)FUN_010aa4a0(uVar11,uVar8,uVar9,uVar10);
    fVar23 = 0.0;
    fVar24 = 0.0;
    if (0xc < *(ushort *)((long)piVar13 - (long)*piVar13)) {
      uVar12 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[6];
      fVar24 = 0.0;
      if (uVar12 != 0) {
        fVar24 = *(float *)((long)piVar13 + uVar12);
      }
    }
    uVar7 = FUN_02c52310(uVar8,uVar9);
    fVar21 = (float)FUN_02c62554(param_2);
    if ((0xc < *(ushort *)((long)piVar13 - (long)*piVar13)) &&
       (uVar12 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[6], uVar12 != 0)) {
      fVar23 = *(float *)((long)piVar13 + uVar12);
    }
    uVar12 = (ulong)(uint)(fVar24 * (float)uVar7);
    uVar7 = FUN_02c523e0(uVar8,uVar9);
    uVar22 = (ulong)(uint)(fVar21 * fVar23 * (float)uVar7);
  }
  local_80 = 0x8ea4d097bba22d76;
  pcStack_78 = "pane_L_scr_01_basic_T_status_weight_04";
  local_70 = 0x26;
  local_68 = (long *)0x0;
  FUN_00d2f8c4(uVar12,param_1 + 0x180,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_80 = 0x8ea4d297bba230dc;
  pcStack_78 = "pane_L_scr_01_basic_T_status_weight_02";
  local_70 = 0x26;
  local_68 = (long *)0x0;
  FUN_00d2fec4(uVar22,param_1 + 0x180,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  FUN_010c6694(plVar18,0,param_2);
  local_80 = 0xcc4e5bf8152832d0;
  pcStack_78 = "pane_L_scr_01_basic_T_parent_01";
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  FUN_014c1468(param_1,0,0x6a925e115a9f0ac9,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_a0 = local_a0 & 0xffffffff00000000;
  uVar12 = FUN_01090cd0(param_2,&local_a0);
  uVar8 = 5;
  if ((uVar12 & 1) != 0) {
    uVar8 = 6;
  }
  FUN_02c395d0(plVar18,0,local_a0 & 0xffffffff,uVar8,2,1);
  local_80 = 0x3449917eb7912ef;
  pcStack_78 = "pane_L_scr_01_basic_T_id_01";
  local_70 = 0x1b;
  local_68 = (long *)0x0;
  FUN_014c1468(param_1,0,0xcc81a6a0286ae2df,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  iVar5 = FUN_02c6001c(param_2);
  iVar6 = FUN_02c600e8(param_2);
  FUN_02c395d0(plVar18,0,iVar5,8,0,1);
  local_80 = 0x43d36bfafb148efc;
  pcStack_78 = "pane_L_scr_01_basic_T_now_exp_01";
  local_70 = 0x20;
  local_68 = (long *)0x0;
  FUN_014c1468(param_1,0,0x6a007f49c83decbb,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  FUN_02c395d0(plVar18,0,iVar6 - iVar5,8,0,1);
  local_80 = 0x17b61e5ebbd55875;
  pcStack_78 = "pane_L_scr_01_basic_T_next_exp_03";
  local_70 = 0x21;
  local_68 = (long *)0x0;
  FUN_014c1468(param_1,0,0x9369106eb946fef4,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  FUN_014c4220(param_1,param_2);
  FUN_02c5d628(param_2);
  uVar7 = FUN_010a2f90();
  if (8 < uVar7) {
    uVar7 = 2;
  }
  local_80 = 0x55e8d2bec9c51b81;
  pcStack_78 = "anime_L_pt_mark_00_L_sanchi_change";
  local_70 = 0x22;
  local_68 = (long *)0x0;
  lVar19 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_80);
    lVar19 = *(long *)(param_1 + 0x2c8);
  }
  local_80 = 0x55e8d2bec9c51b81;
  pcStack_78 = "anime_L_pt_mark_00_L_sanchi_change";
  local_70 = 0x22;
  local_68 = (long *)0x0;
  if (lVar19 == 0) goto LAB_014c29b0;
  plVar20 = *(long **)(lVar19 + 0x1a0);
  lVar14 = *(long *)(lVar19 + 0x1a8);
  if ((lVar14 == 0) || (*plVar20 == 0x55e8d2bec9c51b81)) {
    plVar17 = plVar20;
  }
  else {
    lVar16 = lVar14 * 0x30;
    plVar15 = plVar20;
    do {
      lVar16 = lVar16 + -0x30;
      if (lVar16 == 0) goto LAB_014c2988;
      plVar1 = plVar15 + 6;
      plVar17 = plVar15 + 6;
      plVar15 = plVar15 + 6;
    } while (*plVar1 != 0x55e8d2bec9c51b81);
  }
  plVar20 = plVar20 + lVar14 * 6;
  if (plVar17 == plVar20) {
    plVar15 = (long *)0x0;
    if (plVar17 != plVar20) goto LAB_014c2908;
LAB_014c2988:
    if (lVar19 == 0) goto LAB_014c29b0;
    FUN_0283b1e8(lVar19,&local_80);
  }
  else {
    plVar15 = plVar17 + 4;
    if (plVar17 == plVar20) goto LAB_014c2988;
LAB_014c2908:
    uVar12 = (ulong)*(uint *)(plVar15 + 1);
    if (((*(uint *)(*plVar15 + 0x278) <= *(uint *)(plVar15 + 1)) ||
        (lVar14 = *(long *)(*plVar15 + 600), *(char *)(lVar14 + uVar12 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar14 + uVar12 * 0x48 + 0xb) == '\0')) goto LAB_014c2988;
    plVar20 = (long *)(lVar14 + uVar12 * 0x48 + 0x10);
    lVar19 = *plVar20;
    if ((lVar19 != 0) && (*(char *)(lVar14 + uVar12 * 0x48 + 9) == '\0')) {
      fVar23 = *(float *)(lVar19 + 0x20);
      uVar4 = FUN_00227728();
      uVar12 = FUN_00227744(*plVar20);
      if (((float)uVar4 <= fVar23) && ((uVar12 & 1) == 0)) {
        lVar19 = *(long *)(param_1 + 0x2c8);
        goto LAB_014c2988;
      }
    }
  }
  FUN_0283b748((float)*(int *)(&UNK_03a7bf30 + (long)(int)uVar7 * 4),
               *(undefined8 *)(param_1 + 0x2c8),&local_80);
LAB_014c29b0:
  FUN_014c427c(param_1,param_2);
  if (plVar18 != (long *)0x0) {
    lVar19 = plVar18[0xb];
    piVar13 = (int *)(lVar19 + 0xc);
    do {
      iVar5 = *piVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  return;
}


