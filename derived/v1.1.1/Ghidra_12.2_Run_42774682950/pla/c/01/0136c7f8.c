/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136c7f8; name: FUN_0136c7f8
 */


void FUN_0136c7f8(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  int unaff_w25;
  long lVar9;
  char *local_d0;
  long *local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long *local_a8;
  char local_a0 [8];
  char *local_98;
  char local_90 [8];
  long *local_88;
  char acStack_80 [32];
  
  bVar7 = false;
  bVar3 = 0;
  lVar9 = 0x17f;
  do {
    if (lVar9 == 0x17c) {
      local_a0[0] = s_pane_L_mngm_score_00_A_target_nu_03929107[0];
      local_a0[1] = s_pane_L_mngm_score_00_A_target_nu_03929107[1];
      local_a0[2] = s_pane_L_mngm_score_00_A_target_nu_03929107[2];
      local_a0[3] = s_pane_L_mngm_score_00_A_target_nu_03929107[3];
      local_a0[4] = s_pane_L_mngm_score_00_A_target_nu_03929107[4];
      local_a0[5] = s_pane_L_mngm_score_00_A_target_nu_03929107[5];
      local_a0[6] = s_pane_L_mngm_score_00_A_target_nu_03929107[6];
      local_a0[7] = s_pane_L_mngm_score_00_A_target_nu_03929107[7];
      local_98 = (char *)s_pane_L_mngm_score_00_A_target_nu_03929107._8_8_;
      local_90[0] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x10];
      local_90[1] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x11];
      local_90[2] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x12];
      local_90[3] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x13];
      local_90[4] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x14];
      local_90[5] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x15];
      local_90[6] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x16];
      local_90[7] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x17];
      local_88 = (long *)s_pane_L_mngm_score_00_A_target_nu_03929107._24_8_;
      acStack_80[0] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x20];
      acStack_80[1] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x21];
      acStack_80[2] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x22];
      acStack_80[3] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x23];
      acStack_80[4] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x24];
      acStack_80[5] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x25];
      acStack_80[6] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x26];
      acStack_80[7] = s_pane_L_mngm_score_00_A_target_nu_03929107[0x27];
      if (bVar7 == false) goto LAB_0136c868;
LAB_0136c958:
      bVar2 = false;
      bVar7 = true;
    }
    else {
      snprintf(local_a0,0x40,"pane_L_mngm_score_00_A_target_num_clear%d",(int)lVar9 + -0x17c);
      if (bVar7) goto LAB_0136c958;
LAB_0136c868:
      uVar1 = *(uint *)(param_1 + lVar9 * 4);
      bVar7 = uVar1 <= param_2;
      if (uVar1 <= param_2) {
        bVar3 = 1;
        unaff_w25 = (int)lVar9 + -0x17c;
      }
      bVar2 = bVar7;
    }
    local_d0 = local_a0;
    FUN_009313e8(&local_c8,&local_d0);
    plVar4 = local_c8;
    if (local_c8 == (long *)0x0) {
      local_c0 = *(long *)PTR_DAT_04379c88;
LAB_0136cb4c:
      lStack_b8 = *(long *)PTR_PTR_04379d00;
      if (local_c8 != (long *)0x0) goto LAB_0136c8b4;
LAB_0136cb5c:
      local_b0 = 0;
      local_a8 = (long *)0x0;
    }
    else {
      local_c0 = local_c8[0xb];
      if (local_c8 == (long *)0x0) goto LAB_0136cb4c;
      lStack_b8 = local_c8[0xc];
      if (local_c8 == (long *)0x0) goto LAB_0136cb5c;
LAB_0136c8b4:
      local_b0 = local_c8[0xd];
      local_a8 = (long *)0x0;
      (**(code **)(*local_c8 + 0x18))(local_c8);
      plVar5 = local_a8;
      local_a8 = plVar4;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    lVar6 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),&local_c0);
    *(bool *)(lVar6 + 0x58) = bVar2;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    lVar9 = lVar9 + -1;
    if (lVar9 == 0x17b) {
      FUN_02a4754c(local_a0,&DAT_042075c0);
      lVar9 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),local_a0);
      *(byte *)(lVar9 + 0x58) = bVar7 ^ 1;
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      if ((bVar3 & bVar7) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(&UNK_0388a350 + (long)unaff_w25 * 4);
      }
      FUN_0136cb6c(param_1,iVar8,param_2 % 10);
      FUN_0136cb6c(param_1,iVar8 + 1,param_2 / 10 + (param_2 / 100) * -10);
      FUN_0136cb6c(param_1,iVar8 + 2,param_2 / 100 + (param_2 / 1000) * -10);
      FUN_0136cb6c(param_1,iVar8 + 3,param_2 / 1000 + (param_2 / 10000) * -10);
      FUN_0136cb6c(param_1,iVar8 + 4,param_2 / 10000 + (param_2 / 100000) * -10);
      FUN_0136cb6c(param_1,iVar8 + 5,(param_2 >> 5) / 0xc35 + ((param_2 >> 5) / 0x7a12) * -10);
      FUN_0136cb6c(param_1,iVar8 + 6,param_2 / 1000000 + (param_2 / 10000000) * -10);
      local_a0[0] = '@';
      local_a0[1] = 'm';
      local_a0[2] = -0x13;
      local_a0[3] = -0x48;
      local_a0[4] = -0x10;
      local_a0[5] = '\x10';
      local_a0[6] = -0x58;
      local_a0[7] = 'X';
      local_98 = "anime_L_mngm_score_00_count";
      local_90[0] = '\x1b';
      local_90[1] = '\0';
      local_90[2] = '\0';
      local_90[3] = '\0';
      local_90[4] = '\0';
      local_90[5] = '\0';
      local_90[6] = '\0';
      local_90[7] = '\0';
      local_88 = (long *)0x0;
      FUN_00d2df7c(param_1 + 0x180,local_a0);
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      return;
    }
  } while( true );
}


