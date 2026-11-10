/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00206560; name: FUN_00206560
 */


undefined8 FUN_00206560(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint local_40 [4];
  
  uVar3 = FUN_002120d8(param_2);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if (*param_3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_00211270(param_1);
    if (lVar4 == 0) {
      uVar1 = *param_3;
      if (uVar1 != 0) {
        if ((uVar1 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
          iVar2 = *(int *)(param_1 + 0x934);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x938);
        }
        if (iVar2 < (int)uVar1) {
          FUN_00205bfc(local_40);
          lVar4 = FUN_002066d8(param_1,*param_3,0,local_40,5,0);
          if (lVar4 == 0) {
            return 0xfffffc7b;
          }
          goto LAB_00206630;
        }
      }
    }
    else {
      iVar2 = FUN_002120d8(lVar4);
      if (iVar2 != 0) goto LAB_00206630;
    }
    FUN_00205bfc(local_40);
    param_3 = local_40;
  }
LAB_00206630:
  if (*param_3 == 0) {
    lVar4 = param_1 + 0x20;
  }
  else {
    iVar2 = FUN_00211b4c(lVar4,param_2);
    if (iVar2 != 0) {
      FUN_00212060(lVar4);
      uVar3 = FUN_00211fe4(*(undefined8 *)(param_2 + 0x70),lVar4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  if ((lVar4 == *(long *)(param_2 + 0x70)) && ((char)param_3[2] == '\0')) {
    FUN_002118c8(param_2,param_3[1]);
    uVar3 = 0;
  }
  else {
    FUN_00212060(param_2);
    *(uint *)(param_2 + 0xd0) = param_3[1];
    if ((char)param_3[2] == '\0') {
      uVar3 = FUN_00211fe4(lVar4,param_2);
    }
    else {
      uVar3 = FUN_00211f0c(lVar4,param_2);
    }
  }
  return uVar3;
}


