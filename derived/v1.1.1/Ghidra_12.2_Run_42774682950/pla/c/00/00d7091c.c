/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d7091c; name: FUN_00d7091c
 */


void FUN_00d7091c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long *local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 *local_38;
  
  if ((*(int *)(param_1 + 0x5b0) == 0) &&
     (puVar5 = (undefined1 *)FUN_00d6eb20(*(undefined8 *)(param_1 + 0x5b8),param_1 + 0x760),
     puVar5 != &DAT_cbf29ce484222645)) {
    local_a0 = 0xa3279aff3885d75f;
    pcStack_98 = "pane_T_h_tips_00";
    local_90 = 0x10;
    local_88 = (long *)0x0;
    FUN_00d7057c(param_1,puVar5,&local_a0);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
  }
  puVar5 = (undefined1 *)
           FUN_00d6ebfc(*(undefined8 *)(param_1 + 0x5b8),param_1 + 0x760,
                        *(undefined4 *)(param_1 + 0x768));
  uVar6 = FUN_00d6ed44(*(undefined8 *)(param_1 + 0x5b8),param_1 + 0x760,
                       *(undefined4 *)(param_1 + 0x768),&local_a0);
  if (puVar5 != &DAT_cbf29ce484222645) {
    local_c0 = 0x1ff5f67e66199809;
    pcStack_b8 = "anime_switch_window_mode";
    local_b0 = 0x18;
    local_a8 = (long *)0x0;
    FUN_00d2df7c(param_1 + 0x180,&local_c0);
    if ((uVar6 & 1) == 0) {
      local_f0 = (long *)0xeae72409d467a483;
      pcStack_e8 = "pane_T_body_to_tips_00";
      local_e0 = 0x16;
      local_d8 = (long *)0x0;
      FUN_00d7057c(param_1,puVar5,&local_f0);
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      iVar2 = *(int *)(param_1 + 0x5b0);
      uVar12 = 0x40400000;
      uVar13 = 0x3f800000;
    }
    else {
      local_f0 = (long *)&DAT_5bacabb873bea6e8;
      pcStack_e8 = "pane_T_body_tai_tips_00";
      local_e0 = 0x17;
      local_d8 = (long *)0x0;
      FUN_00d7057c(param_1,puVar5,&local_f0);
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      uVar9 = *(undefined8 *)(param_1 + 0x778);
      local_38 = &local_a0;
      FUN_00d70d60(&local_f0,&local_38);
      FUN_00d6f2c8(uVar9,&local_f0,0);
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x20))();
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      iVar2 = *(int *)(param_1 + 0x5b0);
      uVar12 = 0x40000000;
      uVar13 = 0;
    }
    if (iVar2 != 0) {
      uVar13 = uVar12;
    }
    FUN_00d2e4b8(uVar13,param_1 + 0x180,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  plVar8 = *(long **)(param_1 + 0x2c8);
  if (plVar8 != (long *)0x0) {
    plVar10 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(uint *)(param_1 + 0x76c) < 2) {
    local_a0 = 0x4ab99bf4ddbd6ee3;
    pcStack_98 = "pane_N_pager_00";
    local_90 = 0xf;
    local_88 = (long *)0x0;
    FUN_0283b11c(plVar8,&local_a0,0);
    if (local_88 == (long *)0x0) goto LAB_00d70b58;
    pcVar7 = *(code **)(*local_88 + 0x20);
    plVar10 = local_88;
  }
  else {
    plVar10 = (long *)plVar8[0x37];
    if (plVar10 != (long *)0x0) {
      lVar11 = plVar10[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_02c395d0(plVar10,0,*(int *)(param_1 + 0x768) + 1,2,0,1);
    FUN_02c395d0(plVar10,1,*(undefined4 *)(param_1 + 0x76c),2,0,1);
    local_a0 = 0x590c1e5742844041;
    pcStack_98 = "pane_T_param_page_00";
    local_90 = 0x14;
    local_88 = (long *)0x0;
    FUN_00d7057c(param_1,0x4dee9506c0016c8a,&local_a0);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    local_a0 = 0x4ab99bf4ddbd6ee3;
    pcStack_98 = "pane_N_pager_00";
    local_90 = 0xf;
    local_88 = (long *)0x0;
    FUN_0283b11c(plVar8,&local_a0,1);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (plVar10 == (long *)0x0) goto LAB_00d70b58;
    lVar11 = plVar10[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_00d70b58;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    pcVar7 = *(code **)(*plVar10 + 0x20);
  }
  (*pcVar7)(plVar10);
LAB_00d70b58:
  if (plVar8 != (long *)0x0) {
    plVar10 = plVar8 + 10;
    do {
      iVar2 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return;
}


