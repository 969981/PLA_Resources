/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01008ac8; name: FUN_01008ac8
 */


bool FUN_01008ac8(ulong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  
  fVar3 = (float)*param_1;
  fVar4 = (float)(*param_1 >> 0x20);
  fVar1 = fVar3 * fVar3 + fVar4 * fVar4;
  fVar2 = fVar3 * fVar3 + fVar4 * fVar4;
  uVar6 = NEON_frsqrte(CONCAT44(fVar2,fVar1),4);
  fVar7 = (float)((ulong)uVar6 >> 0x20);
  uVar9 = NEON_frsqrts(uVar6,CONCAT44(fVar2 * fVar7,fVar1 * (float)uVar6),4);
  fVar5 = (float)uVar6 * (float)uVar9;
  fVar7 = fVar7 * (float)((ulong)uVar9 >> 0x20);
  uVar6 = NEON_frsqrts(CONCAT44(fVar7,fVar5),CONCAT44(fVar2 * fVar7,fVar1 * fVar5),4);
  iVar8 = -(uint)(fVar1 == 0.0);
  iVar10 = -(uint)(fVar2 == 0.0);
  *param_1 = CONCAT44(fVar4 * fVar7 * (float)((ulong)uVar6 >> 0x20),fVar3 * fVar5 * (float)uVar6) &
             CONCAT17(~(byte)((uint)iVar10 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar10 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar10 >> 8),
                                        CONCAT14(~(byte)iVar10,
                                                 CONCAT13(~(byte)((uint)iVar8 >> 0x18),
                                                          CONCAT12(~(byte)((uint)iVar8 >> 0x10),
                                                                   CONCAT11(~(byte)((uint)iVar8 >> 8
                                                                                   ),~(byte)iVar8)))
                                                ))));
  return fVar1 != 0.0;
}


