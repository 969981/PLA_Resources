/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335fd60; name: FUN_0335fd60
 */


void FUN_0335fd60(float *param_1,long param_2,uint param_3,undefined8 *param_4,undefined8 *param_5)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  if ((int)(param_3 - 3) < 1) {
    uVar1 = 0;
    auVar9._8_4_ = 0x7f7fffee;
    auVar9._0_8_ = 0x7f7fffee7f7fffee;
    auVar9._12_4_ = 0x7f7fffee;
    auVar6._8_4_ = 0xff7fffee;
    auVar6._0_8_ = 0xff7fffeeff7fffee;
    auVar6._12_4_ = 0xff7fffee;
  }
  else {
    auVar6._8_4_ = 0xff7fffee;
    auVar6._0_8_ = 0xff7fffeeff7fffee;
    auVar6._12_4_ = 0xff7fffee;
    lVar2 = 0;
    auVar9._8_4_ = 0x7f7fffee;
    auVar9._0_8_ = 0x7f7fffee7f7fffee;
    auVar9._12_4_ = 0x7f7fffee;
    do {
      pfVar3 = (float *)(param_2 + lVar2 * 0x10);
      lVar2 = lVar2 + 4;
      fVar10 = (float)*(undefined8 *)param_1;
      auVar16._0_4_ = fVar10 * pfVar3[4];
      fVar11 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
      auVar16._4_4_ = fVar11 * pfVar3[5];
      fVar12 = (float)*(undefined8 *)(param_1 + 2);
      auVar16._8_4_ = fVar12 * pfVar3[6];
      fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
      auVar16._12_4_ = fVar13 * pfVar3[7];
      auVar14._0_4_ = fVar10 * *pfVar3;
      auVar14._4_4_ = fVar11 * pfVar3[1];
      auVar14._8_4_ = fVar12 * pfVar3[2];
      auVar14._12_4_ = fVar13 * pfVar3[3];
      auVar18._0_4_ = fVar10 * pfVar3[8];
      auVar18._4_4_ = fVar11 * pfVar3[9];
      auVar18._8_4_ = fVar12 * pfVar3[10];
      auVar18._12_4_ = fVar13 * pfVar3[0xb];
      auVar20._0_4_ = fVar10 * pfVar3[0xc];
      auVar20._4_4_ = fVar11 * pfVar3[0xd];
      auVar20._8_4_ = fVar12 * pfVar3[0xe];
      auVar20._12_4_ = fVar13 * pfVar3[0xf];
      auVar15 = NEON_ext(auVar14,auVar14,8,1);
      auVar17 = NEON_ext(auVar16,auVar16,8,1);
      auVar19 = NEON_ext(auVar18,auVar18,8,1);
      auVar21 = NEON_ext(auVar20,auVar20,8,1);
      auVar15._0_4_ = auVar15._0_4_ + auVar14._0_4_ + auVar14._4_4_;
      auVar15._4_4_ = auVar17._0_4_ + auVar16._0_4_ + auVar16._4_4_;
      auVar15._12_4_ = auVar21._0_4_ + auVar20._0_4_ + auVar20._4_4_;
      auVar15._8_4_ = auVar19._0_4_ + auVar18._0_4_ + auVar18._4_4_;
      auVar9 = NEON_fmin(auVar9,auVar15,4);
      auVar6 = NEON_fmax(auVar6,auVar15,4);
    } while (lVar2 < (int)(param_3 - 3));
    uVar1 = param_3 & 0xfffffffc;
  }
  uVar7 = NEON_fminnmv(auVar9,4);
  uVar4 = NEON_fmaxnmv(auVar6,4);
  *param_4 = CONCAT44(uVar7,uVar7);
  *param_5 = CONCAT44(uVar4,uVar4);
  if ((int)uVar1 < (int)param_3) {
    lVar2 = (ulong)param_3 - (ulong)uVar1;
    pfVar3 = (float *)(param_2 + (ulong)uVar1 * 0x10);
    do {
      lVar2 = lVar2 + -1;
      uVar5 = CONCAT44(*param_1 * *pfVar3 + param_1[1] * pfVar3[1] + param_1[2] * pfVar3[2],
                       *param_1 * *pfVar3 + param_1[1] * pfVar3[1] + param_1[2] * pfVar3[2]);
      uVar8 = NEON_fmin(*param_4,uVar5,4);
      *param_4 = uVar8;
      uVar5 = NEON_fmax(*param_5,uVar5,4);
      *param_5 = uVar5;
      pfVar3 = pfVar3 + 4;
    } while (lVar2 != 0);
  }
  return;
}


