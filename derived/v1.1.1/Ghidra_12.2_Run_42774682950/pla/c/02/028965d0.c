/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028965d0; name: FUN_028965d0
 */


bool FUN_028965d0(undefined4 param_1,undefined4 param_2,long param_3,long *param_4,
                 undefined1 (*param_5) [12],undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  int iVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  long local_270;
  undefined8 local_268;
  long local_260;
  undefined8 local_258;
  long local_250;
  undefined8 local_248;
  undefined1 local_240;
  undefined8 local_23c;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 local_220;
  ulong uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  int local_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined **local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined1 local_1ba;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180 [2];
  undefined8 local_170;
  ulong uStack_168;
  undefined1 *local_160;
  
  local_198 = CONCAT44(local_198._4_4_,0xffffffff);
  local_190 = 0;
  local_188 = 0;
  local_180[0] = 0;
  local_1a0 = PTR_DAT_04387f60 + 0x10;
  uVar12 = (undefined4)((ulong)*(undefined8 *)(*param_5 + 8) >> 0x20);
  local_170 = *(undefined8 *)*param_5;
  auVar13._12_4_ = uVar12;
  auVar13._0_12_ = *param_5;
  auVar1._12_4_ = uVar12;
  auVar1._0_12_ = *param_5;
  auVar13 = NEON_ext(auVar13,auVar1,8,1);
  local_220 = 0;
  uStack_218 = 0;
  uStack_168 = (ulong)auVar13._0_4_;
  local_160 = &DAT_3f0000003f000000;
  local_200 = (**(code **)(*param_4 + 0x20))(param_4,&local_1a0,&local_220);
  if (local_200 == -1) {
    bVar8 = false;
  }
  else {
    local_198 = 0xffffffff;
    local_190 = 1;
    local_1a0 = &DAT_0430a930;
    memset(local_180,0xff,0x104);
    local_1d0 = 0xffffffff;
    local_1c8 = 0;
    local_1bc = 1;
    local_1ba = 1;
    uStack_1fc = 100000;
    local_1ec = 0x7f7fffee;
    local_1f4 = 0;
    local_1d8 = 0xffffffffffffffff;
    local_1e8 = 0;
    local_1c0 = 0x10100;
    local_220 = *(undefined8 *)*param_5;
    uStack_218 = *(ulong *)(*param_5 + 8) & 0xffffffff;
    fVar11 = (float)param_6[1];
    fVar9 = (float)*param_6;
    fVar10 = (float)((ulong)*param_6 >> 0x20);
    fVar14 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
    fVar16 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
    uVar21 = CONCAT44(fVar16,fVar14);
    uVar19 = NEON_frsqrte(uVar21,4);
    fVar18 = (float)uVar19;
    fVar20 = (float)((ulong)uVar19 >> 0x20);
    uVar19 = NEON_frsqrts(uVar21,CONCAT44(fVar20 * fVar20,fVar18 * fVar18),4);
    fVar18 = fVar18 * (float)uVar19;
    fVar20 = fVar20 * (float)((ulong)uVar19 >> 0x20);
    uVar21 = NEON_frsqrts(uVar21,CONCAT44(fVar20 * fVar20,fVar18 * fVar18),4);
    iVar15 = -(uint)(fVar14 <= 0.0);
    iVar17 = -(uint)(fVar16 <= 0.0);
    fVar18 = (float)uVar21 * fVar18;
    fVar20 = (float)((ulong)uVar21 >> 0x20) * fVar20;
    fVar14 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                             CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                      CONCAT11((byte)((uint)fVar18 >> 8) &
                                               ~(byte)((uint)iVar15 >> 8),
                                               SUB41(fVar18,0) & ~(byte)iVar15)));
    fVar16 = (float)(CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                              CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                       CONCAT15((byte)((uint)fVar20 >> 8) &
                                                ~(byte)((uint)iVar17 >> 8),
                                                CONCAT14(SUB41(fVar20,0) & ~(byte)iVar17,fVar14))))
                    >> 0x20);
    local_240 = 0;
    uStack_1a8 = CONCAT44(fVar16 * 0.0,fVar11 * fVar14);
    local_1b0 = CONCAT44(fVar10 * fVar16,fVar9 * fVar14);
    local_234 = 0;
    local_270 = 0;
    local_268 = -0x8000000000000000;
    local_260 = 0;
    local_258 = -0x8000000000000000;
    local_250 = 0;
    local_248 = -0x8000000000000000;
    local_23c = 0xffffffff00000000;
    uStack_208 = DAT_0388a148;
    local_210 = DAT_0388a140;
    uStack_228 = 0x7f7fffee;
    uStack_224 = 0x7f7fffee;
    local_230 = 0x7f7fffee7f7fffee;
    local_1f8 = param_2;
    local_1f0 = param_1;
    local_1e0 = &local_1a0;
    iVar15 = FUN_031b0170(*(undefined8 *)(*(long *)(param_3 + 0x10) + 0x130),&local_220,&local_270);
    lVar5 = local_248;
    bVar8 = iVar15 != 0;
    if (bVar8) {
      auVar3._8_4_ = uStack_228;
      auVar3._0_8_ = local_230;
      auVar2._8_4_ = uStack_228;
      auVar2._0_8_ = local_230;
      auVar2._12_4_ = uStack_224;
      auVar3._12_4_ = uStack_224;
      auVar13 = NEON_ext(auVar2,auVar3,8,1);
      param_7[1] = (ulong)auVar13._0_4_;
      *param_7 = local_230;
      *(uint *)(param_7 + 2) = local_23c._4_4_ >> 0x16;
      *(uint *)((long)param_7 + 0x14) = local_23c._4_4_ & 0x3fffff;
    }
    puVar4 = PTR_PTR_0434a080;
    uVar7 = (ulong)local_248._4_4_;
    local_248 = (ulong)local_248._4_4_ << 0x20;
    if ((-1 < lVar5) && (local_250 != 0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,local_250,(uVar7 & 0x3fffffff) << 4);
    }
    lVar5 = local_258;
    uVar6 = local_258._4_4_;
    local_250 = 0;
    local_248 = CONCAT44(0x80000000,(undefined4)local_248);
    local_258 = (ulong)local_258._4_4_ << 0x20;
    if ((-1 < lVar5) && (local_260 != 0)) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_260,uVar6 << 2);
    }
    lVar5 = local_268;
    uVar6 = local_268._4_4_;
    local_260 = 0;
    local_258 = CONCAT44(0x80000000,(undefined4)local_258);
    local_268 = (ulong)local_268._4_4_ << 0x20;
    if ((-1 < lVar5) && (local_270 != 0)) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_270,uVar6 << 2);
    }
  }
  return bVar8;
}


