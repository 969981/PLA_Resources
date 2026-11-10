/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7a49c; name: FUN_02f7a49c
 */


void FUN_02f7a49c(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,undefined8 *param_7,byte param_8,long param_9)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 uStack_f8;
  ushort local_f0;
  undefined8 local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  byte local_80;
  long local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x38d490) == 0) {
    lVar2 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar2;
    lVar5 = *(long *)(lVar2 + 0x10);
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
  }
  if (lVar5 != 0) {
    puVar1 = *(undefined8 **)(lVar5 + 8);
    uVar3 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *(ulong *)(lVar5 + 0x10)) &&
       (*(ulong *)(lVar5 + 8) = uVar3, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtCompoundGetClosestPoints";
      uVar7 = nn::os::GetSystemTick();
      puVar1[1] = uVar7;
    }
  }
  uStack_f8 = *(undefined8 *)(param_6 + 0x28);
  local_f0 = 0;
  local_80 = param_8 & 1;
  local_c0 = *param_7;
  uStack_b8 = param_7[1];
  local_b0 = param_7[2];
  uStack_a8 = param_7[3];
  local_a0 = param_7[4];
  uStack_98 = param_7[5];
  local_78 = param_9;
  uStack_88 = SUB168(*(undefined1 (*) [16])(param_7 + 6),8);
  local_90 = SUB168(*(undefined1 (*) [16])(param_7 + 6),0);
  local_100 = param_4;
  local_e8 = param_1;
  lStack_e0 = param_2;
  local_d8 = param_3;
  lStack_d0 = param_6;
  local_c8 = param_5;
  local_70 = lVar5;
  if (*(char *)(param_3 + 0x30) == '\0') {
    if (*(char *)(param_6 + 0x30) == '\0') {
      auVar8 = NEON_fmov(0x3f800000,4);
      uStack_108 = auVar8._8_8_;
      local_110 = auVar8._0_8_;
      lVar2 = *(long *)(param_2 + 0x28);
      pcVar4 = *(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar2 + 0x18) * 0x200 + 0x18);
    }
    else {
      auVar8 = *(undefined1 (*) [16])(param_6 + 0x40);
      auVar12 = NEON_frecpe(auVar8,4);
      auVar15 = NEON_frecps(auVar8,auVar12,4);
      auVar13._0_4_ = auVar12._0_4_ * auVar15._0_4_;
      auVar13._4_4_ = auVar12._4_4_ * auVar15._4_4_;
      auVar13._8_4_ = auVar12._8_4_ * auVar15._8_4_;
      auVar13._12_4_ = auVar12._12_4_ * auVar15._12_4_;
      auVar8 = NEON_frecps(auVar8,auVar13,4);
      fVar6 = auVar13._0_4_ * auVar8._0_4_;
      fVar9 = auVar13._4_4_ * auVar8._4_4_;
      fVar10 = auVar13._8_4_ * auVar8._8_4_;
      fVar11 = auVar13._12_4_ * auVar8._12_4_;
      uStack_108 = CONCAT44(fVar11,fVar10);
      local_110 = CONCAT44(fVar9,fVar6);
      auVar8 = *(undefined1 (*) [16])(param_7 + 4);
      local_140._0_4_ = (float)param_7[6];
      local_140._4_4_ = (float)((ulong)param_7[6] >> 0x20);
      uStack_138._0_4_ = (float)param_7[7];
      uStack_138._4_4_ = (float)((ulong)param_7[7] >> 0x20);
      uStack_138 = CONCAT44(fVar11 * uStack_138._4_4_,fVar10 * (float)uStack_138);
      local_140 = CONCAT44(fVar9 * local_140._4_4_,fVar6 * (float)local_140);
      local_170._0_4_ = (float)*param_7;
      local_170._4_4_ = (float)((ulong)*param_7 >> 0x20);
      uStack_168._0_4_ = (float)param_7[1];
      uStack_168._4_4_ = (float)((ulong)param_7[1] >> 0x20);
      uStack_168 = CONCAT44(fVar11 * uStack_168._4_4_,fVar10 * (float)uStack_168);
      local_170 = CONCAT44(fVar9 * local_170._4_4_,fVar6 * (float)local_170);
      local_160._0_4_ = (float)param_7[2];
      local_160._4_4_ = (float)((ulong)param_7[2] >> 0x20);
      uStack_158._0_4_ = (float)param_7[3];
      uStack_158._4_4_ = (float)((ulong)param_7[3] >> 0x20);
      uStack_158 = CONCAT44(fVar11 * uStack_158._4_4_,fVar10 * (float)uStack_158);
      local_160 = CONCAT44(fVar9 * local_160._4_4_,fVar6 * (float)local_160);
      auVar12._0_8_ = CONCAT44(fVar9 * auVar8._4_4_,fVar6 * auVar8._0_4_);
      auVar12._8_4_ = fVar10 * auVar8._8_4_;
      auVar12._12_4_ = fVar11 * auVar8._12_4_;
      uStack_148 = auVar12._8_8_;
      lVar2 = *(long *)(param_2 + 0x28);
      local_150 = auVar12._0_8_;
      if ((lVar2 != 0) && ((*(ushort *)(lVar2 + 0x1a) & 1) != 0)) {
        FUN_02fdb1b0(lVar2,&local_170,&local_130);
        fVar6 = *(float *)(lVar2 + 0x20);
        uVar7 = CONCAT44(local_110._4_4_ * fVar6,(float)local_110 * fVar6);
        uVar7 = NEON_fmaxp(uVar7,uVar7,4);
        uVar7 = NEON_fmax(CONCAT44((float)uStack_108 * fVar6,(float)uStack_108 * fVar6),uVar7,4);
        fVar6 = (float)uVar7;
        fStack_120 = fStack_120 + fVar6;
        fVar9 = (float)((ulong)uVar7 >> 0x20);
        fStack_11c = fStack_11c + fVar9;
        fStack_118 = fStack_118 + fVar6;
        fStack_114 = fStack_114 + fVar9;
        local_130 = local_130 - fVar6;
        fStack_12c = fStack_12c - fVar9;
        fStack_128 = fStack_128 - fVar6;
        fStack_124 = fStack_124 - fVar9;
        goto LAB_02f7a5a8;
      }
      pcVar4 = *(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar2 + 0x18) * 0x200 + 0x18);
      param_7 = &local_170;
    }
  }
  else {
    FUN_02f765b4(param_3,param_6,&local_170,&local_110);
    lVar2 = *(long *)(param_2 + 0x28);
    param_7 = &local_170;
    pcVar4 = *(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar2 + 0x18) * 0x200 + 0x18);
  }
  (*pcVar4)(lVar2,param_7,&local_130);
LAB_02f7a5a8:
  uVar7 = NEON_fmax(*(undefined8 *)(param_9 + 0x10),0,4);
  if (*(char *)(param_6 + 0x30) != '\0') {
    uVar14 = NEON_fmaxp(CONCAT44(ABS(local_110._4_4_),ABS((float)local_110)),
                        CONCAT44(ABS(local_110._4_4_),ABS((float)local_110)),4);
    uVar14 = NEON_fmax(CONCAT44(ABS((float)uStack_108),ABS((float)uStack_108)),uVar14,4);
    uVar7 = CONCAT44((float)((ulong)uVar7 >> 0x20) * (float)((ulong)uVar14 >> 0x20),
                     (float)uVar7 * (float)uVar14);
  }
  fVar6 = (float)((ulong)uVar7 >> 0x20);
  local_170 = CONCAT44(fVar6 * fVar6,(float)uVar7 * (float)uVar7);
  if (*(char *)(param_4 + 0x100) == '\x02') {
    local_f0 = CONCAT11(*(byte *)(param_9 + 8),(undefined1)local_f0) & 0x1ff;
    if ((*(byte *)(param_9 + 8) & 0x41) == 0) {
      FUN_02f7cfa8(param_4 + 0xe8,&local_130,&local_170,&local_100);
    }
    else {
      FUN_02f7ccec();
    }
  }
  else {
    FUN_02f7d2f8(param_4 + 200,&local_130,&local_100,&local_170);
  }
  if (lVar5 != 0) {
    puVar1 = *(undefined8 **)(lVar5 + 8);
    uVar3 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *(ulong *)(lVar5 + 0x10)) &&
       (*(ulong *)(lVar5 + 8) = uVar3, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_0390f40e;
      uVar7 = nn::os::GetSystemTick();
      puVar1[1] = uVar7;
    }
  }
  return;
}


