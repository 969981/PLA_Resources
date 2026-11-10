/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a3e7c0; name: FUN_01a3e7c0
 */


void FUN_01a3e7c0(undefined4 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if ((*(char *)(param_2 + 0xe110) == '\0') && (*(char *)(param_2 + 0xde00) == '\0')) {
    if (*(int *)(param_2 + 0x3e4) == 1) {
      fVar3 = *(float *)(param_2 + 0x54c);
    }
    else if ((*(int *)(param_2 + 0x3e4) != 2) || (fVar3 = *(float *)(param_2 + 0x54c), 1.0 <= fVar3)
            ) goto LAB_01a3e810;
    *(undefined4 *)(param_2 + 0x4e0) = param_1;
    FUN_018324c8(&local_70,fVar3,param_2 + 0x480);
    puVar1 = (undefined4 *)(param_2 + 0x520);
    if (1.0 <= *(float *)(param_2 + 0x54c)) {
      puVar1 = (undefined4 *)(param_2 + 0x4e0);
    }
    uVar2 = *puVar1;
    FUN_01903f90(&local_70,*(undefined8 *)(param_2 + 0x700),param_2 + 0x5b0);
    *(undefined8 *)(param_2 + 0xdd78) = local_58;
    *(undefined8 *)(param_2 + 0xdd88) = local_48;
    *(undefined8 *)(param_2 + 0xdd60) = local_70;
    *(undefined8 *)(param_2 + 0xdd68) = local_68;
    *(undefined8 *)(param_2 + 0xdd70) = local_60;
    *(undefined8 *)(param_2 + 0xdd90) = local_40;
    *(undefined8 *)(param_2 + 0xdd80) = local_50;
    *(undefined4 *)(param_2 + 0xdd94) = 1;
    *(undefined4 *)(param_2 + 0xdd80) = uVar2;
    if (*(char *)(param_2 + 0x370) != '\0') {
LAB_01a3e9a4:
      fVar3 = *(float *)(param_2 + 0xdd78);
      goto LAB_01a3e8a4;
    }
    *(undefined4 *)(param_2 + 0x364) = *(undefined4 *)(param_2 + 0xdd84);
    *(undefined4 *)(param_2 + 0x360) = uVar2;
  }
  else {
LAB_01a3e810:
    FUN_01903f90(&local_70,*(undefined8 *)(param_2 + 0x700),param_2 + 0x5b0);
    *(undefined8 *)(param_2 + 0xdd78) = local_58;
    *(undefined8 *)(param_2 + 0xdd88) = local_48;
    *(undefined8 *)(param_2 + 0xdd68) = local_68;
    *(undefined8 *)(param_2 + 0xdd70) = local_60;
    *(undefined8 *)(param_2 + 0xdd60) = local_70;
    *(undefined8 *)(param_2 + 0xdd90) = local_40;
    *(undefined8 *)(param_2 + 0xdd80) = local_50;
    *(undefined4 *)(param_2 + 0xdd94) = 1;
    *(undefined4 *)(param_2 + 0xdd80) = param_1;
    if (*(char *)(param_2 + 0x370) != '\0') goto LAB_01a3e9a4;
    *(undefined4 *)(param_2 + 0x364) = *(undefined4 *)(param_2 + 0xdd84);
    *(undefined4 *)(param_2 + 0x360) = param_1;
  }
  fVar3 = *(float *)(param_2 + 0xdd78);
  *(ulong *)(param_2 + 0x358) = (ulong)(uint)fVar3;
  *(undefined8 *)(param_2 + 0x350) = 0;
  *(undefined8 *)(param_2 + 0x340) = *(undefined8 *)(param_2 + 0xdd60);
  *(undefined8 *)(param_2 + 0x348) = *(undefined8 *)(param_2 + 0xdd68);
LAB_01a3e8a4:
  fVar4 = *(float *)(param_2 + 0x468);
  *(float *)(param_2 + 0x468) = fVar3;
  fVar3 = fVar3 - fVar4;
  *(bool *)(param_2 + 0x470) = 1.1920929e-07 < fVar3;
  if (fVar4 <= *(float *)(param_2 + 0x46c)) {
    *(float *)(param_2 + 0x46c) = fVar3 + *(float *)(param_2 + 0x46c);
  }
  return;
}


