/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301f3a0; name: FUN_0301f3a0
 */


void FUN_0301f3a0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar2 = *(long *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x38);
  fVar11 = (float)param_1[3];
  fVar9 = (float)((ulong)param_1[2] >> 0x20);
  fVar7 = (float)param_1[2];
  fVar6 = -fVar7;
  fVar8 = -fVar9;
  fVar10 = -fVar11;
  puVar5 = (undefined8 *)*param_3;
  fVar12 = (float)*(undefined8 *)(lVar2 + 0x60) * fVar11 +
           (float)*(undefined8 *)(lVar2 + 0x40) * fVar7 + *(float *)(lVar2 + 0x50) * fVar9;
  fVar13 = (float)((ulong)*(undefined8 *)(lVar2 + 0x60) >> 0x20) * fVar11 +
           (float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20) * fVar7 +
           *(float *)(lVar2 + 0x54) * fVar9;
  fVar14 = (float)*(undefined8 *)(lVar2 + 0x68) * fVar11 +
           (float)*(undefined8 *)(lVar2 + 0x48) * fVar7 + *(float *)(lVar2 + 0x58) * fVar9;
  fVar17 = *(float *)(param_2 + 0x74);
  fVar7 = (float)*(undefined8 *)(lVar3 + 0x60) * fVar10 +
          *(float *)(lVar3 + 0x40) * fVar6 + (float)*(undefined8 *)(lVar3 + 0x50) * fVar8;
  fVar9 = (float)((ulong)*(undefined8 *)(lVar3 + 0x60) >> 0x20) * fVar10 +
          *(float *)(lVar3 + 0x44) * fVar6 +
          (float)((ulong)*(undefined8 *)(lVar3 + 0x50) >> 0x20) * fVar8;
  fVar11 = (float)*(undefined8 *)(lVar3 + 0x68) * fVar10 +
           *(float *)(lVar3 + 0x48) * fVar6 + (float)*(undefined8 *)(lVar3 + 0x58) * fVar8;
  puVar5[3] = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x68) >> 0x20) * fVar10 +
                       *(float *)(lVar3 + 0x4c) * fVar6 +
                       (float)((ulong)*(undefined8 *)(lVar3 + 0x58) >> 0x20) * fVar8,fVar11);
  puVar5[2] = CONCAT44(fVar9,fVar7);
  fVar6 = fVar12 * fVar12 * (float)*(undefined8 *)(lVar2 + 0x30) +
          fVar7 * fVar7 * (float)*(undefined8 *)(lVar3 + 0x30);
  fVar8 = fVar13 * fVar13 * (float)((ulong)*(undefined8 *)(lVar2 + 0x30) >> 0x20) +
          fVar9 * fVar9 * (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
  fVar10 = fVar14 * fVar14 * (float)*(undefined8 *)(lVar2 + 0x38) +
           fVar11 * fVar11 * (float)*(undefined8 *)(lVar3 + 0x38);
  uVar15 = CONCAT44(fVar6 + fVar8 + fVar10 + 1.1920929e-07,fVar6 + fVar8 + fVar10 + 1.1920929e-07);
  uVar18 = NEON_frecpe(uVar15,4);
  uVar19 = NEON_frecps(uVar15,uVar18,4);
  fVar6 = (float)uVar18 * (float)uVar19;
  uVar15 = NEON_frecps(uVar15,CONCAT44((float)((ulong)uVar18 >> 0x20) *
                                       (float)((ulong)uVar19 >> 0x20),fVar6),4);
  puVar5[1] = CONCAT44(fVar17 * fVar6 * (float)uVar15,fVar14);
  *puVar5 = CONCAT44(fVar13,fVar12);
  fVar6 = (float)*param_1 * *(float *)(param_1 + 4);
  fVar8 = (float)((ulong)*param_1 >> 0x20) * *(float *)((long)param_1 + 0x24);
  fVar10 = (float)param_1[1] * *(float *)(param_1 + 5);
  fVar12 = (float)((ulong)param_1[1] >> 0x20) * *(float *)((long)param_1 + 0x2c);
  auVar16._4_4_ = fVar8;
  auVar16._0_4_ = fVar6;
  auVar16._8_4_ = fVar10;
  auVar16._12_4_ = fVar12;
  auVar4._4_4_ = fVar8;
  auVar4._0_4_ = fVar6;
  auVar4._8_4_ = fVar10;
  auVar4._12_4_ = fVar12;
  auVar16 = NEON_ext(auVar16,auVar4,8,1);
  puVar5[3] = CONCAT44(-((fVar6 + fVar8 + auVar16._0_4_) * *(float *)(param_2 + 0x1c)),fVar11);
  puVar5[2] = CONCAT44(fVar9,fVar7);
  if ((0.0 <= *(float *)(param_1 + 6)) && (0.0 <= *(float *)((long)param_1 + 0x34))) {
    *param_3 = puVar5 + 6;
    uVar1 = *(undefined4 *)((long)param_1 + 0x34);
    *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_1 + 6);
    *(undefined4 *)((long)puVar5 + 0x24) = uVar1;
    *(undefined1 *)puVar5 = 0xc;
    return;
  }
  *param_3 = puVar5 + 4;
  *(undefined1 *)puVar5 = 0xb;
  return;
}


