/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02099950; name: FUN_02099950
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02099950(long param_1)

{
  size_t sVar1;
  string *psVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  size_t sVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  string *psVar22;
  long lVar23;
  string *psVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  char *pcVar28;
  string *psVar29;
  long *plVar30;
  long lVar31;
  ulong unaff_x28;
  ulong local_218;
  undefined8 uStack_210;
  char *local_208;
  string local_200;
  undefined4 local_1ff;
  undefined7 local_1fb;
  undefined4 uStack_1f4;
  long local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  char local_1cf [8];
  undefined2 local_1c7;
  undefined1 local_1c5;
  undefined4 local_1c4;
  long local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  char local_19f [7];
  char cStack_198;
  char acStack_197 [7];
  long local_190;
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  byte local_170;
  char local_16f [8];
  undefined4 local_167;
  undefined1 local_163;
  undefined2 local_162;
  long local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  char local_13f [8];
  undefined4 local_137;
  undefined1 local_133;
  undefined2 local_132;
  long local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined4 local_118;
  byte local_110;
  char acStack_10f [7];
  char local_108;
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
  undefined1 *puStack_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined2 local_ab;
  undefined1 local_a9;
  undefined8 local_a8;
  long local_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar14 = DAT_043f1798;
  lVar5 = tpidr_el0;
  plVar18 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar18 = plVar14;
  }
  local_208 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x20,8);
  uVar6 = s_FieldCameraComponentBase_038b9c7a._8_8_;
  uVar27 = s_FieldCameraComponentBase_038b9c7a._0_8_;
  local_218 = 0x21;
  uStack_210 = 0x18;
  *(undefined8 *)(local_208 + 0x10) = s_FieldCameraComponentBase_038b9c7a._16_8_;
  *(undefined8 *)local_208 = uVar27;
  *(undefined8 *)(local_208 + 8) = uVar6;
  local_208[0x18] = '\0';
  plVar14 = DAT_043f1798;
  plVar18 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar18 = plVar14;
  }
  plVar14 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x140,8);
  plVar14[2] = 0;
  plVar18 = plVar14 + 3;
  *plVar18 = 0;
  plVar30 = plVar14 + 1;
  *plVar30 = 0;
  *(undefined4 *)(plVar14 + 5) = 0x3f800000;
  plVar14[6] = (long)FUN_0209af80;
  plVar14[7] = (long)FUN_0209b030;
  *plVar14 = (long)&PTR_FUN_0425b3a8;
  plVar14[0xc] = (long)&DAT_0392da3c;
  plVar14[0x10] = (long)&LAB_01a4b79c;
  plVar14[0x11] = 0;
  plVar14[0x12] = (long)"GetTargetPos";
  plVar14[0x13] = (long)FUN_01a4b7e0;
  plVar14[0x16] = 0x138;
  plVar14[0x17] = 1;
  plVar14[0x18] = (long)"GetCameraParameter";
  plVar14[0x19] = (long)FUN_01a4bb30;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)"GetYaw";
  plVar14[0x1c] = (long)FUN_01a4bcc8;
  plVar14[0x1d] = 0;
  plVar14[0x20] = (long)FUN_0209b1c0;
  plVar14[0x21] = (long)&LAB_0209b4a0;
  plVar14[4] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  *(undefined1 *)(plVar14 + 0xb) = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  plVar14[0x27] = 0;
  *(undefined1 *)(plVar14 + 0x26) = 0;
  plVar14[0xe] = (long)"GetShakeComponent";
  plVar14[0xf] = (long)"SetTargetPos";
  plVar14[0x14] = 0;
  plVar14[0x15] = (long)"GetCurrentTargetPos";
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[0x22] = (long)&LAB_0209b780;
  plVar14[0x23] = (long)&LAB_0209b790;
  plVar14[0x24] = 0;
  plVar14[0x25] = 0;
  local_1e0 = &LAB_0209b7dc;
  local_1d0 = 0x14;
  local_1c7 = 0x7473;
  local_1cf[0] = s_class_cast_038dd4e7[0];
  local_1cf[1] = s_class_cast_038dd4e7[1];
  local_1cf[2] = s_class_cast_038dd4e7[2];
  local_1cf[3] = s_class_cast_038dd4e7[3];
  local_1cf[4] = s_class_cast_038dd4e7[4];
  local_1cf[5] = s_class_cast_038dd4e7[5];
  local_1cf[6] = s_class_cast_038dd4e7[6];
  local_1cf[7] = s_class_cast_038dd4e7[7];
  local_1ff = 0x63675f5f;
  local_200 = (string)0x8;
  local_1fb = 0;
  uStack_1f4 = 0;
  local_1c5 = 0;
  local_1c4 = 0;
  local_1b0 = &LAB_0209b86c;
  local_170 = 0x18;
  local_1c0 = 0;
  puStack_1b8 = &LAB_0209b824;
  local_1a0 = 0x22;
  local_19f[0] = s_GetShakeComponent_038d6513[0];
  local_19f[1] = s_GetShakeComponent_038d6513[1];
  local_19f[2] = s_GetShakeComponent_038d6513[2];
  local_19f[3] = s_GetShakeComponent_038d6513[3];
  local_19f[4] = s_GetShakeComponent_038d6513[4];
  local_19f[5] = s_GetShakeComponent_038d6513[5];
  local_19f[6] = s_GetShakeComponent_038d6513[6];
  cStack_198 = s_GetShakeComponent_038d6513[7];
  acStack_197[0] = s_GetShakeComponent_038d6513[8];
  acStack_197[1] = s_GetShakeComponent_038d6513[9];
  acStack_197[2] = s_GetShakeComponent_038d6513[10];
  acStack_197[3] = s_GetShakeComponent_038d6513[0xb];
  acStack_197[4] = s_GetShakeComponent_038d6513[0xc];
  acStack_197[5] = s_GetShakeComponent_038d6513[0xd];
  acStack_197[6] = s_GetShakeComponent_038d6513[0xe];
  local_190 = 0x746e;
  local_1f0 = 0;
  local_1e8 = &LAB_0209b794;
  local_1d8 = 0xffffffff;
  local_1a8 = 0xffffffff;
  local_178 = 0xffffffff;
  local_188 = &LAB_0209b8b4;
  puStack_180 = &LAB_0209b8fc;
  local_16f[0] = s_SetTargetPos_03976a14[0];
  local_16f[1] = s_SetTargetPos_03976a14[1];
  local_16f[2] = s_SetTargetPos_03976a14[2];
  local_16f[3] = s_SetTargetPos_03976a14[3];
  local_16f[4] = s_SetTargetPos_03976a14[4];
  local_16f[5] = s_SetTargetPos_03976a14[5];
  local_16f[6] = s_SetTargetPos_03976a14[6];
  local_16f[7] = s_SetTargetPos_03976a14[7];
  local_167 = 0x736f5074;
  local_163 = 0;
  local_162 = 0;
  local_150 = &LAB_0209b98c;
  local_148 = 0xffffffff;
  local_140 = 0x18;
  psVar29 = &local_200;
  local_160 = 0;
  puStack_158 = &LAB_0209b944;
  local_13f[0] = s_GetTargetPos_03a739cc[0];
  local_13f[1] = s_GetTargetPos_03a739cc[1];
  local_13f[2] = s_GetTargetPos_03a739cc[2];
  local_13f[3] = s_GetTargetPos_03a739cc[3];
  local_13f[4] = s_GetTargetPos_03a739cc[4];
  local_13f[5] = s_GetTargetPos_03a739cc[5];
  local_13f[6] = s_GetTargetPos_03a739cc[6];
  local_13f[7] = s_GetTargetPos_03a739cc[7];
  local_137 = 0x736f5074;
  local_133 = 0;
  local_132 = 0;
  local_120 = &LAB_0209ba1c;
  local_118 = 0xffffffff;
  local_130 = 0;
  puStack_128 = &LAB_0209b9d4;
  local_110 = 0x26;
  acStack_107[0] = s_GetCurrentTargetPos_03a738d4[8];
  acStack_107[1] = s_GetCurrentTargetPos_03a738d4[9];
  acStack_107[2] = s_GetCurrentTargetPos_03a738d4[10];
  acStack_107[3] = s_GetCurrentTargetPos_03a738d4[0xb];
  acStack_107[4] = s_GetCurrentTargetPos_03a738d4[0xc];
  acStack_107[5] = s_GetCurrentTargetPos_03a738d4[0xd];
  acStack_107[6] = s_GetCurrentTargetPos_03a738d4[0xe];
  local_100 = 0x736f5074;
  acStack_10f[0] = s_GetCurrentTargetPos_03a738d4[0];
  acStack_10f[1] = s_GetCurrentTargetPos_03a738d4[1];
  acStack_10f[2] = s_GetCurrentTargetPos_03a738d4[2];
  acStack_10f[3] = s_GetCurrentTargetPos_03a738d4[3];
  acStack_10f[4] = s_GetCurrentTargetPos_03a738d4[4];
  acStack_10f[5] = s_GetCurrentTargetPos_03a738d4[5];
  acStack_10f[6] = s_GetCurrentTargetPos_03a738d4[6];
  local_108 = s_GetCurrentTargetPos_03a738d4[7];
  local_e8 = 0xffffffff;
  local_f8 = &LAB_0209ba64;
  puStack_f0 = &LAB_0209baac;
  local_e0 = 0x24;
  local_df[0] = s_GetCameraParameter_03a73900[0];
  local_df[1] = s_GetCameraParameter_03a73900[1];
  local_df[2] = s_GetCameraParameter_03a73900[2];
  local_df[3] = s_GetCameraParameter_03a73900[3];
  local_df[4] = s_GetCameraParameter_03a73900[4];
  local_df[5] = s_GetCameraParameter_03a73900[5];
  local_df[6] = s_GetCameraParameter_03a73900[6];
  local_b8 = 0xffffffff;
  cStack_d8 = s_GetCameraParameter_03a73900[7];
  acStack_d7[0] = s_GetCameraParameter_03a73900[8];
  acStack_d7[1] = s_GetCameraParameter_03a73900[9];
  acStack_d7[2] = s_GetCameraParameter_03a73900[10];
  acStack_d7[3] = s_GetCameraParameter_03a73900[0xb];
  acStack_d7[4] = s_GetCameraParameter_03a73900[0xc];
  acStack_d7[5] = s_GetCameraParameter_03a73900[0xd];
  acStack_d7[6] = s_GetCameraParameter_03a73900[0xe];
  local_d0 = 0x726574;
  local_c8 = &LAB_0209baf4;
  puStack_c0 = &LAB_0209bb3c;
  local_b0 = 0xc;
  local_ab = 0x7761;
  local_af = 0x59746547;
  local_a9 = 0;
  local_88 = 0xffffffff;
  local_98 = &LAB_0209bb84;
  puStack_90 = &LAB_0209bbcc;
  local_a8 = 0;
  local_a0 = 0;
  do {
    uVar15 = *(ulong *)(psVar29 + 8);
    psVar2 = *(string **)(psVar29 + 0x10);
    if (((byte)*psVar29 & 1) == 0) {
      psVar2 = psVar29 + 1;
      uVar15 = (ulong)((byte)*psVar29 >> 1);
    }
    uVar15 = FUN_008e8ed4(local_80,psVar2,uVar15);
    uVar26 = plVar14[2];
    if (uVar26 != 0) {
      uVar19 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        unaff_x28 = uVar26 - 1 & uVar15;
      }
      else {
        unaff_x28 = uVar15;
        if (uVar26 <= uVar15) {
          uVar4 = 0;
          if (uVar26 != 0) {
            uVar4 = uVar15 / uVar26;
          }
          unaff_x28 = uVar15 - uVar4 * uVar26;
        }
      }
      plVar21 = *(long **)(*plVar30 + unaff_x28 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        psVar2 = psVar29 + 1;
        sVar17 = (ulong)((byte)*psVar29 >> 1);
        if (((byte)*psVar29 & 1) != 0) {
          psVar2 = *(string **)(psVar29 + 0x10);
          sVar17 = *(size_t *)(psVar29 + 8);
        }
        if (uVar19 < 2) {
          if (sVar17 == 0) {
            do {
              if (plVar21[1] != uVar15 && (plVar21[1] & uVar26 - 1) != unaff_x28) break;
              uVar19 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
              if ((*(byte *)(plVar21 + 2) & 1) != 0) {
                uVar19 = plVar21[3];
              }
              if (uVar19 == 0) goto LAB_02099fd8;
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          else {
            do {
              if (plVar21[1] != uVar15 && (plVar21[1] & uVar26 - 1) != unaff_x28) break;
              bVar3 = *(byte *)(plVar21 + 2);
              uVar19 = (ulong)(bVar3 >> 1);
              sVar1 = uVar19;
              if ((bVar3 & 1) != 0) {
                sVar1 = plVar21[3];
              }
              if (sVar1 == sVar17) {
                if ((bVar3 & 1) == 0) {
                  psVar22 = (string *)((long)plVar21 + 0x11);
                  psVar24 = psVar2;
                  while (*psVar22 == *psVar24) {
                    uVar19 = uVar19 - 1;
                    psVar22 = psVar22 + 1;
                    psVar24 = psVar24 + 1;
                    if (uVar19 == 0) goto LAB_02099fd8;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar21[4],psVar2,sVar17);
                  if (iVar7 == 0) goto LAB_02099fd8;
                }
              }
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
        }
        else if (sVar17 == 0) {
          do {
            uVar19 = plVar21[1];
            if (uVar19 != uVar15) {
              if (uVar26 <= uVar19) {
                uVar4 = 0;
                if (uVar26 != 0) {
                  uVar4 = uVar19 / uVar26;
                }
                uVar19 = uVar19 - uVar4 * uVar26;
              }
              if (uVar19 != unaff_x28) break;
            }
            uVar19 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
            if ((*(byte *)(plVar21 + 2) & 1) != 0) {
              uVar19 = plVar21[3];
            }
            if (uVar19 == 0) goto LAB_02099fd8;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar21[1];
            if (uVar19 != uVar15) {
              if (uVar26 <= uVar19) {
                uVar4 = 0;
                if (uVar26 != 0) {
                  uVar4 = uVar19 / uVar26;
                }
                uVar19 = uVar19 - uVar4 * uVar26;
              }
              if (uVar19 != unaff_x28) break;
            }
            bVar3 = *(byte *)(plVar21 + 2);
            uVar19 = (ulong)(bVar3 >> 1);
            sVar1 = uVar19;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar21[3];
            }
            if (sVar1 == sVar17) {
              if ((bVar3 & 1) == 0) {
                psVar22 = (string *)((long)plVar21 + 0x11);
                psVar24 = psVar2;
                while (*psVar22 == *psVar24) {
                  uVar19 = uVar19 - 1;
                  psVar22 = psVar22 + 1;
                  psVar24 = psVar24 + 1;
                  if (uVar19 == 0) goto LAB_02099fd8;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar21[4],psVar2,sVar17);
                if (iVar7 == 0) goto LAB_02099fd8;
              }
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    plVar21 = DAT_043f1798;
    plVar20 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar20 = plVar21;
    }
    plVar21 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x40,8);
    std::string::string((string *)(plVar21 + 2),psVar29);
    lVar23 = *(long *)(psVar29 + 0x18);
    lVar25 = *(long *)(psVar29 + 0x28);
    plVar21[6] = *(long *)(psVar29 + 0x20);
    plVar21[7] = lVar25;
    plVar21[5] = lVar23;
    *plVar21 = 0;
    plVar21[1] = uVar15;
    if ((uVar26 == 0) || (*(float *)(plVar14 + 5) * (float)uVar26 < (float)(plVar14[4] + 1))) {
      uVar26 = (ulong)(uVar26 < 3 || (uVar26 & uVar26 - 1) != 0) | uVar26 << 1;
      uVar19 = (ulong)((float)(plVar14[4] + 1) / *(float *)(plVar14 + 5));
      if (uVar19 <= uVar26) {
        uVar19 = uVar26;
      }
      FUN_008e9ae4(plVar30,uVar19);
      uVar26 = plVar14[2];
      if ((uVar26 & uVar26 - 1) == 0) {
        unaff_x28 = uVar26 - 1 & uVar15;
      }
      else if (uVar15 < uVar26) {
        unaff_x28 = uVar15;
      }
      else {
        uVar19 = 0;
        if (uVar26 != 0) {
          uVar19 = uVar15 / uVar26;
        }
        unaff_x28 = uVar15 - uVar19 * uVar26;
      }
    }
    lVar23 = *plVar30;
    plVar20 = *(long **)(lVar23 + unaff_x28 * 8);
    if (plVar20 == (long *)0x0) {
      *plVar21 = *plVar18;
      *plVar18 = (long)plVar21;
      *(long **)(lVar23 + unaff_x28 * 8) = plVar18;
      if (*plVar21 != 0) {
        uVar15 = *(ulong *)(*plVar21 + 8);
        if ((uVar26 & uVar26 - 1) == 0) {
          uVar15 = uVar15 & uVar26 - 1;
        }
        else if (uVar26 <= uVar15) {
          uVar19 = 0;
          if (uVar26 != 0) {
            uVar19 = uVar15 / uVar26;
          }
          uVar15 = uVar15 - uVar19 * uVar26;
        }
        plVar20 = (long *)(*plVar30 + uVar15 * 8);
        goto LAB_02099fc8;
      }
    }
    else {
      *plVar21 = *plVar20;
LAB_02099fc8:
      *plVar20 = (long)plVar21;
    }
    plVar14[4] = plVar14[4] + 1;
LAB_02099fd8:
    psVar29 = psVar29 + 0x30;
  } while (psVar29 != (string *)local_80);
  lVar25 = FUN_008cca50();
  lVar23 = 0;
  do {
    lVar16 = FUN_008e8c90(plVar30,lVar25 + lVar23);
    if (lVar16 != 0) {
      FUN_008f2aec(local_80,plVar30,lVar16);
      lVar16 = local_80[0];
      plVar18 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar16 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar16 + 0x10) & 1) != 0)) &&
           (lVar31 = *(long *)(lVar16 + 0x20), lVar31 != 0)) {
          plVar21 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar21 = plVar18;
          }
          uVar15 = (**(code **)(*plVar21 + 0xc0))(plVar21);
          if ((uVar15 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar21,lVar31,0,8);
              goto LAB_0209a1c4;
            }
          }
          (**(code **)(*plVar21 + 0x18))(plVar21,lVar31,0,8);
        }
LAB_0209a1c4:
        plVar18 = DAT_043f1798;
        plVar21 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar21 = plVar18;
        }
        uVar15 = (**(code **)(*plVar21 + 0xc0))(plVar21);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar21,lVar16,0,8);
            goto LAB_0209a17c;
          }
        }
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar16,0,8);
      }
    }
LAB_0209a17c:
    lVar23 = lVar23 + 0x18;
  } while (lVar23 != 0x300);
  pcVar28 = (char *)plVar14[0xc];
  sVar17 = strlen(pcVar28);
  iVar7 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0xe];
  sVar17 = strlen(pcVar28);
  iVar8 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0xf];
  sVar17 = strlen(pcVar28);
  iVar9 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0x12];
  sVar17 = strlen(pcVar28);
  iVar10 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0x15];
  sVar17 = strlen(pcVar28);
  iVar11 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0x18];
  sVar17 = strlen(pcVar28);
  iVar12 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0x1b];
  sVar17 = strlen(pcVar28);
  iVar13 = FUN_008f2c60(sVar17,pcVar28);
  lVar25 = local_a0;
  *(bool *)(plVar14 + 0xb) =
       (((((iVar8 != 0 || iVar7 != 0) || iVar9 != 0) || iVar10 != 0) || iVar11 != 0) || iVar12 != 0)
       || iVar13 != 0;
  plVar18 = DAT_043f1798;
  lVar23 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar25,0,8);
        plVar18 = DAT_043f1798;
        lVar23 = local_d0;
        goto joined_r0x0209a3c8;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar25,0,8);
    plVar18 = DAT_043f1798;
    lVar23 = local_d0;
  }
joined_r0x0209a3c8:
  lVar25 = local_100;
  local_d0 = lVar23;
  if (((local_e0 & 1) != 0) && (lVar23 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar18;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar18;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar23,0,8);
        plVar18 = DAT_043f1798;
        lVar25 = local_100;
        goto joined_r0x0209aaf4;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar23,0,8);
    plVar18 = DAT_043f1798;
    lVar25 = local_100;
  }
joined_r0x0209aaf4:
  lVar23 = local_130;
  local_100 = lVar25;
  if (((local_110 & 1) != 0) && (lVar25 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar18;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar18;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar25,0,8);
        plVar18 = DAT_043f1798;
        lVar23 = local_130;
        goto joined_r0x0209a530;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar25,0,8);
    plVar18 = DAT_043f1798;
    lVar23 = local_130;
  }
joined_r0x0209a530:
  lVar25 = local_160;
  local_130 = lVar23;
  if (((local_140 & 1) != 0) && (lVar23 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar18;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar18;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar23,0,8);
        plVar18 = DAT_043f1798;
        lVar25 = local_160;
        goto joined_r0x0209ab34;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar23,0,8);
    plVar18 = DAT_043f1798;
    lVar25 = local_160;
  }
joined_r0x0209ab34:
  lVar23 = local_190;
  local_160 = lVar25;
  if (((local_170 & 1) != 0) && (lVar25 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar18;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar18;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar25,0,8);
        plVar18 = DAT_043f1798;
        lVar23 = local_190;
        goto joined_r0x0209a698;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar25,0,8);
    plVar18 = DAT_043f1798;
    lVar23 = local_190;
  }
joined_r0x0209a698:
  lVar25 = local_1c0;
  local_190 = lVar23;
  if (((local_1a0 & 1) != 0) && (lVar23 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar18;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar18;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar23,0,8);
        plVar18 = DAT_043f1798;
        lVar25 = local_1c0;
        goto joined_r0x0209ab74;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar23,0,8);
    plVar18 = DAT_043f1798;
    lVar25 = local_1c0;
  }
joined_r0x0209ab74:
  lVar23 = local_1f0;
  local_1c0 = lVar25;
  if (((local_1d0 & 1) != 0) && (lVar25 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar18;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar18;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar25,0,8);
        plVar18 = DAT_043f1798;
        lVar23 = local_1f0;
        goto joined_r0x0209a800;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar25,0,8);
    plVar18 = DAT_043f1798;
    lVar23 = local_1f0;
  }
joined_r0x0209a800:
  DAT_043f1798 = plVar18;
  local_1f0 = lVar23;
  if ((((byte)local_200 & 1) != 0) && (lVar23 != 0)) {
    plVar30 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar18;
      plVar30 = plVar18;
    }
    uVar15 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar23,0,8);
        goto LAB_0209a8b0;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar23,0,8);
  }
LAB_0209a8b0:
  uVar27 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar27);
  (**(code **)*plVar14)(plVar14,uVar27);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  pcVar28 = (char *)((ulong)&local_218 | 1);
  if ((local_218 & 1) != 0) {
    pcVar28 = local_208;
  }
  FUN_001522a0(uVar27,pcVar28);
  pcVar28 = local_208;
  plVar14 = DAT_043f1798;
  if (((local_218 & 1) != 0) && (local_208 != (char *)0x0)) {
    plVar18 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar18 = plVar14;
    }
    uVar15 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar18,pcVar28,0,8);
        return;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,pcVar28,0,8);
  }
  return;
}


