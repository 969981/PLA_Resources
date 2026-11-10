/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c5dc8; name: FUN_014c5dc8
 */


void FUN_014c5dc8(long param_1,undefined4 param_2)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ushort uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint param3;
  undefined8 uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  ulong *local_b8;
  ulong local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_68;
  
  plVar20 = *(long **)(param_1 + 0x2c8);
  if (plVar20 != (long *)0x0) {
    plVar19 = plVar20 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *(int *)plVar19 = (int)*plVar19 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar19 = (long *)plVar20[0x37];
  if (plVar19 != (long *)0x0) {
    lVar21 = plVar19[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = plVar20 + 10;
  do {
    iVar7 = (int)*plVar13 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *(int *)plVar13 = iVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  lVar21 = (**(code **)(**(long **)(param_1 + 0x5c8) + 0x10))();
  uVar9 = FUN_02c6849c(*(undefined8 *)(lVar21 + 0x98));
  uVar10 = FUN_02c6f924(*(undefined8 *)(lVar21 + 0x98));
  param3 = FUN_02c6b1c0(*(undefined8 *)(lVar21 + 0x98),param_2);
  plVar20 = &DAT_0428af30 + (ulong)param3 * 6;
  lVar21 = *plVar20;
  if (lVar21 == 0) {
    plVar13 = &DAT_0428af30;
  }
  else {
    plVar13 = &DAT_0428af30;
    if (*(char *)(lVar21 + 0x1e1) != '\0') {
      plVar13 = plVar20;
    }
  }
  fVar22 = 2.0;
  piVar2 = (int *)((long)*(uint **)(*plVar13 + 0x250) + (ulong)**(uint **)(*plVar13 + 0x250));
  if (((0xe < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
      (uVar16 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7], uVar16 != 0)) &&
     (*(char *)((long)piVar2 + uVar16) != '\0')) {
    plVar13 = &DAT_0428af30;
    if ((lVar21 != 0) && (plVar13 = &DAT_0428af30, *(char *)(lVar21 + 0x1e1) != '\0')) {
      plVar13 = plVar20;
    }
    piVar2 = (int *)((long)*(uint **)(*plVar13 + 0x250) + (ulong)**(uint **)(*plVar13 + 0x250));
    if (((0xc < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
        (uVar16 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6], uVar16 != 0)) &&
       (bVar4 = *(byte *)((long)piVar2 + uVar16), bVar4 != 0 && bVar4 != 3)) {
      fVar22 = (float)(int)(bVar4 - 1);
    }
  }
  local_b0 = 0x40238a36310c4225;
  pcStack_a8 = "anime_L_scr_01_waza_L_icon_bunrui_change";
  local_a0 = 0x28;
  local_98 = (long *)0x0;
  lVar21 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_b0);
    lVar21 = *(long *)(param_1 + 0x2c8);
  }
  local_b0 = 0x40238a36310c4225;
  pcStack_a8 = "anime_L_scr_01_waza_L_icon_bunrui_change";
  local_a0 = 0x28;
  local_98 = (long *)0x0;
  if (lVar21 != 0) {
    plVar13 = *(long **)(lVar21 + 0x1a0);
    lVar14 = *(long *)(lVar21 + 0x1a8);
    if ((lVar14 == 0) || (*plVar13 == 0x40238a36310c4225)) {
      plVar18 = plVar13;
    }
    else {
      lVar17 = lVar14 * 0x30;
      plVar15 = plVar13;
      do {
        lVar17 = lVar17 + -0x30;
        if (lVar17 == 0) goto LAB_014c60a8;
        plVar1 = plVar15 + 6;
        plVar18 = plVar15 + 6;
        plVar15 = plVar15 + 6;
      } while (*plVar1 != 0x40238a36310c4225);
    }
    plVar13 = plVar13 + lVar14 * 6;
    if (plVar18 == plVar13) {
      plVar15 = (long *)0x0;
      if (plVar18 != plVar13) goto LAB_014c6028;
LAB_014c60a8:
      if (lVar21 == 0) goto LAB_014c60c4;
      FUN_0283b1e8(lVar21,&local_b0);
    }
    else {
      plVar15 = plVar18 + 4;
      if (plVar18 == plVar13) goto LAB_014c60a8;
LAB_014c6028:
      uVar16 = (ulong)*(uint *)(plVar15 + 1);
      if (((*(uint *)(*plVar15 + 0x278) <= *(uint *)(plVar15 + 1)) ||
          (lVar14 = *(long *)(*plVar15 + 600), *(char *)(lVar14 + uVar16 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar14 + uVar16 * 0x48 + 0xb) == '\0')) goto LAB_014c60a8;
      plVar13 = (long *)(lVar14 + uVar16 * 0x48 + 0x10);
      lVar21 = *plVar13;
      if ((lVar21 != 0) && (*(char *)(lVar14 + uVar16 * 0x48 + 9) == '\0')) {
        fVar23 = *(float *)(lVar21 + 0x20);
        uVar8 = FUN_00227728();
        uVar16 = FUN_00227744(*plVar13);
        if (((float)uVar8 <= fVar23) && ((uVar16 & 1) == 0)) {
          lVar21 = *(long *)(param_1 + 0x2c8);
          goto LAB_014c60a8;
        }
      }
    }
    FUN_0283b748(fVar22,*(undefined8 *)(param_1 + 0x2c8),&local_b0);
  }
LAB_014c60c4:
  lVar21 = *plVar20;
  plVar13 = &DAT_0428af30;
  if ((lVar21 != 0) && (plVar13 = &DAT_0428af30, *(char *)(lVar21 + 0x1e1) != '\0')) {
    plVar13 = plVar20;
  }
  piVar2 = (int *)((long)*(uint **)(*plVar13 + 0x250) + (ulong)**(uint **)(*plVar13 + 0x250));
  if (((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xf) ||
      (uVar16 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7], uVar16 == 0)) ||
     (*(char *)((long)piVar2 + uVar16) == '\0')) {
    if (param3 == 0x1ce) goto LAB_014c61c0;
  }
  else {
    plVar13 = &DAT_0428af30;
    if ((lVar21 != 0) && (plVar13 = &DAT_0428af30, *(char *)(lVar21 + 0x1e1) != '\0')) {
      plVar13 = plVar20;
    }
    piVar2 = (int *)((long)*(uint **)(*plVar13 + 0x250) + (ulong)**(uint **)(*plVar13 + 0x250));
    if (((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xd) ||
        (uVar16 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6], uVar16 == 0)) ||
       ((param3 == 0x1ce || (*(char *)((long)piVar2 + uVar16) == '\0')))) {
LAB_014c61c0:
      uVar11 = 0x856ee60834e7b51b;
      goto LAB_014c6284;
    }
  }
  local_b0 = local_b0 & 0xffffffff00000000;
  uVar16 = FUN_010a3370(&local_b0,&DAT_041efa98,param3,uVar9,uVar10,0);
  if ((uVar16 & 1) == 0) {
    plVar13 = &DAT_0428af30;
    if ((*plVar20 != 0) && (plVar13 = &DAT_0428af30, *(char *)(*plVar20 + 0x1e1) != '\0')) {
      plVar13 = plVar20;
    }
    piVar2 = (int *)((long)*(uint **)(*plVar13 + 0x250) + (ulong)**(uint **)(*plVar13 + 0x250));
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xf) ||
       (uVar16 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7], uVar16 == 0)) {
      uVar16 = 0;
    }
    else {
      uVar16 = (ulong)*(byte *)((long)piVar2 + uVar16);
    }
  }
  else {
    uVar16 = local_b0 & 0xffffffff;
  }
  FUN_02c395d0(plVar19,0,uVar16,3,0,1);
  uVar11 = 0x856ee70834e7b6ce;
LAB_014c6284:
  local_98 = (long *)0x0;
  local_a0 = 0x23;
  pcStack_a8 = "pane_L_scr_01_waza_T_skill_power_01";
  local_b0 = 0x293a5c3622e24954;
  FUN_014c1468(param_1,0,uVar11,&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  uVar16 = FUN_010a3760(param3);
  if ((uVar16 & 1) == 0) {
    uVar11 = 0x856ee60834e7b51b;
  }
  else {
    local_b0 = local_b0 & 0xffffffff00000000;
    uVar16 = FUN_010a3370(&local_b0,&DAT_041efba0,param3,uVar9,uVar10,0);
    if ((uVar16 & 1) == 0) {
      plVar13 = &DAT_0428af30;
      if ((*plVar20 != 0) && (plVar13 = &DAT_0428af30, *(char *)(*plVar20 + 0x1e1) != '\0')) {
        plVar13 = plVar20;
      }
      piVar2 = (int *)((long)*(uint **)(*plVar13 + 0x250) + (ulong)**(uint **)(*plVar13 + 0x250));
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x11) ||
         (uVar16 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar16 == 0)) {
        uVar16 = 0;
      }
      else {
        uVar12 = (uint)*(byte *)((long)piVar2 + uVar16);
        uVar3 = 100;
        if (uVar12 != 0x65) {
          uVar3 = uVar12;
        }
        uVar16 = (ulong)uVar3;
      }
    }
    else {
      uVar16 = local_b0 & 0xffffffff;
    }
    FUN_02c395d0(plVar19,0,uVar16,3,0,1);
    uVar11 = 0x856ee70834e7b6ce;
  }
  local_98 = (long *)0x0;
  local_a0 = 0x25;
  pcStack_a8 = "pane_L_scr_01_waza_T_skill_power_01_2";
  local_b0 = 0x16c43f5ecf182599;
  FUN_014c1468(param_1,0,uVar11,&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  snprintf((char *)&local_b0,0x40,"WAZAINFO_%03d",param3);
  local_b8 = &local_b0;
  FUN_009313e8(&local_68,&local_b8);
  if (local_68 == (long *)0x0) {
    plVar20 = (long *)PTR_DAT_04379c88;
  }
  else {
    plVar20 = local_68 + 0xb;
  }
  local_d8 = 0x5a0f4320b4cb3161;
  pcStack_d0 = "pane_L_scr_01_waza_T_skill_hit_02";
  local_c8 = 0x21;
  local_c0 = (long *)0x0;
  FUN_014c1468(param_1,1,*plVar20,&local_d8);
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (plVar19 != (long *)0x0) {
    lVar21 = plVar19[0xb];
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  return;
}


