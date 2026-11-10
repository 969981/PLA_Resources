/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d2320; name: FUN_004d2320
 */


undefined8 FUN_004d2320(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  switch(param_1[0x17]) {
  case 0x13:
    iVar1 = FUN_004ca860(param_1);
    if (iVar1 != 1) {
      return 3;
    }
    uVar3 = FUN_004e7650(param_1);
    iVar1 = (int)uVar3;
    goto joined_r0x004d250c;
  case 0x15:
    iVar1 = FUN_004ca860(param_1);
    if (iVar1 != 1) {
      return 3;
    }
    if ((*param_1 != 0x100) && (uVar3 = FUN_004e7650(param_1), (int)uVar3 == 0)) {
      return uVar3;
    }
    param_1[0x17a] = 1;
    break;
  case 0x16:
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) != 0) {
      return 2;
    }
    iVar1 = **(int **)(param_1 + 2);
    if (iVar1 < 0x304) {
      return 2;
    }
    if (iVar1 == 0x10000) {
      return 2;
    }
    if (param_1[0x136] != 1) {
      if ((((uint)param_1[0x173] >> 0x14 & 1) != 0) && (param_1[0x136] != 2)) {
        return 2;
      }
      goto switchD_004d2350_caseD_23;
    }
    if (((uint)param_1[0x173] >> 0x14 & 1) != 0) {
      return 2;
    }
  case 0x1a:
switchD_004d2350_caseD_1a:
    iVar1 = FUN_004ca860(param_1);
    if (iVar1 != 1) {
      return 3;
    }
    break;
  case 0x19:
    if (param_1[0x1d2] != 3) {
      return 2;
    }
    goto switchD_004d2350_caseD_1a;
  case 0x21:
    piVar2 = __errno_location();
    *piVar2 = 0;
    if (((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
         (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) &&
       (iVar1 = FUN_004ca860(param_1), iVar1 != 1)) {
      iVar1 = FUN_004c4da0(param_1,0);
      if (iVar1 != 5) {
        return 3;
      }
      piVar2 = __errno_location();
      if ((*piVar2 != 0x68) && (*piVar2 != 0x20)) {
        return 3;
      }
      param_1[10] = 1;
    }
    break;
  case 0x23:
switchD_004d2350_caseD_23:
    if (param_1[0x136] == 1) {
      iVar1 = FUN_004ca860(param_1);
      if (iVar1 == 0) {
        return 3;
      }
    }
    else {
      lVar4 = *(long *)(*(int **)(param_1 + 2) + 0x30);
      if ((((*(byte *)(lVar4 + 0x60) >> 3 & 1) == 0) &&
          (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
        uVar3 = (**(code **)(lVar4 + 0x10))(param_1);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        uVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0xa2);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        if ((param_1[0x1bc] != 2) &&
           (uVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0xa1),
           (int)uVar3 == 0)) {
          return uVar3;
        }
        param_1[0x20] = 1;
      }
      else {
        uVar3 = (**(code **)(lVar4 + 0x20))(param_1,0x22);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) != 0) {
          FUN_004c94e0(param_1,2);
        }
      }
    }
    break;
  case 0x24:
    iVar1 = FUN_004ca860(param_1);
    if (iVar1 != 1) {
      return 3;
    }
    lVar4 = *(long *)(*(int **)(param_1 + 2) + 0x30);
    if ((*(byte *)(lVar4 + 0x60) >> 3 & 1) != 0) {
      return 2;
    }
    iVar1 = **(int **)(param_1 + 2);
    if (iVar1 < 0x304) {
      return 2;
    }
    if (iVar1 == 0x10000) {
      return 2;
    }
    uVar3 = (**(code **)(lVar4 + 0x18))
                      (param_1,param_1 + 0x6d,param_1 + 0x5d,0,*(long *)(param_1 + 0x142) + 8);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0x122);
    iVar1 = (int)uVar3;
    goto joined_r0x004d250c;
  case 0x2a:
    iVar1 = FUN_004ca860(param_1);
    if (iVar1 != 1) {
      return 3;
    }
    uVar3 = FUN_004e7370(param_1,1);
    iVar1 = (int)uVar3;
joined_r0x004d250c:
    if (iVar1 == 0) {
      return uVar3;
    }
  }
  return 2;
}


