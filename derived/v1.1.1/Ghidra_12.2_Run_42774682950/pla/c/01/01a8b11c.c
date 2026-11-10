/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8b11c; name: FUN_01a8b11c
 */


void FUN_01a8b11c(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  float *pfVar7;
  undefined1 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_60 [8];
  
  iVar3 = FUN_01f56c40();
  uVar4 = FUN_01f56528(param_2,param_4,0,local_60);
  if (iVar3 < 2) {
    if ((uVar4 & 1) == 0) goto LAB_01a8b25c;
LAB_01a8b1e0:
    uVar8 = 0;
    pfVar7 = local_60;
  }
  else {
    uVar5 = FUN_01f56528(param_2,param_4,1,&local_80);
    if (((uVar5 & 1) == 0) && (((uVar4 ^ 1) & 1) == 0)) goto LAB_01a8b1e0;
    if (((uVar4 | uVar5 ^ 1) & 1) != 0) {
      if (((uVar4 ^ 1 | uVar5 ^ 1) & 1) != 0) goto LAB_01a8b25c;
      fVar15 = (float)param_4[1];
      fVar16 = (float)((ulong)param_4[1] >> 0x20);
      fVar13 = (float)*param_4;
      fVar14 = (float)((ulong)*param_4 >> 0x20);
      fVar9 = local_60[0] - fVar13;
      fVar10 = local_60[1] - fVar14;
      fVar11 = local_60[2] - fVar15;
      fVar12 = local_60[3] - fVar16;
      fVar9 = fVar9 * fVar9;
      fVar10 = fVar10 * fVar10;
      fVar11 = fVar11 * fVar11;
      fVar12 = fVar12 * fVar12;
      auVar17._4_4_ = fVar10;
      auVar17._0_4_ = fVar9;
      auVar17._8_4_ = fVar11;
      auVar17._12_4_ = fVar12;
      auVar18._4_4_ = fVar10;
      auVar18._0_4_ = fVar9;
      auVar18._8_4_ = fVar11;
      auVar18._12_4_ = fVar12;
      auVar17 = NEON_ext(auVar17,auVar18,8,1);
      local_80 = local_80 - fVar13;
      fStack_7c = fStack_7c - fVar14;
      fStack_78 = fStack_78 - fVar15;
      fStack_74 = fStack_74 - fVar16;
      local_80 = local_80 * local_80;
      fStack_7c = fStack_7c * fStack_7c;
      fStack_78 = fStack_78 * fStack_78;
      fStack_74 = fStack_74 * fStack_74;
      auVar1._4_4_ = fStack_7c;
      auVar1._0_4_ = local_80;
      auVar1._8_4_ = fStack_78;
      auVar1._12_4_ = fStack_74;
      auVar2._4_4_ = fStack_7c;
      auVar2._0_4_ = local_80;
      auVar2._8_4_ = fStack_78;
      auVar2._12_4_ = fStack_74;
      auVar18 = NEON_ext(auVar1,auVar2,8,1);
      if (auVar17._0_4_ + fVar9 + auVar17._4_4_ + fVar10 <
          auVar18._0_4_ + local_80 + auVar18._4_4_ + fStack_7c) goto LAB_01a8b1e0;
    }
    uVar8 = 1;
    pfVar7 = &local_80;
  }
  uVar6 = FUN_01a89ce8(0x3fb33333,0x40a00000,param_3,pfVar7,pfVar7,0,&local_90,1,1,0);
  if ((uVar6 & 1) != 0) {
    *(undefined1 *)param_1 = 1;
    param_1[2] = local_90;
    param_1[3] = uStack_88;
    *(undefined1 *)((long)param_1 + 1) = uVar8;
    return;
  }
LAB_01a8b25c:
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


