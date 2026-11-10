/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01832760; name: FUN_01832760
 */


void FUN_01832760(undefined8 *param_1,long param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float fVar5;
  float local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  float local_24;
  
  pfVar1 = (float *)(param_2 + 0xcc);
  fVar5 = *(float *)(param_2 + 0xc4) + *pfVar1;
  *pfVar1 = fVar5;
  local_24 = 1.0;
  pfVar3 = &local_24;
  if (fVar5 <= 1.0) {
    pfVar3 = pfVar1;
  }
  local_70 = 0.0;
  if (fVar5 < 0.0) {
    pfVar3 = &local_70;
  }
  fVar5 = *pfVar3;
  *pfVar1 = fVar5;
  if (1.0 <= fVar5) {
    puVar4 = (undefined8 *)(param_2 + 0x40);
  }
  else {
    FUN_018324c8(&local_70,param_2);
    puVar4 = (undefined8 *)(param_2 + 0x80);
    *puVar4 = CONCAT44(uStack_6c,local_70);
    *(undefined8 *)(param_2 + 0x88) = local_68;
    *(undefined8 *)(param_2 + 0x90) = uStack_60;
    *(undefined8 *)(param_2 + 0x98) = local_58;
    *(undefined8 *)(param_2 + 0xa8) = local_48;
    *(undefined8 *)(param_2 + 0xb0) = local_40;
    *(undefined8 *)(param_2 + 0xa0) = local_50;
  }
  uVar2 = puVar4[7];
  param_1[5] = puVar4[5];
  param_1[7] = uVar2;
  uVar2 = puVar4[3];
  param_1[1] = puVar4[1];
  param_1[3] = uVar2;
  uVar2 = *puVar4;
  param_1[2] = puVar4[2];
  *param_1 = uVar2;
  uVar2 = puVar4[4];
  param_1[6] = puVar4[6];
  param_1[4] = uVar2;
  return;
}


