/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c68cc; name: FUN_014c68cc
 */


void FUN_014c68cc(long param_1,byte param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  byte bVar8;
  
  if (((DAT_043c4b78 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043c4b78), iVar6 != 0)) {
    DAT_043c4998 = 0xd91075a751f57367;
    DAT_043c49a0 = "pane_L_scr_01_waza_L_pt_waza_info_00_P_sel_bg_l_over";
    DAT_043c49b8 = 0xd70ccb231ddabe3f;
    DAT_043c49c0 = "pane_L_scr_01_waza_L_pt_waza_info_00_T_waza_name_00";
    DAT_043c49d8 = 0xd70cca231ddabc8c;
    DAT_043c49e0 = "pane_L_scr_01_waza_L_pt_waza_info_00_T_waza_name_01";
    DAT_043c49f8 = 0x30e7d7e42d7f5cac;
    DAT_043c4a00 = "pane_L_scr_01_waza_L_pt_waza_info_01_P_sel_bg_l_over";
    DAT_043c49a8 = 0x34;
    DAT_043c49b0 = 0;
    DAT_043c4a08 = 0x34;
    DAT_043c4a10 = 0;
    DAT_043c4a68 = 0x34;
    DAT_043c4a70 = 0;
    DAT_043c4a18 = 0x1c917c6c1b57c5ce;
    DAT_043c4a20 = "pane_L_scr_01_waza_L_pt_waza_info_01_T_waza_name_00";
    DAT_043c4ac8 = 0x34;
    DAT_043c4ad0 = 0;
    DAT_043c4a38 = 0x1c917d6c1b57c781;
    DAT_043c4a40 = "pane_L_scr_01_waza_L_pt_waza_info_01_T_waza_name_01";
    DAT_043c4b28 = 0x34;
    DAT_043c4b30 = 0;
    DAT_043c4a58 = 0x402f09620eeeddb1;
    DAT_043c4a60 = "pane_L_scr_01_waza_L_pt_waza_info_02_P_sel_bg_l_over";
    DAT_043c49c8 = 0x33;
    DAT_043c49d0 = 0;
    DAT_043c4a78 = 0x83a53aa7a881f0fd;
    DAT_043c4a80 = "pane_L_scr_01_waza_L_pt_waza_info_02_T_waza_name_00";
    DAT_043c49e8 = 0x33;
    DAT_043c49f0 = 0;
    DAT_043c4a98 = 0x83a539a7a881ef4a;
    DAT_043c4aa0 = "pane_L_scr_01_waza_L_pt_waza_info_02_T_waza_name_01";
    DAT_043c4a28 = 0x33;
    DAT_043c4a30 = 0;
    DAT_043c4ab8 = 0x3fe4d962e8ad521e;
    DAT_043c4ac0 = "pane_L_scr_01_waza_L_pt_waza_info_03_P_sel_bg_l_over";
    DAT_043c4ad8 = 0xf19b10750db8894;
    DAT_043c4ae0 = "pane_L_scr_01_waza_L_pt_waza_info_03_T_waza_name_00";
    DAT_043c4af8 = 0xf19b20750db8a47;
    DAT_043c4b00 = "pane_L_scr_01_waza_L_pt_waza_info_03_T_waza_name_01";
    DAT_043c4b18 = 0xa71dfef0395fbfb3;
    DAT_043c4b20 = "pane_L_scr_01_waza_L_pt_waza_info_04_P_sel_bg_l_over";
    DAT_043c4b38 = 0x2c93fca6c41d8a5b;
    DAT_043c4b40 = "pane_L_scr_01_waza_L_pt_waza_info_04_T_waza_name_00";
    DAT_043c4a48 = 0x33;
    DAT_043c4a50 = 0;
    DAT_043c4a88 = 0x33;
    DAT_043c4a90 = 0;
    DAT_043c4aa8 = 0x33;
    DAT_043c4ab0 = 0;
    DAT_043c4ae8 = 0x33;
    DAT_043c4af0 = 0;
    DAT_043c4b08 = 0x33;
    DAT_043c4b10 = 0;
    DAT_043c4b48 = 0x33;
    DAT_043c4b50 = 0;
    DAT_043c4b58 = 0x2c93fba6c41d88a8;
    DAT_043c4b60 = "pane_L_scr_01_waza_L_pt_waza_info_04_T_waza_name_01";
    DAT_043c4b68 = 0x33;
    DAT_043c4b70 = 0;
    FUN_00100250(&LAB_014c0780,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c4b78);
    plVar7 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar7 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(**(long **)(param_1 + 0x5c8) + 0x10))();
  bVar5 = FUN_02c5be58();
  bVar8 = param_2 ^ 1;
  bVar2 = bVar8 & 1;
  FUN_0283b11c(plVar7,&DAT_043c4998,bVar2);
  if (bVar5 == 0) {
    FUN_0283b11c(plVar7,&DAT_043c49b8,0);
    FUN_0283b11c(plVar7,&DAT_043c49d8,0);
    FUN_0283b11c(plVar7,&DAT_043c49f8,bVar2);
LAB_014c6aac:
    FUN_0283b11c(plVar7,&DAT_043c4a18,0);
    FUN_0283b11c(plVar7,&DAT_043c4a38,0);
    FUN_0283b11c(plVar7,&DAT_043c4a58,bVar8 & 1);
LAB_014c6ae4:
    FUN_0283b11c(plVar7,&DAT_043c4a78,0);
    FUN_0283b11c(plVar7,&DAT_043c4a98,0);
    FUN_0283b11c(plVar7,&DAT_043c4ab8,bVar8 & 1);
  }
  else {
    FUN_0283b11c(plVar7,&DAT_043c49b8,param_2 & 1);
    FUN_0283b11c(plVar7,&DAT_043c49d8,bVar2);
    FUN_0283b11c(plVar7,&DAT_043c49f8,bVar2);
    if (bVar5 == 1) goto LAB_014c6aac;
    FUN_0283b11c(plVar7,&DAT_043c4a18,param_2 & 1);
    bVar2 = bVar8 & 1;
    FUN_0283b11c(plVar7,&DAT_043c4a38,bVar2);
    FUN_0283b11c(plVar7,&DAT_043c4a58,bVar2);
    if (bVar5 < 3) goto LAB_014c6ae4;
    FUN_0283b11c(plVar7,&DAT_043c4a78,param_2 & 1);
    FUN_0283b11c(plVar7,&DAT_043c4a98,bVar2);
    FUN_0283b11c(plVar7,&DAT_043c4ab8,bVar2);
    if (bVar5 != 3) {
      FUN_0283b11c(plVar7,&DAT_043c4ad8,param_2 & 1);
      FUN_0283b11c(plVar7,&DAT_043c4af8,bVar8 & 1);
      FUN_0283b11c(plVar7,&DAT_043c4b18,bVar8 & 1);
      param_2 = 4 < bVar5 & param_2;
      bVar8 = 4 < bVar5 & bVar8;
      goto LAB_014c6b5c;
    }
  }
  FUN_0283b11c(plVar7,&DAT_043c4ad8,0);
  FUN_0283b11c(plVar7,&DAT_043c4af8,0);
  FUN_0283b11c(plVar7,&DAT_043c4b18,bVar8 & 1);
  param_2 = 0;
  bVar8 = 0;
LAB_014c6b5c:
  FUN_0283b11c(plVar7,&DAT_043c4b38,param_2);
  FUN_0283b11c(plVar7,&DAT_043c4b58,bVar8);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x014c6bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))(plVar7);
      return;
    }
  }
  return;
}


