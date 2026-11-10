/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a452ec; name: FUN_01a452ec
 */


void FUN_01a452ec(float param_1,long param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float *pfVar5;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  float local_38;
  float local_34;
  
  local_34 = param_1;
  if ((param_4 != -1) && (0.0 < param_1)) {
    local_38 = 1.0;
    pfVar5 = &local_38;
    if (param_1 <= 1.0) {
      pfVar5 = &local_34;
    }
    local_80 = local_80 & 0xffffffff00000000;
    if (param_1 < 0.0) {
      pfVar5 = (float *)&local_80;
    }
    fVar4 = *pfVar5;
    local_48 = *(undefined8 *)(param_2 + 0x378);
    local_58 = *(undefined8 *)(param_2 + 0x368);
    local_68 = *(undefined8 *)(param_2 + 0x358);
    local_78 = *(undefined8 *)(param_2 + 0x348);
    local_80 = *(undefined8 *)(param_2 + 0x340);
    local_70 = *(undefined8 *)(param_2 + 0x350);
    local_60 = *(undefined8 *)(param_2 + 0x360);
    local_50 = *(undefined8 *)(param_2 + 0x370);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *(undefined8 *)(param_2 + 0x490) = param_3[2];
    *(undefined8 *)(param_2 + 0x480) = uVar1;
    *(undefined8 *)(param_2 + 0x488) = uVar2;
    uVar1 = param_3[3];
    uVar2 = param_3[5];
    uVar3 = param_3[6];
    *(undefined8 *)(param_2 + 0x4a0) = param_3[4];
    *(undefined8 *)(param_2 + 0x4b0) = uVar3;
    *(undefined8 *)(param_2 + 0x4a8) = uVar2;
    *(undefined8 *)(param_2 + 0x498) = uVar1;
    local_34 = fVar4;
    memmove((void *)(param_2 + 0x500),param_3,0x38);
    *(undefined8 *)(param_2 + 0x4d0) = local_70;
    *(ulong *)(param_2 + 0x4c0) = local_80;
    *(undefined8 *)(param_2 + 0x4c8) = local_78;
    *(int *)(param_2 + 0x540) = param_4;
    *(undefined8 *)(param_2 + 0x4e0) = local_60;
    *(undefined8 *)(param_2 + 0x4f0) = local_50;
    *(undefined8 *)(param_2 + 0x4e8) = local_58;
    *(undefined8 *)(param_2 + 0x4d8) = local_68;
    *(float *)(param_2 + 0x544) = fVar4;
    *(undefined8 *)(param_2 + 0x548) = 0;
    *(undefined4 *)(param_2 + 0x3e4) = 1;
  }
  return;
}


