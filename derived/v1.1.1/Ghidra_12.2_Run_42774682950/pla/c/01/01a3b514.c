/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a3b514; name: FUN_01a3b514
 */


void FUN_01a3b514(float param_1,float param_2,long param_3)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  puVar1 = PTR_FloatPi_04372cf0;
  *(undefined2 *)(param_3 + 0x3f9) = 0;
  param_1 = (*(float *)puVar1 / *(float *)PTR_FloatDegree180_04372ce0) * param_1;
  fVar2 = (float)FUN_01904460((*(float *)puVar1 / *(float *)PTR_FloatDegree180_04372ce0) * param_2,
                              param_3 + 0x5b0);
  *(double *)(param_3 + 0x700) = (double)fVar2;
  FUN_01903f90(&local_70,param_3 + 0x5b0);
  *(undefined8 *)(param_3 + 0xdd78) = local_58;
  *(undefined8 *)(param_3 + 0xdd88) = local_48;
  *(undefined8 *)(param_3 + 0xdd60) = local_70;
  *(undefined8 *)(param_3 + 0xdd68) = uStack_68;
  *(undefined8 *)(param_3 + 0xdd70) = local_60;
  *(undefined8 *)(param_3 + 0xdd90) = local_40;
  *(undefined8 *)(param_3 + 0xdd80) = local_50;
  *(undefined4 *)(param_3 + 0xdd94) = 1;
  *(float *)(param_3 + 0xdd80) = param_1;
  if (*(char *)(param_3 + 0x370) == '\0') {
    *(undefined4 *)(param_3 + 0x364) = *(undefined4 *)(param_3 + 0xdd84);
    *(float *)(param_3 + 0x360) = param_1;
    fVar2 = *(float *)(param_3 + 0xdd78);
    *(ulong *)(param_3 + 0x358) = (ulong)(uint)fVar2;
    *(undefined8 *)(param_3 + 0x350) = 0;
    *(undefined8 *)(param_3 + 0x340) = *(undefined8 *)(param_3 + 0xdd60);
    *(undefined8 *)(param_3 + 0x348) = *(undefined8 *)(param_3 + 0xdd68);
  }
  else {
    fVar2 = *(float *)(param_3 + 0xdd78);
  }
  fVar3 = *(float *)(param_3 + 0x468);
  *(float *)(param_3 + 0x468) = fVar2;
  fVar2 = fVar2 - fVar3;
  *(bool *)(param_3 + 0x470) = 1.1920929e-07 < fVar2;
  if (fVar3 <= *(float *)(param_3 + 0x46c)) {
    *(float *)(param_3 + 0x46c) = fVar2 + *(float *)(param_3 + 0x46c);
  }
  return;
}


