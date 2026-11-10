/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044a1e0; name: FUN_0044a1e0
 */


long FUN_0044a1e0(undefined8 *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    lVar4 = 0;
  }
  else {
    iVar1 = FUN_00407950(*param_1);
    lVar4 = 0;
    if ((-1 < param_2) && (param_2 < iVar1)) {
      uVar5 = *param_1;
      lVar4 = FUN_00407680(uVar5,param_2);
      iVar1 = FUN_00407950(uVar5);
      *(undefined4 *)(param_1 + 1) = 1;
      if (iVar1 != param_2) {
        if (param_2 == 0) {
          iVar3 = 0;
          iVar6 = *(int *)(lVar4 + 0x10) + -1;
        }
        else {
          lVar2 = FUN_00407970(uVar5,param_2 + -1);
          iVar6 = *(int *)(lVar2 + 0x10);
          iVar3 = param_2;
        }
        lVar2 = FUN_00407970(uVar5,iVar3);
        if ((iVar6 + 1 < *(int *)(lVar2 + 0x10)) && (param_2 < iVar1)) {
          do {
            lVar2 = FUN_00407970(uVar5,param_2);
            param_2 = param_2 + 1;
            *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
          } while (iVar1 != param_2);
        }
      }
    }
  }
  return lVar4;
}


