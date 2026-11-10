/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1f320; name: FUN_00b1f320
 */


uint FUN_00b1f320(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  long *plStack_38;
  
  plVar1 = DAT_041d4f30;
  local_50 = DAT_041d4f18;
  puStack_48 = PTR_s_default_face_setting_041d4f20;
  local_40 = DAT_041d4f28;
  plStack_38 = DAT_041d4f30;
  if (DAT_041d4f30 == (long *)0x0) {
    uVar2 = FUN_00b1eca0(param_1,param_2,&local_50);
  }
  else {
    (**(code **)(*DAT_041d4f30 + 0x18))(DAT_041d4f30);
    uVar2 = FUN_00b1eca0(param_1,param_2,&local_50);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return uVar2 & 1;
}


