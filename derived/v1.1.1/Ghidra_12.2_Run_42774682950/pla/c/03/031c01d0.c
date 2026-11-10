/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c01d0; name: FUN_031c01d0
 */


undefined1  [16] FUN_031c01d0(long *param_1)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar7;
  ulong uVar5;
  float fVar8;
  undefined1 auVar6 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar15 = *(undefined8 *)(*param_1 + 0x100);
  fVar9 = (float)uVar15;
  fVar3 = fVar9 - (float)param_1[2];
  fVar10 = (float)((ulong)uVar15 >> 0x20);
  fVar7 = fVar10 - (float)((ulong)param_1[2] >> 0x20);
  fVar11 = (float)*(undefined8 *)(*param_1 + 0x108);
  fVar8 = fVar11 - (float)param_1[3];
  fVar3 = fVar3 * fVar3;
  fVar7 = fVar7 * fVar7;
  fVar8 = fVar8 * fVar8;
  fVar4 = fVar3 + fVar7 + fVar8;
  fVar8 = fVar3 + fVar7 + fVar8;
  uVar15 = CONCAT44(fVar8,fVar4);
  uVar14 = NEON_frsqrte(uVar15,4);
  fVar3 = (float)uVar14;
  fVar7 = (float)((ulong)uVar14 >> 0x20);
  uVar14 = NEON_frsqrts(uVar15,CONCAT44(fVar7 * fVar7,fVar3 * fVar3),4);
  fVar3 = fVar3 * (float)uVar14;
  fVar7 = fVar7 * (float)((ulong)uVar14 >> 0x20);
  uVar15 = NEON_frsqrts(uVar15,CONCAT44(fVar7 * fVar7,fVar3 * fVar3),4);
  iVar12 = -(uint)(fVar4 <= 0.0);
  iVar13 = -(uint)(fVar8 <= 0.0);
  fVar4 = fVar4 * (float)uVar15 * fVar3;
  fVar8 = fVar8 * (float)((ulong)uVar15 >> 0x20) * fVar7;
  uVar5 = CONCAT17((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                   CONCAT16((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                            CONCAT15((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                     CONCAT14(SUB41(fVar8,0) & ~(byte)iVar13,
                                              CONCAT13((byte)((uint)fVar4 >> 0x18) &
                                                       ~(byte)((uint)iVar12 >> 0x18),
                                                       CONCAT12((byte)((uint)fVar4 >> 0x10) &
                                                                ~(byte)((uint)iVar12 >> 0x10),
                                                                CONCAT11((byte)((uint)fVar4 >> 8) &
                                                                         ~(byte)((uint)iVar12 >> 8),
                                                                         SUB41(fVar4,0) &
                                                                         ~(byte)iVar12)))))));
  if (1 < (int)param_1[1]) {
    lVar1 = (long)(int)param_1[1] + -1;
    plVar2 = param_1 + 6;
    do {
      lVar1 = lVar1 + -1;
      fVar3 = fVar9 - (float)*plVar2;
      fVar7 = fVar10 - (float)((ulong)*plVar2 >> 0x20);
      fVar8 = fVar11 - (float)plVar2[1];
      fVar3 = fVar3 * fVar3;
      fVar7 = fVar7 * fVar7;
      fVar8 = fVar8 * fVar8;
      fVar4 = fVar3 + fVar7 + fVar8;
      fVar8 = fVar3 + fVar7 + fVar8;
      uVar15 = CONCAT44(fVar8,fVar4);
      uVar14 = NEON_frsqrte(uVar15,4);
      fVar3 = (float)uVar14;
      fVar7 = (float)((ulong)uVar14 >> 0x20);
      uVar14 = NEON_frsqrts(uVar15,CONCAT44(fVar7 * fVar7,fVar3 * fVar3),4);
      fVar3 = fVar3 * (float)uVar14;
      fVar7 = fVar7 * (float)((ulong)uVar14 >> 0x20);
      uVar15 = NEON_frsqrts(uVar15,CONCAT44(fVar7 * fVar7,fVar3 * fVar3),4);
      iVar12 = -(uint)(fVar4 <= 0.0);
      iVar13 = -(uint)(fVar8 <= 0.0);
      fVar4 = fVar4 * (float)uVar15 * fVar3;
      fVar8 = fVar8 * (float)((ulong)uVar15 >> 0x20) * fVar7;
      uVar5 = NEON_fmin(uVar5,CONCAT17((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                                       CONCAT16((byte)((uint)fVar8 >> 0x10) &
                                                ~(byte)((uint)iVar13 >> 0x10),
                                                CONCAT15((byte)((uint)fVar8 >> 8) &
                                                         ~(byte)((uint)iVar13 >> 8),
                                                         CONCAT14(SUB41(fVar8,0) & ~(byte)iVar13,
                                                                  CONCAT13((byte)((uint)fVar4 >>
                                                                                 0x18) &
                                                                           ~(byte)((uint)iVar12 >>
                                                                                  0x18),
                                                                           CONCAT12((byte)((uint)
                                                  fVar4 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar4 >> 8) &
                                                           ~(byte)((uint)iVar12 >> 8),
                                                           SUB41(fVar4,0) & ~(byte)iVar12))))))),4);
      plVar2 = plVar2 + 4;
    } while (lVar1 != 0);
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar5;
  return auVar6;
}


