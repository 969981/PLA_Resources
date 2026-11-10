/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c1750; name: FUN_004c1750
 */


undefined8 FUN_004c1750(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_18 [8];
  
  if ((*(int *)(param_1 + 0x40) != 0) || (iVar1 = FUN_004c9950(param_1), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x44) = 3;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0x44);
  if ((uVar3 & 1) == 0) {
    *(uint *)(param_1 + 0x44) = uVar3 | 1;
    FUN_004e6030(param_1,1,0);
    if (*(int *)(*(long *)(param_1 + 0xa8) + 0xfc) != 0) {
      return 0xffffffff;
    }
  }
  else if (*(int *)(*(long *)(param_1 + 0xa8) + 0xfc) == 0) {
    if ((uVar3 >> 1 & 1) == 0) {
      (**(code **)(*(long *)(param_1 + 8) + 0x68))(param_1,0,0,0,0,0,auStack_18);
      uVar3 = *(uint *)(param_1 + 0x44);
      if ((uVar3 >> 1 & 1) == 0) {
        return 0xffffffff;
      }
      goto LAB_004c1834;
    }
  }
  else {
    uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x78))(param_1);
    if ((int)uVar2 == -1) {
      return uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x44);
LAB_004c1834:
  if ((uVar3 == 3) && (*(int *)(*(long *)(param_1 + 0xa8) + 0xfc) == 0)) {
    return 1;
  }
  return 0;
}


