/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b70d0; name: FUN_031b70d0
 */


undefined1  [16] FUN_031b70d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar3;
  undefined1 auVar2 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  
  fVar1 = (float)*param_1;
  fVar17 = (float)*param_2;
  fVar7 = fVar1 - fVar17;
  fVar3 = (float)((ulong)*param_1 >> 0x20);
  fVar5 = (float)((ulong)*param_2 >> 0x20);
  fVar9 = fVar3 - fVar5;
  fVar10 = (float)param_1[1] - (float)param_2[1];
  fVar7 = fVar7 * fVar7;
  fVar9 = fVar9 * fVar9;
  fVar10 = fVar10 * fVar10;
  fVar8 = fVar7 + fVar9 + fVar10;
  fVar10 = fVar7 + fVar9 + fVar10;
  uVar18 = CONCAT44(fVar10,fVar8);
  uVar15 = NEON_frsqrte(uVar18,4);
  fVar7 = (float)uVar15;
  fVar16 = (float)((ulong)uVar15 >> 0x20);
  uVar15 = NEON_frsqrts(uVar18,CONCAT44(fVar16 * fVar16,fVar7 * fVar7),4);
  fVar7 = fVar7 * (float)uVar15;
  fVar16 = fVar16 * (float)((ulong)uVar15 >> 0x20);
  uVar18 = NEON_frsqrts(uVar18,CONCAT44(fVar16 * fVar16,fVar7 * fVar7),4);
  fVar4 = (float)*param_3;
  fVar1 = fVar1 - fVar4;
  fVar6 = (float)((ulong)*param_3 >> 0x20);
  fVar3 = fVar3 - fVar6;
  fVar9 = (float)param_1[1] - (float)param_3[1];
  iVar11 = -(uint)(fVar8 <= 0.0);
  iVar12 = -(uint)(fVar10 <= 0.0);
  fVar8 = fVar8 * (float)uVar18 * fVar7;
  fVar10 = fVar10 * (float)((ulong)uVar18 >> 0x20) * fVar16;
  fVar8 = (float)CONCAT13((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                          CONCAT12((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                   CONCAT11((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                            SUB41(fVar8,0) & ~(byte)iVar11)));
  fVar1 = fVar1 * fVar1;
  fVar3 = fVar3 * fVar3;
  fVar9 = fVar9 * fVar9;
  fVar7 = fVar1 + fVar3 + fVar9;
  fVar9 = fVar1 + fVar3 + fVar9;
  uVar18 = CONCAT44(fVar9,fVar7);
  uVar15 = NEON_frsqrte(uVar18,4);
  fVar4 = fVar4 - fVar17;
  fVar6 = fVar6 - fVar5;
  fVar3 = (float)param_3[1] - (float)param_2[1];
  fVar1 = (float)uVar15;
  fVar17 = (float)((ulong)uVar15 >> 0x20);
  fVar4 = fVar4 * fVar4;
  fVar6 = fVar6 * fVar6;
  fVar3 = fVar3 * fVar3;
  uVar15 = NEON_frsqrts(uVar18,CONCAT44(fVar17 * fVar17,fVar1 * fVar1),4);
  fVar1 = fVar1 * (float)uVar15;
  fVar17 = fVar17 * (float)((ulong)uVar15 >> 0x20);
  uVar18 = NEON_frsqrts(uVar18,CONCAT44(fVar17 * fVar17,fVar1 * fVar1),4);
  iVar11 = -(uint)(fVar7 <= 0.0);
  iVar13 = -(uint)(fVar9 <= 0.0);
  fVar7 = fVar7 * (float)uVar18 * fVar1;
  fVar9 = fVar9 * (float)((ulong)uVar18 >> 0x20) * fVar17;
  fVar1 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                          CONCAT12((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                   CONCAT11((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                            SUB41(fVar7,0) & ~(byte)iVar11)));
  fVar7 = fVar3 + fVar4 + fVar6;
  fVar3 = fVar3 + fVar4 + fVar6;
  uVar18 = CONCAT44(fVar3,fVar7);
  uVar15 = NEON_frsqrte(uVar18,4);
  fVar17 = (float)uVar15;
  fVar4 = (float)((ulong)uVar15 >> 0x20);
  uVar15 = NEON_frsqrts(uVar18,CONCAT44(fVar4 * fVar4,fVar17 * fVar17),4);
  fVar17 = fVar17 * (float)uVar15;
  fVar4 = fVar4 * (float)((ulong)uVar15 >> 0x20);
  uVar18 = NEON_frsqrts(uVar18,CONCAT44(fVar4 * fVar4,fVar17 * fVar17),4);
  iVar11 = -(uint)(fVar7 <= 0.0);
  iVar14 = -(uint)(fVar3 <= 0.0);
  fVar7 = fVar7 * (float)uVar18 * fVar17;
  fVar3 = fVar3 * (float)((ulong)uVar18 >> 0x20) * fVar4;
  fVar7 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                          CONCAT12((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                   CONCAT11((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                            SUB41(fVar7,0) & ~(byte)iVar11)));
  auVar2._0_4_ = (fVar8 + fVar1 + fVar7) * 0.5;
  auVar2._4_4_ = ((float)(CONCAT17((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                                   CONCAT16((byte)((uint)fVar10 >> 0x10) &
                                            ~(byte)((uint)iVar12 >> 0x10),
                                            CONCAT15((byte)((uint)fVar10 >> 8) &
                                                     ~(byte)((uint)iVar12 >> 8),
                                                     CONCAT14(SUB41(fVar10,0) & ~(byte)iVar12,fVar8)
                                                    ))) >> 0x20) +
                 (float)(CONCAT17((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                                  CONCAT16((byte)((uint)fVar9 >> 0x10) &
                                           ~(byte)((uint)iVar13 >> 0x10),
                                           CONCAT15((byte)((uint)fVar9 >> 8) &
                                                    ~(byte)((uint)iVar13 >> 8),
                                                    CONCAT14(SUB41(fVar9,0) & ~(byte)iVar13,fVar1)))
                                 ) >> 0x20) +
                 (float)(CONCAT17((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                  CONCAT16((byte)((uint)fVar3 >> 0x10) &
                                           ~(byte)((uint)iVar14 >> 0x10),
                                           CONCAT15((byte)((uint)fVar3 >> 8) &
                                                    ~(byte)((uint)iVar14 >> 8),
                                                    CONCAT14(SUB41(fVar3,0) & ~(byte)iVar14,fVar7)))
                                 ) >> 0x20)) * 0.5;
  auVar2._8_8_ = 0;
  return auVar2;
}


