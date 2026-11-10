/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136cdd4; name: FUN_0136cdd4
 */


void FUN_0136cdd4(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  int unaff_w25;
  bool bVar8;
  long lVar9;
  char *local_d0;
  long *local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long *local_a8;
  char local_a0 [8];
  char *pcStack_98;
  char local_90 [8];
  undefined6 uStack_88;
  undefined2 local_82;
  char acStack_80 [32];
  
  bVar8 = false;
  bVar3 = 0;
  lVar9 = 0x17f;
  do {
    if (lVar9 == 0x17c) {
      local_a0[0] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0];
      local_a0[1] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[1];
      local_a0[2] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[2];
      local_a0[3] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[3];
      local_a0[4] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[4];
      local_a0[5] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[5];
      local_a0[6] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[6];
      local_a0[7] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[7];
      pcStack_98 = (char *)s_pane_L_mngm_score_00_A_ride_num__0393ad17._8_8_;
      local_90[0] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x10];
      local_90[1] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x11];
      local_90[2] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x12];
      local_90[3] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x13];
      local_90[4] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x14];
      local_90[5] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x15];
      local_90[6] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x16];
      local_90[7] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x17];
      uStack_88._0_1_ = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x18];
      uStack_88._1_1_ = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x19];
      uStack_88._2_1_ = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x1a];
      uStack_88._3_1_ = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x1b];
      uStack_88._4_1_ = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x1c];
      uStack_88._5_1_ = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x1d];
      local_82._0_1_ = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x1e];
      local_82._1_1_ = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x1f];
      acStack_80[0] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x20];
      acStack_80[1] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x21];
      acStack_80[2] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x22];
      acStack_80[3] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x23];
      acStack_80[4] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x24];
      acStack_80[5] = s_pane_L_mngm_score_00_A_ride_num__0393ad17[0x25];
      if (bVar8 == false) goto LAB_0136ce44;
LAB_0136cf34:
      bVar2 = false;
      bVar8 = true;
    }
    else {
      snprintf(local_a0,0x40,"pane_L_mngm_score_00_A_ride_num_clear%d",(int)lVar9 + -0x17c);
      if (bVar8) goto LAB_0136cf34;
LAB_0136ce44:
      uVar1 = *(uint *)(param_1 + lVar9 * 4);
      bVar8 = uVar1 <= param_2;
      if (uVar1 <= param_2) {
        bVar3 = 1;
        unaff_w25 = (int)lVar9 + -0x17c;
      }
      bVar2 = bVar8;
    }
    local_d0 = local_a0;
    FUN_009313e8(&local_c8,&local_d0);
    plVar4 = local_c8;
    if (local_c8 == (long *)0x0) {
      local_c0 = *(long *)PTR_DAT_04379c88;
LAB_0136d05c:
      lStack_b8 = *(long *)PTR_PTR_04379d00;
      if (local_c8 != (long *)0x0) goto LAB_0136ce90;
LAB_0136d06c:
      local_b0 = 0;
      local_a8 = (long *)0x0;
    }
    else {
      local_c0 = local_c8[0xb];
      if (local_c8 == (long *)0x0) goto LAB_0136d05c;
      lStack_b8 = local_c8[0xc];
      if (local_c8 == (long *)0x0) goto LAB_0136d06c;
LAB_0136ce90:
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
      FUN_02a4754c(local_a0,&DAT_04207518);
      lVar9 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),local_a0);
      *(byte *)(lVar9 + 0x58) = bVar8 ^ 1;
      if ((long *)CONCAT26(local_82,uStack_88) != (long *)0x0) {
        (**(code **)(*(long *)CONCAT26(local_82,uStack_88) + 0x20))();
      }
      if ((bVar3 & bVar8) == 0) {
        iVar7 = 7;
      }
      else {
        iVar7 = *(int *)(&UNK_0388a060 + (long)unaff_w25 * 4);
      }
      FUN_0136cb6c(param_1,iVar7,param_2 % 10);
      FUN_0136cb6c(param_1,iVar7 + 1,param_2 / 10 + (param_2 / 100) * -10);
      local_a0[0] = '@';
      local_a0[1] = 'm';
      local_a0[2] = -0x13;
      local_a0[3] = -0x48;
      local_a0[4] = -0x10;
      local_a0[5] = '\x10';
      local_a0[6] = -0x58;
      local_a0[7] = 'X';
      pcStack_98 = "anime_L_mngm_score_00_count";
      local_90[0] = '\x1b';
      local_90[1] = '\0';
      local_90[2] = '\0';
      local_90[3] = '\0';
      local_90[4] = '\0';
      local_90[5] = '\0';
      local_90[6] = '\0';
      local_90[7] = '\0';
      uStack_88 = 0;
      local_82 = 0;
      FUN_00d2df7c(param_1 + 0x180,local_a0);
      if ((long *)CONCAT26(local_82,uStack_88) != (long *)0x0) {
        (**(code **)(*(long *)CONCAT26(local_82,uStack_88) + 0x20))();
      }
      return;
    }
  } while( true );
}


