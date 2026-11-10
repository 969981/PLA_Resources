/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8b268; name: FUN_01a8b268
 */


void FUN_01a8b268(undefined8 *param_1,float param_2,float param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_60 [8];
  
  iVar3 = FUN_01f56c40();
  fVar12 = (float)param_5[1];
  fVar13 = (float)((ulong)param_5[1] >> 0x20);
  fVar10 = (float)*param_5;
  fVar11 = (float)((ulong)*param_5 >> 0x20);
  local_90 = fVar10 + 0.0;
  fStack_8c = param_2 + fVar11;
  fStack_88 = fVar12 + 0.0;
  fStack_84 = fVar13 + 0.0;
  uStack_98 = CONCAT44(fVar13 + 0.0,fVar12 + 0.0);
  local_a0 = CONCAT44(param_3 + fVar11,fVar10 + 0.0);
  uVar4 = FUN_01f56878(&local_90,&local_a0,0,local_60);
  if (iVar3 < 2) {
    if ((uVar4 & 1) == 0) goto LAB_01a8b3d8;
LAB_01a8b320:
    uVar9 = 0;
    uVar8 = 1;
    pfVar7 = local_60;
  }
  else {
    uVar8 = 1;
    uVar5 = FUN_01f56878(&local_90,&local_a0,1,&local_80);
    if (((uVar5 & 1) == 0) && (((uVar4 ^ 1) & 1) == 0)) {
      uVar9 = 0;
      pfVar7 = local_60;
    }
    else {
      if (((uVar4 | uVar5 ^ 1) & 1) != 0) {
        if (((uVar4 ^ 1 | uVar5 ^ 1) & 1) != 0) goto LAB_01a8b3d8;
        fVar10 = local_60[0] - local_90;
        fVar11 = local_60[1] - fStack_8c;
        fVar12 = local_60[2] - fStack_88;
        fVar13 = local_60[3] - fStack_84;
        fVar10 = fVar10 * fVar10;
        fVar11 = fVar11 * fVar11;
        fVar12 = fVar12 * fVar12;
        fVar13 = fVar13 * fVar13;
        auVar16._4_4_ = fVar11;
        auVar16._0_4_ = fVar10;
        auVar16._8_4_ = fVar12;
        auVar16._12_4_ = fVar13;
        auVar17._4_4_ = fVar11;
        auVar17._0_4_ = fVar10;
        auVar17._8_4_ = fVar12;
        auVar17._12_4_ = fVar13;
        auVar16 = NEON_ext(auVar16,auVar17,8,1);
        fVar12 = (local_80 - local_90) * (local_80 - local_90);
        fVar13 = (fStack_7c - fStack_8c) * (fStack_7c - fStack_8c);
        fVar14 = (fStack_78 - fStack_88) * (fStack_78 - fStack_88);
        fVar15 = (fStack_74 - fStack_84) * (fStack_74 - fStack_84);
        auVar1._4_4_ = fVar13;
        auVar1._0_4_ = fVar12;
        auVar1._8_4_ = fVar14;
        auVar1._12_4_ = fVar15;
        auVar2._4_4_ = fVar13;
        auVar2._0_4_ = fVar12;
        auVar2._8_4_ = fVar14;
        auVar2._12_4_ = fVar15;
        auVar17 = NEON_ext(auVar1,auVar2,8,1);
        if (auVar16._0_4_ + fVar10 + auVar16._4_4_ + fVar11 <
            auVar17._0_4_ + fVar12 + auVar17._4_4_ + fVar13) goto LAB_01a8b320;
      }
      uVar8 = 2;
      pfVar7 = &local_80;
      uVar9 = 1;
    }
  }
  uVar6 = FUN_01a89ce8(0x3fb33333,0x40a00000,param_4,param_5,pfVar7,uVar8,&local_b0,1,1,0);
  if ((uVar6 & 1) != 0) {
    *(undefined1 *)param_1 = 1;
    param_1[2] = local_b0;
    param_1[3] = uStack_a8;
    *(undefined1 *)((long)param_1 + 1) = uVar9;
    return;
  }
LAB_01a8b3d8:
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


