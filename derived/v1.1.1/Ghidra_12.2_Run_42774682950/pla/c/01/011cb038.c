/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011cb038; name: FUN_011cb038
 */


void FUN_011cb038(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_2a0 [24];
  long *local_288;
  undefined8 local_280;
  char *pcStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  char *local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  char *pcStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  char *local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  char *pcStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  char *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  char *pcStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  char *local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  char *pcStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  char *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  char *pcStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  char *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  char *pcStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  char *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  char *pcStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  char *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  char *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  
  if (param_1[3] != 0) {
    uVar2 = FUN_00931f40(param_2);
    local_280 = 0x406636be84f01394;
    pcStack_278 = "pane_L_poke_state_00_T_pokename_00";
    local_90 = 0x22;
    local_270 = 0x22;
    uStack_268 = 0xc3d853fec8c3652c;
    local_260 = "pane_L_poke_state_00_T_lv_00";
    uStack_258 = 0x1c;
    local_250 = 0x14a115597cd92dcc;
    pcStack_248 = "pane_L_poke_state_00_L_seibetsu_00";
    local_240 = 0x22;
    uStack_238 = 0x9c77a763f4ced79;
    local_230 = "anime_L_poke_state_00_L_seibetsu_00_switch";
    uStack_228 = 0x2a;
    local_220 = 0xdae59fb518459512;
    pcStack_218 = "pane_L_poke_state_00_T_hp_00";
    local_210 = 0x1c;
    uStack_208 = 0xdae59db5184591ac;
    local_200 = "pane_L_poke_state_00_T_hp_02";
    uStack_1f8 = 0x1c;
    local_1f0 = 0xdae5a0b5184596c5;
    pcStack_1e8 = "pane_L_poke_state_00_T_hp_01";
    local_1e0 = 0x1c;
    uStack_1d8 = 0x49dda8caf4f10d02;
    local_1d0 = "pane_L_poke_state_00_A_alignment_00";
    uStack_1c8 = 0x23;
    local_1c0 = 0xf7a915f1bb73fd6a;
    pcStack_1b8 = "pane_L_poke_state_00_L_HP_00";
    local_1b0 = 0x1c;
    uStack_1a8 = 0x31f2c21496da4387;
    local_1a0 = "anime_L_poke_state_00_L_HP_00_gauge_scale";
    uStack_198 = 0x29;
    local_190 = 0x89674023d801651e;
    pcStack_188 = "anime_L_poke_state_00_L_HP_00_color_green";
    local_180 = 0x29;
    uStack_178 = 0x5b60db8b09779723;
    local_170 = "anime_L_poke_state_00_L_HP_00_color_yellow";
    uStack_168 = 0x2a;
    local_160 = 0xbf5200e772914dee;
    pcStack_158 = "anime_L_poke_state_00_L_HP_00_color_red";
    local_150 = 0x27;
    uStack_148 = 0x669f172d45e44ea4;
    local_140 = "pane_L_poke_state_00_L_sick_00";
    uStack_138 = 0x1e;
    local_48 = 0x1e;
    local_130 = 0x77ef167550736d07;
    pcStack_128 = "pane_L_poke_state_00_L_sick_00_P_sick_00";
    local_120 = 0x28;
    uStack_118 = 0x9b112b92166ff9b7;
    local_110 = "anime_L_poke_state_00_L_sick_00_flashing";
    uStack_108 = 0x28;
    local_100 = 0xc992f589680b1ba;
    pcStack_f8 = "pane_L_poke_state_00_P_icon_poke_type_00";
    local_f0 = 0x28;
    uStack_e8 = 0xc9930589680b36d;
    local_e0 = "pane_L_poke_state_00_P_icon_poke_type_01";
    uStack_d8 = 0x28;
    local_d0 = 0x8c2e71e16f1b8ac5;
    pcStack_c8 = "pane_L_poke_state_00_L_cursor_l_00";
    local_c0 = 0x22;
    uStack_b8 = 0xad2ec624fabb283a;
    local_80 = "anime_L_poke_state_00_L_cursor_r_00_key_select";
    local_70 = 0x8a1c034658dbc534;
    local_68 = "pane_L_poke_state_00_L_icon_bspoke_00";
    local_b0 = "anime_L_poke_state_00_L_cursor_l_00_key_select";
    uStack_a8 = 0x2e;
    local_78 = 0x2e;
    local_60 = 0x25;
    local_98 = "pane_L_poke_state_00_L_cursor_r_00";
    local_58 = 0x85ffdcade486070e;
    local_a0 = 0xb5713dd0fea56767;
    local_88 = 0x7b4914eb011b25bc;
    local_50 = "pane_L_poke_state_00_P_rare_00";
    uVar4 = *param_1;
    FUN_02a4754c(auStack_2a0,&local_100);
    lVar3 = FUN_00d63240(uVar4,auStack_2a0);
    if (local_288 != (long *)0x0) {
      (**(code **)(*local_288 + 0x20))();
    }
    if (lVar3 != 0) {
      FUN_0284fbb0(param_1[3],uVar2 & 0x1f,1,lVar3,0,0);
    }
    uVar4 = *param_1;
    FUN_02a4754c(auStack_2a0,&uStack_e8);
    lVar3 = FUN_00d63240(uVar4,auStack_2a0);
    if (local_288 != (long *)0x0) {
      (**(code **)(*local_288 + 0x20))();
    }
    uVar1 = uVar2 >> 5 & 0x1f;
    if (lVar3 != 0) {
      FUN_0284fbb0(param_1[3],uVar1,1,lVar3,0,0);
    }
    uVar4 = *param_1;
    FUN_02a4754c(auStack_2a0,&uStack_e8);
    FUN_0283b11c(uVar4,auStack_2a0,(uVar2 & 0x1f) != uVar1);
    if (local_288 != (long *)0x0) {
      (**(code **)(*local_288 + 0x20))();
    }
  }
  return;
}


