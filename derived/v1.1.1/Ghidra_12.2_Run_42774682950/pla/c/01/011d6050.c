/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d6050; name: FUN_011d6050
 */


void FUN_011d6050(undefined8 *param_1,ulong param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  char **ppcVar4;
  char **ppcVar5;
  undefined4 uVar6;
  char *local_108;
  char *pcStack_100;
  char *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  char *apcStack_d0 [4];
  char *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 uStack_48;
  
  bVar1 = *(char *)(param_1 + 7) != '\0';
  local_e8 = 0x9df1d1d8e3a00e4e;
  if (bVar1) {
    local_e8 = 0x9df1d2d8e3a01001;
  }
  pcStack_e0 = "pane_L_ball_01";
  if (bVar1) {
    pcStack_e0 = "pane_L_ball_00";
  }
  apcStack_d0[0] = (char *)0xb2e1f6a87a06fc9b;
  if (bVar1) {
    apcStack_d0[0] = (char *)0xc312d04c520a08bc;
  }
  apcStack_d0[1] = "anime_L_ball_01_L_icon_ball_00_switch";
  if (bVar1) {
    apcStack_d0[1] = "anime_L_ball_00_L_icon_ball_00_switch";
  }
  local_d8 = 0xe;
  apcStack_d0[3] = (char *)0x8913cea09400deea;
  if (bVar1) {
    apcStack_d0[3] = (char *)0x3af5321dde1867c5;
  }
  apcStack_d0[2] = (char *)0x25;
  local_b0 = "anime_L_ball_01_L_icon_ball_01_switch";
  if (bVar1) {
    local_b0 = "anime_L_ball_00_L_icon_ball_01_switch";
  }
  uStack_a8 = 0x25;
  local_a0 = 0x7f6b1a21010f0c69;
  if (bVar1) {
    local_a0 = 0x419c03908c290006;
  }
  pcStack_98 = "anime_L_ball_01_L_icon_ball_02_switch";
  if (bVar1) {
    pcStack_98 = "anime_L_ball_00_L_icon_ball_02_switch";
  }
  uStack_88 = 0xb6c52465dd72caa0;
  if (bVar1) {
    uStack_88 = 0x7f3c3295210a1a07;
  }
  local_90 = 0x25;
  local_80 = "anime_L_ball_01_L_icon_ball_03_switch";
  if (bVar1) {
    local_80 = "anime_L_ball_00_L_icon_ball_03_switch";
  }
  uStack_78 = 0x25;
  local_70 = 0x6cf6f193db39d947;
  if (bVar1) {
    local_70 = 0xaeac2d2618ecb60;
  }
  pcStack_68 = "anime_L_ball_01_L_icon_ball_04_switch";
  if (bVar1) {
    pcStack_68 = "anime_L_ball_00_L_icon_ball_04_switch";
  }
  uStack_58 = 0x2f56c28f4658bf46;
  if (bVar1) {
    uStack_58 = 0x2b603a8923415729;
  }
  local_60 = 0x25;
  local_50 = "anime_L_ball_01_L_icon_ball_05_switch";
  if (bVar1) {
    local_50 = "anime_L_ball_00_L_icon_ball_05_switch";
  }
  uStack_48 = 0x25;
  param_2 = param_2 & 0xff;
  ppcVar5 = apcStack_d0 + param_2 * 3;
  local_108 = *ppcVar5;
  ppcVar4 = apcStack_d0 + param_2 * 3 + 1;
  pcStack_100 = *ppcVar4;
  local_f8 = apcStack_d0[param_2 * 3 + 2];
  uStack_f0 = 0;
  FUN_0283b1e8(*param_1,&local_108);
  if (param_3 == 0) {
    local_108 = *ppcVar5;
    uVar6 = 0;
    pcStack_100 = *ppcVar4;
    uVar2 = *param_1;
  }
  else {
    lVar3 = *(long *)(param_3 + 0x70);
    if (lVar3 == 0) {
      return;
    }
    if ((((((*(byte *)(lVar3 + 0x98) & 7) == 0) && ((*(byte *)(lVar3 + 0xa0) & 7) == 0)) &&
         ((*(byte *)(lVar3 + 0xa8) & 7) == 0)) &&
        (((*(byte *)(lVar3 + 0xb0) & 7) == 0 && ((*(byte *)(lVar3 + 0xb8) & 7) == 0)))) &&
       ((*(byte *)(lVar3 + 0xc0) & 7) == 0)) {
      bVar1 = (*(byte *)(lVar3 + 200) & 7) == 0;
    }
    else {
      bVar1 = false;
    }
    uVar2 = *param_1;
    if ((bVar1) || (*(short *)(lVar3 + 0x74) == 0)) {
      if (*(short *)(lVar3 + 0x74) == 0) {
        local_108 = *ppcVar5;
        uVar6 = 0x40000000;
      }
      else {
        local_108 = *ppcVar5;
        uVar6 = 0x3f800000;
      }
    }
    else {
      local_108 = *ppcVar5;
      uVar6 = 0x40400000;
    }
    pcStack_100 = *ppcVar4;
  }
  local_f8 = apcStack_d0[param_2 * 3 + 2];
  uStack_f0 = 0;
  FUN_0283b748(uVar6,uVar2,&local_108);
  return;
}


