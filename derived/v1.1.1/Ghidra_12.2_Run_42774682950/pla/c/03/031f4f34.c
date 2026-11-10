/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f4f34; name: FUN_031f4f34
 */


float FUN_031f4f34(float param_1,long param_2,float *param_3,int param_4)

{
  float fVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  float fVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  
  fVar1 = (float)(*(int *)(param_2 + 0x20) + -1);
  fVar4 = param_3[4];
  if ((int)fVar4 < (int)fVar1) {
    lVar5 = (long)(int)fVar4 << 6;
    fVar6 = *param_3;
    fVar7 = param_3[1];
    fVar8 = param_3[2];
    fVar9 = param_3[3];
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x18) + lVar5);
      uVar15 = puVar2[1];
      uVar12 = *puVar2;
      fVar11 = (float)uVar12;
      fVar6 = fVar6 - fVar11;
      fVar13 = (float)((ulong)uVar12 >> 0x20);
      fVar7 = fVar7 - fVar13;
      fVar14 = (float)uVar15;
      fVar8 = fVar8 - fVar14;
      fVar16 = (float)((ulong)uVar15 >> 0x20);
      fVar9 = fVar9 - fVar16;
      fVar6 = fVar6 * fVar6;
      fVar7 = fVar7 * fVar7;
      fVar8 = fVar8 * fVar8;
      fVar9 = fVar9 * fVar9;
      auVar10._4_4_ = fVar7;
      auVar10._0_4_ = fVar6;
      auVar10._8_4_ = fVar8;
      auVar10._12_4_ = fVar9;
      auVar3._4_4_ = fVar7;
      auVar3._0_4_ = fVar6;
      auVar3._8_4_ = fVar8;
      auVar3._12_4_ = fVar9;
      auVar10 = NEON_ext(auVar10,auVar3,8,1);
      if (param_1 * param_1 < fVar6 + fVar7 + auVar10._0_4_) {
        return -NAN;
      }
      if (*(int *)(*(long *)(param_2 + 0x18) + lVar5 + 0x38) != -1) {
        if ((int)fVar4 < param_4) {
          fVar4 = -NAN;
        }
        return fVar4;
      }
      fVar6 = (float)FUN_032c8ed0();
      param_1 = param_1 - fVar6;
      fVar4 = (float)((int)fVar4 + 1);
      lVar5 = lVar5 + 0x40;
      fVar6 = fVar11;
      fVar7 = fVar13;
      fVar8 = fVar14;
      fVar9 = fVar16;
    } while (fVar1 != fVar4);
  }
  return -NAN;
}


