/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c3a70; name: FUN_014c3a70
 */


void FUN_014c3a70(long param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  float fVar20;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long *local_68;
  
  plVar16 = *(long **)(param_1 + 0x2c8);
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar17 = (long *)plVar16[0x37];
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar10;
    }
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_010c6004(plVar17,0,param_2);
  local_80 = 0x828ddb79e54e8cba;
  local_78 = "pane_L_pt_poke_name_00_T_pokemon_name_00";
  local_70 = 0x28;
  local_68 = (long *)0x0;
  FUN_014c1468(param_1,0,0x619e282ac53d2e8d,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar6 = FUN_02c5fb2c(param_2);
  FUN_02c395d0(plVar17,0,uVar6,3,0,1);
  local_80 = 0xc41b21860b03133d;
  local_78 = "pane_L_pt_poke_name_00_T_pokemon_level_00";
  local_70 = 0x29;
  local_68 = (long *)0x0;
  FUN_014c1468(param_1,0,0xed70587939e65374,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_80 = 0x6f2d91468944252c;
  local_78 = "pane_L_pt_poke_name_00_N_sign_rare";
  local_70 = 0x22;
  local_68 = (long *)0x0;
  uVar7 = FUN_02c63a24(param_2);
  FUN_0283b11c(plVar16,&local_80,uVar7 & 1);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_80 = 0x383a995a2b21505e;
  local_78 = "anime_L_pt_poke_name_00_L_gender_change";
  local_70 = 0x27;
  local_68 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_80);
  }
  local_80 = 0x383a995a2b21505e;
  local_78 = "anime_L_pt_poke_name_00_L_gender_change";
  local_70 = 0x27;
  local_68 = (long *)0x0;
  iVar8 = FUN_01090c00(param_2);
  lVar18 = *(long *)(param_1 + 0x2c8);
  if (lVar18 == 0) goto LAB_014c3d80;
  plVar19 = *(long **)(lVar18 + 0x1a0);
  lVar12 = *(long *)(lVar18 + 0x1a8);
  if ((lVar12 == 0) || (*plVar19 == 0x383a995a2b21505e)) {
    plVar15 = plVar19;
  }
  else {
    lVar14 = lVar12 * 0x30;
    plVar13 = plVar19;
    do {
      lVar14 = lVar14 + -0x30;
      if (lVar14 == 0) goto LAB_014c3d64;
      plVar1 = plVar13 + 6;
      plVar15 = plVar13 + 6;
      plVar13 = plVar13 + 6;
    } while (*plVar1 != 0x383a995a2b21505e);
  }
  plVar19 = plVar19 + lVar12 * 6;
  if (plVar15 == plVar19) {
    plVar13 = (long *)0x0;
    if (plVar15 != plVar19) goto LAB_014c3ce4;
LAB_014c3d64:
    if (lVar18 == 0) goto LAB_014c3d80;
    FUN_0283b1e8(lVar18,&local_80);
  }
  else {
    plVar13 = plVar15 + 4;
    if (plVar15 == plVar19) goto LAB_014c3d64;
LAB_014c3ce4:
    uVar11 = (ulong)*(uint *)(plVar13 + 1);
    if (((*(uint *)(*plVar13 + 0x278) <= *(uint *)(plVar13 + 1)) ||
        (lVar12 = *(long *)(*plVar13 + 600), *(char *)(lVar12 + uVar11 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar12 + uVar11 * 0x48 + 0xb) == '\0')) goto LAB_014c3d64;
    plVar19 = (long *)(lVar12 + uVar11 * 0x48 + 0x10);
    lVar18 = *plVar19;
    if ((lVar18 != 0) && (*(char *)(lVar12 + uVar11 * 0x48 + 9) == '\0')) {
      fVar20 = *(float *)(lVar18 + 0x20);
      uVar5 = FUN_00227728();
      uVar11 = FUN_00227744(*plVar19);
      if (((float)uVar5 <= fVar20) && ((uVar11 & 1) == 0)) {
        lVar18 = *(long *)(param_1 + 0x2c8);
        goto LAB_014c3d64;
      }
    }
  }
  FUN_0283b748((float)iVar8,*(undefined8 *)(param_1 + 0x2c8),&local_80);
LAB_014c3d80:
  uVar7 = FUN_02c5d598(param_2);
  local_80 = 0x55cb876b8b081a9f;
  local_78 = "pane_L_pt_poke_name_00_P_icon_lang_00";
  local_70 = 0x25;
  local_68 = (long *)0x0;
  uVar9 = FUN_00d15530();
  if (uVar7 == (uVar9 & 0xff)) {
    FUN_0283b11c(plVar16,&local_80,0);
  }
  else {
    FUN_0283b11c(plVar16,&local_80,1);
    if ((*local_78 != '\0') &&
       (lVar18 = FUN_00d63240(*(undefined8 *)(param_1 + 0x2c8),&local_80), lVar18 != 0)) {
      plVar19 = *(long **)(param_1 + 0x518);
      if (plVar19 == (long *)0x0) {
        FUN_02838ee0(0,uVar7,lVar18,0,0);
      }
      else {
        plVar15 = plVar19 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = (int)*plVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        FUN_02838ee0(plVar19,uVar7,lVar18,0,0);
        do {
          iVar8 = (int)*plVar15 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *(int *)plVar15 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_80 = 0x62b35c8b3c93bf9;
  local_78 = "pane_L_pt_poke_name_00_N_bspoke_00";
  local_70 = 0x22;
  local_68 = (long *)0x0;
  uVar7 = FUN_02c628dc(param_2);
  FUN_0283b11c(plVar16,&local_80,uVar7 & 1);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar10 = *(undefined8 *)(param_1 + 0x4c8);
  uVar6 = FUN_02c5d638(param_2);
  FUN_0284e6a0(uVar10,uVar6,0);
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[0xb];
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  plVar17 = plVar16 + 10;
  do {
    iVar8 = (int)*plVar17 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar4) {
      *(int *)plVar17 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  return;
}


