/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02abb420; name: FUN_02abb420
 */


void FUN_02abb420(long param_1,long *param_2)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  int local_104;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [28];
  undefined4 local_a4;
  float local_a0;
  undefined1 auStack_9c [12];
  int local_8c;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  int local_38;
  undefined4 local_34;
  
  lVar5 = *(long *)(param_1 + 0x58);
  FUN_02bc0574(lVar5);
  local_70 = (undefined1 *)0xe4922c9d693d2989;
  pcStack_68 = "HayabusaSkyTop";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_34);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x6b4) = local_34;
  }
  local_70 = (undefined1 *)0x2b83417c205b14f5;
  pcStack_68 = "HayabusaSkyHeight";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_34);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x6b8) = local_34;
  }
  local_70 = (undefined1 *)0xb1e8cf3ced07b598;
  pcStack_68 = "AimRimColor1";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,&local_80);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    fVar6 = (float)local_80;
    if (fVar6 <= 0.0405) {
      fVar6 = fVar6 / 12.92;
    }
    else {
      fVar6 = powf((fVar6 + 0.055) / 1.055,2.4);
    }
    fVar7 = (float)((ulong)local_80 >> 0x20);
    if (fVar7 <= 0.0405) {
      fVar7 = fVar7 / 12.92;
    }
    else {
      fVar7 = powf((fVar7 + 0.055) / 1.055,2.4);
    }
    fVar8 = (float)uStack_78;
    if (fVar8 <= 0.0405) {
      fVar8 = fVar8 / 12.92;
    }
    else {
      fVar8 = powf((fVar8 + 0.055) / 1.055,2.4);
    }
    *(float *)(lVar5 + 0x724) = fVar6;
    *(float *)(lVar5 + 0x728) = fVar7;
    *(float *)(lVar5 + 0x72c) = fVar8;
    *(int *)(lVar5 + 0x730) = (int)((ulong)uStack_78 >> 0x20);
  }
  local_70 = (undefined1 *)0xb1e8d23ced07bab1;
  pcStack_68 = "AimRimColor2";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,&local_80);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    fVar6 = (float)local_80;
    if (fVar6 <= 0.0405) {
      fVar6 = fVar6 / 12.92;
    }
    else {
      fVar6 = powf((fVar6 + 0.055) / 1.055,2.4);
    }
    fVar7 = (float)((ulong)local_80 >> 0x20);
    if (fVar7 <= 0.0405) {
      fVar7 = fVar7 / 12.92;
    }
    else {
      fVar7 = powf((fVar7 + 0.055) / 1.055,2.4);
    }
    fVar8 = (float)uStack_78;
    if (fVar8 <= 0.0405) {
      fVar8 = fVar8 / 12.92;
    }
    else {
      fVar8 = powf((fVar8 + 0.055) / 1.055,2.4);
    }
    *(float *)(lVar5 + 0x734) = fVar6;
    *(float *)(lVar5 + 0x738) = fVar7;
    *(float *)(lVar5 + 0x73c) = fVar8;
    *(int *)(lVar5 + 0x740) = (int)((ulong)uStack_78 >> 0x20);
  }
  local_70 = (undefined1 *)0xb1e8d13ced07b8fe;
  pcStack_68 = "AimRimColor3";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,&local_80);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    fVar6 = (float)local_80;
    if (fVar6 <= 0.0405) {
      fVar6 = fVar6 / 12.92;
    }
    else {
      fVar6 = powf((fVar6 + 0.055) / 1.055,2.4);
    }
    fVar7 = (float)((ulong)local_80 >> 0x20);
    if (fVar7 <= 0.0405) {
      fVar7 = fVar7 / 12.92;
    }
    else {
      fVar7 = powf((fVar7 + 0.055) / 1.055,2.4);
    }
    fVar8 = (float)uStack_78;
    if (fVar8 <= 0.0405) {
      fVar8 = fVar8 / 12.92;
    }
    else {
      fVar8 = powf((fVar8 + 0.055) / 1.055,2.4);
    }
    *(float *)(lVar5 + 0x744) = fVar6;
    *(float *)(lVar5 + 0x748) = fVar7;
    *(float *)(lVar5 + 0x74c) = fVar8;
    *(int *)(lVar5 + 0x750) = (int)((ulong)uStack_78 >> 0x20);
  }
  local_70 = (undefined1 *)0xb1e8d43ced07be17;
  pcStack_68 = "AimRimColor4";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,&local_80);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    fVar6 = (float)local_80;
    if (fVar6 <= 0.0405) {
      fVar6 = fVar6 / 12.92;
    }
    else {
      fVar6 = powf((fVar6 + 0.055) / 1.055,2.4);
    }
    fVar7 = (float)((ulong)local_80 >> 0x20);
    if (fVar7 <= 0.0405) {
      fVar7 = fVar7 / 12.92;
    }
    else {
      fVar7 = powf((fVar7 + 0.055) / 1.055,2.4);
    }
    fVar8 = (float)uStack_78;
    if (fVar8 <= 0.0405) {
      fVar8 = fVar8 / 12.92;
    }
    else {
      fVar8 = powf((fVar8 + 0.055) / 1.055,2.4);
    }
    *(float *)(lVar5 + 0x754) = fVar6;
    *(float *)(lVar5 + 0x758) = fVar7;
    *(float *)(lVar5 + 0x75c) = fVar8;
    *(int *)(lVar5 + 0x760) = (int)((ulong)uStack_78 >> 0x20);
  }
  local_70 = (undefined1 *)0xb1e8d33ced07bc64;
  pcStack_68 = "AimRimColor5";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,&local_80);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    fVar6 = (float)local_80;
    if (fVar6 <= 0.0405) {
      fVar6 = fVar6 / 12.92;
    }
    else {
      fVar6 = powf((fVar6 + 0.055) / 1.055,2.4);
    }
    fVar7 = (float)((ulong)local_80 >> 0x20);
    if (fVar7 <= 0.0405) {
      fVar7 = fVar7 / 12.92;
    }
    else {
      fVar7 = powf((fVar7 + 0.055) / 1.055,2.4);
    }
    fVar8 = (float)uStack_78;
    if (fVar8 <= 0.0405) {
      fVar8 = fVar8 / 12.92;
    }
    else {
      fVar8 = powf((fVar8 + 0.055) / 1.055,2.4);
    }
    *(float *)(lVar5 + 0x764) = fVar6;
    *(float *)(lVar5 + 0x768) = fVar7;
    *(float *)(lVar5 + 0x76c) = fVar8;
    *(int *)(lVar5 + 0x770) = (int)((ulong)uStack_78 >> 0x20);
  }
  local_70 = (undefined1 *)0xb1e8d63ced07c17d;
  pcStack_68 = "AimRimColor6";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,&local_80);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    fVar6 = (float)local_80;
    if (fVar6 <= 0.0405) {
      fVar6 = fVar6 / 12.92;
    }
    else {
      fVar6 = powf((fVar6 + 0.055) / 1.055,2.4);
    }
    fVar7 = (float)((ulong)local_80 >> 0x20);
    if (fVar7 <= 0.0405) {
      fVar7 = fVar7 / 12.92;
    }
    else {
      fVar7 = powf((fVar7 + 0.055) / 1.055,2.4);
    }
    fVar8 = (float)uStack_78;
    if (fVar8 <= 0.0405) {
      fVar8 = fVar8 / 12.92;
    }
    else {
      fVar8 = powf((fVar8 + 0.055) / 1.055,2.4);
    }
    *(float *)(lVar5 + 0x774) = fVar6;
    *(float *)(lVar5 + 0x778) = fVar7;
    *(float *)(lVar5 + 0x77c) = fVar8;
    *(int *)(lVar5 + 0x780) = (int)((ulong)uStack_78 >> 0x20);
  }
  local_70 = (undefined1 *)0xb1e8d53ced07bfca;
  pcStack_68 = "AimRimColor7";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,&local_80);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    fVar6 = (float)local_80;
    if (fVar6 <= 0.0405) {
      fVar6 = fVar6 / 12.92;
    }
    else {
      fVar6 = powf((fVar6 + 0.055) / 1.055,2.4);
    }
    fVar7 = (float)((ulong)local_80 >> 0x20);
    if (fVar7 <= 0.0405) {
      fVar7 = fVar7 / 12.92;
    }
    else {
      fVar7 = powf((fVar7 + 0.055) / 1.055,2.4);
    }
    fVar8 = (float)uStack_78;
    if (fVar8 <= 0.0405) {
      fVar8 = fVar8 / 12.92;
    }
    else {
      fVar8 = powf((fVar8 + 0.055) / 1.055,2.4);
    }
    *(float *)(lVar5 + 0x784) = fVar6;
    *(float *)(lVar5 + 0x788) = fVar7;
    *(float *)(lVar5 + 0x78c) = fVar8;
    *(int *)(lVar5 + 0x790) = (int)((ulong)uStack_78 >> 0x20);
  }
  local_70 = (undefined1 *)0xb1e8c83ced07a9b3;
  pcStack_68 = "AimRimColor8";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,&local_80);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    fVar6 = (float)local_80;
    if (fVar6 <= 0.0405) {
      fVar6 = fVar6 / 12.92;
    }
    else {
      fVar6 = powf((fVar6 + 0.055) / 1.055,2.4);
    }
    fVar7 = (float)((ulong)local_80 >> 0x20);
    if (fVar7 <= 0.0405) {
      fVar7 = fVar7 / 12.92;
    }
    else {
      fVar7 = powf((fVar7 + 0.055) / 1.055,2.4);
    }
    fVar8 = (float)uStack_78;
    if (fVar8 <= 0.0405) {
      fVar8 = fVar8 / 12.92;
    }
    else {
      fVar8 = powf((fVar8 + 0.055) / 1.055,2.4);
    }
    *(float *)(lVar5 + 0x794) = fVar6;
    *(float *)(lVar5 + 0x798) = fVar7;
    *(float *)(lVar5 + 0x79c) = fVar8;
    *(int *)(lVar5 + 0x7a0) = (int)((ulong)uStack_78 >> 0x20);
  }
  local_70 = (undefined1 *)0x2f6cd1cc968565e7;
  pcStack_68 = "AimRimPower";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_34);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x720) = local_34;
  }
  local_70 = (undefined1 *)0x63b0f5baf78d62ee;
  pcStack_68 = "NoiseOffset";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,&local_80);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    auVar9._8_8_ = uStack_78;
    auVar9._0_8_ = local_80;
    *(undefined8 *)(lVar5 + 0x7d4) = local_80;
    auVar9 = NEON_ext(auVar9,auVar9,8,1);
    *(long *)(lVar5 + 0x7dc) = auVar9._0_8_;
  }
  local_38 = 0;
  local_70 = (undefined1 *)0xabfbe9053de2e6f9;
  pcStack_68 = "ResetBlur";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  (**(code **)(*param_2 + 0x58))(param_2,&local_70,&local_38);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  *(float *)(lVar5 + 0x718) = (float)local_38;
  local_70 = (undefined1 *)0xccd9f49461ab3284;
  pcStack_68 = "ShadowDense";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_34);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x71c) = local_34;
  }
  local_70 = (undefined1 *)0xa9b9ef40cada2fcd;
  pcStack_68 = "12ROMBattleCircleColor";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,&local_80);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    fVar6 = (float)local_80;
    if (fVar6 <= 0.0405) {
      fVar6 = fVar6 / 12.92;
    }
    else {
      fVar6 = powf((fVar6 + 0.055) / 1.055,2.4);
    }
    fVar7 = (float)((ulong)local_80 >> 0x20);
    if (fVar7 <= 0.0405) {
      fVar7 = fVar7 / 12.92;
    }
    else {
      fVar7 = powf((fVar7 + 0.055) / 1.055,2.4);
    }
    fVar8 = (float)uStack_78;
    if (fVar8 <= 0.0405) {
      fVar8 = fVar8 / 12.92;
    }
    else {
      fVar8 = powf((fVar8 + 0.055) / 1.055,2.4);
    }
    *(float *)(lVar5 + 0x6d4) = fVar6;
    *(float *)(lVar5 + 0x6d8) = fVar7;
    *(float *)(lVar5 + 0x6dc) = fVar8;
    *(int *)(lVar5 + 0x6e0) = (int)((ulong)uStack_78 >> 0x20);
  }
  local_70 = (undefined1 *)0x45cc0641ced71448;
  pcStack_68 = "12ROMBattleCircleParams";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,&local_80);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    auVar3._8_8_ = uStack_78;
    auVar3._0_8_ = local_80;
    *(undefined8 *)(lVar5 + 0x6e4) = local_80;
    auVar9 = NEON_ext(auVar3,auVar3,8,1);
    *(long *)(lVar5 + 0x6ec) = auVar9._0_8_;
  }
  local_70 = (undefined1 *)0x385e1419bea9d841;
  pcStack_68 = "ResolutionWidth";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x58))(param_2,&local_70,&local_84);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(float *)(lVar5 + 0x838) = (float)local_84 / (float)*(ulong *)(param_1 + 0xc0);
    local_a0 = 1.0;
    local_70 = (undefined1 *)0x4aa9ba3dccea94ea;
    pcStack_68 = "3DBufferWidthScale";
    local_60 = 0x1f;
    local_58 = (long *)0x0;
    (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_a0);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    *(float *)(lVar5 + 0x6cc) = *(float *)(lVar5 + 0x838) * local_a0;
  }
  local_70 = (undefined1 *)0x3a6b9c3a7665a410;
  pcStack_68 = "ResolutionHeight";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x58))(param_2,&local_70,&local_88);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(float *)(lVar5 + 0x83c) = (float)local_88 / (float)*(ulong *)(param_1 + 200);
    local_a0 = 1.0;
    local_70 = (undefined1 *)0x66e7a756352d0d9f;
    pcStack_68 = "3DBufferHeightScale";
    local_60 = 0x1f;
    local_58 = (long *)0x0;
    (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_a0);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    *(float *)(lVar5 + 0x6d0) = *(float *)(lVar5 + 0x83c) * local_a0;
  }
  local_8c = 1;
  local_70 = (undefined1 *)0x88a93e1a8489cbf5;
  pcStack_68 = "DynamicAOEnable";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  (**(code **)(*param_2 + 0x58))(param_2,&local_70,&local_8c);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  *(float *)(lVar5 + 0x7ac) = (float)local_8c;
  local_70 = (undefined1 *)0xd066e46bc3b32152;
  pcStack_68 = "AmbientWindDirection";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x40))(param_2,&local_70,&local_a0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    auVar2._4_12_ = auStack_9c;
    auVar2._0_4_ = local_a0;
    *(long *)(lVar5 + 0x814) = auVar2._0_8_;
    *(int *)(lVar5 + 0x81c) = auStack_9c._4_4_;
  }
  local_70 = (undefined1 *)0x24f3d03c268001c8;
  pcStack_68 = "AmbientWindSpeed";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_a4);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x820) = local_a4;
  }
  local_70 = (undefined1 *)0xd29225f7a8611a50;
  pcStack_68 = "AmbientWindPhase";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x40))(param_2,&local_70,local_c0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(long *)(lVar5 + 0x824) = local_c0._0_8_;
    *(int *)(lVar5 + 0x82c) = local_c0._8_4_;
  }
  local_70 = (undefined1 *)0xd71a94f39f78d05d;
  pcStack_68 = "AmbientWindNoiseScale";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_c4);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x830) = local_c4;
  }
  local_70 = (undefined1 *)0x89224b04351f5768;
  pcStack_68 = "AmbientWindStrength";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_c8);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x834) = local_c8;
  }
  local_70 = (undefined1 *)0xd349fb9cf4f383c5;
  pcStack_68 = "RadialBlurX";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_cc);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x894) = local_cc;
  }
  local_70 = (undefined1 *)0xd349fa9cf4f38212;
  pcStack_68 = "RadialBlurY";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_d0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x898) = local_d0;
  }
  local_70 = (undefined1 *)0x591143e63b7834ca;
  pcStack_68 = "RadialBlurStrength";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_d4);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x89c) = local_d4;
  }
  local_70 = (undefined1 *)0xcd85a208508543bd;
  pcStack_68 = "RadialBlurRadius";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_d8);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x8a0) = local_d8;
  }
  local_dc = 4.0;
  local_70 = (undefined1 *)0x53aece893245b37a;
  pcStack_68 = "RadialBlurSamples";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_dc);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(int *)(lVar5 + 0x8c0) = (int)local_dc;
  }
  local_70 = (undefined1 *)0x53102b59be45b20f;
  pcStack_68 = "kFeedbackEffectBlendWeight";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_e0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x8a4) = local_e0;
  }
  local_70 = (undefined1 *)0xc6348d3d797a100e;
  pcStack_68 = "kFeedbackEffectRotation";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_e4);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x8a8) = local_e4;
  }
  local_70 = (undefined1 *)0x940e51031997e66a;
  pcStack_68 = "kFeedbackEffectScale";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_e8);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    if (local_e8 <= 0.001) {
      local_e8 = 0.001;
    }
    local_e8 = 1.0 / local_e8;
    *(float *)(lVar5 + 0x8ac) = local_e8;
  }
  local_70 = (undefined1 *)0x3b6e6c9453ca71e;
  pcStack_68 = "kFeedbackEffectHue";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_ec);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x8b0) = local_ec;
  }
  local_70 = (undefined1 *)0xbbb3fa1bde9a2d70;
  pcStack_68 = "kFeedbackEffectSaturation";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_f0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x8b4) = local_f0;
  }
  local_70 = (undefined1 *)0xda6decd96736364f;
  pcStack_68 = "kFeedbackEffectBrightness";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_f4);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x8b8) = local_f4;
  }
  local_70 = (undefined1 *)0x1bff7b41de4d93aa;
  pcStack_68 = "kFeedbackEffectContrast";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_f8);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x8bc) = local_f8;
  }
  local_70 = &DAT_1e7bc05d43fbcf4;
  pcStack_68 = "WaterCurrentTime";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_fc);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x8c4) = local_fc;
  }
  local_100 = 0.0;
  local_70 = (undefined1 *)0x5535e18d3aed6a6e;
  pcStack_68 = "WaterIBLTotalRotationAngle";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_100);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
  uVar4 = (ulong)(local_100 * (fVar6 / *(float *)PTR_FloatPi_04372cf0));
  pfVar1 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar4 >> 0x18 & 0xff) * 0x10);
  fVar6 = (float)((uint)uVar4 & 0xffffff) * 5.9604645e-08;
  *(float *)(lVar5 + 0x8c8) = *pfVar1 + pfVar1[2] * fVar6;
  *(float *)(lVar5 + 0x8cc) = pfVar1[1] + pfVar1[3] * fVar6;
  local_104 = 1;
  local_70 = (undefined1 *)0xa04e2439ab69f6c;
  pcStack_68 = "SSREnable";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  (**(code **)(*param_2 + 0x58))(param_2,&local_70,&local_104);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  *(float *)(lVar5 + 0x8d4) = (float)local_104;
  local_70 = (undefined1 *)0x7f1675b37e1c7db4;
  pcStack_68 = "GlobalWeatherScale";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,local_120);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(long *)(lVar5 + 0x8e4) = local_120._0_8_;
    auVar9 = NEON_ext(local_120,local_120,8,1);
    *(long *)(lVar5 + 0x8ec) = auVar9._0_8_;
  }
  local_70 = (undefined1 *)0x588a60abe4b8e896;
  pcStack_68 = "GILightColor";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,local_130);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(long *)(lVar5 + 0x9f4) = local_130._0_8_;
    auVar9 = NEON_ext(local_130,local_130,8,1);
    *(long *)(lVar5 + 0x9fc) = auVar9._0_8_;
  }
  local_70 = (undefined1 *)0x48a84848847a4e55;
  pcStack_68 = "ProbeMainDiffuseColor";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,local_140);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(long *)(lVar5 + 0xa04) = local_140._0_8_;
    auVar9 = NEON_ext(local_140,local_140,8,1);
    *(long *)(lVar5 + 0xa0c) = auVar9._0_8_;
  }
  local_70 = (undefined1 *)0xa1fe356ae2569df0;
  pcStack_68 = "ProbeMainSpecularColor";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,local_140);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(long *)(lVar5 + 0xa14) = local_140._0_8_;
    auVar9 = NEON_ext(local_140,local_140,8,1);
    *(long *)(lVar5 + 0xa1c) = auVar9._0_8_;
  }
  local_70 = (undefined1 *)0x3c51598d7e6fc322;
  pcStack_68 = "ProbeMainWaterDiffuseColor";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,local_140);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(long *)(lVar5 + 0xa24) = local_140._0_8_;
    auVar9 = NEON_ext(local_140,local_140,8,1);
    *(long *)(lVar5 + 0xa2c) = auVar9._0_8_;
  }
  local_70 = (undefined1 *)0x3b0c89f96f90a475;
  pcStack_68 = "ProbeMainWaterSpecularColor";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,&local_70,local_140);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(long *)(lVar5 + 0xa34) = local_140._0_8_;
    auVar9 = NEON_ext(local_140,local_140,8,1);
    *(long *)(lVar5 + 0xa3c) = auVar9._0_8_;
  }
  local_70 = (undefined1 *)0x933b984110c5ee2d;
  pcStack_68 = "BrightnessChangeLimit";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_34);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0xa44) = local_34;
  }
  local_70 = (undefined1 *)0x2f6258d3af1f6020;
  pcStack_68 = "BrightnessScale";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,&local_70,&local_34);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0xa48) = local_34;
  }
  return;
}


