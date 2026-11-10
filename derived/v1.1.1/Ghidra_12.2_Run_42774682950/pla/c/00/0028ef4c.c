/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028ef4c; name: FUN_0028ef4c
 */


float * FUN_0028ef4c(long param_1)

{
  float *pfVar1;
  uint uVar2;
  undefined *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar3 = PTR_SinCosSampleTable_04372ce8;
  pfVar4 = *(float **)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x40);
  if (0 < iVar6) {
    iVar5 = 0;
    fVar9 = *(float *)PTR_FloatPi_04372cf0;
    fVar8 = *(float *)PTR_FloatDegree180_04372ce0;
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
    do {
      uVar7 = (ulong)((fVar10 / fVar9) * (((fVar9 / fVar8) * 360.0 * (float)iVar5) / (float)iVar6));
      pfVar1 = (float *)(puVar3 + (uVar7 >> 0x18 & 0xff) * 0x10);
      fVar11 = (float)((uint)uVar7 & 0xffffff) * 5.9604645e-08;
      uVar2 = *(uint *)(param_1 + 0x18);
      fVar12 = *pfVar1 + pfVar1[2] * fVar11;
      fVar11 = pfVar1[1] + pfVar1[3] * fVar11;
      pfVar1 = pfVar4;
      if ((uVar2 & 1) != 0) {
        *pfVar4 = fVar12;
        pfVar4[1] = fVar11;
        pfVar4[2] = 0.0;
        uVar2 = *(uint *)(param_1 + 0x18);
        pfVar1 = pfVar4 + 3;
      }
      if ((uVar2 >> 1 & 1) != 0) {
        pfVar1[0] = 0.0;
        pfVar1[1] = 0.0;
        pfVar1[2] = 1.0;
        uVar2 = *(uint *)(param_1 + 0x18);
        pfVar1 = pfVar1 + 3;
      }
      pfVar4 = pfVar1;
      if ((uVar2 >> 2 & 1) != 0) {
        pfVar4 = pfVar1 + 2;
        *pfVar1 = fVar12 * 0.5 + 0.5;
        pfVar1[1] = 1.0 - (fVar11 * 0.5 + 0.5);
      }
      iVar6 = *(int *)(param_1 + 0x40);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((uVar2 & 1) != 0) {
    pfVar4[0] = 0.0;
    pfVar4[1] = 0.0;
    pfVar4[2] = 0.0;
    uVar2 = *(uint *)(param_1 + 0x18);
    pfVar4 = pfVar4 + 3;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pfVar4[0] = 0.0;
    pfVar4[1] = 0.0;
    pfVar4[2] = 1.0;
    uVar2 = *(uint *)(param_1 + 0x18);
    pfVar4 = pfVar4 + 3;
  }
  if ((uVar2 >> 2 & 1) == 0) {
    return pfVar4;
  }
  *(undefined1 **)pfVar4 = &DAT_3f0000003f000000;
  return pfVar4 + 2;
}


