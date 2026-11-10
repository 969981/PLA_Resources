/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2b180; name: FUN_02f2b180
 */


float FUN_02f2b180(undefined8 *param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar3;
  undefined8 *puVar2;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  undefined8 uVar9;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  fVar4 = 0.0;
  fVar5 = 0.0;
  fVar6 = 0.0;
  fVar7 = 0.0;
  puVar2 = param_1;
  do {
    puVar3 = puVar2 + 2;
    fVar8 = (float)*puVar2;
    fVar10 = (float)((ulong)*puVar2 >> 0x20);
    fVar11 = (float)puVar2[1];
    fVar12 = (float)((ulong)puVar2[1] >> 0x20);
    fVar4 = fVar4 + fVar8 * fVar8;
    fVar5 = fVar5 + fVar10 * fVar10;
    fVar6 = fVar6 + fVar11 * fVar11;
    fVar7 = fVar7 + fVar12 * fVar12;
    puVar2 = puVar3;
  } while (puVar3 < param_1 + (ulong)(param_2 >> 2) * 2);
  auVar14._4_4_ = fVar5;
  auVar14._0_4_ = fVar4;
  auVar14._8_4_ = fVar6;
  auVar14._12_4_ = fVar7;
  auVar1._4_4_ = fVar5;
  auVar1._0_4_ = fVar4;
  auVar1._8_4_ = fVar6;
  auVar1._12_4_ = fVar7;
  auVar14 = NEON_ext(auVar14,auVar1,8,1);
  uVar9 = NEON_rev64(CONCAT44(fVar5,fVar4),4);
  uVar13 = NEON_rev64(auVar14._0_8_,4);
  return SQRT(((float)uVar13 + fVar6 + (float)uVar9 + fVar4) / (float)param_2);
}


