/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f6230; name: FUN_031f6230
 */


undefined8
FUN_031f6230(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar9;
  undefined8 uVar8;
  undefined8 uVar10;
  
  cVar1 = *(char *)(param_1 + 3) >> 1;
  if (cVar1 == '\x01') {
    uVar3 = (undefined4)((ulong)*param_2 >> 0x20);
    uVar2 = CONCAT44(uVar3,uVar3);
    fVar7 = (float)((ulong)*param_3 >> 0x20);
    fVar9 = (float)((ulong)*param_1 >> 0x20);
  }
  else if (cVar1 == '\x03') {
    uVar3 = (undefined4)((ulong)param_2[1] >> 0x20);
    uVar2 = CONCAT44(uVar3,uVar3);
    fVar7 = (float)((ulong)param_3[1] >> 0x20);
    fVar9 = (float)((ulong)param_1[1] >> 0x20);
  }
  else if (cVar1 == '\x02') {
    uVar2 = CONCAT44((int)param_2[1],(int)param_2[1]);
    fVar7 = (float)param_3[1];
    fVar9 = (float)param_1[1];
  }
  else {
    uVar2 = CONCAT44((int)*param_2,(int)*param_2);
    fVar7 = (float)*param_3;
    fVar9 = (float)*param_1;
  }
  fVar5 = fVar7 - (float)uVar2;
  fVar4 = (float)((ulong)uVar2 >> 0x20);
  uVar6 = CONCAT44(fVar7 - fVar4,fVar5);
  if (fVar5 == 0.0) {
    return 0;
  }
  uVar8 = NEON_frecpe(uVar6,4);
  uVar10 = NEON_frecps(uVar6,uVar8,4);
  fVar7 = (float)uVar8 * (float)uVar10;
  fVar5 = (float)((ulong)uVar8 >> 0x20) * (float)((ulong)uVar10 >> 0x20);
  uVar6 = NEON_frecps(uVar6,CONCAT44(fVar5,fVar7),4);
  *param_4 = CONCAT44((fVar9 - fVar4) * fVar5 * (float)((ulong)uVar6 >> 0x20),
                      (fVar9 - (float)uVar2) * fVar7 * (float)uVar6);
  return 1;
}


