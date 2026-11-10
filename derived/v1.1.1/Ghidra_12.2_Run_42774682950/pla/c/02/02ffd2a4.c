/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffd2a4; name: FUN_02ffd2a4
 */


undefined4 FUN_02ffd2a4(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_20;
  undefined8 uStack_18;
  
  fVar6 = 0.0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  uVar4 = (param_2 - param_1 >> 2) * -0x5555555555555555;
  iVar3 = (int)uVar4;
  if (iVar3 < 1) {
    fVar10 = 0.0;
  }
  else {
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    uVar4 = uVar4 & 0xffffffff;
    pfVar5 = (float *)(param_1 + 8);
    do {
      fVar10 = *pfVar5;
      uVar4 = uVar4 - 1;
      pfVar1 = pfVar5 + -2;
      pfVar5 = pfVar5 + 3;
      fVar6 = fVar6 + (float)*(undefined8 *)pfVar1;
      fVar7 = fVar7 + (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
      fVar8 = fVar8 + fVar10;
      fVar9 = fVar9 + fVar10;
    } while (uVar4 != 0);
    fVar10 = (float)iVar3;
  }
  fVar10 = 1.0 / fVar10;
  local_20 = CONCAT44(fVar7 * fVar10,fVar6 * fVar10);
  uStack_18 = CONCAT44(fVar9 * fVar10,fVar8 * fVar10);
  uVar2 = FUN_03293914(param_3,(ulong)(param_4 - param_3) >> 4,&local_20,param_5);
  return uVar2;
}


