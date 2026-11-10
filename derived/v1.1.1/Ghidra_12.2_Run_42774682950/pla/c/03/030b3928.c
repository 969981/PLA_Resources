/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030b3928; name: FUN_030b3928
 */


void FUN_030b3928(undefined1 param_1 [16],undefined4 param_2,float param_3,long param_4,long param_5
                 ,long param_6,uint param_7,ushort param_8,long param_9,undefined1 (*param_10) [16],
                 undefined8 param_11,long param_12,undefined1 (*param_13) [16],undefined8 param_14,
                 undefined8 param_15)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar17;
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  ulong local_230 [9];
  undefined1 (*local_1e8) [16];
  undefined8 uStack_1e0;
  uint local_1d8;
  long local_1d0;
  long local_1c8;
  undefined1 (*local_1c0) [16];
  undefined8 uStack_1b8;
  uint local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 *local_180;
  undefined8 *puStack_178;
  undefined8 *local_170;
  ulong *puStack_168;
  undefined1 auStack_160 [16];
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
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined2 local_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  ushort uStack_80;
  undefined8 local_78;
  long local_70;
  undefined1 local_68;
  
  uVar4 = uStack_82;
  uVar3 = uStack_84;
  local_180 = (undefined1 *)&local_280;
  local_230[6] = 0;
  local_230[7] = 0;
  local_230[4] = 0;
  local_230[5] = 0;
  local_230[2] = 0;
  local_230[3] = 0;
  local_230[1] = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_150 = CONCAT44((float)*(double *)(param_10[1] + 8),(float)*(double *)param_10[1]);
  uStack_148 = (ulong)(uint)(float)*(double *)param_10[2];
  local_78 = *(undefined8 *)(param_6 + 0x40);
  plVar6 = *(long **)(*(long *)(param_6 + 8) + 0x4b8);
  local_140 = CONCAT44((float)*(double *)(param_13[1] + 8),(float)*(double *)param_13[1]);
  uStack_138 = (ulong)(uint)(float)*(double *)param_13[2];
  auVar16 = *param_10;
  fVar15 = auVar16._0_4_;
  auVar18._0_4_ = fVar15 + fVar15;
  fVar9 = auVar16._4_4_;
  auVar18._4_4_ = fVar9 + fVar9;
  auVar18._8_4_ = auVar16._8_4_ + auVar16._8_4_;
  fVar17 = auVar16._12_4_;
  auVar18._12_4_ = fVar17 + fVar17;
  auVar14 = NEON_ext(auVar16,auVar16,8,1);
  auVar13 = NEON_ext(auVar18,auVar18,8,1);
  fVar11 = auVar14._0_4_ * auVar13._0_4_;
  uVar12 = NEON_fmov(0x3f800000,4);
  fVar8 = (float)uVar12;
  uStack_f8 = (ulong)(uint)(auVar18._8_4_ * fVar15 - auVar18._4_4_ * fVar17);
  uStack_108 = auVar16._8_8_;
  local_110 = auVar16._0_8_;
  uStack_100 = CONCAT44(auVar18._4_4_ * fVar15 + auVar18._8_4_ * fVar17,
                        fVar8 - (auVar18._4_4_ * fVar9 + fVar11));
  local_f0 = CONCAT44(fVar8 - (auVar18._0_4_ * fVar15 + fVar11),
                      auVar18._4_4_ * fVar15 - auVar18._8_4_ * fVar17);
  uStack_d8 = (ulong)(uint)(fVar8 - (auVar18._0_4_ * fVar15 + auVar18._4_4_ * fVar9));
  uStack_e8 = (ulong)(uint)(auVar18._8_4_ * fVar9 + auVar18._0_4_ * fVar17);
  uStack_e0 = CONCAT44(auVar18._8_4_ * fVar9 - auVar18._0_4_ * fVar17,
                       auVar18._8_4_ * fVar15 + auVar18._4_4_ * fVar17);
  auVar16 = *param_13;
  fVar11 = auVar16._0_4_;
  auVar13._0_4_ = fVar11 + fVar11;
  fVar9 = auVar16._4_4_;
  auVar13._4_4_ = fVar9 + fVar9;
  auVar13._8_4_ = auVar16._8_4_ + auVar16._8_4_;
  fVar17 = auVar16._12_4_;
  auVar13._12_4_ = fVar17 + fVar17;
  auVar16 = NEON_ext(auVar16,auVar16,8,1);
  auVar18 = NEON_ext(auVar13,auVar13,8,1);
  fVar15 = auVar16._0_4_ * auVar18._0_4_;
  uStack_c0 = CONCAT44(fVar8 - (auVar13._0_4_ * fVar11 + fVar15),
                       auVar13._4_4_ * fVar11 - auVar13._8_4_ * fVar17);
  local_d0 = CONCAT44(auVar13._4_4_ * fVar11 + auVar13._8_4_ * fVar17,
                      fVar8 - (auVar13._4_4_ * fVar9 + fVar15));
  uStack_a8 = (ulong)(uint)(fVar8 - (auVar13._0_4_ * fVar11 + auVar13._4_4_ * fVar9));
  local_b0 = CONCAT44(auVar13._8_4_ * fVar9 - auVar13._0_4_ * fVar17,
                      auVar13._8_4_ * fVar11 + auVar13._4_4_ * fVar17);
  uStack_c8 = (ulong)(uint)(auVar13._8_4_ * fVar11 - auVar13._4_4_ * fVar17);
  uStack_b8 = (ulong)(uint)(auVar13._8_4_ * fVar9 + auVar13._0_4_ * fVar17);
  cVar1 = *(char *)(param_4 + 0x90);
  uStack_84 = (undefined2)param_7;
  uStack_82 = (undefined2)(param_7 >> 0x10);
  if (cVar1 == '\0') {
    local_8c = (undefined1)(int)(param_3 / 255.0);
    local_90 = param_2;
    local_8a = param_1._2_2_;
LAB_030b3b6c:
    uStack_88 = 0;
    uStack_86 = 0;
    uStack_80 = param_8 & 0xffcf;
  }
  else {
    if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      local_90 = 0;
      local_8c = 0xff;
      local_8a = 0;
      goto LAB_030b3b6c;
    }
    uStack_84 = uVar3;
    uStack_82 = uVar4;
    if (cVar1 == '\x03') {
      local_90 = 0;
      local_8c = 0xff;
      local_8a = 0;
      uStack_88 = 0;
      uStack_86 = 0;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_80 = 0;
      bVar2 = *(byte *)(param_4 + 0x95);
      goto joined_r0x030b3d08;
    }
  }
  bVar2 = *(byte *)(param_4 + 0x95);
joined_r0x030b3d08:
  if ((bVar2 & 1) != 0) {
    uStack_148 = CONCAT44(*(float *)(param_4 + 0xec) + 0.0,
                          (float)*(double *)param_10[2] + *(float *)(param_4 + 0xe8));
    local_150 = CONCAT44((float)*(double *)(param_10[1] + 8) + *(float *)(param_4 + 0xe4),
                         (float)*(double *)param_10[1] + *(float *)(param_4 + 0xe0));
    uStack_138 = CONCAT44(*(float *)(param_4 + 0xfc) + 0.0,
                          (float)*(double *)param_13[2] + *(float *)(param_4 + 0xf8));
    local_140 = CONCAT44((float)*(double *)(param_13[1] + 8) + *(float *)(param_4 + 0xf4),
                         (float)*(double *)param_13[1] + *(float *)(param_4 + 0xf0));
  }
  if ((param_7 >> 7 & 1) == 0) {
    local_a0 = 0x42c8000042c80000;
    uStack_98 = 0xbd4ccccdbd4ccccd;
  }
  else {
    local_a0 = 0;
    uStack_98 = local_a0;
  }
  local_70 = 0;
  local_68 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  uVar12 = *(undefined8 *)param_10[4];
  fVar11 = (float)((int)(short)uVar12 << 0x10);
  fVar8 = (float)((int)(short)((ulong)uVar12 >> 0x10) << 0x10);
  auVar16._0_8_ = CONCAT44(fVar8,fVar11);
  auVar16._8_4_ = (float)((int)(short)((ulong)uVar12 >> 0x20) << 0x10);
  auVar16._12_4_ = (float)((int)(short)((ulong)uVar12 >> 0x30) << 0x10);
  uStack_198 = auVar16._8_8_;
  uVar12 = *(undefined8 *)param_13[4];
  fVar15 = (float)((int)(short)uVar12 << 0x10);
  fVar9 = (float)((int)(short)((ulong)uVar12 >> 0x10) << 0x10);
  auVar14._0_8_ = CONCAT44(fVar9,fVar15);
  auVar14._8_4_ = (float)((int)(short)((ulong)uVar12 >> 0x20) << 0x10);
  auVar14._12_4_ = (float)((int)(short)((ulong)uVar12 >> 0x30) << 0x10);
  uStack_188 = auVar14._8_8_;
  local_1a0 = auVar16._0_8_;
  local_190 = auVar14._0_8_;
  if ((bVar2 >> 1 & 1) != 0) {
    auVar16._0_8_ =
         CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xc0) >> 0x20) * fVar8,
                  (float)*(undefined8 *)(param_4 + 0xc0) * fVar11);
    auVar16._8_4_ = (float)*(undefined8 *)(param_4 + 200) * auVar16._8_4_;
    auVar16._12_4_ = (float)((ulong)*(undefined8 *)(param_4 + 200) >> 0x20) * auVar16._12_4_;
    auVar14._0_8_ =
         CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xd0) >> 0x20) * fVar9,
                  (float)*(undefined8 *)(param_4 + 0xd0) * fVar15);
    auVar14._8_4_ = (float)*(undefined8 *)(param_4 + 0xd8) * auVar14._8_4_;
    auVar14._12_4_ = (float)((ulong)*(undefined8 *)(param_4 + 0xd8) >> 0x20) * auVar14._12_4_;
    uStack_198 = auVar16._8_8_;
    uStack_188 = auVar14._8_8_;
    local_1a0 = auVar16._0_8_;
    local_190 = auVar14._0_8_;
  }
  auVar16 = NEON_ext(auVar16,auVar16,8,1);
  auVar18 = NEON_ext(auVar14,auVar14,8,1);
  fVar11 = auVar18._4_4_ + auVar16._4_4_;
  uVar12 = NEON_frecpe(CONCAT44(fVar11,fVar11),4);
  uVar10 = NEON_frecps(CONCAT44(fVar11,fVar11),uVar12,4);
  iVar7 = -(uint)(fVar11 == 0.0);
  puStack_178 = &local_270;
  puStack_168 = local_230;
  local_230[0] = (ulong)(uint)(*(float *)(param_5 + 0x80) * *(float *)(param_5 + 0x38) *
                              (float)((uint)((float)uVar12 * (float)uVar10) &
                                     CONCAT13(~(byte)((uint)iVar7 >> 0x18),
                                              CONCAT12(~(byte)((uint)iVar7 >> 0x10),
                                                       CONCAT11(~(byte)((uint)iVar7 >> 8),
                                                                ~(byte)iVar7)))));
  local_170 = puStack_178;
  if (plVar6 == (long *)0x0) {
    uVar5 = 0x24;
    local_180 = (undefined1 *)&local_280;
  }
  else {
    uVar5 = (**(code **)(*plVar6 + 0x48))(plVar6,param_9,param_12);
  }
  local_1a8 = *(long *)(param_9 + 0x78);
  if ((local_1a8 == 0) || (*(char *)(local_1a8 + 0x18) != '\x15')) {
    local_1b0 = 0xffffffff;
  }
  else {
    plVar6 = (long *)(local_1a8 + (ulong)(uVar5 >> 5 & 7) * 8 + 0x48);
    local_1a8 = *plVar6;
    if (local_1a8 == 0) {
      local_1a8 = 0;
    }
    else {
      local_1a8 = local_1a8 + (long)plVar6;
    }
    local_1b0 = (uVar5 >> 5) << 0x1d | 0x1fffffff;
  }
  local_1d0 = *(long *)(param_12 + 0x78);
  local_230[8] = param_12;
  if ((local_1d0 == 0) || (*(char *)(local_1d0 + 0x18) != '\x15')) {
    local_1d8 = 0xffffffff;
  }
  else {
    plVar6 = (long *)(local_1d0 + (ulong)(uVar5 >> 2 & 7) * 8 + 0x48);
    local_1d0 = *plVar6;
    if (local_1d0 == 0) {
      local_1d0 = 0;
    }
    else {
      local_1d0 = local_1d0 + (long)plVar6;
    }
    local_1d8 = (uVar5 >> 2) << 0x1d | 0x1fffffff;
  }
  local_1e8 = param_13;
  uStack_1e0 = param_14;
  local_1c8 = param_9;
  local_1c0 = param_10;
  uStack_1b8 = param_11;
  local_70 = param_6;
  FUN_030ad530(param_5,param_4,auStack_160,&local_1a0,0xff,&local_1c8,local_230 + 8,param_15);
  return;
}


