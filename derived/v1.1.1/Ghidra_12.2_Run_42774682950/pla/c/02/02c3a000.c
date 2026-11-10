/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c3a000; name: FUN_02c3a000
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c3a000(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = _UNK_03888d28;
  uVar2 = _DAT_03888d20;
  if (*(char *)(param_1 + 0x4d) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 2) {
    fVar6 = 1.0 / (*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x34));
    fVar4 = 1.0 / (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x3c));
    fVar5 = -1.0 / (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x44));
    *(ulong *)(param_1 + 0x58) =
         (ulong)(uint)-((*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38)) * fVar6) << 0x20;
    *(ulong *)(param_1 + 0x50) = (ulong)(uint)(fVar6 + fVar6);
    *(ulong *)(param_1 + 0x68) =
         (ulong)(uint)-((*(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40)) * fVar4) << 0x20;
    *(ulong *)(param_1 + 0x60) = (ulong)(uint)(fVar4 + fVar4) << 0x20;
    uVar3 = _UNK_0388a138;
    uVar2 = _DAT_0388a130;
    *(ulong *)(param_1 + 0x78) = CONCAT44(*(float *)(param_1 + 0x44) * fVar5,fVar5);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      fVar6 = *(float *)(param_1 + 0x44);
      fVar7 = *(float *)(param_1 + 0x48);
      fVar8 = 1.0 / (*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x34));
      fVar5 = 1.0 / (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x3c));
      fVar4 = -1.0 / (fVar7 - fVar6);
      *(ulong *)(param_1 + 0x58) =
           (ulong)(uint)((*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38)) * fVar8);
      *(ulong *)(param_1 + 0x50) = (ulong)(uint)(fVar8 * (fVar6 + fVar6));
      *(ulong *)(param_1 + 0x68) =
           (ulong)(uint)((*(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40)) * fVar5);
      *(ulong *)(param_1 + 0x60) = (ulong)(uint)((fVar6 + fVar6) * fVar5) << 0x20;
      uVar3 = _UNK_03888d28;
      uVar2 = _DAT_03888d20;
      *(ulong *)(param_1 + 0x78) = CONCAT44(fVar6 * fVar7 * fVar4,fVar7 * fVar4);
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x88) = uVar3;
      *(undefined8 *)(param_1 + 0x80) = uVar2;
      return;
    }
    return;
  }
  fVar5 = *(float *)(param_1 + 0x34) * 0.5;
  fVar4 = 0.5;
  if (fVar5 < 0.0) {
    fVar4 = -0.5;
  }
  fVar6 = *(float *)(param_1 + 0x48);
  fVar5 = fVar5 - *(float *)PTR_Float2Pi_04372d30 *
                  (float)(int)(fVar4 + fVar5 * *(float *)PTR_Float1Divided2Pi_04372d20);
  if (*(float *)PTR_FloatPiDivided2_04372d38 < fVar5) {
    fVar4 = *(float *)PTR_FloatPi_04372cf0;
  }
  else {
    if (-*(float *)PTR_FloatPiDivided2_04372d38 <= fVar5) {
      fVar4 = 1.0;
      goto LAB_02c3a1bc;
    }
    fVar4 = -*(float *)PTR_FloatPi_04372cf0;
  }
  fVar5 = fVar4 - fVar5;
  fVar4 = -1.0;
LAB_02c3a1bc:
  fVar8 = fVar5 * fVar5;
  fVar7 = -1.0 / (fVar6 - *(float *)(param_1 + 0x44));
  fVar4 = 1.0 / ((fVar5 * (fVar8 * (fVar8 * (*(float *)(PTR_SinCoefficients_04372d28 + 0xc) +
                                            fVar8 * (fVar8 * (*(float *)(
                                                  PTR_SinCoefficients_04372d28 + 4) -
                                                  *(float *)PTR_SinCoefficients_04372d28 * fVar8) -
                                                  *(float *)(PTR_SinCoefficients_04372d28 + 8))) -
                                   *(float *)(PTR_SinCoefficients_04372d28 + 0x10)) + 1.0)) /
                (fVar4 * (fVar8 * (fVar8 * (*(float *)(PTR_CosCoefficients_04372d40 + 0xc) +
                                           fVar8 * (fVar8 * (*(float *)(PTR_CosCoefficients_04372d40
                                                                       + 4) -
                                                            fVar8 * *(float *)
                                                  PTR_CosCoefficients_04372d40) -
                                                  *(float *)(PTR_CosCoefficients_04372d40 + 8))) -
                                  *(float *)(PTR_CosCoefficients_04372d40 + 0x10)) + 1.0)));
  *(ulong *)(param_1 + 0x78) = CONCAT44(*(float *)(param_1 + 0x44) * fVar6 * fVar7,fVar6 * fVar7);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(ulong *)(param_1 + 0x50) = (ulong)(uint)(fVar4 / *(float *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(ulong *)(param_1 + 0x60) = (ulong)(uint)fVar4 << 0x20;
  return;
}


