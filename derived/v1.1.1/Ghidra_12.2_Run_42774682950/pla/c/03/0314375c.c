/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314375c; name: FUN_0314375c
 */


void FUN_0314375c(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar13;
  undefined8 uVar12;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  
  fVar1 = (float)*param_3 - (float)*param_2;
  fVar2 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
  uVar12 = CONCAT44(fVar2,fVar1);
  fVar3 = (float)param_3[1] - (float)param_2[1];
  fVar4 = (float)((ulong)param_3[1] >> 0x20) - (float)((ulong)param_2[1] >> 0x20);
  uVar16 = CONCAT44(fVar4,fVar3);
  fVar5 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar6 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  uVar15 = CONCAT44(fVar6,fVar5);
  uVar11 = NEON_frsqrte(uVar15,4);
  fVar10 = (float)uVar11;
  fVar13 = (float)((ulong)uVar11 >> 0x20);
  uVar11 = NEON_frsqrts(uVar15,CONCAT44(fVar13 * fVar13,fVar10 * fVar10),4);
  fVar10 = fVar10 * (float)uVar11;
  fVar13 = fVar13 * (float)((ulong)uVar11 >> 0x20);
  uVar15 = NEON_frsqrts(uVar15,CONCAT44(fVar13 * fVar13,fVar10 * fVar10),4);
  iVar18 = -(uint)(fVar5 <= 0.0);
  iVar19 = -(uint)(fVar6 <= 0.0);
  fVar5 = fVar5 * (float)uVar15 * fVar10;
  fVar6 = fVar6 * (float)((ulong)uVar15 >> 0x20) * fVar13;
  fVar5 = (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                          CONCAT12((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                                   CONCAT11((byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar18 >> 8),
                                            SUB41(fVar5,0) & ~(byte)iVar18)));
  uVar15 = CONCAT17((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                    CONCAT16((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                             CONCAT15((byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                      CONCAT14(SUB41(fVar6,0) & ~(byte)iVar19,fVar5))));
  if (1.1920929e-07 < fVar5) {
    uVar7 = (undefined1)((uint)param_1 >> 8);
    uVar8 = (undefined1)((uint)param_1 >> 0x10);
    uVar9 = (undefined1)((uint)param_1 >> 0x18);
    uVar12 = NEON_frecpe(CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(SUB41(param_1,0),
                                                                               param_1)))),4);
    uVar16 = NEON_frecps(CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(SUB41(param_1,0),
                                                                               param_1)))),uVar12,4)
    ;
    fVar5 = fVar5 * (float)uVar12 * (float)uVar16 * -0.5;
    fVar10 = (float)((ulong)uVar15 >> 0x20) *
             (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar16 >> 0x20) * -0.5;
    fVar6 = (float)*param_4 * fVar5;
    fVar13 = (float)((ulong)*param_4 >> 0x20) * fVar10;
    fVar5 = (float)param_4[1] * fVar5;
    fVar10 = (float)((ulong)param_4[1] >> 0x20) * fVar10;
    fVar14 = fVar6 * fVar6 + fVar13 * fVar13 + fVar5 * fVar5;
    fVar17 = fVar6 * fVar6 + fVar13 * fVar13 + fVar5 * fVar5;
    uVar12 = CONCAT44(fVar17,fVar14);
    uVar16 = NEON_frsqrte(uVar12,4);
    fVar20 = (float)uVar16;
    fVar21 = (float)((ulong)uVar16 >> 0x20);
    uVar16 = NEON_frsqrts(uVar12,CONCAT44(fVar21 * fVar21,fVar20 * fVar20),4);
    fVar20 = fVar20 * (float)uVar16;
    fVar21 = fVar21 * (float)((ulong)uVar16 >> 0x20);
    uVar12 = NEON_frsqrts(uVar12,CONCAT44(fVar21 * fVar21,fVar20 * fVar20),4);
    iVar18 = -(uint)(fVar14 <= 0.0);
    iVar19 = -(uint)(fVar17 <= 0.0);
    fVar14 = (float)uVar12 * fVar20 * fVar14;
    fVar17 = (float)((ulong)uVar12 >> 0x20) * fVar21 * fVar17;
    fVar14 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                             CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                                      CONCAT11((byte)((uint)fVar14 >> 8) &
                                               ~(byte)((uint)iVar18 >> 8),
                                               SUB41(fVar14,0) & ~(byte)iVar18)));
    uVar12 = CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                      CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                               CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                        CONCAT14(SUB41(fVar17,0) & ~(byte)iVar19,fVar14))));
    if (param_1 < fVar14) {
      uVar16 = NEON_frecpe(uVar12,4);
      uVar12 = NEON_frecps(uVar12,uVar16,4);
      fVar14 = param_1 * (float)uVar16 * (float)uVar12;
      fVar17 = param_1 * (float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar12 >> 0x20);
      fVar6 = fVar6 * fVar14;
      fVar13 = fVar13 * fVar17;
      fVar5 = fVar5 * fVar14;
      fVar10 = fVar10 * fVar17;
    }
    uVar12 = NEON_frecpe(uVar15,4);
    uVar16 = NEON_frecps(uVar15,uVar12,4);
    fVar14 = param_1 * (float)uVar12 * (float)uVar16;
    param_1 = param_1 * (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar16 >> 0x20);
    uVar12 = CONCAT44(fVar13 + fVar2 * param_1,fVar6 + fVar1 * fVar14);
    uVar16 = CONCAT44(fVar10 + fVar4 * param_1,fVar5 + fVar3 * fVar14);
  }
  param_5[1] = uVar16;
  *param_5 = uVar12;
  return;
}


