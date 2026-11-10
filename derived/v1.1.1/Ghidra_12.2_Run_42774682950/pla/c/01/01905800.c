/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01905800; name: FUN_01905800
 */


undefined8 FUN_01905800(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  char *pcVar25;
  float *pfVar26;
  byte bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 local_220 [4];
  undefined8 auStack_200 [4];
  undefined8 auStack_1e0 [4];
  undefined8 auStack_1c0 [4];
  undefined8 auStack_1a0 [4];
  undefined8 auStack_180 [4];
  undefined8 auStack_160 [4];
  undefined8 auStack_140 [4];
  undefined8 auStack_120 [4];
  undefined8 auStack_100 [4];
  undefined8 local_e0 [4];
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  puVar13 = local_220;
  pfVar26 = (float *)((long)param_1 + 0x84);
  pfVar26[0] = 0.0;
  pfVar26[1] = 0.0;
  *(undefined4 *)((long)param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 2;
  bVar10 = false;
  if (param_2[0xb] != 0) {
    bVar10 = param_2[10] <= param_2[0xb];
  }
  if (!(bool)(bVar10 & (param_2[1] != 0 && (int)param_2[1] < 0x38a) &
             (param_2[0xe] != 0 && (int)param_2[0xe] < 0x26))) {
    return 0;
  }
  uVar20 = *(undefined8 *)param_2;
  uVar22 = *(undefined8 *)(param_2 + 2);
  uVar6 = *(undefined8 *)(param_2 + 6);
  param_1[2] = *(undefined8 *)(param_2 + 4);
  param_1[3] = uVar6;
  *param_1 = uVar20;
  param_1[1] = uVar22;
  uVar20 = *(undefined8 *)(param_2 + 8);
  uVar22 = *(undefined8 *)(param_2 + 10);
  uVar6 = *(undefined8 *)(param_2 + 0xe);
  param_1[6] = *(undefined8 *)(param_2 + 0xc);
  param_1[7] = uVar6;
  param_1[4] = uVar20;
  param_1[5] = uVar22;
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  uVar22 = *(undefined8 *)(param_2 + 0x12);
  uVar6 = *(undefined8 *)(param_2 + 0x16);
  param_1[10] = *(undefined8 *)(param_2 + 0x14);
  param_1[0xb] = uVar6;
  param_1[8] = uVar20;
  param_1[9] = uVar22;
  uVar22 = *(undefined8 *)(param_2 + 0x1a);
  uVar20 = *(undefined8 *)(param_2 + 0x1c);
  uVar6 = *(undefined8 *)(param_2 + 0x1e);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x18);
  param_1[0xd] = uVar22;
  param_1[0xe] = uVar20;
  param_1[0xf] = uVar6;
  if ((*(char *)((long)param_1 + 0x44) == '\0') || (*(int *)(param_1 + 0x10) == 2)) {
    cVar8 = *(char *)((long)param_1 + 0x46);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 1;
    cVar8 = *(char *)((long)param_1 + 0x46);
  }
  if ((cVar8 == '\0') && (*(int *)(param_1 + 0x10) != 2)) {
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  local_c0 = 0x59676ebdfe28ce5;
  pcStack_b8 = "capture_index_basic_coef";
  local_b0 = 0x18;
  uStack_a8 = 0;
  fVar28 = (float)FUN_01904c90(&local_c0);
  uVar15 = *(uint *)((long)param_1 + 4);
  bVar10 = (uVar15 | 1) != 0x38b;
  uVar14 = 0;
  if ((int)uVar15 < 0x38a && bVar10) {
    uVar14 = (uint)*(ushort *)(param_1 + 1);
  }
  uVar17 = (ulong)uVar14;
  if (uVar14 < 0x1c) {
    uVar24 = 0;
    if ((int)uVar15 < 0x38a && bVar10) {
      uVar24 = (ulong)uVar15;
    }
    lVar21 = *(&DAT_043f23a0)[uVar24 * 4];
    uVar24 = (&DAT_043f23a0)[uVar24 * 4][1] - lVar21 >> 3;
    if ((uVar24 <= uVar17) || (*(long *)(lVar21 + uVar17 * 8) == 0)) goto LAB_0190599c;
  }
  else {
LAB_0190599c:
    uVar17 = 0;
    lVar21 = *DAT_043f23a0;
    uVar24 = DAT_043f23a0[1] - lVar21 >> 3;
  }
  if (uVar24 <= uVar17) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar18 = *(int **)(lVar21 + uVar17 * 8);
  if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 0x27) ||
     (uVar17 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[0x13], uVar17 == 0)) {
    bVar27 = 0;
  }
  else {
    bVar27 = *(byte *)((long)piVar18 + uVar17);
  }
  local_c0 = 0xd9fa5c848808eca4;
  pcStack_b8 = "capture_index_pokepara_coef";
  local_b0 = 0x1b;
  uStack_a8 = 0;
  fVar29 = (float)FUN_01904c90(&local_c0);
  cVar8 = *(char *)(param_1 + 9);
  local_c0 = 0x9d9179cf276fe936;
  pcStack_b8 = "capture_index_outbreak_factor";
  local_b0 = 0x1d;
  uStack_a8 = 0;
  fVar30 = (float)FUN_01904c90(&local_c0);
  uVar14 = *param_2;
  if (9 < uVar14) {
    uVar14 = 10;
  }
  uVar15 = param_2[3];
  uVar3 = param_2[4];
  uVar1 = param_2[5];
  uVar4 = param_2[6];
  uVar2 = param_2[7];
  uVar5 = param_2[8];
  uVar7 = param_2[9];
  if ((char)param_2[0xd] == '\0') {
    iVar12 = 0;
  }
  else {
    local_c0 = 0x45ba8962e1f7264c;
    pcStack_b8 = "poke_lvrank_bias_oybn";
    local_b0 = 0x15;
    uStack_a8 = 0;
    iVar12 = FUN_01904f70(&local_c0);
  }
  local_c0 = 0x2cf7843e4882df4f;
  pcStack_b8 = "poke_lvrank_bias_per_glv";
  local_b0 = 0x18;
  uStack_a8 = 0;
  fVar31 = (float)FUN_01904c90(&local_c0);
  local_c0 = 0xc9b446fa2ec6e9b6;
  pcStack_b8 = "poke_lvrank_1_range_max";
  local_b0 = 0x17;
  uStack_a8 = 0;
  uVar11 = FUN_01904f70(&local_c0);
  if (uVar11 < uVar15) {
    local_c0 = 0xac2011894d183cbf;
    pcStack_b8 = "poke_lvrank_2_range_max";
    local_b0 = 0x17;
    uStack_a8 = 0;
    uVar11 = FUN_01904f70(&local_c0);
    if (uVar11 < uVar15) {
      local_c0 = 0x276ceca19e893a2c;
      pcStack_b8 = "poke_lvrank_3_range_max";
      local_b0 = 0x17;
      uStack_a8 = 0;
      uVar11 = FUN_01904f70(&local_c0);
      if (uVar11 < uVar15) {
        local_c0 = 0x2959d0d2e30622a5;
        pcStack_b8 = "poke_lvrank_4_range_max";
        local_b0 = 0x17;
        uStack_a8 = 0;
        uVar11 = FUN_01904f70(&local_c0);
        if (uVar11 < uVar15) {
          local_c0 = 0xd1bb9d6f2b6273d2;
          pcStack_b8 = "poke_lvrank_5_range_max";
          local_b0 = 0x17;
          uStack_a8 = 0;
          uVar11 = FUN_01904f70(&local_c0);
          if (uVar11 < uVar15) {
            local_c0 = 0x2e77c752fb4bee6b;
            pcStack_b8 = "poke_lvrank_6_range_max";
            local_b0 = 0x17;
            uStack_a8 = 0;
            uVar11 = FUN_01904f70(&local_c0);
            if (uVar11 < uVar15) {
              local_c0 = 0x3ffab8eca2941aa8;
              pcStack_b8 = "poke_lvrank_7_range_max";
              local_b0 = 0x17;
              uStack_a8 = 0;
              uVar11 = FUN_01904f70(&local_c0);
              if (uVar11 < uVar15) {
                local_c0 = 0xe2b1170edafb7a61;
                pcStack_b8 = "poke_lvrank_8_range_max";
                local_b0 = 0x17;
                uStack_a8 = 0;
                uVar11 = FUN_01904f70(&local_c0);
                if (uVar11 < uVar15) {
                  local_c0 = 0x2a4cf01147cebaae;
                  pcStack_b8 = "poke_lvrank_9_range_max";
                  local_b0 = 0x17;
                  uStack_a8 = 0;
                  uVar11 = FUN_01904f70(&local_c0);
                  iVar16 = 9;
                  if (uVar11 < uVar15) {
                    iVar16 = 10;
                  }
                }
                else {
                  iVar16 = 8;
                }
              }
              else {
                iVar16 = 7;
              }
            }
            else {
              iVar16 = 6;
            }
          }
          else {
            iVar16 = 5;
          }
        }
        else {
          iVar16 = 4;
        }
      }
      else {
        iVar16 = 3;
      }
    }
    else {
      iVar16 = 2;
    }
  }
  else {
    iVar16 = 1;
  }
  local_c0 = 0x75b7338d12200a6c;
  pcStack_b8 = "poke_lvrank_max";
  local_b0 = 0xf;
  uStack_a8 = 0;
  uVar11 = FUN_01904f70(&local_c0);
  uVar15 = iVar12 + (int)(fVar31 * (float)(uVar1 + uVar3 + uVar4 + uVar2 + uVar5 + uVar7)) + iVar16;
  if ((int)uVar11 <= (int)uVar15) {
    uVar15 = uVar11;
  }
  if (uVar15 != 0) {
    uVar15 = uVar15 - 1;
  }
  puVar19 = (undefined8 *)((ulong)uVar14 * 0xf0 + 0x422e0d0 + (ulong)uVar15 * 0x18);
  local_c0 = *puVar19;
  pcStack_b8 = (char *)puVar19[1];
  local_b0 = puVar19[2];
  uStack_a8 = 0;
  fVar31 = (float)FUN_01904c90(&local_c0);
  uVar14 = *(uint *)((long)param_1 + 0x2c);
  if (uVar14 == 0) {
    fVar32 = 0.0;
  }
  else {
    local_c0 = 0x9092f2a3627b3f85;
    pcStack_b8 = "capture_index_hp_coef";
    fVar37 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 5));
    local_b0 = 0x15;
    uStack_a8 = 0;
    fVar32 = (float)FUN_01904c90(&local_c0);
    fVar32 = 1.0 - (fVar32 * fVar37) / (float)uVar14;
  }
  if (*(int *)(param_1 + 6) - 1U < 7) {
    uVar20 = 0x62eaf84322895335;
    puVar19 = &local_c0;
    uVar22 = 0x20;
    pcVar25 = "capture_index_sick_factor_freeze";
    switch(*(int *)(param_1 + 6)) {
    case 1:
      uVar20 = 0x8465b12cf814e13c;
      puVar19 = auStack_120;
      uVar22 = 0x23;
      pcVar25 = "capture_index_sick_factor_paralysis";
      break;
    default:
      goto switchD_01905d80_caseD_2;
    case 4:
      uVar20 = 0x9cd1ff52e08f5e67;
      puVar19 = auStack_140;
      uVar22 = 0x1e;
      pcVar25 = "capture_index_sick_factor_burn";
      break;
    case 5:
      uVar20 = 0x4c793817b00cec5e;
      puVar19 = auStack_100;
      uVar22 = 0x20;
      pcVar25 = "capture_index_sick_factor_poison";
      break;
    case 6:
      uVar20 = 0xb1653f18d38154c1;
      puVar19 = local_e0;
      uVar22 = 0x1f;
      pcVar25 = "capture_index_sick_factor_sleep";
      break;
    case 7:
      break;
    }
  }
  else {
switchD_01905d80_caseD_2:
    uVar20 = 0x18772dee4238f2b4;
    puVar19 = auStack_160;
    uVar22 = 0x1e;
    pcVar25 = "capture_index_sick_factor_none";
  }
  *puVar19 = uVar20;
  puVar19[1] = pcVar25;
  puVar19[2] = uVar22;
  puVar19[3] = 0;
  fVar37 = (float)FUN_01904c90();
  if (7 < *(int *)(param_1 + 7) - 0x1dU) {
    local_c0 = 0xd7769b974d232662;
    local_b0 = 0x21;
    pcStack_b8 = "capture_index_ball_factor_default";
    goto LAB_01905df0;
  }
  cVar9 = *(char *)((long)param_1 + 0x43);
  switch(*(int *)(param_1 + 7)) {
  case 0x1d:
    local_c0 = 0xd04e978bc4c1fe78;
    local_b0 = 0x1f;
    pcStack_b8 = "capture_index_ball_factor_super";
    goto LAB_01905df0;
  case 0x1e:
    local_c0 = 0x99de71f0037b195;
    local_b0 = 0x1f;
    pcStack_b8 = "capture_index_ball_factor_hyper";
    goto LAB_01905df0;
  case 0x1f:
    puVar23 = (undefined8 *)0x422eb38;
    puVar19 = (undefined8 *)0x422eb20;
    goto LAB_0190637c;
  case 0x20:
    puVar23 = (undefined8 *)0x422eb68;
    puVar19 = (undefined8 *)0x422eb50;
    goto LAB_0190637c;
  case 0x21:
    puVar23 = &DAT_0422eb98;
    puVar19 = (undefined8 *)0x422eb80;
LAB_0190637c:
    if (*(char *)((long)param_1 + 0x41) == '\0') {
      puVar19 = puVar23;
    }
    break;
  case 0x22:
    if (cVar9 == '\0') {
      puVar19 = &DAT_0422ebc8;
    }
    else {
      puVar19 = &DAT_0422ebb0;
    }
    break;
  case 0x23:
    if (cVar9 == '\0') {
      puVar19 = &DAT_0422ebf8;
    }
    else {
      puVar19 = &DAT_0422ebe0;
    }
    break;
  case 0x24:
    puVar19 = (undefined8 *)0x422ec10;
    if (cVar9 == '\0') {
      puVar19 = &DAT_0422ec28;
    }
  }
  local_c0 = *puVar19;
  pcStack_b8 = (char *)puVar19[1];
  local_b0 = puVar19[2];
LAB_01905df0:
  uStack_a8 = 0;
  fVar33 = (float)FUN_01904c90();
  if (*(int *)((long)param_1 + 0x3c) - 1U < 7) {
    uVar20 = 0x7e918a37d64c6833;
    puVar13 = &local_c0;
    uVar22 = 0x20;
    pcVar25 = "capture_index_ai_factor_sleeping";
    switch(*(int *)((long)param_1 + 0x3c)) {
    case 1:
      uVar20 = 0xe40da46c1375657b;
      puVar13 = local_e0;
      uVar22 = 0x1f;
      pcVar25 = "capture_index_ai_factor_caution";
      break;
    case 2:
      if (*(int *)((long)param_1 + 0x4c) == 1) {
        uVar20 = 0x888497d32c05846e;
        puVar13 = auStack_1e0;
        uVar22 = 0x28;
        pcVar25 = "capture_index_ai_factor_react_aggressive";
      }
      else if (*(int *)((long)param_1 + 0x4c) == 2) {
        uVar20 = 0x962e06e067ea1fe5;
        puVar13 = auStack_1c0;
        uVar22 = 0x23;
        pcVar25 = "capture_index_ai_factor_react_timid";
      }
      else {
        uVar20 = 0x7b846a5d45bf7f20;
        puVar13 = auStack_200;
        uVar22 = 0x24;
        pcVar25 = "capture_index_ai_factor_react_docile";
      }
      break;
    case 3:
      if (*(int *)(param_1 + 0xd) == 0) {
        uVar20 = 0x81d8ac8eb05d1d9f;
        puVar13 = auStack_160;
        uVar22 = 0x24;
        pcVar25 = "capture_index_ai_factor_feeding_nuts";
      }
      else if (*(int *)(param_1 + 0xd) == 1) {
        uVar20 = 0x2509fb459bda09be;
        puVar13 = auStack_180;
        uVar22 = 0x28;
        pcVar25 = "capture_index_ai_factor_feeding_baitball";
      }
      else {
        uVar20 = 0xb149b923e2dd99ee;
        puVar13 = auStack_1a0;
        uVar22 = 0x1f;
        pcVar25 = "capture_index_ai_factor_feeding";
      }
      break;
    case 5:
      uVar20 = 0x7b33512eebd9b4b6;
      puVar13 = auStack_140;
      uVar22 = 0x20;
      pcVar25 = "capture_index_ai_factor_escaping";
      break;
    case 6:
      uVar20 = 0xc6adce1789869e03;
      puVar13 = auStack_100;
      uVar22 = 0x21;
      pcVar25 = "capture_index_ai_factor_tiredness";
      break;
    case 7:
      uVar20 = 0x58519c0b1f1e33a0;
      puVar13 = auStack_120;
      uVar22 = 0x1f;
      pcVar25 = "capture_index_ai_factor_resting";
    }
  }
  else {
    uVar20 = 0xcbfd17ac2dec1ab7;
    uVar22 = 0x1f;
    pcVar25 = "capture_index_ai_factor_default";
  }
  *puVar13 = uVar20;
  puVar13[1] = pcVar25;
  puVar13[2] = uVar22;
  puVar13[3] = 0;
  fVar34 = (float)FUN_01904c90();
  bVar10 = *(char *)((long)param_1 + 0x36) != '\0';
  puVar13 = local_e0;
  if (bVar10) {
    puVar13 = &local_c0;
  }
  uVar20 = 0x9f5d4daa67a63e57;
  if (bVar10) {
    uVar20 = 0x58b3f904bdabe0c4;
  }
  pcVar25 = "capture_index_backstrike_failure_factor";
  if (bVar10) {
    pcVar25 = "capture_index_backstrike_success_factor";
  }
  *puVar13 = uVar20;
  puVar13[1] = pcVar25;
  puVar13[2] = 0x27;
  puVar13[3] = 0;
  fVar35 = (float)FUN_01904c90();
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    uVar20 = 0xe01f57d0f55aae72;
    puVar13 = local_e0;
    uVar22 = 0x2d;
    pcVar25 = "capture_index_baiteffect_not_available_factor";
  }
  else {
    uVar20 = 0x2098631317549760;
    puVar13 = &local_c0;
    uVar22 = 0x29;
    pcVar25 = "capture_index_baiteffect_available_factor";
  }
  *puVar13 = uVar20;
  puVar13[1] = pcVar25;
  puVar13[2] = uVar22;
  puVar13[3] = 0;
  fVar36 = (float)FUN_01904c90();
  if (*(char *)((long)param_1 + 0x46) == '\0') {
    local_c0 = 0x916810ca2e189e6a;
    pcStack_b8 = "capture_index_range_bottom";
    local_b0 = 0x1a;
    uStack_a8 = 0;
    fVar28 = (float)FUN_01904c90(&local_c0);
  }
  else {
    if (cVar8 == '\0') {
      fVar30 = 0.0;
    }
    fVar28 = fVar29 * (float)bVar27 + fVar30 + fVar28 * fVar31 +
             fVar28 * fVar32 * fVar37 * fVar33 * fVar34 * fVar35 * fVar36;
  }
  *pfVar26 = fVar28;
  local_c0 = 0x5aa46a7246202b1c;
  pcStack_b8 = "capture_index_range_top";
  local_b0 = 0x17;
  uStack_a8 = 0;
  fVar29 = (float)FUN_01904c90(&local_c0);
  local_c0 = 0x916810ca2e189e6a;
  pcStack_b8 = "capture_index_range_bottom";
  local_b0 = 0x1a;
  uStack_a8 = 0;
  fVar30 = (float)FUN_01904c90(&local_c0);
  iVar12 = 2;
  if (fVar30 < fVar28) {
    iVar12 = 1;
  }
  if (fVar29 <= fVar28) {
    iVar12 = 0;
  }
  *(int *)((long)param_1 + 0x94) = iVar12;
  if (iVar12 == 2) {
    fVar28 = 1.0;
    if (*(int *)(param_1 + 0x10) == 1) goto LAB_01906018;
  }
  else {
    if (iVar12 != 0) {
      fVar28 = 0.0;
      if (iVar12 == 1) {
        fVar30 = *pfVar26;
        local_c0 = 0x5aa46a7246202b1c;
        pcStack_b8 = "capture_index_range_top";
        local_b0 = 0x17;
        uStack_a8 = 0;
        fVar29 = (float)FUN_01904c90(&local_c0);
        local_c0 = 0x8a148dc1a556becd;
        pcStack_b8 = "random_value_max";
        local_b0 = 0x10;
        uStack_a8 = 0;
        iVar12 = FUN_01904f70(&local_c0);
        if ((1.1920929e-07 < ABS(fVar30)) && (iVar12 != 0)) {
          fVar28 = ((float)iVar12 / (fVar29 / fVar30)) / (float)iVar12;
        }
      }
      goto LAB_01906018;
    }
    fVar28 = 1.0;
    if (*(int *)(param_1 + 0x10) != 2) goto LAB_01906018;
  }
  fVar28 = 0.0;
LAB_01906018:
  *(float *)((long)param_1 + 0x8c) = fVar28;
  local_c0 = 0x8a148dc1a556becd;
  pcStack_b8 = "random_value_max";
  local_b0 = 0x10;
  uStack_a8 = 0;
  iVar12 = FUN_01904f70(&local_c0);
  local_c0 = 0xb9c720d7d22a88e9;
  pcStack_b8 = "capture_judge_radical_root";
  local_b0 = 0x1a;
  uStack_a8 = 0;
  fVar28 = (float)FUN_01904c90(&local_c0);
  fVar30 = *(float *)((long)param_1 + 0x84);
  local_c0 = 0x5aa46a7246202b1c;
  pcStack_b8 = "capture_index_range_top";
  local_b0 = 0x17;
  uStack_a8 = 0;
  fVar29 = (float)FUN_01904c90(&local_c0);
  fVar30 = fVar30 / fVar29;
  if (fVar30 <= 0.0) {
    fVar30 = 0.0;
  }
  if (1.0 < fVar30) {
    fVar30 = 1.0;
  }
  fVar28 = powf(1.0 - fVar30,1.0 / fVar28);
  *(float *)(param_1 + 0x11) = (1.0 - fVar28) * (float)iVar12;
  return 1;
}


