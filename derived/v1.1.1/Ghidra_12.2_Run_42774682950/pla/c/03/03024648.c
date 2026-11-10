/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03024648; name: FUN_03024648
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_03024648(long param_1,long param_2,undefined8 *param_3,ulong param_4,ulong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float fVar11;
  undefined1 auVar10 [16];
  float fVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 local_170;
  undefined8 uStack_168;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  uint local_d0 [32];
  
  FUN_03025120(param_2 + 0x530,*(long *)(param_1 + 0x18),
               *(long *)(param_2 + 0x150) +
               (ulong)*(uint *)(*(long *)(param_2 + 0x38) +
                                ((ulong)*(uint *)(*(long *)(param_1 + 0x18) + 8) & 0xffffff) * 0xc0
                               + 0x80) * 0x80,1,local_d0);
  uVar3 = *(uint *)(*(long *)(param_1 + 0x18) + 8);
  lVar6 = *(long *)(param_2 + 0x38);
  uStack_168 = local_d0._56_8_;
  local_170 = local_d0._48_8_;
  uVar5 = FUN_03024d70();
  puVar1 = (undefined8 *)
           (*(long *)(param_2 + 0x150) +
           (ulong)*(uint *)(lVar6 + ((ulong)uVar3 & 0xffffff) * 0xc0 + 0x80) * 0x80);
  puVar8 = (undefined8 *)
           (*(long *)(param_2 + 0x150) +
           (ulong)*(uint *)(*(long *)(param_2 + 0x38) + (uVar5 & 0xffffff) * 0xc0 + 0x80) * 0x80);
  if (((param_4 & 1) == 0) && ((param_5 & 1) == 0)) {
    puVar7 = puVar1;
  }
  else {
    local_e0 = 0;
    uStack_d8 = 0;
    bVar4 = (param_4 & 1) == 0;
    local_f0 = 0;
    uStack_e8 = 0;
    puVar2 = puVar1;
    if (bVar4) {
      puVar2 = puVar8;
    }
    local_100 = 0;
    if (bVar4) {
      puVar8 = &local_150;
    }
    local_110 = 0;
    uStack_108 = 0;
    puVar7 = &local_150;
    if (bVar4) {
      puVar7 = puVar1;
    }
    local_f8 = 0xff000000000000;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    uStack_148 = _UNK_0388a138;
    local_150 = _DAT_0388a130;
    uVar5 = *(ulong *)(param_2 + 0x540);
    if (bVar4) {
      uVar5 = *(ulong *)(param_2 + 0x540) ^ 0x8000000080000000;
    }
    FUN_03026260(param_2 + 0x540,local_d0,puVar2,&local_150,&local_160);
    fVar12 = (float)(uVar5 >> 0x20);
    local_170._0_4_ = local_d0[0xc];
    local_170._4_4_ = local_d0[0xd];
    uStack_168._0_4_ = local_d0[0xe];
    uStack_168._4_4_ = local_d0[0xf];
    uStack_168 = CONCAT44(uStack_168._4_4_ + fVar12 * fStack_154,
                          (float)uStack_168 + (float)uVar5 * fStack_158);
    local_170 = CONCAT44(local_170._4_4_ + fVar12 * fStack_15c,
                         (float)local_170 + (float)uVar5 * local_160);
  }
  FUN_03026260(param_2 + 0x540,local_d0,puVar7,puVar8,&local_160);
  fVar12 = (float)*(undefined8 *)(param_2 + 0x540);
  fVar11 = (float)((ulong)*(undefined8 *)(param_2 + 0x540) >> 0x20);
  if (3 < (int)local_d0[0]) {
    local_d0[0] = 4;
  }
  auVar10._0_4_ = (float)local_170 - ((float)local_170 + fVar12 * local_160);
  auVar10._4_4_ = local_170._4_4_ - (local_170._4_4_ + fVar11 * fStack_15c);
  auVar10._8_4_ = (float)uStack_168 - ((float)uStack_168 + fVar12 * fStack_158);
  auVar10._12_4_ = uStack_168._4_4_ - (uStack_168._4_4_ + fVar11 * fStack_154);
  fVar12 = (float)*param_3;
  auVar19._0_4_ = (float)local_170 - fVar12;
  fVar11 = (float)((ulong)*param_3 >> 0x20);
  auVar19._4_4_ = local_170._4_4_ - fVar11;
  auVar19._8_4_ = (float)uStack_168 - fVar12;
  auVar19._12_4_ = uStack_168._4_4_ - fVar11;
  auVar14 = NEON_fmin(auVar19,ZEXT816(0),4);
  auVar16._8_4_ = 0x34000000;
  auVar16._0_8_ = 0x3400000034000000;
  auVar16._12_4_ = 0x34000000;
  auVar10 = NEON_fmax(auVar10,auVar16,4);
  auVar17 = NEON_frecpe(auVar10,4);
  auVar19 = NEON_frecps(auVar10,auVar17,4);
  auVar18._0_4_ = auVar17._0_4_ * auVar19._0_4_;
  auVar18._4_4_ = auVar17._4_4_ * auVar19._4_4_;
  auVar18._8_4_ = auVar17._8_4_ * auVar19._8_4_;
  auVar18._12_4_ = auVar17._12_4_ * auVar19._12_4_;
  auVar10 = NEON_frecps(auVar10,auVar18,4);
  auVar17._0_4_ = auVar18._0_4_ * auVar10._0_4_;
  auVar17._4_4_ = auVar18._4_4_ * auVar10._4_4_;
  auVar17._8_4_ = auVar18._8_4_ * auVar10._8_4_;
  auVar17._12_4_ = auVar18._12_4_ * auVar10._12_4_;
  fVar12 = ((float)local_170 - auVar14._0_4_) * auVar17._0_4_;
  auVar15._0_8_ = CONCAT44((local_170._4_4_ - auVar14._4_4_) * auVar17._4_4_,fVar12);
  auVar15._8_4_ = ((float)uStack_168 - auVar14._8_4_) * auVar17._8_4_;
  auVar15._12_4_ = (uStack_168._4_4_ - auVar14._12_4_) * auVar17._12_4_;
  auVar14._8_8_ = auVar17._8_8_;
  if (local_d0[0] < 4) {
    auVar14._0_8_ = NEON_fmov(0x3f800000,4);
    switch(local_d0[0]) {
    case 1:
      auVar14._4_4_ = fVar12;
      auVar14._0_4_ = fVar12;
      auVar14._8_8_ = 0;
      break;
    case 2:
      auVar14._0_8_ = NEON_fminp(auVar15._0_8_,auVar15._0_8_,4);
      break;
    case 3:
      uVar9 = NEON_fminp(auVar15._0_8_,auVar15._0_8_,4);
      uVar13 = CONCAT44(auVar15._8_4_,auVar15._8_4_);
      auVar14._0_8_ = NEON_fmin(uVar13,uVar9,4);
    }
  }
  else {
    auVar14._0_4_ = NEON_fminnmv(auVar15,4);
    auVar14._4_4_ = auVar14._0_4_;
    auVar14._8_8_ = 0;
  }
  return auVar14;
}


