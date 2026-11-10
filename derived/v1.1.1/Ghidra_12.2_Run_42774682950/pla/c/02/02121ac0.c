/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02121ac0; name: FUN_02121ac0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02121ac0(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long *plVar18;
  size_t sVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  string *psVar26;
  long lVar27;
  string *psVar28;
  ulong uVar29;
  undefined8 uVar30;
  string *psVar31;
  long *plVar32;
  char *pcVar33;
  void *pvVar34;
  long lVar35;
  ulong uVar36;
  byte local_2b8;
  undefined7 uStack_2b7;
  char cStack_2b0;
  undefined7 uStack_2af;
  char local_2a8;
  undefined2 uStack_2a7;
  undefined1 uStack_2a5;
  undefined4 uStack_2a4;
  undefined7 local_2a0;
  undefined1 uStack_299;
  undefined7 uStack_298;
  string local_290;
  undefined2 local_28f;
  undefined1 local_28d;
  undefined8 local_28c;
  undefined4 local_284;
  long local_280;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined4 local_268;
  byte local_260;
  undefined4 local_25f;
  undefined7 local_25b;
  undefined4 uStack_254;
  long local_250;
  undefined1 *puStack_248;
  undefined1 *local_240;
  undefined4 local_238;
  byte local_230;
  char local_22f [8];
  undefined2 local_227;
  undefined1 local_225;
  undefined4 local_224;
  long local_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined4 local_208;
  string local_200;
  undefined7 local_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  void *local_1f0;
  undefined1 *local_1e8;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  undefined4 local_1cf;
  undefined2 local_1cb;
  undefined1 local_1c9;
  undefined8 local_1c8;
  char *local_1c0;
  undefined1 *local_1b8;
  undefined1 *puStack_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  undefined7 uStack_19f;
  char local_198;
  undefined7 uStack_197;
  long local_190;
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  byte local_170;
  undefined7 local_16f;
  undefined4 uStack_168;
  undefined4 local_164;
  long local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  char local_13f [7];
  char cStack_138;
  char acStack_137 [7];
  long local_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  byte local_110;
  char local_10f [7];
  char cStack_108;
  char acStack_107 [7];
  long local_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  byte local_e0;
  char local_df [7];
  char cStack_d8;
  char acStack_d7 [7];
  long local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  char local_af [7];
  char cStack_a8;
  char acStack_a7 [7];
  long local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  string local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  plVar1 = DAT_043f1798;
  local_2b8 = 0x24;
  uStack_2a4 = 0;
  uStack_2a7 = 0x746e;
  uStack_2b7 = s_FieldDoorComponent_039803ef._0_7_;
  cStack_2b0 = s_FieldDoorComponent_039803ef[7];
  uStack_2af = s_FieldDoorComponent_039803ef._8_7_;
  local_2a8 = s_FieldDoorComponent_039803ef[0xf];
  uStack_2a5 = 0;
  lVar6 = tpidr_el0;
  plVar18 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar18 = plVar1;
  }
  plVar18 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x188,8);
  plVar18[4] = 0;
  plVar32 = plVar18 + 1;
  *plVar32 = 0;
  *(undefined4 *)(plVar18 + 5) = 0x3f800000;
  plVar18[10] = 0;
  plVar18[6] = (long)FUN_02123750;
  plVar18[7] = (long)FUN_02123800;
  *plVar18 = (long)&PTR_FUN_0425b4c0;
  *(undefined1 *)(plVar18 + 0xb) = 0;
  plVar18[0xc] = (long)&DAT_038ca815;
  plVar18[0xd] = (long)&DAT_0392da3c;
  plVar18[0xf] = (long)"__haxe_export_GetDoorId";
  plVar18[0x10] = (long)&LAB_021236c8;
  plVar18[0x13] = (long)&LAB_021236d0;
  plVar18[0x14] = 0;
  plVar18[0x15] = (long)"GetDoorType";
  plVar18[0x16] = (long)&LAB_021236d8;
  plVar18[0x19] = (long)&LAB_021236e0;
  plVar18[0x1a] = 0;
  plVar18[0x1b] = (long)"GetDoorExitCameraData";
  plVar18[0x1c] = (long)&LAB_021236e8;
  plVar18[0x1d] = 0;
  plVar18[0x1e] = (long)"GetLookAtPosition";
  plVar18[0x1f] = (long)FUN_01aaf894;
  plVar18[0x20] = 0;
  uVar36 = 0xffffffff;
  plVar18[0x21] = (long)"GetOpenSoundEventName";
  plVar18[0x22] = (long)&LAB_01aafa78;
  *(undefined1 *)(plVar18 + 0xe) = 0;
  plVar18[0x30] = 0;
  *(undefined1 *)(plVar18 + 0x2f) = 0;
  plVar18[0x25] = (long)&LAB_01aafa80;
  plVar18[0x26] = 0;
  plVar18[0x29] = (long)FUN_02123990;
  plVar18[0x2a] = (long)&LAB_02123c70;
  plVar18[0x2b] = (long)&LAB_02123f50;
  plVar18[0x2c] = (long)&LAB_02123f60;
  plVar18[2] = 0;
  plVar18[3] = 0;
  plVar18[8] = 0;
  plVar18[9] = 0;
  plVar18[0x11] = 0;
  plVar18[0x12] = (long)"__haxe_export_GetExitDoorId";
  plVar18[0x17] = 0;
  plVar18[0x18] = (long)"GetFadeType";
  plVar18[0x23] = 0;
  plVar18[0x24] = (long)"GetCloseSoundEventName";
  plVar18[0x27] = 0;
  plVar18[0x28] = 0;
  plVar18[0x2d] = 0;
  plVar18[0x2e] = 0;
  local_290 = (string)0x6;
  local_28f = 0x656e;
  local_28d = 0x77;
  local_270 = &LAB_02123fac;
  local_28c = 0;
  local_284 = 0;
  local_268 = 0xffffffff;
  local_260 = 8;
  local_25b = 0;
  uStack_254 = 0;
  local_240 = &LAB_0212403c;
  local_238 = 0xffffffff;
  local_280 = 0;
  local_278 = &LAB_02123f64;
  local_25f = 0x63675f5f;
  local_250 = 0;
  puStack_248 = &LAB_02123ff4;
  local_230 = 0x14;
  local_227 = 0x7473;
  local_22f[0] = s_class_cast_038dd4e7[0];
  local_22f[1] = s_class_cast_038dd4e7[1];
  local_22f[2] = s_class_cast_038dd4e7[2];
  local_22f[3] = s_class_cast_038dd4e7[3];
  local_22f[4] = s_class_cast_038dd4e7[4];
  local_22f[5] = s_class_cast_038dd4e7[5];
  local_22f[6] = s_class_cast_038dd4e7[6];
  local_22f[7] = s_class_cast_038dd4e7[7];
  local_225 = 0;
  local_224 = 0;
  local_210 = &LAB_021240cc;
  local_208 = 0xffffffff;
  local_220 = 0;
  puStack_218 = &LAB_02124084;
  pcVar33 = (char *)plVar18[0xf];
  sVar19 = strlen(pcVar33);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar19) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar19 < 0x17) {
    local_80 = SUB41((int)sVar19 << 1,0);
    pvVar34 = (void *)((ulong)&local_80 | 1);
    if (sVar19 != 0) goto LAB_02121dac;
  }
  else {
    uVar20 = sVar19 + 0x10 & 0xfffffffffffffff0;
    plVar24 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    pvVar34 = (void *)(**(code **)(*plVar24 + 0x10))(plVar24,uVar20,8);
    local_80 = (string)((byte)uVar20 | 1);
    uStack_7f = (undefined7)(uVar20 >> 8);
    local_78 = (undefined1)sVar19;
    uStack_77 = (undefined7)(sVar19 >> 8);
    local_70 = pvVar34;
LAB_02121dac:
    memcpy(pvVar34,pcVar33,sVar19);
  }
  local_1f0 = local_70;
  uStack_1f7 = uStack_77;
  uStack_1f8 = local_78;
  local_1ff = uStack_7f;
  local_200 = local_80;
  *(undefined1 *)((long)pvVar34 + sVar19) = 0;
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_2a0 = 0;
  uStack_299 = 0;
  uStack_298 = 0;
  local_1d8 = 0xffffffff;
  local_1e8 = &LAB_02124114;
  puStack_1e0 = &LAB_0212415c;
  plVar24 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar24 = plVar1;
  }
  local_1c0 = (char *)(**(code **)(*plVar24 + 0x10))(plVar24,0x20,8);
  local_1c0[0x17] = 'o';
  local_1c0[0x18] = 'r';
  local_1c0[0x19] = 'I';
  local_1c0[0x1a] = 'd';
  local_1c0[0x1b] = '\0';
  uVar30 = s___haxe_export_GetExitDoorId_0393459f._8_8_;
  *(undefined8 *)local_1c0 = s___haxe_export_GetExitDoorId_0393459f._0_8_;
  uVar7 = s___haxe_export_GetExitDoorId_0393459f._16_8_;
  *(undefined8 *)(local_1c0 + 8) = uVar30;
  *(undefined8 *)(local_1c0 + 0x10) = uVar7;
  local_1d0 = 0x21;
  local_1cb = 0;
  local_1cf = 0;
  local_1b8 = &LAB_021241a4;
  puStack_1b0 = &LAB_021241ec;
  local_1c8 = 0x1b;
  local_1c9 = 0;
  local_1a8 = 0xffffffff;
  local_1a0 = 0x16;
  uStack_197 = 0x657079;
  local_190 = 0;
  uStack_19f = s_GetDoorType_039463b8._0_7_;
  local_198 = s_GetDoorType_039463b8[7];
  psVar31 = &local_290;
  local_170 = 0x16;
  local_178 = 0xffffffff;
  local_188 = &LAB_02124234;
  puStack_180 = &LAB_0212427c;
  local_16f = s_GetFadeType_039bfe53._0_7_;
  uStack_168 = 0x65707954;
  local_148 = 0xffffffff;
  local_150 = &LAB_0212430c;
  local_164 = 0;
  local_160 = 0;
  puStack_158 = &LAB_021242c4;
  local_140 = 0x2a;
  local_13f[0] = s_GetDoorExitCameraData_03a73914[0];
  local_13f[1] = s_GetDoorExitCameraData_03a73914[1];
  local_13f[2] = s_GetDoorExitCameraData_03a73914[2];
  local_13f[3] = s_GetDoorExitCameraData_03a73914[3];
  local_13f[4] = s_GetDoorExitCameraData_03a73914[4];
  local_13f[5] = s_GetDoorExitCameraData_03a73914[5];
  local_13f[6] = s_GetDoorExitCameraData_03a73914[6];
  local_118 = 0xffffffff;
  cStack_138 = s_GetDoorExitCameraData_03a73914[7];
  acStack_137[0] = s_GetDoorExitCameraData_03a73914[8];
  acStack_137[1] = s_GetDoorExitCameraData_03a73914[9];
  acStack_137[2] = s_GetDoorExitCameraData_03a73914[10];
  acStack_137[3] = s_GetDoorExitCameraData_03a73914[0xb];
  acStack_137[4] = s_GetDoorExitCameraData_03a73914[0xc];
  acStack_137[5] = s_GetDoorExitCameraData_03a73914[0xd];
  acStack_137[6] = s_GetDoorExitCameraData_03a73914[0xe];
  local_130 = 0x617461446172;
  local_110 = 0x22;
  local_128 = &LAB_02124354;
  puStack_120 = &LAB_0212439c;
  local_10f[0] = s_GetLookAtPosition_03a73730[0];
  local_10f[1] = s_GetLookAtPosition_03a73730[1];
  local_10f[2] = s_GetLookAtPosition_03a73730[2];
  local_10f[3] = s_GetLookAtPosition_03a73730[3];
  local_10f[4] = s_GetLookAtPosition_03a73730[4];
  local_10f[5] = s_GetLookAtPosition_03a73730[5];
  local_10f[6] = s_GetLookAtPosition_03a73730[6];
  local_e0 = 0x2a;
  local_e8 = 0xffffffff;
  cStack_108 = s_GetLookAtPosition_03a73730[7];
  acStack_107[0] = s_GetLookAtPosition_03a73730[8];
  acStack_107[1] = s_GetLookAtPosition_03a73730[9];
  acStack_107[2] = s_GetLookAtPosition_03a73730[10];
  acStack_107[3] = s_GetLookAtPosition_03a73730[0xb];
  acStack_107[4] = s_GetLookAtPosition_03a73730[0xc];
  acStack_107[5] = s_GetLookAtPosition_03a73730[0xd];
  acStack_107[6] = s_GetLookAtPosition_03a73730[0xe];
  local_100 = 0x6e6f;
  local_f8 = &LAB_021243e4;
  puStack_f0 = &LAB_0212442c;
  local_df[0] = s_GetOpenSoundEventName_03a739dc[0];
  local_df[1] = s_GetOpenSoundEventName_03a739dc[1];
  local_df[2] = s_GetOpenSoundEventName_03a739dc[2];
  local_df[3] = s_GetOpenSoundEventName_03a739dc[3];
  local_df[4] = s_GetOpenSoundEventName_03a739dc[4];
  local_df[5] = s_GetOpenSoundEventName_03a739dc[5];
  local_df[6] = s_GetOpenSoundEventName_03a739dc[6];
  cStack_d8 = s_GetOpenSoundEventName_03a739dc[7];
  acStack_d7[0] = s_GetOpenSoundEventName_03a739dc[8];
  acStack_d7[1] = s_GetOpenSoundEventName_03a739dc[9];
  acStack_d7[2] = s_GetOpenSoundEventName_03a739dc[10];
  acStack_d7[3] = s_GetOpenSoundEventName_03a739dc[0xb];
  acStack_d7[4] = s_GetOpenSoundEventName_03a739dc[0xc];
  acStack_d7[5] = s_GetOpenSoundEventName_03a739dc[0xd];
  acStack_d7[6] = s_GetOpenSoundEventName_03a739dc[0xe];
  local_c0 = &LAB_021244bc;
  local_b8 = 0xffffffff;
  local_d0 = 0x656d614e746e;
  local_c8 = &LAB_02124474;
  local_b0 = 0x2c;
  local_af[0] = s_GetCloseSoundEventName_03a73684[0];
  local_af[1] = s_GetCloseSoundEventName_03a73684[1];
  local_af[2] = s_GetCloseSoundEventName_03a73684[2];
  local_af[3] = s_GetCloseSoundEventName_03a73684[3];
  local_af[4] = s_GetCloseSoundEventName_03a73684[4];
  local_af[5] = s_GetCloseSoundEventName_03a73684[5];
  local_af[6] = s_GetCloseSoundEventName_03a73684[6];
  cStack_a8 = s_GetCloseSoundEventName_03a73684[7];
  acStack_a7[0] = s_GetCloseSoundEventName_03a73684[8];
  acStack_a7[1] = s_GetCloseSoundEventName_03a73684[9];
  acStack_a7[2] = s_GetCloseSoundEventName_03a73684[10];
  acStack_a7[3] = s_GetCloseSoundEventName_03a73684[0xb];
  acStack_a7[4] = s_GetCloseSoundEventName_03a73684[0xc];
  acStack_a7[5] = s_GetCloseSoundEventName_03a73684[0xd];
  acStack_a7[6] = s_GetCloseSoundEventName_03a73684[0xe];
  local_98 = &LAB_02124504;
  local_90 = &LAB_0212454c;
  local_88 = 0xffffffff;
  local_a0 = 0x656d614e746e65;
  plVar1 = plVar18 + 3;
  do {
    uVar20 = *(ulong *)(psVar31 + 8);
    psVar3 = *(string **)(psVar31 + 0x10);
    if (((byte)*psVar31 & 1) == 0) {
      psVar3 = psVar31 + 1;
      uVar20 = (ulong)((byte)*psVar31 >> 1);
    }
    uVar20 = FUN_008e8ed4(&local_80,psVar3,uVar20);
    uVar29 = plVar18[2];
    if (uVar29 != 0) {
      uVar36 = uVar29 - (uVar29 >> 1 & 0x5555555555555555);
      uVar36 = (uVar36 & 0x3333333333333333) + (uVar36 >> 2 & 0x3333333333333333);
      uVar22 = (uVar36 + (uVar36 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar36 = uVar29 - 1 & uVar20;
      }
      else {
        uVar36 = uVar20;
        if (uVar29 <= uVar20) {
          uVar36 = 0;
          if (uVar29 != 0) {
            uVar36 = uVar20 / uVar29;
          }
          uVar36 = uVar20 - uVar36 * uVar29;
        }
      }
      plVar24 = *(long **)(*plVar32 + uVar36 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        psVar3 = psVar31 + 1;
        sVar19 = (ulong)((byte)*psVar31 >> 1);
        if (((byte)*psVar31 & 1) != 0) {
          psVar3 = *(string **)(psVar31 + 0x10);
          sVar19 = *(size_t *)(psVar31 + 8);
        }
        if (uVar22 < 2) {
          if (sVar19 == 0) {
            do {
              if (plVar24[1] != uVar20 && (plVar24[1] & uVar29 - 1) != uVar36) break;
              uVar22 = (ulong)(*(byte *)(plVar24 + 2) >> 1);
              if ((*(byte *)(plVar24 + 2) & 1) != 0) {
                uVar22 = plVar24[3];
              }
              if (uVar22 == 0) goto LAB_02122274;
              plVar24 = (long *)*plVar24;
            } while (plVar24 != (long *)0x0);
          }
          else {
            do {
              if (plVar24[1] != uVar20 && (plVar24[1] & uVar29 - 1) != uVar36) break;
              bVar4 = *(byte *)(plVar24 + 2);
              uVar22 = (ulong)(bVar4 >> 1);
              sVar2 = uVar22;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar24[3];
              }
              if (sVar2 == sVar19) {
                if ((bVar4 & 1) == 0) {
                  psVar26 = (string *)((long)plVar24 + 0x11);
                  psVar28 = psVar3;
                  while (*psVar26 == *psVar28) {
                    uVar22 = uVar22 - 1;
                    psVar26 = psVar26 + 1;
                    psVar28 = psVar28 + 1;
                    if (uVar22 == 0) goto LAB_02122274;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar24[4],psVar3,sVar19);
                  if (iVar8 == 0) goto LAB_02122274;
                }
              }
              plVar24 = (long *)*plVar24;
            } while (plVar24 != (long *)0x0);
          }
        }
        else if (sVar19 == 0) {
          do {
            uVar22 = plVar24[1];
            if (uVar22 != uVar20) {
              if (uVar29 <= uVar22) {
                uVar5 = 0;
                if (uVar29 != 0) {
                  uVar5 = uVar22 / uVar29;
                }
                uVar22 = uVar22 - uVar5 * uVar29;
              }
              if (uVar22 != uVar36) break;
            }
            uVar22 = (ulong)(*(byte *)(plVar24 + 2) >> 1);
            if ((*(byte *)(plVar24 + 2) & 1) != 0) {
              uVar22 = plVar24[3];
            }
            if (uVar22 == 0) goto LAB_02122274;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar24[1];
            if (uVar22 != uVar20) {
              if (uVar29 <= uVar22) {
                uVar5 = 0;
                if (uVar29 != 0) {
                  uVar5 = uVar22 / uVar29;
                }
                uVar22 = uVar22 - uVar5 * uVar29;
              }
              if (uVar22 != uVar36) break;
            }
            bVar4 = *(byte *)(plVar24 + 2);
            uVar22 = (ulong)(bVar4 >> 1);
            sVar2 = uVar22;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar24[3];
            }
            if (sVar2 == sVar19) {
              if ((bVar4 & 1) == 0) {
                psVar26 = (string *)((long)plVar24 + 0x11);
                psVar28 = psVar3;
                while (*psVar26 == *psVar28) {
                  uVar22 = uVar22 - 1;
                  psVar26 = psVar26 + 1;
                  psVar28 = psVar28 + 1;
                  if (uVar22 == 0) goto LAB_02122274;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar24[4],psVar3,sVar19);
                if (iVar8 == 0) goto LAB_02122274;
              }
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    plVar24 = DAT_043f1798;
    plVar23 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar23 = plVar24;
    }
    plVar24 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x40,8);
    std::string::string((string *)(plVar24 + 2),psVar31);
    lVar25 = *(long *)(psVar31 + 0x18);
    lVar27 = *(long *)(psVar31 + 0x28);
    plVar24[6] = *(long *)(psVar31 + 0x20);
    plVar24[7] = lVar27;
    plVar24[5] = lVar25;
    *plVar24 = 0;
    plVar24[1] = uVar20;
    if ((uVar29 == 0) || (*(float *)(plVar18 + 5) * (float)uVar29 < (float)(plVar18[4] + 1))) {
      uVar36 = (ulong)(uVar29 < 3 || (uVar29 & uVar29 - 1) != 0) | uVar29 << 1;
      uVar29 = (ulong)((float)(plVar18[4] + 1) / *(float *)(plVar18 + 5));
      if (uVar29 <= uVar36) {
        uVar29 = uVar36;
      }
      FUN_008e9ae4(plVar32,uVar29);
      uVar29 = plVar18[2];
      if ((uVar29 & uVar29 - 1) == 0) {
        uVar36 = uVar29 - 1 & uVar20;
      }
      else if (uVar20 < uVar29) {
        uVar36 = uVar20;
      }
      else {
        uVar36 = 0;
        if (uVar29 != 0) {
          uVar36 = uVar20 / uVar29;
        }
        uVar36 = uVar20 - uVar36 * uVar29;
      }
    }
    lVar25 = *plVar32;
    plVar23 = *(long **)(lVar25 + uVar36 * 8);
    if (plVar23 == (long *)0x0) {
      *plVar24 = *plVar1;
      *plVar1 = (long)plVar24;
      *(long **)(lVar25 + uVar36 * 8) = plVar1;
      if (*plVar24 != 0) {
        uVar20 = *(ulong *)(*plVar24 + 8);
        if ((uVar29 & uVar29 - 1) == 0) {
          uVar20 = uVar20 & uVar29 - 1;
        }
        else if (uVar29 <= uVar20) {
          uVar22 = 0;
          if (uVar29 != 0) {
            uVar22 = uVar20 / uVar29;
          }
          uVar20 = uVar20 - uVar22 * uVar29;
        }
        plVar23 = (long *)(*plVar32 + uVar20 * 8);
        goto LAB_02122264;
      }
    }
    else {
      *plVar24 = *plVar23;
LAB_02122264:
      *plVar23 = (long)plVar24;
    }
    plVar18[4] = plVar18[4] + 1;
LAB_02122274:
    psVar31 = psVar31 + 0x30;
  } while (psVar31 != &local_80);
  lVar27 = FUN_008cca50();
  lVar25 = 0;
  do {
    lVar21 = FUN_008e8c90(plVar32,lVar27 + lVar25);
    if (lVar21 != 0) {
      FUN_008f2aec(&local_80,plVar32,lVar21);
      plVar1 = DAT_043f1798;
      lVar21 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar21 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar21 + 0x10) & 1) != 0)) &&
           (lVar35 = *(long *)(lVar21 + 0x20), lVar35 != 0)) {
          plVar24 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar24 = plVar1;
          }
          uVar36 = (**(code **)(*plVar24 + 0xc0))(plVar24);
          if ((uVar36 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar24,lVar35,0,8);
              goto LAB_02122560;
            }
          }
          (**(code **)(*plVar24 + 0x18))(plVar24,lVar35,0,8);
        }
LAB_02122560:
        plVar1 = DAT_043f1798;
        plVar24 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar24 = plVar1;
        }
        uVar36 = (**(code **)(*plVar24 + 0xc0))(plVar24);
        if ((uVar36 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar24,lVar21,0,8);
            goto LAB_02122518;
          }
        }
        (**(code **)(*plVar24 + 0x18))(plVar24,lVar21,0,8);
      }
    }
LAB_02122518:
    lVar25 = lVar25 + 0x18;
  } while (lVar25 != 0x300);
  pcVar33 = (char *)plVar18[0xc];
  sVar19 = strlen(pcVar33);
  iVar8 = FUN_008f2c60(sVar19,pcVar33);
  pcVar33 = (char *)plVar18[0xd];
  sVar19 = strlen(pcVar33);
  iVar9 = FUN_008f2c60(sVar19,pcVar33);
  pcVar33 = (char *)plVar18[0xf];
  sVar19 = strlen(pcVar33);
  iVar10 = FUN_008f2c60(sVar19,pcVar33);
  pcVar33 = (char *)plVar18[0x12];
  sVar19 = strlen(pcVar33);
  iVar11 = FUN_008f2c60(sVar19,pcVar33);
  pcVar33 = (char *)plVar18[0x15];
  sVar19 = strlen(pcVar33);
  iVar12 = FUN_008f2c60(sVar19,pcVar33);
  pcVar33 = (char *)plVar18[0x18];
  sVar19 = strlen(pcVar33);
  iVar13 = FUN_008f2c60(sVar19,pcVar33);
  pcVar33 = (char *)plVar18[0x1b];
  sVar19 = strlen(pcVar33);
  iVar14 = FUN_008f2c60(sVar19,pcVar33);
  pcVar33 = (char *)plVar18[0x1e];
  sVar19 = strlen(pcVar33);
  iVar15 = FUN_008f2c60(sVar19,pcVar33);
  pcVar33 = (char *)plVar18[0x21];
  sVar19 = strlen(pcVar33);
  iVar16 = FUN_008f2c60(sVar19,pcVar33);
  pcVar33 = (char *)plVar18[0x24];
  sVar19 = strlen(pcVar33);
  iVar17 = FUN_008f2c60(sVar19,pcVar33);
  lVar27 = local_a0;
  *(bool *)(plVar18 + 0xb) =
       ((((((((iVar9 != 0 || iVar8 != 0) || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) ||
          iVar13 != 0) || iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0;
  plVar1 = DAT_043f1798;
  lVar25 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar32 = plVar1;
    }
    uVar36 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar25 = local_d0;
        goto joined_r0x021227ac;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar25 = local_d0;
  }
joined_r0x021227ac:
  lVar27 = local_100;
  local_d0 = lVar25;
  if (((local_e0 & 1) != 0) && (lVar25 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar36 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar25,0,8);
        plVar1 = DAT_043f1798;
        lVar27 = local_100;
        goto joined_r0x021230f0;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar25,0,8);
    plVar1 = DAT_043f1798;
    lVar27 = local_100;
  }
joined_r0x021230f0:
  lVar25 = local_130;
  local_100 = lVar27;
  if (((local_110 & 1) != 0) && (lVar27 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar36 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar25 = local_130;
        goto joined_r0x02122914;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar25 = local_130;
  }
joined_r0x02122914:
  lVar27 = local_160;
  local_130 = lVar25;
  if (((local_140 & 1) != 0) && (lVar25 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar36 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar25,0,8);
        plVar1 = DAT_043f1798;
        lVar27 = local_160;
        goto joined_r0x02123130;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar25,0,8);
    plVar1 = DAT_043f1798;
    lVar27 = local_160;
  }
joined_r0x02123130:
  lVar25 = local_190;
  local_160 = lVar27;
  if (((local_170 & 1) != 0) && (lVar27 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar36 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar25 = local_190;
        goto joined_r0x02122a7c;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar25 = local_190;
  }
joined_r0x02122a7c:
  pcVar33 = local_1c0;
  local_190 = lVar25;
  if (((local_1a0 & 1) != 0) && (lVar25 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar36 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar25,0,8);
        plVar1 = DAT_043f1798;
        pcVar33 = local_1c0;
        goto joined_r0x02123170;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar25,0,8);
    plVar1 = DAT_043f1798;
    pcVar33 = local_1c0;
  }
joined_r0x02123170:
  pvVar34 = local_1f0;
  local_1c0 = pcVar33;
  if (((local_1d0 & 1) != 0) && (pcVar33 != (char *)0x0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar36 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,pcVar33,0,8);
        plVar1 = DAT_043f1798;
        pvVar34 = local_1f0;
        goto joined_r0x02122be4;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pcVar33,0,8);
    plVar1 = DAT_043f1798;
    pvVar34 = local_1f0;
  }
joined_r0x02122be4:
  lVar25 = local_220;
  local_1f0 = pvVar34;
  if ((((byte)local_200 & 1) != 0) && (pvVar34 != (void *)0x0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar36 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar34,0,8);
        plVar1 = DAT_043f1798;
        lVar25 = local_220;
        goto joined_r0x021231b0;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar34,0,8);
    plVar1 = DAT_043f1798;
    lVar25 = local_220;
  }
joined_r0x021231b0:
  lVar27 = local_250;
  local_220 = lVar25;
  if (((local_230 & 1) != 0) && (lVar25 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar36 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar25,0,8);
        plVar1 = DAT_043f1798;
        lVar27 = local_250;
        goto joined_r0x02122d4c;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar25,0,8);
    plVar1 = DAT_043f1798;
    lVar27 = local_250;
  }
joined_r0x02122d4c:
  lVar25 = local_280;
  local_250 = lVar27;
  if (((local_260 & 1) != 0) && (lVar27 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar36 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar25 = local_280;
        goto joined_r0x021231f0;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar25 = local_280;
  }
joined_r0x021231f0:
  DAT_043f1798 = plVar1;
  local_280 = lVar25;
  if ((((byte)local_290 & 1) != 0) && (lVar25 != 0)) {
    plVar32 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar32 = plVar1;
    }
    uVar36 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar25,0,8);
        goto LAB_02122eb0;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar25,0,8);
  }
LAB_02122eb0:
  uVar30 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar30);
  (**(code **)*plVar18)(plVar18,uVar30);
  (**(code **)(*plVar18 + 0x10))(plVar18);
  uVar36 = (ulong)&local_2b8 | 1;
  if ((local_2b8 & 1) != 0) {
    uVar36 = CONCAT44(uStack_2a4,CONCAT13(uStack_2a5,CONCAT21(uStack_2a7,local_2a8)));
  }
  FUN_001522a0(uVar30,uVar36);
  plVar1 = DAT_043f1798;
  if (((local_2b8 & 1) != 0) &&
     (lVar25 = CONCAT44(uStack_2a4,CONCAT13(uStack_2a5,CONCAT21(uStack_2a7,local_2a8))), lVar25 != 0
     )) {
    plVar18 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    uVar36 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar36 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar18,lVar25,0,8);
        return;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,lVar25,0,8);
  }
  return;
}


