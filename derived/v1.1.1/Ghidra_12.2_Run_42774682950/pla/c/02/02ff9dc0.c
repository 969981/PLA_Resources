/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff9dc0; name: FUN_02ff9dc0
 */


void FUN_02ff9dc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  long *plVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar18;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  float fVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar11 = tpidr_el0;
  if (*(long *)(lVar11 + 0x38d490) == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar6;
    lVar11 = *(long *)(lVar6 + 0x10);
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38d490) + 0x10);
  }
  if (lVar11 != 0) {
    puVar8 = *(undefined8 **)(lVar11 + 8);
    uVar7 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= *(ulong *)(lVar11 + 0x10)) &&
       (*(ulong *)(lVar11 + 8) = uVar7, puVar8 != (undefined8 *)0x0)) {
      *puVar8 = "TtCastShape";
      uVar5 = nn::os::GetSystemTick();
      puVar8[1] = uVar5;
    }
  }
  puVar8 = (undefined8 *)param_3[4];
  local_b0 = *puVar8;
  uStack_a8 = puVar8[1];
  uVar5 = puVar8[2];
  uStack_98 = puVar8[3];
  uVar1 = puVar8[4];
  uStack_88 = puVar8[5];
  local_80 = puVar8[6];
  uStack_78 = puVar8[7];
  local_110 = *param_3;
  local_108 = param_3[1];
  local_100 = param_3[2];
  local_f8 = *(undefined4 *)(param_3 + 3);
  local_f4 = *(undefined4 *)((long)param_3 + 0x1c);
  local_e0 = *(undefined1 *)(param_3 + 6);
  local_dc = *(undefined4 *)((long)param_3 + 0x34);
  uStack_c8 = param_3[9];
  local_d0 = param_3[8];
  uStack_b8 = param_3[0xb];
  local_c0 = param_3[10];
  local_d8 = *(undefined4 *)(param_3 + 7);
  local_f0 = &local_b0;
  uStack_e8 = 0;
  pauVar9 = (undefined1 (*) [16])param_6[4];
  uVar15 = (undefined4)((ulong)*(undefined8 *)(*pauVar9 + 8) >> 0x20);
  NEON_ext(pauVar9[1],pauVar9[1],8,1);
  auVar2._12_4_ = uVar15;
  auVar2._0_12_ = *(undefined1 (*) [12])*pauVar9;
  auVar3._12_4_ = uVar15;
  auVar3._0_12_ = *(undefined1 (*) [12])*pauVar9;
  NEON_ext(auVar2,auVar3,8,1);
  NEON_ext(pauVar9[2],pauVar9[2],8,1);
  auVar2 = *pauVar9;
  auVar3 = pauVar9[1];
  auVar17 = pauVar9[2];
  auVar20 = NEON_ext(auVar3,auVar3,8,1);
  auVar19 = NEON_ext(auVar2,auVar2,8,1);
  auVar21 = NEON_ext(auVar17,auVar17,8,1);
  local_90._0_4_ = (float)uVar1;
  local_90._4_4_ = (float)((ulong)uVar1 >> 0x20);
  local_130 = auVar19._0_4_ * (float)uStack_88 +
              auVar2._0_4_ * (float)local_90 + auVar2._4_4_ * local_90._4_4_;
  fStack_12c = auVar20._0_4_ * (float)uStack_88 +
               auVar3._0_4_ * (float)local_90 + auVar3._4_4_ * local_90._4_4_;
  fStack_128 = auVar21._0_4_ * (float)uStack_88 +
               auVar17._0_4_ * (float)local_90 + auVar17._4_4_ * local_90._4_4_;
  fStack_124 = auVar21._4_4_ * (float)uStack_88 +
               auVar17._4_4_ * (float)local_90 + auVar21._4_4_ * local_90._4_4_;
  auVar2 = pauVar9[2];
  auVar19 = NEON_ext(auVar2,auVar2,8,1);
  auVar3 = *pauVar9;
  auVar17 = pauVar9[1];
  auVar20 = NEON_ext(auVar3,auVar3,8,1);
  auVar21 = NEON_ext(auVar17,auVar17,8,1);
  fVar16 = auVar2._4_4_;
  fVar23 = auVar19._4_4_;
  local_a0._0_4_ = (float)uVar5;
  local_a0._4_4_ = (float)((ulong)uVar5 >> 0x20);
  fVar22 = auVar2._0_4_;
  fVar18 = auVar19._0_4_;
  local_140 = auVar20._0_4_ * (float)uStack_98 +
              auVar3._0_4_ * (float)local_a0 + auVar3._4_4_ * local_a0._4_4_;
  fStack_13c = auVar21._0_4_ * (float)uStack_98 +
               auVar17._0_4_ * (float)local_a0 + auVar17._4_4_ * local_a0._4_4_;
  fStack_138 = fVar18 * (float)uStack_98 + fVar22 * (float)local_a0 + fVar16 * local_a0._4_4_;
  fStack_134 = fVar23 * (float)uStack_98 + fVar16 * (float)local_a0 + fVar23 * local_a0._4_4_;
  auVar2 = *pauVar9;
  auVar3 = pauVar9[1];
  auVar19 = NEON_ext(auVar3,auVar3,8,1);
  auVar17 = NEON_ext(auVar2,auVar2,8,1);
  fVar12 = (float)local_b0;
  fVar13 = (float)((ulong)local_b0 >> 0x20);
  fVar14 = (float)uStack_a8;
  local_150 = auVar17._0_4_ * fVar14 + auVar2._0_4_ * fVar12 + auVar2._4_4_ * fVar13;
  fStack_14c = auVar19._0_4_ * fVar14 + auVar3._0_4_ * fVar12 + auVar3._4_4_ * fVar13;
  fStack_148 = fVar18 * fVar14 + fVar22 * fVar12 + fVar16 * fVar13;
  fStack_144 = fVar23 * fVar14 + fVar16 * fVar12 + fVar23 * fVar13;
  fVar12 = (float)local_80 - *(float *)pauVar9[3];
  fVar13 = (float)((ulong)local_80 >> 0x20) - *(float *)(pauVar9[3] + 4);
  fVar14 = (float)uStack_78 - *(float *)(pauVar9[3] + 8);
  auVar2 = *pauVar9;
  auVar17 = NEON_ext(auVar2,auVar2,8,1);
  uStack_118 = CONCAT44(fVar23 * fVar14 + fVar16 * fVar12 + fVar23 * fVar13,
                        fVar18 * fVar14 + fVar22 * fVar12 + fVar16 * fVar13);
  local_120 = CONCAT44(auVar19._0_4_ * fVar14 + auVar3._0_4_ * fVar12 + auVar3._4_4_ * fVar13,
                       auVar17._0_4_ * fVar14 + auVar2._0_4_ * fVar12 + auVar2._4_4_ * fVar13);
  uVar15 = (undefined4)((ulong)param_2[9] >> 0x20);
  uVar4 = NEON_fmin(*(undefined8 *)(param_7 + 0x10),CONCAT44(uVar15,uVar15),4);
  *(undefined8 *)(param_7 + 0x10) = uVar4;
  plVar10 = (long *)*param_2;
  local_a0 = uVar5;
  local_90 = uVar1;
  lStack_70 = lVar11;
  if ((plVar10 == (long *)0x0) || ((*(byte *)(plVar10 + 3) & 1) == 0)) {
    uVar5 = *param_1;
  }
  else {
    local_1d8 = param_2[3];
    uStack_1e8 = param_2[1];
    local_1f0 = *param_2;
    local_1e0 = param_2[2];
    local_1d0 = param_2[4];
    uStack_1c8 = param_2[5];
    uStack_1b8 = param_2[7];
    local_1c0 = param_2[6];
    uStack_1a8 = param_2[9];
    local_1b0 = param_2[8];
    uStack_198 = param_2[0xb];
    local_1a0 = param_2[10];
    local_158 = param_2[0x13];
    local_168 = param_2[0x11];
    local_178 = param_2[0xf];
    local_188 = param_2[0xd];
    local_190 = param_2[0xc];
    local_180 = param_2[0xe];
    local_170 = param_2[0x10];
    local_160 = param_2[0x12];
    local_200 = *param_5;
    uStack_1f8 = param_5[1];
    (**(code **)(*plVar10 + 0x38))(plVar10,2,local_110,uStack_1c8,&local_1e0);
    (**(code **)(*plVar10 + 0x38))(plVar10,2,*param_6,param_4,&local_200);
    uVar5 = *param_1;
    param_2 = &local_1f0;
    param_5 = &local_200;
  }
  FUN_02f91438(uVar5,param_1,param_2,&local_110,param_4,param_5,param_6,&local_150,0,param_7,param_8
              );
  if (lVar11 != 0) {
    puVar8 = *(undefined8 **)(lVar11 + 8);
    uVar7 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= *(ulong *)(lVar11 + 0x10)) &&
       (*(ulong *)(lVar11 + 8) = uVar7, puVar8 != (undefined8 *)0x0)) {
      *puVar8 = &DAT_0390f40e;
      uVar5 = nn::os::GetSystemTick();
      puVar8[1] = uVar5;
    }
  }
  return;
}


