/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00456b10; name: FUN_00456b10
 */


undefined8 FUN_00456b10(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  int local_60 [12];
  
  FUN_00456be0();
  if (param_2 == -1) {
    return 1;
  }
  uVar4 = param_2 - 1;
  if (8 < uVar4) {
    if (((DAT_0439e920 == 0) ||
        (local_60[0] = param_2, iVar1 = FUN_00407710(DAT_0439e920,local_60), iVar1 < 0)) ||
       (uVar4 = iVar1 + 9, uVar4 == 0xffffffff)) {
      return 0xffffffff;
    }
    if ((int)uVar4 < 0) {
      lVar2 = 0;
      goto LAB_00456b54;
    }
    if (8 < (int)uVar4) {
      lVar2 = FUN_00407970(DAT_0439e920,iVar1);
      goto LAB_00456b54;
    }
  }
  lVar2 = (long)(int)uVar4 * 0x30 + 0x41677a8;
LAB_00456b54:
  uVar3 = (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_3);
  return uVar3;
}


