/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045b220; name: FUN_0045b220
 */


undefined8 FUN_0045b220(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_88 [13];
  undefined8 *local_18;
  
  FUN_0045b5c0();
  iVar1 = FUN_00407f40();
  if ((iVar1 != 0) && (local_18 = local_88, -1 < iVar1)) {
    local_88[0] = CONCAT44(local_88[0]._4_4_,iVar1);
    plVar3 = (long *)FUN_00408a60(&local_18,&PTR_DAT_041683a0,0x2c,8,&LAB_0045b470);
    if (plVar3 == (long *)0x0) {
      if (DAT_0439e930 == 0) {
        return 0;
      }
      uVar2 = FUN_00407710(DAT_0439e930,local_88);
      lVar5 = FUN_00407970(DAT_0439e930,uVar2);
    }
    else {
      lVar5 = *plVar3;
    }
    if (lVar5 != 0) {
      uVar4 = FUN_0045b5d0(param_1);
      local_88[0] = FUN_0040a6f0();
      iVar1 = FUN_0040a6e0(uVar4);
      if (*(long *)(lVar5 + 8) == 0) {
        uVar4 = (**(code **)(lVar5 + 0x20))(0,local_88,(long)iVar1);
        return uVar4;
      }
      uVar4 = FUN_0041d030(0,local_88,(long)iVar1);
      return uVar4;
    }
  }
  return 0;
}


