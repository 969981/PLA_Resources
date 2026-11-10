/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea6be4; name: FUN_02ea6be4
 */


uint FUN_02ea6be4(long param_1,long param_2,uint param_3)

{
  bool bVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar6 = *(uint *)(param_1 + 0x20);
  bVar1 = param_3 < uVar6;
  if (bVar1) {
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  uVar7 = 0;
  uVar5 = (uint)bVar1;
  if (param_3 != 0) {
    uVar7 = 0;
    uVar8 = (ulong)param_3;
    fVar2 = *(float *)(param_2 + 8);
    pfVar3 = (float *)(param_2 + 0xc);
    while( true ) {
      if ((fVar2 != 0.0) && (0.0 < *pfVar3)) {
        uVar4 = FUN_02ea6b44(param_1,*(undefined8 *)(pfVar3 + -3));
        uVar5 = uVar5 | uVar4;
        uVar7 = uVar7 + (~uVar4 & 1);
      }
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) break;
      fVar2 = pfVar3[3];
      pfVar3 = pfVar3 + 4;
    }
  }
  if (uVar7 < uVar6) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_02ea6be4(param_1,param_2,param_3);
  }
  return uVar5 & 1;
}


