/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d21b0; name: FUN_004d21b0
 */


undefined8 FUN_004d21b0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  default:
    goto switchD_004d21e0_caseD_2;
  case 0x13:
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
      return 2;
    }
    FUN_004cd900(param_1);
    return 2;
  case 0x15:
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
      return 2;
    }
    FUN_004cd900(param_1);
    break;
  case 0x16:
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
      return 2;
    }
    *(undefined4 *)(param_1 + 0x78) = 1;
    return 2;
  case 0x21:
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) {
      iVar1 = **(int **)(param_1 + 8);
      if (iVar1 < 0x304) {
        return 2;
      }
      if (iVar1 == 0x10000) {
        return 2;
      }
      if (*(long *)(param_1 + 0x1818) == 0) {
        uVar2 = FUN_004da220(param_1,param_2,0,0);
        return uVar2;
      }
      return 2;
    }
    break;
  case 0x23:
    lVar3 = *(long *)(*(int **)(param_1 + 8) + 0x30);
    if ((((*(byte *)(lVar3 + 0x60) >> 3 & 1) == 0) &&
        (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
      return 2;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x508) + 0x1f8) =
         *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x238);
    uVar2 = (**(code **)(lVar3 + 0x10))(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
      return 2;
    }
    break;
  case 0x2e:
    if ((*(int *)(param_1 + 0x84) != 9) &&
       ((*(byte *)(*(long *)(param_1 + 0xa8) + 1) >> 3 & 1) == 0)) {
      return 2;
    }
  case 1:
    uVar2 = FUN_004da220(param_1,param_2,1,1);
    return uVar2;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
switchD_004d21e0_caseD_2:
  return 2;
}


