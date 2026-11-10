/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026ed64; name: FUN_0026ed64
 */


undefined8
FUN_0026ed64(float param_1,ulong *param_2,ulong *param_3,long param_4,undefined8 param_5,
            undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  puVar1 = PTR_Float2Pi_04372d30;
  lVar2 = *(long *)(param_4 + 0xa0);
  if (*(char *)(lVar2 + 0x839) == '\0') {
    fVar3 = *(float *)(lVar2 + 0x848);
  }
  else {
    fVar3 = *(float *)PTR_FloatPi_04372db0 * param_1 + *(float *)PTR_FloatPi_04372db0 * param_1;
  }
  fVar3 = (fVar3 + *(float *)(lVar2 + 0x840) * (float)*(uint *)(param_4 + 0xac) * 2.3283064e-10) -
          *(float *)(lVar2 + 0x840) * 0.5;
  fVar4 = 0.5;
  if (fVar3 < 0.0) {
    fVar4 = -0.5;
  }
  fVar5 = *(float *)PTR_Float1Divided2Pi_04372d20;
  *(uint *)(param_4 + 0xac) = *(uint *)(param_4 + 0xac) * 0x41c64e6d + 0x3039;
  fVar3 = fVar3 - *(float *)puVar1 * (float)(int)(fVar5 * fVar3 + fVar4);
  if (fVar3 <= *(float *)PTR_FloatPiDivided2_04372d38) {
    if (-*(float *)PTR_FloatPiDivided2_04372d38 <= fVar3) {
      fVar4 = 1.0;
      goto LAB_0026ee5c;
    }
    fVar4 = -*(float *)PTR_FloatPi_04372cf0;
  }
  else {
    fVar4 = *(float *)PTR_FloatPi_04372cf0;
  }
  fVar3 = fVar4 - fVar3;
  fVar4 = -1.0;
LAB_0026ee5c:
  fVar6 = *(float *)(lVar2 + 0x85c);
  fVar5 = fVar3 * fVar3;
  fVar7 = *(float *)(param_7 + 0x90);
  fVar3 = fVar3 * (fVar5 * (fVar5 * (*(float *)(PTR_SinCoefficients_04372d28 + 0xc) +
                                    fVar5 * (fVar5 * (*(float *)(PTR_SinCoefficients_04372d28 + 4) -
                                                     *(float *)PTR_SinCoefficients_04372d28 * fVar5)
                                            - *(float *)(PTR_SinCoefficients_04372d28 + 8))) -
                           *(float *)(PTR_SinCoefficients_04372d28 + 0x10)) + 1.0);
  fVar4 = fVar4 * (fVar5 * (fVar5 * (*(float *)(PTR_CosCoefficients_04372d40 + 0xc) +
                                    fVar5 * (fVar5 * (*(float *)(PTR_CosCoefficients_04372d40 + 4) -
                                                     fVar5 * *(float *)PTR_CosCoefficients_04372d40)
                                            - *(float *)(PTR_CosCoefficients_04372d40 + 8))) -
                           *(float *)(PTR_CosCoefficients_04372d40 + 0x10)) + 1.0);
  param_2[1] = (ulong)(uint)(*(float *)(lVar2 + 0x864) * *(float *)(param_7 + 0x98) * fVar4);
  *param_2 = (ulong)(uint)(fVar3 * fVar6 * fVar7);
  fVar5 = *(float *)(param_7 + 0x6c);
  param_3[1] = (ulong)(uint)(fVar5 * fVar4);
  *param_3 = (ulong)(uint)(fVar3 * fVar5);
  return 1;
}


