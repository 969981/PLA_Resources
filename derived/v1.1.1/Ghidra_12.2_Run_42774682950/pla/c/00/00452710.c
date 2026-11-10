/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00452710; name: FUN_00452710
 */


undefined8 FUN_00452710(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*param_1 == 0) || (lVar2 = param_1[1], lVar2 == 0)) {
    FUN_004014b0(3,0x67,0x6b,"external/openssl/crypto/bn/bn_blind.c",0x62);
    uVar3 = 0;
    iVar1 = (int)param_1[5];
    goto joined_r0x004527a8;
  }
  if ((int)param_1[5] == -1) {
    *(undefined4 *)(param_1 + 5) = 1;
LAB_004527b8:
    if ((*(byte *)(param_1 + 6) & 1) != 0) goto LAB_00452830;
    if (param_1[7] == 0) {
      uVar3 = FUN_00413180(lVar2,lVar2,lVar2,param_1[3],param_2);
      if ((int)uVar3 != 0) {
        lVar2 = *param_1;
        uVar3 = FUN_00413180(lVar2,lVar2,lVar2,param_1[3],param_2);
        iVar1 = (int)uVar3;
        goto joined_r0x0045282c;
      }
    }
    else {
      uVar3 = FUN_0040d410(lVar2,lVar2,lVar2,param_1[7],param_2);
      if ((int)uVar3 != 0) {
        lVar2 = *param_1;
        uVar3 = FUN_0040d410(lVar2,lVar2,lVar2,param_1[7],param_2);
        iVar1 = (int)uVar3;
joined_r0x0045282c:
        if (iVar1 != 0) goto LAB_00452830;
      }
    }
  }
  else {
    iVar1 = (int)param_1[5] + 1;
    *(int *)(param_1 + 5) = iVar1;
    if (((iVar1 != 0x20) || (param_1[2] == 0)) || ((*(byte *)(param_1 + 6) >> 1 & 1) != 0))
    goto LAB_004527b8;
    lVar2 = FUN_00452850(param_1,0,0,param_2,0,0);
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00452834;
    }
LAB_00452830:
    uVar3 = 1;
  }
LAB_00452834:
  iVar1 = (int)param_1[5];
joined_r0x004527a8:
  if (iVar1 == 0x20) {
    *(undefined4 *)(param_1 + 5) = 0;
  }
  return uVar3;
}


