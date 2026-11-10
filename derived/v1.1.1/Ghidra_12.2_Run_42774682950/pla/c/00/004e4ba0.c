/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e4ba0; name: FUN_004e4ba0
 */


undefined8
FUN_004e4ba0(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  undefined **ppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  
  local_48 = 0;
  iVar2 = FUN_004cac70(param_2,2);
  if ((iVar2 == 0) || (((param_3 & 0x180) != 0 && (iVar2 = FUN_004cb280(param_2,2), iVar2 == 0)))) {
    iVar2 = 0x44;
    uVar3 = 0x32f;
  }
  else {
    if ((param_3 >> 7 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      iVar2 = FUN_004d88f0(param_1,auStack_44,&local_48,0);
      if (iVar2 != 0) {
        uVar3 = 0x337;
        goto LAB_004e4dac;
      }
      FUN_004e3330(*(long *)(param_1 + 0x488) + 0x1e8);
      uVar4 = local_48;
    }
    uVar3 = FUN_004e3540(param_1,param_3,param_2,param_4,param_5,uVar4);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if ((param_3 & 0x6080) == 0) {
      lVar5 = 0;
      do {
        iVar2 = FUN_004e4ad0(param_1,*(undefined4 *)((long)&DAT_041830dc + lVar5),param_3,local_48);
        if (iVar2 != 0) {
          ppuVar6 = &PTR_FUN_04183100;
          if (*(int *)(param_1 + 0x38) != 0) {
            ppuVar6 = &PTR_FUN_041830f8;
          }
          if ((*(code **)((long)ppuVar6 + lVar5) != (code *)0x0) &&
             (uVar3 = (**(code **)((long)ppuVar6 + lVar5))(param_1,param_2,param_3,param_4,param_5),
             (int)uVar3 == 0)) {
            return uVar3;
          }
        }
        lVar5 = lVar5 + 0x38;
      } while (lVar5 != 0x5b0);
    }
    else {
      lVar5 = 0x608;
      ppuVar6 = &PTR_FUN_041830f8;
      do {
        iVar2 = FUN_004e4ad0(param_1,*(undefined4 *)((long)ppuVar6 + -0x1c),param_3,local_48);
        if (iVar2 != 0) {
          ppuVar1 = ppuVar6 + 1;
          if (*(int *)(param_1 + 0x38) != 0) {
            ppuVar1 = ppuVar6;
          }
          if ((code *)*ppuVar1 != (code *)0x0) {
            uVar3 = (*(code *)*ppuVar1)(param_1,param_2,param_3,param_4,param_5);
            if ((int)uVar3 == 1) {
              *(byte *)(param_1 + lVar5) = *(byte *)(param_1 + lVar5) | 2;
            }
            else if ((int)uVar3 == 0) {
              return uVar3;
            }
          }
        }
        lVar5 = lVar5 + 1;
        ppuVar6 = ppuVar6 + 7;
      } while (lVar5 != 0x622);
    }
    iVar2 = FUN_004cade0(param_2);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = 0x44;
    uVar3 = 0x363;
  }
LAB_004e4dac:
  FUN_004c99a0(param_1,0x50,0x1bf,iVar2,"external/openssl/ssl/statem/extensions.c",uVar3);
  return 0;
}


