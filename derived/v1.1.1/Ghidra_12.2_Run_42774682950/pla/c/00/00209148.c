/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00209148; name: FUN_00209148
 */


undefined8 FUN_00209148(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 == 0) {
    iVar2 = *(int *)(param_2 + 0x10);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x94c) <= 0x7fffffff - iVar2) {
        *(int *)(param_1 + 0x94c) = *(int *)(param_1 + 0x94c) + iVar2;
LAB_00209260:
        if ((*(code **)(param_1 + 0x7e8) == (code *)0x0) ||
           (iVar2 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8))
           , iVar2 == 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0xfffffc7a;
        }
        return uVar4;
      }
      uVar4 = 0xfffffdf4;
      pcVar5 = (char *)0x0;
      goto LAB_002092ac;
    }
LAB_0020924c:
    pcVar5 = "WINDOW_UPDATE: window_size_increment == 0";
  }
  else {
    if ((uVar1 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
      iVar2 = *(int *)(param_1 + 0x934);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x938);
    }
    if (iVar2 < (int)uVar1) {
      pcVar5 = "WINDOW_UPDATE to idle stream";
    }
    else {
      lVar3 = FUN_00205cf4(param_1);
      if (lVar3 == 0) {
        return 0;
      }
      if ((*(int *)(lVar3 + 0xdc) != 4) ||
         ((*(uint *)(lVar3 + 0xb8) != 0 &&
          (((*(uint *)(lVar3 + 0xb8) & 1) == 0) != (*(char *)(param_1 + 0x9aa) == '\0'))))) {
        iVar2 = *(int *)(param_2 + 0x10);
        if (iVar2 != 0) {
          if (0x7fffffff - iVar2 < *(int *)(lVar3 + 0xbc)) {
            uVar4 = FUN_0020be38(param_1,*(undefined4 *)(param_2 + 8),param_2,0xfffffdf4);
            return uVar4;
          }
          iVar2 = *(int *)(lVar3 + 0xbc) + iVar2;
          *(int *)(lVar3 + 0xbc) = iVar2;
          if (((0 < iVar2) && (iVar2 = FUN_00211ab8(lVar3), iVar2 != 0)) &&
             (uVar4 = FUN_00211a6c(lVar3,4), (int)uVar4 < -900)) {
            return uVar4;
          }
          goto LAB_00209260;
        }
        goto LAB_0020924c;
      }
      pcVar5 = "WINDOW_UPADATE to reserved stream";
    }
  }
  uVar4 = 0xfffffe07;
LAB_002092ac:
  uVar4 = FUN_00208428(param_1,param_2,uVar4,pcVar5);
  return uVar4;
}


