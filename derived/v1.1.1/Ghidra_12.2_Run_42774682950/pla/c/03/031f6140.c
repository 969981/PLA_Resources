/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f6140; name: FUN_031f6140
 */


undefined1  [16] FUN_031f6140(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  float fVar3;
  float fVar6;
  ulong uVar4;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  ulong uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  
  iVar1 = (int)((uint)*(byte *)(param_1 + 3) << 0x18) >> 0x19;
  fVar3 = (float)*param_2 - (float)*param_1;
  fVar6 = (float)((ulong)*param_2 >> 0x20) - (float)((ulong)*param_1 >> 0x20);
  fVar7 = (float)param_2[1] - (float)param_1[1];
  fVar8 = (float)((ulong)param_2[1] >> 0x20) - (float)((ulong)param_1[1] >> 0x20);
  if (iVar1 == 1) {
    uVar9 = CONCAT44(fVar6,fVar6);
  }
  else {
    uVar4 = CONCAT17((char)((uint)fVar7 >> 0x18),
                     CONCAT16((char)((uint)fVar7 >> 0x10),
                              CONCAT15((char)((uint)fVar7 >> 8),CONCAT14(SUB41(fVar7,0),fVar7))));
    if (iVar1 != 2) {
      uVar4 = CONCAT44(fVar3,fVar3);
    }
    uVar9 = CONCAT44(fVar8,fVar8);
    if (iVar1 != 3) {
      uVar9 = uVar4;
    }
  }
  cVar2 = -((*(byte *)(param_1 + 3) & 1) == 0);
  fVar3 = -(float)(uVar9 >> 0x20);
  uVar10 = (undefined1)((uint)fVar3 >> 8);
  uVar11 = (undefined1)((uint)fVar3 >> 0x10);
  uVar12 = (undefined1)((uint)fVar3 >> 0x18);
  auVar5._0_8_ = CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14(SUB41(fVar3,0),
                                                                          -(float)uVar9)))) ^
                 (CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14(SUB41(fVar3,0),
                                                                           -(float)uVar9)))) ^ uVar9
                 ) & CONCAT17(cVar2,CONCAT16(cVar2,CONCAT15(cVar2,CONCAT14(cVar2,CONCAT13(cVar2,
                                                  CONCAT12(cVar2,CONCAT11(cVar2,cVar2)))))));
  auVar5._8_8_ = 0;
  return auVar5;
}


