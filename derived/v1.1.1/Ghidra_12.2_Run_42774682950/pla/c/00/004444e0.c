/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004444e0; name: FUN_004444e0
 */


undefined4
FUN_004444e0(undefined8 param_1,undefined4 param_2,int param_3,undefined1 *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auStack_440 [1024];
  
  if (param_4 == (undefined1 *)0x0) {
    param_4 = (undefined1 *)0x0;
    if (DAT_0439e8c0 != '\0') {
      param_4 = &DAT_0439e8c0;
    }
    lVar3 = FUN_00445020();
  }
  else {
    lVar3 = FUN_00445020();
  }
  if (lVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (0x3fe < param_3) {
      param_3 = 0x3ff;
    }
    iVar1 = FUN_00445230(lVar3,param_4,0,param_1,param_2,param_3);
    if ((iVar1 < 0) ||
       ((param_5 != 0 &&
        (iVar1 = FUN_00445410(lVar3,param_4,0,auStack_440,param_2,param_3,param_1), iVar1 < 0)))) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN_00445600(lVar3);
      FUN_004006a0(auStack_440,0x400);
    }
    FUN_00445130(lVar3);
  }
  return uVar2;
}


