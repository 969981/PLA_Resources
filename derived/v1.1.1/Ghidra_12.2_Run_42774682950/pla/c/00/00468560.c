/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00468560; name: FUN_00468560
 */


undefined8 FUN_00468560(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  
  uVar4 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  if ((uVar4 >> 1 & 1) == 0) {
    if ((uVar4 >> 0x15 & 1) != 0) {
      return 1;
    }
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x20) + 8;
  }
  uVar2 = FUN_00466c80(param_2);
  iVar1 = FUN_004686c0(uVar2,lVar6);
  if ((param_3 < 0) && (-1 < iVar1)) {
    return 0;
  }
  if (iVar1 == 0) {
    *(int *)(param_1 + 0xac) = param_3;
    lVar3 = param_2;
    if (param_2 == 0) {
      lVar3 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),param_3);
    }
    *(long *)(param_1 + 0xb8) = lVar3;
    uVar5 = 0xd;
  }
  else {
    if (iVar1 < 1) goto LAB_00468614;
    *(int *)(param_1 + 0xac) = param_3;
    lVar3 = param_2;
    if (param_2 == 0) {
      lVar3 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),param_3);
    }
    uVar5 = 9;
    *(long *)(param_1 + 0xb8) = lVar3;
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar5;
  uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
LAB_00468614:
  uVar2 = FUN_00466c90(param_2);
  iVar1 = FUN_004686c0(uVar2,lVar6);
  if ((param_3 < 0) && (iVar1 < 1)) {
    return 0;
  }
  if (iVar1 == 0) {
    *(int *)(param_1 + 0xac) = param_3;
    if (param_2 == 0) {
      param_2 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),param_3);
    }
    *(long *)(param_1 + 0xb8) = param_2;
    uVar5 = 0xe;
  }
  else {
    if (-1 < iVar1) {
      return 1;
    }
    *(int *)(param_1 + 0xac) = param_3;
    if (param_2 == 0) {
      param_2 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),param_3);
    }
    uVar5 = 10;
    *(long *)(param_1 + 0xb8) = param_2;
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar5;
  uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  return 1;
}


