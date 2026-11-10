/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a3a4e4; name: FUN_01a3a4e4
 */


void FUN_01a3a4e4(undefined4 param_1,long param_2)

{
  float fVar1;
  float fVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  FUN_01903f90(&local_70,*(undefined8 *)(param_2 + 0x700),param_2 + 0x5b0);
  *(undefined8 *)(param_2 + 0xdd78) = local_58;
  *(undefined8 *)(param_2 + 0xdd88) = local_48;
  *(undefined8 *)(param_2 + 0xdd60) = local_70;
  *(undefined8 *)(param_2 + 0xdd68) = uStack_68;
  *(undefined8 *)(param_2 + 0xdd70) = local_60;
  *(undefined8 *)(param_2 + 0xdd90) = local_40;
  *(undefined8 *)(param_2 + 0xdd80) = local_50;
  *(undefined4 *)(param_2 + 0xdd94) = 1;
  *(undefined4 *)(param_2 + 0xdd80) = param_1;
  if (*(char *)(param_2 + 0x370) == '\0') {
    *(undefined4 *)(param_2 + 0x364) = *(undefined4 *)(param_2 + 0xdd84);
    *(undefined4 *)(param_2 + 0x360) = param_1;
    fVar1 = *(float *)(param_2 + 0xdd78);
    *(ulong *)(param_2 + 0x358) = (ulong)(uint)fVar1;
    *(undefined8 *)(param_2 + 0x350) = 0;
    *(undefined8 *)(param_2 + 0x340) = *(undefined8 *)(param_2 + 0xdd60);
    *(undefined8 *)(param_2 + 0x348) = *(undefined8 *)(param_2 + 0xdd68);
  }
  else {
    fVar1 = *(float *)(param_2 + 0xdd78);
  }
  fVar2 = *(float *)(param_2 + 0x468);
  *(float *)(param_2 + 0x468) = fVar1;
  fVar1 = fVar1 - fVar2;
  *(bool *)(param_2 + 0x470) = 1.1920929e-07 < fVar1;
  if (fVar2 <= *(float *)(param_2 + 0x46c)) {
    *(float *)(param_2 + 0x46c) = fVar1 + *(float *)(param_2 + 0x46c);
  }
  return;
}


