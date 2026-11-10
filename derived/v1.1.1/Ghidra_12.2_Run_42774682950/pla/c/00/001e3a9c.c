/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e3a9c; name: FUN_001e3a9c
 */


int FUN_001e3a9c(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  switch(*(undefined4 *)(param_2 + 0x18)) {
  case 0:
    goto switchD_001e3ad8_caseD_0;
  case 1:
    iVar1 = FUN_001e3c70(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x78));
    break;
  case 2:
    iVar1 = FUN_001e3d5c(param_1,*(undefined8 *)(param_2 + 0x20));
    if (iVar1 != 0x1a) break;
    goto switchD_001e3ad8_caseD_0;
  case 3:
    iVar1 = FUN_001e3edc(param_1,*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x28),
                         *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
                         *(undefined8 *)(param_2 + 0x40));
    break;
  case 4:
    lVar2 = FUN_001e3f70(*param_1);
    if (lVar2 == 0) {
      iVar1 = 0x1b;
    }
    else {
      iVar1 = FUN_001e43e4(param_1,lVar2,1);
      if (iVar1 == 0) {
        for (lVar4 = *(long *)(*(long *)(param_2 + 0x40) + 0x10); lVar4 != 0;
            lVar4 = *(long *)(lVar4 + 0x10)) {
          lVar3 = FUN_001e3ff4(lVar2);
          if (lVar3 == 0) {
            iVar1 = 0x1b;
            goto joined_r0x001e3c68;
          }
          iVar1 = FUN_001e3a9c(lVar3,lVar4);
          if (iVar1 != 0) break;
        }
      }
    }
    break;
  default:
    iVar1 = 0x2b;
    goto joined_r0x001e3c68;
  }
  if (iVar1 == 0) {
switchD_001e3ad8_caseD_0:
    if (*(long *)(param_2 + 0x58) == 0) {
      iVar1 = 0;
    }
    else {
      lVar2 = FUN_001f8658();
      if (lVar2 == 0) {
        iVar1 = 0x1b;
      }
      else {
        iVar1 = FUN_001e4074(param_1,lVar2,1);
        if (iVar1 != 0) {
          FUN_001f86a8(lVar2);
        }
      }
    }
  }
joined_r0x001e3c68:
  if (param_1 == (undefined8 *)0x0) {
    iVar1 = 0x17;
  }
  else {
    param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
    if ((((iVar1 != 0) ||
         (iVar1 = FUN_001e40ec(param_1,*(undefined8 *)(param_2 + 0x60)), iVar1 != 0)) ||
        (iVar1 = FUN_001e4144(param_1,*(undefined8 *)(param_2 + 0x70)), iVar1 != 0)) ||
       (iVar1 = FUN_001e419c(param_1,*(undefined8 *)(param_2 + 0x68)), iVar1 != 0)) {
      FUN_001e3920(param_1);
    }
  }
  return iVar1;
}


