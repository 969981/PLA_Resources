/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011cb8cc; name: FUN_011cb8cc
 */


/* WARNING: Removing unreachable block (ram,0x011cb990) */
/* WARNING: Removing unreachable block (ram,0x011cb994) */
/* WARNING: Removing unreachable block (ram,0x011cb99c) */
/* WARNING: Removing unreachable block (ram,0x011cb9a4) */
/* WARNING: Removing unreachable block (ram,0x011cbbd4) */
/* WARNING: Removing unreachable block (ram,0x011cbbe8) */
/* WARNING: Removing unreachable block (ram,0x011cb9d0) */
/* WARNING: Removing unreachable block (ram,0x011cb9d4) */
/* WARNING: Removing unreachable block (ram,0x011cb9dc) */
/* WARNING: Removing unreachable block (ram,0x011cb9e4) */
/* WARNING: Removing unreachable block (ram,0x011cbbc4) */

void FUN_011cb8cc(long *param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 local_1b0;
  long local_1a8;
  long local_1a0;
  undefined8 local_198;
  char *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  char *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  char *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  char *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_1a8 = *param_1;
  if (local_1a8 == 0) {
    local_1a0 = param_1[1];
  }
  else {
    piVar1 = (int *)(local_1a8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_1a0 = param_1[1];
  }
  if (local_1a0 != 0) {
    piVar1 = (int *)(local_1a0 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_48 = 0;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = &DAT_03996322;
  puStack_98 = &DAT_cbf29ce484222645;
  local_a0 = 0;
  local_c0 = 0;
  local_e0 = 0;
  local_100 = 0;
  local_120 = 0;
  local_140 = 0;
  local_160 = 0;
  local_180 = 0;
  local_1b0 = 0;
  local_198 = 0xdae5a0b5184596c5;
  local_190 = "pane_L_poke_state_00_T_hp_01";
  local_178 = 0xdae59fb518459512;
  local_188 = 0x1c;
  local_148 = 0x1c;
  local_170 = "pane_L_poke_state_00_T_hp_00";
  uStack_168 = 0x1c;
  local_158 = 0xdae59db5184591ac;
  local_150 = "pane_L_poke_state_00_T_hp_02";
  local_138 = 0xf7a915f1bb73fd6a;
  local_130 = "pane_L_poke_state_00_L_HP_00";
  uStack_128 = 0x1c;
  local_118 = 0x31f2c21496da4387;
  local_110 = "anime_L_poke_state_00_L_HP_00_gauge_scale";
  local_108 = 0x29;
  local_e8 = 0x29;
  local_f8 = 0x89674023d801651e;
  local_f0 = "anime_L_poke_state_00_L_HP_00_color_green";
  local_d8 = 0x5b60db8b09779723;
  local_d0 = "anime_L_poke_state_00_L_HP_00_color_yellow";
  local_c8 = 0x2a;
  local_b8 = 0xbf5200e772914dee;
  local_b0 = "anime_L_poke_state_00_L_HP_00_color_red";
  uStack_a8 = 0x27;
  local_78 = 0x8d1b0bc59a3b8d5f;
  local_70 = 0x8d1b0ac59a3b8bac;
  local_68 = 0x8d1b0ac59a3b8bac;
  local_60 = 0x49dda8caf4f10d02;
  local_58 = "pane_L_poke_state_00_A_alignment_00";
  local_50 = 0x23;
  if (param_1[4] != 0) {
    FUN_0143ac78(param_1[4],&local_1b0);
    lVar6 = param_1[4];
    uVar4 = FUN_00932190(param_2);
    uVar5 = FUN_0093219c(param_2);
    FUN_0143b1ec((float)uVar4,lVar6,uVar5);
    FUN_0143ba18(param_1[4],1);
    FUN_0143bd08(param_1[4],param_3 & 1);
  }
  FUN_011cc710(&local_1b0);
  return;
}


