/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004686c0; name: FUN_004686c0
 */


undefined4 FUN_004686c0(int *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  uint local_2c;
  undefined8 local_28;
  
  if (param_1[1] == 0x18) {
    if (*param_1 != 0xf) {
      return 0;
    }
  }
  else {
    if (param_1[1] != 0x17) {
      return 0;
    }
    if (*param_1 != 0xd) {
      return 0;
    }
  }
  lVar3 = *(long *)(param_1 + 2);
  lVar4 = 0;
  do {
    iVar1 = FUN_00405430(*(undefined1 *)(lVar3 + lVar4),4);
    if (iVar1 == 0) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = lVar4 + 1;
  } while (lVar4 < (long)*param_1 + -1);
  if (*(char *)(lVar3 + (long)*param_1 + -1) != 'Z') {
    return 0;
  }
  if (param_2 == (undefined8 *)0x0) {
    FUN_00428290(&local_28);
  }
  else {
    local_28 = *param_2;
  }
  lVar4 = FUN_00447e00(0,local_28,0,0);
  if ((lVar4 == 0) || (iVar1 = FUN_00447ed0(&local_28,&local_2c,param_1,lVar4), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (-1 < (int)(local_2c | (uint)local_28)) {
      uVar2 = 0xffffffff;
    }
  }
  FUN_004475a0(lVar4);
  return uVar2;
}


