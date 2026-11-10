/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0095d830; name: FUN_0095d830
 */


float FUN_0095d830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  
  fVar3 = (float)param_1;
  fVar4 = (float)((ulong)param_1 >> 0x20);
  fVar1 = fVar3 * fVar3 + fVar4 * fVar4;
  fVar2 = fVar3 * fVar3 + fVar4 * fVar4;
  uVar8 = NEON_frsqrte(CONCAT44(fVar2,fVar1),4);
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  uVar10 = NEON_frsqrts(uVar8,CONCAT44(fVar2 * fVar9,fVar1 * (float)uVar8),4);
  fVar7 = (float)uVar8 * (float)uVar10;
  fVar9 = fVar9 * (float)((ulong)uVar10 >> 0x20);
  iVar5 = -(uint)(fVar1 == 0.0);
  iVar6 = -(uint)(fVar2 == 0.0);
  uVar8 = NEON_frsqrts(CONCAT44(fVar9,fVar7),CONCAT44(fVar2 * fVar9,fVar1 * fVar7),4);
  uVar11 = CONCAT44(fVar9 * (float)((ulong)uVar8 >> 0x20) * fVar4,fVar7 * (float)uVar8 * fVar3) &
           CONCAT17(~(byte)((uint)iVar6 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar6 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar6 >> 8),
                                      CONCAT14(~(byte)iVar6,
                                               CONCAT13(~(byte)((uint)iVar5 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar5 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar5 >> 8),
                                                                          ~(byte)iVar5)))))));
  fVar3 = (float)param_3;
  fVar4 = (float)((ulong)param_3 >> 0x20);
  fVar1 = fVar3 * fVar3 + fVar4 * fVar4;
  fVar2 = fVar3 * fVar3 + fVar4 * fVar4;
  uVar8 = NEON_frsqrte(CONCAT44(fVar2,fVar1),4);
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  uVar10 = NEON_frsqrts(uVar8,CONCAT44(fVar2 * fVar9,fVar1 * (float)uVar8),4);
  fVar7 = (float)uVar8 * (float)uVar10;
  fVar9 = fVar9 * (float)((ulong)uVar10 >> 0x20);
  iVar5 = -(uint)(fVar1 == 0.0);
  iVar6 = -(uint)(fVar2 == 0.0);
  uVar8 = NEON_frsqrts(CONCAT44(fVar9,fVar7),CONCAT44(fVar2 * fVar9,fVar1 * fVar7),4);
  uVar12 = CONCAT44(fVar9 * (float)((ulong)uVar8 >> 0x20) * fVar4,fVar7 * (float)uVar8 * fVar3) &
           CONCAT17(~(byte)((uint)iVar6 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar6 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar6 >> 8),
                                      CONCAT14(~(byte)iVar6,
                                               CONCAT13(~(byte)((uint)iVar5 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar5 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar5 >> 8),
                                                                          ~(byte)iVar5)))))));
  fVar3 = (float)uVar11;
  fVar1 = fVar3 * (float)uVar12;
  fVar4 = (float)(uVar11 >> 0x20);
  fVar2 = fVar4 * (float)(uVar12 >> 0x20);
  fVar2 = (float)FUN_0095d8f0(CONCAT44(fVar1 + fVar2,fVar1 + fVar2));
  uVar8 = NEON_rev64(uVar12,4);
  fVar1 = 360.0 - fVar2;
  if (0.0 <= fVar3 * (float)uVar8 * (float)DAT_0388a6a8 +
             fVar4 * (float)((ulong)uVar8 >> 0x20) * (float)((ulong)DAT_0388a6a8 >> 0x20)) {
    fVar1 = fVar2;
  }
  return fVar1;
}


