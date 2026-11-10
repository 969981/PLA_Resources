/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011cc898; name: FUN_011cc898
 */


void FUN_011cc898(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_280 [24];
  long *local_268;
  undefined8 local_260;
  char *pcStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  char *local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  char *pcStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  char *local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  char *pcStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  char *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  char *pcStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  char *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  char *pcStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  char *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  char *pcStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  char *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  char *pcStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  char *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  char *pcStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  char *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  
  local_260 = 0x406636be84f01394;
  pcStack_258 = "pane_L_poke_state_00_T_pokename_00";
  local_70 = 0x22;
  local_250 = 0x22;
  uStack_248 = 0xc3d853fec8c3652c;
  local_240 = "pane_L_poke_state_00_T_lv_00";
  uStack_238 = 0x1c;
  local_230 = 0x14a115597cd92dcc;
  pcStack_228 = "pane_L_poke_state_00_L_seibetsu_00";
  local_220 = 0x22;
  uStack_218 = 0x9c77a763f4ced79;
  local_210 = "anime_L_poke_state_00_L_seibetsu_00_switch";
  uStack_208 = 0x2a;
  local_200 = 0xdae59fb518459512;
  pcStack_1f8 = "pane_L_poke_state_00_T_hp_00";
  local_1f0 = 0x1c;
  uStack_1e8 = 0xdae59db5184591ac;
  local_1e0 = "pane_L_poke_state_00_T_hp_02";
  uStack_1d8 = 0x1c;
  local_1d0 = 0xdae5a0b5184596c5;
  pcStack_1c8 = "pane_L_poke_state_00_T_hp_01";
  local_1c0 = 0x1c;
  uStack_1b8 = 0x49dda8caf4f10d02;
  local_1b0 = "pane_L_poke_state_00_A_alignment_00";
  uStack_1a8 = 0x23;
  local_1a0 = 0xf7a915f1bb73fd6a;
  pcStack_198 = "pane_L_poke_state_00_L_HP_00";
  local_190 = 0x1c;
  uStack_188 = 0x31f2c21496da4387;
  local_180 = "anime_L_poke_state_00_L_HP_00_gauge_scale";
  uStack_178 = 0x29;
  local_170 = 0x89674023d801651e;
  pcStack_168 = "anime_L_poke_state_00_L_HP_00_color_green";
  local_150 = "anime_L_poke_state_00_L_HP_00_color_yellow";
  uStack_148 = 0x2a;
  local_160 = 0x29;
  uStack_158 = 0x5b60db8b09779723;
  local_140 = 0xbf5200e772914dee;
  pcStack_138 = "anime_L_poke_state_00_L_HP_00_color_red";
  local_130 = 0x27;
  uStack_128 = 0x669f172d45e44ea4;
  local_120 = "pane_L_poke_state_00_L_sick_00";
  uStack_118 = 0x1e;
  local_28 = 0x1e;
  local_110 = 0x77ef167550736d07;
  pcStack_108 = "pane_L_poke_state_00_L_sick_00_P_sick_00";
  local_100 = 0x28;
  uStack_f8 = 0x9b112b92166ff9b7;
  local_f0 = "anime_L_poke_state_00_L_sick_00_flashing";
  uStack_e8 = 0x28;
  local_e0 = 0xc992f589680b1ba;
  pcStack_d8 = "pane_L_poke_state_00_P_icon_poke_type_00";
  local_d0 = 0x28;
  uStack_c8 = 0xc9930589680b36d;
  local_c0 = "pane_L_poke_state_00_P_icon_poke_type_01";
  uStack_b8 = 0x28;
  local_b0 = 0x8c2e71e16f1b8ac5;
  pcStack_a8 = "pane_L_poke_state_00_L_cursor_l_00";
  local_a0 = 0x22;
  uStack_98 = 0xad2ec624fabb283a;
  local_60 = "anime_L_poke_state_00_L_cursor_r_00_key_select";
  local_50 = 0x8a1c034658dbc534;
  local_48 = "pane_L_poke_state_00_L_icon_bspoke_00";
  local_90 = "anime_L_poke_state_00_L_cursor_l_00_key_select";
  uStack_88 = 0x2e;
  local_58 = 0x2e;
  local_40 = 0x25;
  local_78 = "pane_L_poke_state_00_L_cursor_r_00";
  local_38 = 0x85ffdcade486070e;
  local_80 = 0xb5713dd0fea56767;
  local_68 = 0x7b4914eb011b25bc;
  local_30 = "pane_L_poke_state_00_P_rare_00";
  if (param_2 == 1) {
    uVar2 = *param_1;
    puVar1 = &local_68;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    uVar2 = *param_1;
    puVar1 = &uStack_98;
  }
  FUN_02a4754c(auStack_280,puVar1);
  FUN_0283b1e8(uVar2,auStack_280);
  if (local_268 != (long *)0x0) {
    (**(code **)(*local_268 + 0x20))();
  }
  return;
}


