/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f8bcc0; name: FUN_02f8bcc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02f8bcc0(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                 undefined2 *param_5,undefined8 *param_6,undefined8 *param_7,uint param_8,
                 undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined1 auVar23 [12];
  undefined8 uVar14;
  int *piVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar25;
  undefined1 auVar24 [16];
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  long local_310;
  undefined8 local_2c0;
  long *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  long local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float local_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  uint local_228;
  undefined4 local_224;
  undefined8 *local_220;
  undefined8 uStack_218;
  undefined1 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 local_1c0;
  ulong uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined *local_1a0;
  long *local_198;
  undefined1 *puStack_190;
  undefined4 local_188;
  undefined1 auStack_180 [152];
  undefined2 local_e8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  long local_b8;
  undefined2 local_b0 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint local_88;
  long local_80;
  
  lVar18 = *(long *)(param_2[5] + 0x50);
  if (*(char *)(lVar18 + 0x15df) != '\0') {
    puStack_190 = auStack_180;
    local_310 = 0;
    local_198 = (long *)0x0;
    local_188 = 0x90;
    local_1a0 = PTR_DAT_043887d0 + 0x10;
    uVar9 = local_2b0;
    uVar10 = uStack_2a8;
    if (*(char *)(param_2 + 4) == '\x02') {
      local_240 = 0;
      uStack_238 = 0;
      local_310 = FUN_02fd8ea4(0,&local_1a0,&local_240);
      uVar10 = uStack_2a8;
      uVar9 = local_2b0;
    }
    uStack_2a8 = uVar10;
    local_2b0 = uVar9;
    uVar12 = uStack_2a8._4_4_;
    uVar11 = local_2b0._4_4_;
    uVar8 = DAT_0388a148;
    uVar7 = DAT_0388a140;
    uVar6 = _UNK_03889a88;
    uVar10 = _DAT_03889a80;
    uVar5 = _UNK_03888d18;
    uVar9 = _DAT_03888d10;
    uVar3 = *(uint *)(lVar18 + 0x15d4);
    if (uVar3 != 0) {
      uVar38 = NEON_fmov(0x3f800000,4);
      uVar16 = 0;
      do {
        if (*(char *)(lVar18 + 0x1688) == '\0') {
          local_228 = (uint)uVar16;
        }
        else {
          local_228 = *(uint *)(*(long *)(lVar18 + 0x16a8) + uVar16 * 4);
        }
        puVar4 = (undefined8 *)
                 (*(long *)(lVar18 + 0x110) +
                 (-(ulong)(local_228 >> 0x1f) & 0xffffffe000000000 | (ulong)local_228 << 5));
        uStack_1a8 = puVar4[1];
        local_1b0 = *puVar4;
        if (*(char *)(lVar18 + 0x15dc) == '\0') {
          auVar24._8_8_ = uVar8;
          auVar24._0_8_ = uVar7;
          auVar26 = auVar24._0_12_;
          auVar28._8_8_ = uVar6;
          auVar28._0_8_ = uVar10;
          auVar23 = auVar28._0_12_;
          uStack_1d8 = uVar6;
          local_1e0 = uVar10;
          uStack_1c8 = uVar8;
          uStack_1d0 = uVar7;
          uStack_1b8 = uVar5;
          local_1c0 = uVar9;
        }
        else {
          auVar24 = *(undefined1 (*) [16])(*(long *)(lVar18 + 0x120) + (long)(int)local_228 * 0x10);
          fVar19 = auVar24._0_4_;
          auVar27._0_4_ = fVar19 + fVar19;
          fVar20 = auVar24._4_4_;
          auVar27._4_4_ = fVar20 + fVar20;
          auVar27._8_4_ = auVar24._8_4_ + auVar24._8_4_;
          fVar22 = auVar24._12_4_;
          auVar27._12_4_ = fVar22 + fVar22;
          auVar24 = NEON_ext(auVar24,auVar24,8,1);
          auVar28 = NEON_ext(auVar27,auVar27,8,1);
          fVar21 = auVar24._0_4_ * auVar28._0_4_;
          fVar43 = auVar27._8_4_ * fVar20 + auVar27._0_4_ * fVar22;
          fVar29 = auVar27._8_4_ * fVar19 - auVar27._4_4_ * fVar22;
          fVar25 = (float)uVar38;
          uStack_1b8 = (ulong)(uint)(fVar25 - (auVar27._0_4_ * fVar19 + auVar27._4_4_ * fVar20));
          local_1e0 = CONCAT44(auVar27._4_4_ * fVar19 + auVar27._8_4_ * fVar22,
                               fVar25 - (auVar27._4_4_ * fVar20 + fVar21));
          uStack_1d0 = CONCAT44(fVar25 - (auVar27._0_4_ * fVar19 + fVar21),
                                auVar27._4_4_ * fVar19 - auVar27._8_4_ * fVar22);
          auVar23._8_4_ = fVar29;
          auVar23._0_8_ = local_1e0;
          local_1c0 = CONCAT44(auVar27._8_4_ * fVar20 - auVar27._0_4_ * fVar22,
                               auVar27._8_4_ * fVar19 + auVar27._4_4_ * fVar22);
          uStack_1c8 = (ulong)(uint)fVar43;
          auVar26._8_4_ = fVar43;
          auVar26._0_8_ = uStack_1d0;
          uStack_1d8 = (ulong)(uint)fVar29;
        }
        local_240 = *param_3;
        uStack_238 = param_3[1];
        local_220 = &local_1e0;
        local_210 = *(undefined1 *)(param_3 + 6);
        local_20c = *(undefined4 *)((long)param_3 + 0x34);
        uStack_1f8 = param_3[9];
        local_200 = param_3[8];
        uStack_1e8 = param_3[0xb];
        local_1f0 = param_3[10];
        local_208 = *(undefined4 *)(param_3 + 7);
        local_230 = param_2[5];
        uStack_218 = 0;
        local_224 = 0x20;
        fVar21 = (float)((ulong)local_1b0 >> 0x20);
        fVar34 = (float)param_7[2];
        fVar35 = (float)((ulong)param_7[2] >> 0x20);
        fVar36 = (float)param_7[3];
        fVar37 = (float)((ulong)param_7[3] >> 0x20);
        fVar19 = (float)local_1b0;
        fVar30 = (float)*param_7;
        fVar31 = (float)((ulong)*param_7 >> 0x20);
        fVar32 = (float)param_7[1];
        fVar33 = (float)((ulong)param_7[1] >> 0x20);
        fVar20 = (float)uStack_1a8;
        fVar39 = (float)param_7[4];
        fVar40 = (float)((ulong)param_7[4] >> 0x20);
        fVar41 = (float)param_7[5];
        fVar42 = (float)((ulong)param_7[5] >> 0x20);
        fVar25 = (float)((ulong)local_1c0 >> 0x20);
        fVar22 = (float)local_1c0;
        fVar43 = (float)uStack_1b8;
        fVar29 = auVar26._4_4_;
        uStack_260 = CONCAT44(fVar40 * fVar43 + fVar31 * fVar22 + fVar35 * fVar25,
                              fVar39 * fVar43 + fVar30 * fVar22 + fVar34 * fVar25);
        uStack_258 = CONCAT44(fVar42 * fVar43 + fVar33 * fVar22 + fVar37 * fVar25,
                              fVar41 * fVar43 + fVar32 * fVar22 + fVar36 * fVar25);
        fVar22 = auVar26._0_4_;
        fVar25 = auVar26._8_4_;
        local_270 = fVar39 * fVar25 + fVar30 * fVar22 + fVar34 * fVar29;
        fStack_26c = fVar40 * fVar25 + fVar31 * fVar22 + fVar35 * fVar29;
        fStack_268 = fVar41 * fVar25 + fVar32 * fVar22 + fVar36 * fVar29;
        fStack_264 = fVar42 * fVar25 + fVar33 * fVar22 + fVar37 * fVar29;
        fVar22 = auVar23._0_4_;
        fVar29 = auVar23._4_4_;
        fVar25 = auVar23._8_4_;
        local_280 = fVar39 * fVar25 + fVar30 * fVar22 + fVar34 * fVar29;
        fStack_27c = fVar40 * fVar25 + fVar31 * fVar22 + fVar35 * fVar29;
        fStack_278 = fVar41 * fVar25 + fVar32 * fVar22 + fVar36 * fVar29;
        fStack_274 = fVar42 * fVar25 + fVar33 * fVar22 + fVar37 * fVar29;
        auVar24 = *(undefined1 (*) [16])(param_7 + 6);
        local_250 = CONCAT44(fVar40 * fVar20 + fVar31 * fVar19 + fVar35 * fVar21 + auVar24._4_4_,
                             fVar39 * fVar20 + fVar30 * fVar19 + fVar34 * fVar21 + auVar24._0_4_);
        uStack_248 = CONCAT44(fVar42 * fVar20 + fVar33 * fVar19 + fVar37 * fVar21 + auVar24._12_4_,
                              fVar41 * fVar20 + fVar32 * fVar19 + fVar36 * fVar21 + auVar24._8_4_);
        local_2c0 = *param_2;
        local_2b8 = (long *)param_2[1];
        uVar1 = param_2[2];
        uVar2 = param_2[3];
        local_2b0._4_4_ = (undefined4)((ulong)uVar1 >> 0x20);
        uStack_2a8._0_4_ = (undefined4)uVar2;
        uStack_2a8._4_4_ = (undefined4)((ulong)uVar2 >> 0x20);
        local_2a0 = param_2[4];
        local_290 = param_2[6];
        uStack_288 = param_2[7];
        if (*(char *)(param_2 + 4) == '\x02') {
          piVar15 = (int *)(lVar18 + 0x20);
          if (*(int *)(lVar18 + 0x30) != 0) {
            piVar15 = (int *)(*(long *)(lVar18 + 0x28) +
                             (long)*(int *)(lVar18 + 0x34) * (long)(int)local_228);
          }
          *(int *)(local_310 + 0x20) =
               (int)*(undefined8 *)
                     (*(long *)(*(long *)(*(long *)(lVar18 + 0x18) + 0x18) + (long)*piVar15 * 8) +
                     0x10);
          local_298 = local_310;
        }
        else {
          piVar15 = (int *)(lVar18 + 0x20);
          if (*(int *)(lVar18 + 0x30) != 0) {
            piVar15 = (int *)(*(long *)(lVar18 + 0x28) +
                             (long)*(int *)(lVar18 + 0x34) * (long)(int)local_228);
          }
          local_298 = *(long *)(*(long *)(*(long *)(*(long *)(lVar18 + 0x18) + 0x18) +
                                         (long)*piVar15 * 8) + 0xa0);
        }
        lVar17 = *param_1;
        if (local_2b8 == (long *)0x0) {
LAB_02f8c0bc:
          uStack_2a8 = uVar2;
          local_2b0 = uVar1;
          uVar12 = uStack_2a8._4_4_;
          uVar11 = local_2b0._4_4_;
          uVar1 = local_2b0;
          local_2b0._4_4_ = uVar11;
          uVar2 = uStack_2a8;
          uStack_2a8._4_4_ = uVar12;
          (**(code **)(lVar17 + (ulong)*(byte *)(local_298 + 0x18) * 0xf8 +
                       (ulong)*(byte *)(param_4 + 0x18) * 8 + 0xa0))
                    (param_1,&local_2c0,&local_240,param_4,param_5,param_6,&local_280,param_8 & 1,
                     param_9);
          uVar2 = uStack_2a8;
          uVar1 = local_2b0;
        }
        else {
          local_2b0._0_2_ = (undefined2)uVar1;
          local_b0[0] = (undefined2)local_2b0;
          *(undefined4 *)((undefined8 *)((ulong)local_b0 | 4) + 1) = uStack_2a8._4_4_;
          *(undefined8 *)((ulong)local_b0 | 4) = CONCAT44((undefined4)uStack_2a8,local_2b0._4_4_);
          local_e8[0] = *param_5;
          uVar14 = *(undefined8 *)(param_5 + 2);
          *(undefined4 *)((undefined8 *)((ulong)local_e8 | 4) + 1) = *(undefined4 *)(param_5 + 6);
          *(undefined8 *)((ulong)local_e8 | 4) = uVar14;
          local_d8 = *param_6;
          local_d0 = param_6[1];
          local_c8 = param_6[2];
          local_c0 = *(undefined4 *)(param_6 + 3);
          uVar11 = local_2b0._4_4_;
          local_2b0 = uVar1;
          uVar12 = uStack_2a8._4_4_;
          uStack_2a8 = uVar2;
          local_b8 = param_4;
          local_a0 = local_240;
          uStack_98 = uStack_238;
          local_90 = local_230;
          local_88 = local_228;
          local_80 = local_298;
          uVar1 = local_2b0;
          local_2b0._4_4_ = uVar11;
          uVar2 = uStack_2a8;
          uStack_2a8._4_4_ = uVar12;
          uVar13 = (**(code **)(*local_2b8 + 0x40))(local_2b8,5,(param_8 ^ 1) & 1,local_b0,local_e8)
          ;
          uVar2 = uStack_2a8;
          uVar1 = local_2b0;
          if ((uVar13 & 1) != 0) {
            goto LAB_02f8c0bc;
          }
        }
        uStack_2a8 = uVar2;
        local_2b0 = uVar1;
        uVar12 = uStack_2a8._4_4_;
        uVar11 = local_2b0._4_4_;
        uVar16 = uVar16 + 1;
      } while (uVar3 != uVar16);
    }
    uStack_2a8._4_4_ = uVar12;
    local_2b0._4_4_ = uVar11;
    uVar12 = uStack_2a8._4_4_;
    uVar11 = local_2b0._4_4_;
    local_1a0 = PTR_DAT_043724f0 + 0x10;
    if (local_198 != (long *)0x0) {
      uVar9 = local_2b0;
      local_2b0._4_4_ = uVar11;
      uVar10 = uStack_2a8;
      uStack_2a8._4_4_ = uVar12;
      (**(code **)(*local_198 + 8))();
    }
  }
  return;
}


