/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046a8e0; name: FUN_0046a8e0
 */


undefined8 FUN_0046a8e0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 200) = param_2;
  }
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
  uVar2 = FUN_00466be0(param_2);
  iVar1 = FUN_004686c0(uVar2,lVar6);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    uVar5 = 0xf;
LAB_0046a94c:
    *(undefined4 *)(param_1 + 0xb0) = uVar5;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  else if (0 < iVar1) {
    if (param_3 == 0) {
      return 0;
    }
    uVar5 = 0xb;
    goto LAB_0046a94c;
  }
  lVar3 = FUN_00466bf0(param_2);
  if (lVar3 == 0) {
LAB_0046a99c:
    if (param_3 == 0) {
      return 1;
    }
  }
  else {
    uVar2 = FUN_00466bf0(param_2);
    iVar1 = FUN_004686c0(uVar2,lVar6);
    if (iVar1 == 0) {
      if (param_3 == 0) {
        return 0;
      }
      uVar5 = 0x10;
    }
    else {
      if ((-1 < iVar1) || ((*(byte *)(param_1 + 0xd0) >> 1 & 1) != 0)) goto LAB_0046a99c;
      if (param_3 == 0) {
        return 0;
      }
      uVar5 = 0xc;
    }
    *(undefined4 *)(param_1 + 0xb0) = uVar5;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  *(undefined8 *)(param_1 + 200) = 0;
  return 1;
}


