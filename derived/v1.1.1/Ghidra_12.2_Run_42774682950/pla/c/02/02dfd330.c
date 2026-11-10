/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfd330; name: FUN_02dfd330
 */


void FUN_02dfd330(float param_1,float *param_2,long param_3,long *param_4,float *param_5)

{
  float *pfVar1;
  char cVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  *(long **)(param_2 + 0xe6) = param_4;
  cVar2 = *(char *)(param_3 + 0x24);
  *param_2 = param_1;
  param_2[1] = 1.0 / param_1;
  fVar7 = 1.0;
  if (cVar2 != '\0') {
    fVar7 = 4.0;
  }
  param_2[2] = fVar7 * param_1;
  param_2[3] = 1.0 / (fVar7 * param_1);
  *(char *)(param_2 + 5) = cVar2;
  fVar7 = (float)NEON_fminnm(param_1 * 0.5,0x469c4000);
  param_2[4] = fVar7;
  fVar7 = *param_5;
  param_2[0xe5] = fVar7;
  if (((uint)fVar7 & 0xff | 0x10) != 0x90) {
    *(undefined1 *)(param_2 + 0xe5) = 0x80;
    *(undefined2 *)((long)param_2 + 0x396) = 0x30;
  }
  fVar7 = *(float *)(param_3 + 0x18);
  param_2[0x9c] = fVar7;
  if (2 < (int)fVar7 - 1U) {
    fVar7 = 0.0;
  }
  plVar4 = (long *)(**(code **)(*param_4 + 0x10))(param_4);
  uVar3 = (**(code **)(*plVar4 + 0xf8))();
  FUN_02dff1b0(param_2 + 0xa0,fVar7,(int)param_1,uVar3);
  fVar7 = *param_2;
  lVar5 = 0;
  do {
    fVar8 = param_2[2] * 0.45;
    if (fVar7 * 0.375 <= fVar8) {
      fVar8 = fVar7 * 0.375;
    }
    fVar8 = tanf((fVar8 * 3.1415927) / param_2[2]);
    fVar8 = 1.0 / fVar8;
    fVar11 = fVar8 * fVar8 + 1.0;
    fVar6 = 1.0 / (fVar11 + fVar8 * 1.4142135);
    fVar9 = fVar6 + fVar6;
    fVar11 = fVar11 - fVar8 * 1.4142135;
    fVar10 = -(-(fVar8 * fVar8) * fVar9) - fVar9;
    fVar8 = fVar9 - fVar9 * fVar8 * fVar8;
    fVar12 = fVar6 * fVar11;
    fVar11 = -(fVar6 * fVar11);
    fVar13 = fVar6 * fVar11;
    fVar15 = fVar6 * fVar10;
    fVar17 = fVar8 * fVar12;
    fVar18 = fVar8 * fVar8;
    pfVar1 = (float *)((long)param_2 + lVar5 + 0xc0);
    lVar5 = lVar5 + 0x90;
    pfVar1[0x15] = fVar15;
    pfVar1[0x16] = fVar15 * fVar10 + fVar13;
    fVar20 = fVar6 - fVar8 * fVar9;
    pfVar1[0x1d] = fVar17;
    pfVar1[0x1e] = fVar17 * fVar10 + fVar12 * fVar12;
    fVar14 = fVar9 * fVar11;
    fVar19 = fVar14 - fVar8 * fVar20;
    fVar16 = fVar15 + fVar9;
    pfVar1[0x11] = fVar20;
    pfVar1[0x12] = fVar19;
    fVar20 = (fVar13 + fVar6) - fVar8 * fVar16;
    pfVar1[0x1b] = (fVar12 * fVar12 + fVar18 * fVar12 * -3.0) - fVar8 * fVar18 * fVar10;
    pfVar1[0x1c] = fVar11;
    pfVar1[0x19] = fVar18 - fVar12;
    pfVar1[0x1a] = fVar18 * fVar10 + fVar8 * (fVar12 + fVar12);
    pfVar1[7] = fVar16;
    pfVar1[10] = fVar16;
    pfVar1[0xb] = fVar20;
    pfVar1[0xd] = fVar16;
    pfVar1[0xe] = fVar20;
    pfVar1[4] = 0.0;
    pfVar1[5] = 0.0;
    pfVar1[6] = 0.0;
    pfVar1[8] = 0.0;
    pfVar1[9] = 0.0;
    pfVar1[0xc] = 0.0;
    *pfVar1 = fVar6;
    pfVar1[1] = fVar6;
    pfVar1[2] = fVar6;
    pfVar1[3] = fVar6;
    pfVar1[0x13] = fVar13 - fVar8 * (fVar19 + fVar14);
    pfVar1[0x14] = fVar6;
    pfVar1[0x17] = (fVar15 * fVar10 + fVar13 * 2.0) * fVar10;
    pfVar1[0x18] = fVar10;
    pfVar1[0xf] = (fVar14 + fVar6 * fVar17) - fVar8 * fVar20;
    pfVar1[0x10] = fVar9;
    pfVar1[0x1f] = (fVar12 * -2.0 * fVar12 - fVar17 * fVar10) * fVar8;
  } while (lVar5 != 0x1b0);
  return;
}


