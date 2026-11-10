/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71b20; name: FUN_02e71b20
 */


undefined8 FUN_02e71b20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_14 [4];
  
  lVar3 = *(long *)(param_1 + 8);
  if (((*(int *)(lVar3 + 0x40) != 0) && (lVar4 = **(long **)(lVar3 + 0x38), lVar4 != 0)) &&
     (*(short *)(lVar4 + 0x38) != 0)) {
    pfVar5 = *(float **)(lVar4 + 0x20);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)pfVar5;
    uVar1 = *(undefined8 *)(pfVar5 + 2);
    uVar2 = *(undefined8 *)(pfVar5 + 4);
    uVar6 = *(undefined8 *)(pfVar5 + 6);
    *(float *)(param_1 + 0x80) = pfVar5[8];
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    *(undefined8 *)(param_1 + 0x78) = uVar6;
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    fVar7 = pfVar5[4];
    fVar8 = pfVar5[5];
    fVar9 = *pfVar5;
    fVar10 = pfVar5[1];
    fVar11 = pfVar5[2];
    fVar12 = pfVar5[3];
    *(int *)(param_1 + 0x48) = (int)((ulong)uVar1 >> 0x20);
    *(int *)(param_1 + 0x4c) = (int)uVar2;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = (int)uVar1;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x60);
    *(float *)(param_1 + 0x3c) = fVar11 * fVar7 - fVar10 * fVar8;
    *(float *)(param_1 + 0x40) = fVar9 * fVar8 - fVar12 * fVar11;
    *(float *)(param_1 + 0x44) = fVar12 * fVar10 - fVar9 * fVar7;
    FUN_02e44d58(&DAT_0440a0e8,*(undefined8 *)(lVar3 + 0x48),auStack_14);
  }
  return 1;
}


