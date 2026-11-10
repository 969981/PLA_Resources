/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301f2c0; name: FUN_0301f2c0
 */


void FUN_0301f2c0(float *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar1 = *(long *)(param_2 + 0x30);
  lVar2 = *(long *)(param_2 + 0x38);
  fVar9 = (float)*(undefined8 *)(param_1 + 6);
  fVar5 = (float)*(undefined8 *)(param_1 + 4);
  fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar4 = -fVar5;
  fVar6 = -fVar7;
  fVar8 = -fVar9;
  pfVar3 = (float *)*param_3;
  fVar15 = *(float *)(param_2 + 0x74);
  fVar10 = (float)*(undefined8 *)(lVar1 + 0x60) * fVar9 +
           *(float *)(lVar1 + 0x40) * fVar5 + (float)*(undefined8 *)(lVar1 + 0x50) * fVar7;
  fVar13 = (float)((ulong)*(undefined8 *)(lVar1 + 0x60) >> 0x20) * fVar9 +
           *(float *)(lVar1 + 0x44) * fVar5 +
           (float)((ulong)*(undefined8 *)(lVar1 + 0x50) >> 0x20) * fVar7;
  fVar14 = (float)*(undefined8 *)(lVar1 + 0x68) * fVar9 +
           *(float *)(lVar1 + 0x48) * fVar5 + (float)*(undefined8 *)(lVar1 + 0x58) * fVar7;
  fVar5 = (float)*(undefined8 *)(lVar2 + 0x60) * fVar8 +
          (float)*(undefined8 *)(lVar2 + 0x40) * fVar4 +
          (float)*(undefined8 *)(lVar2 + 0x50) * fVar6;
  fVar7 = (float)((ulong)*(undefined8 *)(lVar2 + 0x60) >> 0x20) * fVar8 +
          (float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20) * fVar4 +
          (float)((ulong)*(undefined8 *)(lVar2 + 0x50) >> 0x20) * fVar6;
  fVar9 = (float)*(undefined8 *)(lVar2 + 0x68) * fVar8 +
          (float)*(undefined8 *)(lVar2 + 0x48) * fVar4 +
          (float)*(undefined8 *)(lVar2 + 0x58) * fVar6;
  *(ulong *)(pfVar3 + 6) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x68) >> 0x20) * fVar8 +
                (float)((ulong)*(undefined8 *)(lVar2 + 0x48) >> 0x20) * fVar4 +
                (float)((ulong)*(undefined8 *)(lVar2 + 0x58) >> 0x20) * fVar6,fVar9);
  *(ulong *)(pfVar3 + 4) = CONCAT44(fVar7,fVar5);
  fVar4 = fVar10 * fVar10 * (float)*(undefined8 *)(lVar1 + 0x30) +
          fVar5 * fVar5 * (float)*(undefined8 *)(lVar2 + 0x30);
  fVar6 = fVar13 * fVar13 * (float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20) +
          fVar7 * fVar7 * (float)((ulong)*(undefined8 *)(lVar2 + 0x30) >> 0x20);
  fVar8 = fVar14 * fVar14 * (float)*(undefined8 *)(lVar1 + 0x38) +
          fVar9 * fVar9 * (float)*(undefined8 *)(lVar2 + 0x38);
  uVar16 = CONCAT44(fVar4 + fVar6 + fVar8 + 1.1920929e-07,fVar4 + fVar6 + fVar8 + 1.1920929e-07);
  uVar17 = NEON_frecpe(uVar16,4);
  uVar18 = NEON_frecps(uVar16,uVar17,4);
  fVar4 = (float)uVar17 * (float)uVar18;
  uVar16 = NEON_frecps(uVar16,CONCAT44((float)((ulong)uVar17 >> 0x20) *
                                       (float)((ulong)uVar18 >> 0x20),fVar4),4);
  pfVar3[2] = fVar14;
  pfVar3[3] = fVar15 * fVar4 * (float)uVar16;
  *pfVar3 = fVar10;
  pfVar3[1] = fVar13;
  auVar11._0_4_ = *param_1 * (float)*(undefined8 *)(param_1 + 8);
  auVar11._4_4_ = param_1[1] * (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  auVar11._8_4_ = param_1[2] * (float)*(undefined8 *)(param_1 + 10);
  auVar11._12_4_ = param_1[3] * (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20);
  auVar12 = NEON_ext(auVar11,auVar11,8,1);
  *(ulong *)(pfVar3 + 6) =
       CONCAT44(-((auVar11._0_4_ + auVar11._4_4_ + auVar12._0_4_) * *(float *)(param_2 + 0x1c)),
                fVar9);
  *(ulong *)(pfVar3 + 4) = CONCAT44(fVar7,fVar5);
  *param_3 = pfVar3 + 8;
  *(undefined1 *)pfVar3 = 0xb;
  return;
}


