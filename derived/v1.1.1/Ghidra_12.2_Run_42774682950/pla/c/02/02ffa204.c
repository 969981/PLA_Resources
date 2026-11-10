/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffa204; name: FUN_02ffa204
 */


void FUN_02ffa204(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                 undefined8 *param_5,undefined8 *param_6,long param_7)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined1 (*pauVar4) [16];
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar12;
  undefined1 auVar11 [16];
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  float fVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  undefined2 local_180;
  undefined2 uStack_17e;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined2 local_170;
  undefined2 uStack_16e;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined2 local_160;
  undefined2 uStack_15e;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 local_150;
  long local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_e8;
  undefined2 local_e0 [2];
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  long local_b0;
  undefined2 local_a8 [2];
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar8 = tpidr_el0;
  if (*(long *)(lVar8 + 0x38d490) == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar9;
    lVar8 = *(long *)(lVar9 + 0x10);
  }
  else {
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38d490) + 0x10);
  }
  if (lVar8 != 0) {
    puVar6 = *(undefined8 **)(lVar8 + 8);
    uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
       (*(ulong *)(lVar8 + 8) = uVar3, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = "TtGetClosestPoints";
      uVar10 = nn::os::GetSystemTick();
      puVar6[1] = uVar10;
    }
  }
  pauVar4 = (undefined1 (*) [16])param_6[4];
  NEON_ext(pauVar4[1],pauVar4[1],8,1);
  NEON_ext(*pauVar4,*pauVar4,8,1);
  NEON_ext(pauVar4[2],pauVar4[2],8,1);
  puVar6 = (undefined8 *)param_3[4];
  auVar11 = *pauVar4;
  auVar2 = pauVar4[1];
  auVar14 = pauVar4[2];
  auVar19 = NEON_ext(auVar2,auVar2,8,1);
  auVar18 = NEON_ext(auVar11,auVar11,8,1);
  auVar20 = NEON_ext(auVar14,auVar14,8,1);
  fVar13 = *(float *)(puVar6 + 4);
  fVar15 = *(float *)((long)puVar6 + 0x24);
  fVar17 = *(float *)(puVar6 + 5);
  local_110 = auVar18._0_4_ * fVar17 + auVar11._0_4_ * fVar13 + auVar11._4_4_ * fVar15;
  fStack_10c = auVar19._0_4_ * fVar17 + auVar2._0_4_ * fVar13 + auVar2._4_4_ * fVar15;
  fStack_108 = auVar20._0_4_ * fVar17 + auVar14._0_4_ * fVar13 + auVar14._4_4_ * fVar15;
  fStack_104 = auVar20._4_4_ * fVar17 + auVar14._4_4_ * fVar13 + auVar20._4_4_ * fVar15;
  auVar11 = pauVar4[2];
  auVar18 = NEON_ext(auVar11,auVar11,8,1);
  auVar2 = *pauVar4;
  auVar14 = pauVar4[1];
  auVar19 = NEON_ext(auVar2,auVar2,8,1);
  auVar20 = NEON_ext(auVar14,auVar14,8,1);
  fVar12 = auVar11._4_4_;
  fVar22 = auVar18._4_4_;
  fVar13 = *(float *)(puVar6 + 2);
  fVar15 = *(float *)((long)puVar6 + 0x14);
  fVar17 = *(float *)(puVar6 + 3);
  fVar21 = auVar11._0_4_;
  fVar16 = auVar18._0_4_;
  local_120 = auVar19._0_4_ * fVar17 + auVar2._0_4_ * fVar13 + auVar2._4_4_ * fVar15;
  fStack_11c = auVar20._0_4_ * fVar17 + auVar14._0_4_ * fVar13 + auVar14._4_4_ * fVar15;
  fStack_118 = fVar16 * fVar17 + fVar21 * fVar13 + fVar12 * fVar15;
  fStack_114 = fVar22 * fVar17 + fVar12 * fVar13 + fVar22 * fVar15;
  auVar11 = *pauVar4;
  auVar2 = pauVar4[1];
  auVar18 = NEON_ext(auVar2,auVar2,8,1);
  auVar14 = NEON_ext(auVar11,auVar11,8,1);
  fVar13 = (float)*puVar6;
  fVar15 = (float)((ulong)*puVar6 >> 0x20);
  fVar17 = (float)puVar6[1];
  local_130 = auVar14._0_4_ * fVar17 + auVar11._0_4_ * fVar13 + auVar11._4_4_ * fVar15;
  fStack_12c = auVar18._0_4_ * fVar17 + auVar2._0_4_ * fVar13 + auVar2._4_4_ * fVar15;
  fStack_128 = fVar16 * fVar17 + fVar21 * fVar13 + fVar12 * fVar15;
  fStack_124 = fVar22 * fVar17 + fVar12 * fVar13 + fVar22 * fVar15;
  fVar13 = *(float *)(puVar6 + 6) - *(float *)pauVar4[3];
  fVar15 = *(float *)((long)puVar6 + 0x34) - *(float *)(pauVar4[3] + 4);
  fVar17 = *(float *)(puVar6 + 7) - *(float *)(pauVar4[3] + 8);
  auVar11 = *pauVar4;
  auVar14 = NEON_ext(auVar11,auVar11,8,1);
  auVar11._0_8_ =
       CONCAT44(auVar18._0_4_ * fVar17 + auVar2._0_4_ * fVar13 + auVar2._4_4_ * fVar15,
                auVar14._0_4_ * fVar17 + auVar11._0_4_ * fVar13 + auVar11._4_4_ * fVar15);
  auVar11._8_4_ = fVar16 * fVar17 + fVar21 * fVar13 + fVar12 * fVar15;
  auVar11._12_4_ = fVar22 * fVar17 + fVar12 * fVar13 + fVar22 * fVar15;
  uStack_f8 = auVar11._8_8_;
  uVar10 = NEON_fmin(*(undefined8 *)(param_7 + 0x10),
                     CONCAT44(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 6)),4);
  *(undefined8 *)(param_7 + 0x10) = uVar10;
  plVar7 = (long *)*param_2;
  local_100 = auVar11._0_8_;
  local_e8 = lVar8;
  if ((plVar7 == (long *)0x0) || ((*(byte *)(plVar7 + 3) & 1) == 0)) {
    lVar9 = *param_1;
    plVar7 = (long *)param_2[1];
    if (plVar7 != (long *)0x0) {
      local_170 = *(undefined2 *)(param_2 + 2);
      uStack_164 = *(undefined4 *)((long)param_2 + 0x1c);
      uStack_16c = (undefined4)*(undefined8 *)((long)param_2 + 0x14);
      uStack_168 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x14) >> 0x20);
      uVar10 = *param_3;
      local_160 = (undefined2)uVar10;
      uStack_15e = (undefined2)((ulong)uVar10 >> 0x10);
      uStack_15c = (undefined4)((ulong)uVar10 >> 0x20);
      local_158 = (undefined4)param_3[1];
      uStack_154 = (undefined4)((ulong)param_3[1] >> 0x20);
      local_150 = param_3[2];
      local_148 = CONCAT44(local_148._4_4_,*(undefined4 *)(param_3 + 3));
      local_140 = param_2[5];
      local_a8[0] = *(undefined2 *)param_5;
      local_a4 = *(undefined8 *)((long)param_5 + 4);
      local_9c = *(undefined4 *)((long)param_5 + 0xc);
      local_98 = *param_6;
      local_90 = param_6[1];
      local_88 = param_6[2];
      local_80 = *(undefined4 *)(param_6 + 3);
      local_78 = param_4;
      uVar3 = (**(code **)(*plVar7 + 0x40))(plVar7,5,1,&local_170,local_a8);
      if ((uVar3 & 1) == 0) goto LAB_02ffa504;
    }
    pcVar5 = *(code **)(lVar9 + (ulong)*(byte *)(param_2[5] + 0x18) * 0xf8 +
                        (ulong)*(byte *)(param_4 + 0x18) * 8 + 0xa0);
  }
  else {
    uVar10 = *param_2;
    uVar1 = param_2[2];
    local_160 = (undefined2)uVar1;
    uStack_15e = (undefined2)((ulong)uVar1 >> 0x10);
    uStack_15c = (undefined4)((ulong)uVar1 >> 0x20);
    local_158 = (undefined4)param_2[3];
    uStack_154 = (undefined4)((ulong)param_2[3] >> 0x20);
    local_170 = (undefined2)uVar10;
    uStack_16e = (undefined2)((ulong)uVar10 >> 0x10);
    uStack_16c = (undefined4)((ulong)uVar10 >> 0x20);
    uStack_168 = (undefined4)param_2[1];
    uStack_164 = (undefined4)((ulong)param_2[1] >> 0x20);
    local_150 = param_2[4];
    local_148 = param_2[5];
    local_140 = param_2[6];
    uStack_138 = param_2[7];
    uVar10 = *param_5;
    local_180 = (undefined2)uVar10;
    uStack_17e = (undefined2)((ulong)uVar10 >> 0x10);
    uStack_17c = (undefined4)((ulong)uVar10 >> 0x20);
    uStack_178 = (undefined4)param_5[1];
    local_174 = (undefined4)((ulong)param_5[1] >> 0x20);
    (**(code **)(*plVar7 + 0x38))(plVar7,5,*param_3,local_148,&local_160);
    (**(code **)(*plVar7 + 0x38))(plVar7,5,*param_6,param_4,&local_180);
    lVar9 = *param_1;
    plVar7 = (long *)CONCAT44(uStack_164,uStack_168);
    if (plVar7 != (long *)0x0) {
      local_a8[0] = local_160;
      local_a4 = CONCAT44(local_158,uStack_15c);
      local_9c = uStack_154;
      local_98 = *param_3;
      local_90 = param_3[1];
      local_88 = param_3[2];
      local_80 = *(undefined4 *)(param_3 + 3);
      local_78 = local_148;
      local_e0[0] = local_180;
      local_dc = CONCAT44(uStack_178,uStack_17c);
      local_d4 = local_174;
      local_d0 = *param_6;
      local_c8 = param_6[1];
      local_c0 = param_6[2];
      local_b8 = *(undefined4 *)(param_6 + 3);
      local_b0 = param_4;
      uVar3 = (**(code **)(*plVar7 + 0x40))(plVar7,5,1,local_a8,local_e0);
      if ((uVar3 & 1) == 0) goto LAB_02ffa504;
    }
    param_2 = (undefined8 *)&local_170;
    param_5 = (undefined8 *)&local_180;
    pcVar5 = *(code **)(lVar9 + (ulong)*(byte *)(local_148 + 0x18) * 0xf8 +
                        (ulong)*(byte *)(param_4 + 0x18) * 8 + 0xa0);
  }
  (*pcVar5)(param_1,param_2,param_3,param_4,param_5,param_6,&local_130,0,param_7);
LAB_02ffa504:
  if (lVar8 != 0) {
    puVar6 = *(undefined8 **)(lVar8 + 8);
    uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= *(ulong *)(lVar8 + 0x10)) &&
       (*(ulong *)(lVar8 + 8) = uVar3, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = &DAT_0390f40e;
      uVar10 = nn::os::GetSystemTick();
      puVar6[1] = uVar10;
    }
  }
  return;
}


