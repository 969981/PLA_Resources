/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f08718; name: FUN_01f08718
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f08718(void)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float extraout_var_02;
  float extraout_var_03;
  float extraout_var_04;
  float extraout_var_05;
  float extraout_var_06;
  float extraout_var_07;
  float extraout_var_08;
  undefined8 local_1c0;
  char *pcStack_1b8;
  undefined8 local_1b0;
  long *local_1a8;
  undefined8 local_1a0;
  char *pcStack_198;
  undefined8 local_190;
  long *local_188;
  undefined8 local_180;
  char *pcStack_178;
  undefined8 local_170;
  long *local_168;
  undefined8 local_160;
  char *pcStack_158;
  undefined8 local_150;
  long *local_148;
  undefined8 local_140;
  char *local_138;
  undefined8 local_130;
  long *local_128;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined4 local_114;
  long *local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined1 *local_d0;
  char *local_c8;
  char *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  char local_a0 [8];
  undefined1 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  
  FUN_01f0a400();
  puVar13 = (undefined8 *)FUN_02ad80dc();
  plVar19 = (long *)*puVar13;
  if (plVar19 != (long *)0x0) {
    plVar1 = plVar19 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_f0 = 0xab9314b26188e7e7;
  local_e8 = "weather_field_wet";
  local_e0 = 0x1f;
  FUN_02a4754c(&local_d0,&local_f0);
  local_80 = local_b8;
  local_98 = local_d0;
  if (local_b8 == (long *)0x0) {
    local_b8 = (long *)0x0;
  }
  else {
    (**(code **)(*local_b8 + 0x18))(local_b8);
  }
  uStack_90 = local_c8;
  local_a0[0] = '\x01';
  local_88 = local_c0;
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  FUN_02b3365c(&local_a8,plVar19,local_a0);
  local_140 = 0x5be923f678bc99e2;
  local_138 = "weather_human_wet";
  local_130 = 0x1f;
  FUN_02a4754c(&local_f0,&local_140);
  local_b0 = local_d8;
  local_b8 = (long *)local_e0;
  local_c0 = local_e8;
  local_c8 = (char *)local_f0;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x18))(local_d8);
  }
  local_d0 = (undefined1 *)CONCAT71(local_d0._1_7_,1);
  FUN_01f0baf4(local_a0,&local_d0);
  if ((char)local_d0 != '\0') {
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    local_d0 = (undefined1 *)((ulong)local_d0 & 0xffffffffffffff00);
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_02b3365c(&local_f8,plVar19,local_a0);
  local_140 = 0xea44ac5e3b9f19db;
  local_138 = "weather_human_dirt";
  local_130 = 0x1f;
  FUN_02a4754c(&local_f0,&local_140);
  plVar1 = local_d8;
  uVar11 = local_e0;
  pcVar10 = local_e8;
  uVar9 = local_f0;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x18))(local_d8);
  }
  local_d0 = (undefined1 *)CONCAT71(local_d0._1_7_,1);
  local_c8 = (char *)uVar9;
  local_c0 = pcVar10;
  local_b8 = (long *)uVar11;
  local_b0 = plVar1;
  FUN_01f0baf4(local_a0,&local_d0);
  if ((char)local_d0 != '\0') {
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    local_d0 = (undefined1 *)((ulong)local_d0 & 0xffffffffffffff00);
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_02b3365c(&local_100,plVar19,local_a0);
  local_140 = 0x2cb6cff2a339fb09;
  local_138 = "weather_human_snow";
  local_130 = 0x1f;
  FUN_02a4754c(&local_f0,&local_140);
  plVar1 = local_d8;
  uVar11 = local_e0;
  pcVar10 = local_e8;
  uVar9 = local_f0;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x18))(local_d8);
  }
  local_d0 = (undefined1 *)CONCAT71(local_d0._1_7_,1);
  local_c8 = (char *)uVar9;
  local_c0 = pcVar10;
  local_b8 = (long *)uVar11;
  local_b0 = plVar1;
  FUN_01f0baf4(local_a0,&local_d0);
  if ((char)local_d0 != '\0') {
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    local_d0 = (undefined1 *)((ulong)local_d0 & 0xffffffffffffff00);
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_02b3365c(&local_108,plVar19,local_a0);
  local_140 = 0x71597847f14ceaa;
  local_138 = "weather_pokemon_wet";
  local_130 = 0x1f;
  FUN_02a4754c(&local_f0,&local_140);
  plVar1 = local_d8;
  uVar11 = local_e0;
  pcVar10 = local_e8;
  uVar9 = local_f0;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x18))(local_d8);
  }
  local_d0 = (undefined1 *)CONCAT71(local_d0._1_7_,1);
  local_c8 = (char *)uVar9;
  local_c0 = pcVar10;
  local_b8 = (long *)uVar11;
  local_b0 = plVar1;
  FUN_01f0baf4(local_a0,&local_d0);
  if ((char)local_d0 != '\0') {
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    local_d0 = (undefined1 *)((ulong)local_d0 & 0xffffffffffffff00);
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_02b3365c(&local_110,plVar19,local_a0);
  plVar1 = local_a8;
  local_d0 = (undefined1 *)0x93adbf516a55c0cf;
  local_c8 = "BaseColor";
  local_c0 = (char *)0x1f;
  local_b8 = (long *)0x0;
  local_e0 = 10;
  local_d8 = (long *)0x0;
  local_f0 = 0x5c0c635117f72945;
  local_e8 = "weathering";
  local_140 = 0x2ca0dc889149dfe0;
  local_138 = "WetFieldRGB";
  local_130 = 0xb;
  local_128 = (long *)0x0;
  fVar20 = (float)FUN_00aee408(&local_f0,&local_140);
  fVar20 = fVar20 / 255.0;
  if (fVar20 <= 0.0405) {
    fVar20 = fVar20 / 12.92;
  }
  else {
    fVar20 = powf((fVar20 + 0.055) / 1.055,2.4);
  }
  local_150 = 10;
  local_148 = (long *)0x0;
  local_160 = 0x5c0c635117f72945;
  pcStack_158 = "weathering";
  local_180 = 0x2ca0dc889149dfe0;
  pcStack_178 = "WetFieldRGB";
  local_170 = 0xb;
  local_168 = (long *)0x0;
  FUN_00aee408(&local_160,&local_180);
  fVar21 = extraout_var / 255.0;
  if (fVar21 <= 0.0405) {
    fVar21 = fVar21 / 12.92;
  }
  else {
    fVar21 = powf((fVar21 + 0.055) / 1.055,2.4);
  }
  local_190 = 10;
  local_188 = (long *)0x0;
  local_1a0 = 0x5c0c635117f72945;
  pcStack_198 = "weathering";
  local_1c0 = 0x2ca0dc889149dfe0;
  pcStack_1b8 = "WetFieldRGB";
  local_1b0 = 0xb;
  local_1a8 = (long *)0x0;
  FUN_00aee408(&local_1a0,&local_1c0);
  local_118 = extraout_var_04 / 255.0;
  if (local_118 <= 0.0405) {
    local_118 = local_118 / 12.92;
  }
  else {
    local_118 = powf((local_118 + 0.055) / 1.055,2.4);
  }
  local_114 = 0x3f800000;
  local_120 = fVar20;
  fStack_11c = fVar21;
  FUN_02b2a770(plVar1,&local_d0,&local_120);
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 0x20))();
  }
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  plVar1 = local_a8;
  puVar6 = PTR_DAT_04379660;
  local_d0 = &DAT_b7644189a4ffdf95;
  local_c8 = "Roughness";
  local_c0 = (char *)0x1f;
  local_b8 = (long *)0x0;
  local_f0 = 0xf98d5d17e9dee159;
  local_e8 = "WetFieldRoughness";
  local_e0 = 0x11;
  local_d8 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar17 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar17;
  uVar14 = *(ulong *)(lVar17 + 0x60);
  fVar20 = 0.0;
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x5c0c635117f72945;
    }
    else {
      uVar16 = 0x5c0c635117f72945;
      if (uVar14 < 0x5c0c635117f72946) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = 0x5c0c635117f72945 / uVar14;
        }
        uVar16 = 0x5c0c635117f72945 - uVar16 * uVar14;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar18[1] == 0x5c0c635117f72945) {
            if (plVar18[2] == 0x5c0c635117f72945) goto LAB_01f08db0;
          }
          else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar18[1];
          if (uVar15 == 0x5c0c635117f72945) {
            if (plVar18[2] == 0x5c0c635117f72945) goto LAB_01f08db0;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar5 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
LAB_01f08df0:
  local_140 = CONCAT44(local_140._4_4_,fVar20 / 255.0);
  FUN_02b2a760(plVar1,&local_d0,&local_140);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  plVar1 = local_f8;
  local_c8 = "BaseColor";
  local_d0 = (undefined1 *)0x93adbf516a55c0cf;
  local_c0 = (char *)0x1f;
  local_b8 = (long *)0x0;
  local_e0 = 10;
  local_d8 = (long *)0x0;
  local_f0 = 0x5c0c635117f72945;
  local_e8 = "weathering";
  local_140 = 0x18808302764e215f;
  local_138 = "WetHumanRGB";
  local_130 = 0xb;
  local_128 = (long *)0x0;
  fVar20 = (float)FUN_00aee408(&local_f0,&local_140);
  fVar20 = fVar20 / 255.0;
  if (fVar20 <= 0.0405) {
    fVar20 = fVar20 / 12.92;
  }
  else {
    fVar20 = powf((fVar20 + 0.055) / 1.055,2.4);
  }
  local_150 = 10;
  local_148 = (long *)0x0;
  local_160 = 0x5c0c635117f72945;
  pcStack_158 = "weathering";
  local_180 = 0x18808302764e215f;
  pcStack_178 = "WetHumanRGB";
  local_170 = 0xb;
  local_168 = (long *)0x0;
  FUN_00aee408(&local_160,&local_180);
  fVar21 = extraout_var_00 / 255.0;
  if (fVar21 <= 0.0405) {
    fVar21 = fVar21 / 12.92;
  }
  else {
    fVar21 = powf((fVar21 + 0.055) / 1.055,2.4);
  }
  local_190 = 10;
  local_188 = (long *)0x0;
  local_1a0 = 0x5c0c635117f72945;
  pcStack_198 = "weathering";
  local_1c0 = 0x18808302764e215f;
  pcStack_1b8 = "WetHumanRGB";
  local_1b0 = 0xb;
  local_1a8 = (long *)0x0;
  FUN_00aee408(&local_1a0,&local_1c0);
  fVar22 = extraout_var_05 / 255.0;
  if (fVar22 <= 0.0405) {
    local_118 = fVar22 / 12.92;
  }
  else {
    local_118 = powf((fVar22 + 0.055) / 1.055,2.4);
  }
  local_114 = 0x3f800000;
  local_120 = fVar20;
  fStack_11c = fVar21;
  FUN_02b2a770(plVar1,&local_d0,&local_120);
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 0x20))();
  }
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  plVar1 = local_f8;
  local_d0 = &DAT_b7644189a4ffdf95;
  local_c8 = "Roughness";
  local_c0 = (char *)0x1f;
  local_b8 = (long *)0x0;
  local_f0 = 0xec665052ec08343e;
  local_e8 = "WetHumanRoughness";
  local_e0 = 0x11;
  local_d8 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar17 = *(long *)puVar7;
  *(long *)puVar8 = lVar17;
  uVar14 = *(ulong *)(lVar17 + 0x60);
  fVar20 = 0.0;
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x5c0c635117f72945;
    }
    else {
      uVar16 = 0x5c0c635117f72945;
      if (uVar14 < 0x5c0c635117f72946) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = 0x5c0c635117f72945 / uVar14;
        }
        uVar16 = 0x5c0c635117f72945 - uVar16 * uVar14;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar18[1] == 0x5c0c635117f72945) {
            if (plVar18[2] == 0x5c0c635117f72945) goto LAB_01f09174;
          }
          else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar18[1];
          if (uVar15 == 0x5c0c635117f72945) {
            if (plVar18[2] == 0x5c0c635117f72945) goto LAB_01f09174;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar5 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
LAB_01f091b4:
  local_140 = CONCAT44(local_140._4_4_,fVar20 / 255.0);
  FUN_02b2a760(plVar1,&local_d0,&local_140);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  plVar1 = local_100;
  local_c8 = "BaseColor";
  local_d0 = (undefined1 *)0x93adbf516a55c0cf;
  local_c0 = (char *)0x1f;
  local_b8 = (long *)0x0;
  local_e0 = 10;
  local_d8 = (long *)0x0;
  local_f0 = 0x5c0c635117f72945;
  local_e8 = "weathering";
  local_140 = 0xd2df03d7429545d0;
  local_138 = "DirtHumanRGB";
  local_130 = 0xc;
  local_128 = (long *)0x0;
  fVar20 = (float)FUN_00aee408(&local_f0,&local_140);
  fVar20 = fVar20 / 255.0;
  if (fVar20 <= 0.0405) {
    fVar20 = fVar20 / 12.92;
  }
  else {
    fVar20 = powf((fVar20 + 0.055) / 1.055,2.4);
  }
  local_150 = 10;
  local_148 = (long *)0x0;
  local_160 = 0x5c0c635117f72945;
  pcStack_158 = "weathering";
  local_180 = 0xd2df03d7429545d0;
  pcStack_178 = "DirtHumanRGB";
  local_170 = 0xc;
  local_168 = (long *)0x0;
  FUN_00aee408(&local_160,&local_180);
  fVar21 = extraout_var_01 / 255.0;
  if (fVar21 <= 0.0405) {
    fVar21 = fVar21 / 12.92;
  }
  else {
    fVar21 = powf((fVar21 + 0.055) / 1.055,2.4);
  }
  local_190 = 10;
  local_188 = (long *)0x0;
  local_1a0 = 0x5c0c635117f72945;
  pcStack_198 = "weathering";
  local_1c0 = 0xd2df03d7429545d0;
  pcStack_1b8 = "DirtHumanRGB";
  local_1b0 = 0xc;
  local_1a8 = (long *)0x0;
  FUN_00aee408(&local_1a0,&local_1c0);
  fVar22 = extraout_var_06 / 255.0;
  if (fVar22 <= 0.0405) {
    local_118 = fVar22 / 12.92;
  }
  else {
    local_118 = powf((fVar22 + 0.055) / 1.055,2.4);
  }
  local_114 = 0x3f800000;
  local_120 = fVar20;
  fStack_11c = fVar21;
  FUN_02b2a770(plVar1,&local_d0,&local_120);
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 0x20))();
  }
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  plVar1 = local_100;
  local_d0 = &DAT_b7644189a4ffdf95;
  local_c8 = "Roughness";
  local_c0 = (char *)0x1f;
  local_b8 = (long *)0x0;
  local_f0 = 0xa9b698fe9c9a54a9;
  local_e8 = "DirtHumanRoughness";
  local_e0 = 0x12;
  local_d8 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar17 = *(long *)puVar7;
  *(long *)puVar8 = lVar17;
  uVar14 = *(ulong *)(lVar17 + 0x60);
  fVar20 = 0.0;
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x5c0c635117f72945;
    }
    else {
      uVar16 = 0x5c0c635117f72945;
      if (uVar14 < 0x5c0c635117f72946) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = 0x5c0c635117f72945 / uVar14;
        }
        uVar16 = 0x5c0c635117f72945 - uVar16 * uVar14;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar18[1] == 0x5c0c635117f72945) {
            if (plVar18[2] == 0x5c0c635117f72945) goto LAB_01f09538;
          }
          else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar18[1];
          if (uVar15 == 0x5c0c635117f72945) {
            if (plVar18[2] == 0x5c0c635117f72945) goto LAB_01f09538;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar5 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
LAB_01f09578:
  local_140 = CONCAT44(local_140._4_4_,fVar20 / 255.0);
  FUN_02b2a760(plVar1,&local_d0,&local_140);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  plVar1 = local_108;
  local_c8 = "BaseColor";
  local_d0 = (undefined1 *)0x93adbf516a55c0cf;
  local_c0 = (char *)0x1f;
  local_b8 = (long *)0x0;
  local_e0 = 10;
  local_d8 = (long *)0x0;
  local_f0 = 0x5c0c635117f72945;
  local_e8 = "weathering";
  local_140 = 0x935b99919ec35aa;
  local_138 = "SnowHumanRGB";
  local_130 = 0xc;
  local_128 = (long *)0x0;
  fVar20 = (float)FUN_00aee408(&local_f0,&local_140);
  fVar20 = fVar20 / 255.0;
  if (fVar20 <= 0.0405) {
    fVar20 = fVar20 / 12.92;
  }
  else {
    fVar20 = powf((fVar20 + 0.055) / 1.055,2.4);
  }
  local_150 = 10;
  local_148 = (long *)0x0;
  local_160 = 0x5c0c635117f72945;
  pcStack_158 = "weathering";
  local_180 = 0x935b99919ec35aa;
  pcStack_178 = "SnowHumanRGB";
  local_170 = 0xc;
  local_168 = (long *)0x0;
  FUN_00aee408(&local_160,&local_180);
  fVar21 = extraout_var_02 / 255.0;
  if (fVar21 <= 0.0405) {
    fVar21 = fVar21 / 12.92;
  }
  else {
    fVar21 = powf((fVar21 + 0.055) / 1.055,2.4);
  }
  local_190 = 10;
  local_188 = (long *)0x0;
  local_1a0 = 0x5c0c635117f72945;
  pcStack_198 = "weathering";
  local_1c0 = 0x935b99919ec35aa;
  pcStack_1b8 = "SnowHumanRGB";
  local_1b0 = 0xc;
  local_1a8 = (long *)0x0;
  FUN_00aee408(&local_1a0,&local_1c0);
  fVar22 = extraout_var_07 / 255.0;
  if (fVar22 <= 0.0405) {
    local_118 = fVar22 / 12.92;
  }
  else {
    local_118 = powf((fVar22 + 0.055) / 1.055,2.4);
  }
  local_114 = 0x3f800000;
  local_120 = fVar20;
  fStack_11c = fVar21;
  FUN_02b2a770(plVar1,&local_d0,&local_120);
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 0x20))();
  }
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  plVar1 = local_108;
  local_d0 = &DAT_b7644189a4ffdf95;
  local_c8 = "Roughness";
  local_c0 = (char *)0x1f;
  local_b8 = (long *)0x0;
  local_f0 = 0xb68e7911b3a792b7;
  local_e8 = "SnowHumanRoughness";
  local_e0 = 0x12;
  local_d8 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar17 = *(long *)puVar7;
  *(long *)puVar8 = lVar17;
  uVar14 = *(ulong *)(lVar17 + 0x60);
  fVar20 = 0.0;
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x5c0c635117f72945;
    }
    else {
      uVar16 = 0x5c0c635117f72945;
      if (uVar14 < 0x5c0c635117f72946) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = 0x5c0c635117f72945 / uVar14;
        }
        uVar16 = 0x5c0c635117f72945 - uVar16 * uVar14;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar18[1] == 0x5c0c635117f72945) {
            if (plVar18[2] == 0x5c0c635117f72945) goto LAB_01f098fc;
          }
          else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar18[1];
          if (uVar15 == 0x5c0c635117f72945) {
            if (plVar18[2] == 0x5c0c635117f72945) goto LAB_01f098fc;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar5 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
LAB_01f0993c:
  local_140 = CONCAT44(local_140._4_4_,fVar20 / 255.0);
  FUN_02b2a760(plVar1,&local_d0,&local_140);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  plVar1 = local_110;
  local_c8 = "BaseColor";
  local_d0 = (undefined1 *)0x93adbf516a55c0cf;
  local_c0 = (char *)0x1f;
  local_b8 = (long *)0x0;
  local_e0 = 10;
  local_d8 = (long *)0x0;
  local_f0 = 0x5c0c635117f72945;
  local_e8 = "weathering";
  local_140 = 0x72ddcf373a87167;
  local_138 = "WetPokemonRGB";
  local_130 = 0xd;
  local_128 = (long *)0x0;
  fVar20 = (float)FUN_00aee408(&local_f0,&local_140);
  fVar20 = fVar20 / 255.0;
  if (fVar20 <= 0.0405) {
    fVar20 = fVar20 / 12.92;
  }
  else {
    fVar20 = powf((fVar20 + 0.055) / 1.055,2.4);
  }
  local_150 = 10;
  local_148 = (long *)0x0;
  local_160 = 0x5c0c635117f72945;
  pcStack_158 = "weathering";
  local_180 = 0x72ddcf373a87167;
  pcStack_178 = "WetPokemonRGB";
  local_170 = 0xd;
  local_168 = (long *)0x0;
  FUN_00aee408(&local_160,&local_180);
  fVar21 = extraout_var_03 / 255.0;
  if (fVar21 <= 0.0405) {
    fVar21 = fVar21 / 12.92;
  }
  else {
    fVar21 = powf((fVar21 + 0.055) / 1.055,2.4);
  }
  local_190 = 10;
  local_188 = (long *)0x0;
  local_1a0 = 0x5c0c635117f72945;
  pcStack_198 = "weathering";
  local_1c0 = 0x72ddcf373a87167;
  pcStack_1b8 = "WetPokemonRGB";
  local_1b0 = 0xd;
  local_1a8 = (long *)0x0;
  FUN_00aee408(&local_1a0,&local_1c0);
  fVar22 = extraout_var_08 / 255.0;
  if (fVar22 <= 0.0405) {
    local_118 = fVar22 / 12.92;
  }
  else {
    local_118 = powf((fVar22 + 0.055) / 1.055,2.4);
  }
  local_114 = 0x3f800000;
  local_120 = fVar20;
  fStack_11c = fVar21;
  FUN_02b2a770(plVar1,&local_d0,&local_120);
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 0x20))();
  }
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  plVar1 = local_110;
  local_d0 = &DAT_b7644189a4ffdf95;
  local_c8 = "Roughness";
  local_c0 = (char *)0x1f;
  local_b8 = (long *)0x0;
  local_f0 = 0x9513cb4805ae50f6;
  local_e8 = "WetPokemonRoughness";
  local_e0 = 0x13;
  local_d8 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar17 = *(long *)puVar7;
  *(long *)puVar8 = lVar17;
  uVar14 = *(ulong *)(lVar17 + 0x60);
  fVar20 = 0.0;
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x5c0c635117f72945;
    }
    else {
      uVar16 = 0x5c0c635117f72945;
      if (uVar14 < 0x5c0c635117f72946) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = 0x5c0c635117f72945 / uVar14;
        }
        uVar16 = 0x5c0c635117f72945 - uVar16 * uVar14;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar18[1] == 0x5c0c635117f72945) {
            if (plVar18[2] == 0x5c0c635117f72945) goto LAB_01f09cc0;
          }
          else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar18[1];
          if (uVar15 == 0x5c0c635117f72945) {
            if (plVar18[2] == 0x5c0c635117f72945) goto LAB_01f09cc0;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar5 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
LAB_01f09d00:
  local_140 = CONCAT44(local_140._4_4_,fVar20 / 255.0);
  FUN_02b2a760(plVar1,&local_d0,&local_140);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_110 != (long *)0x0) {
    plVar1 = local_110 + 10;
    do {
      iVar12 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_110 + 0x10))();
    }
  }
  if (local_108 != (long *)0x0) {
    plVar1 = local_108 + 10;
    do {
      iVar12 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  if (local_100 != (long *)0x0) {
    plVar1 = local_100 + 10;
    do {
      iVar12 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_100 + 0x10))();
    }
  }
  if (local_f8 != (long *)0x0) {
    plVar1 = local_f8 + 10;
    do {
      iVar12 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_f8 + 0x10))();
    }
  }
  if (local_a8 != (long *)0x0) {
    plVar1 = local_a8 + 10;
    do {
      iVar12 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  if (local_a0[0] != '\0') {
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    local_a0[0] = '\0';
  }
  if (plVar19 != (long *)0x0) {
    plVar1 = plVar19 + 10;
    do {
      iVar12 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  return;
LAB_01f08db0:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar2 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    fVar20 = (float)FUN_00d7905c(plVar18,&local_f0);
    do {
      iVar12 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  goto LAB_01f08df0;
LAB_01f09174:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar2 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    fVar20 = (float)FUN_00d7905c(plVar18,&local_f0);
    do {
      iVar12 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  goto LAB_01f091b4;
LAB_01f09538:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar2 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    fVar20 = (float)FUN_00d7905c(plVar18,&local_f0);
    do {
      iVar12 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  goto LAB_01f09578;
LAB_01f098fc:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar2 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    fVar20 = (float)FUN_00d7905c(plVar18,&local_f0);
    do {
      iVar12 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  goto LAB_01f0993c;
LAB_01f09cc0:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar2 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    fVar20 = (float)FUN_00d7905c(plVar18,&local_f0);
    do {
      iVar12 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  goto LAB_01f09d00;
}


