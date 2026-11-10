/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1ebe8; name: FUN_00b1ebe8
 */


undefined8 FUN_00b1ebe8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *plStack_38;
  
  local_50 = *param_3;
  local_48 = param_3[1];
  local_40 = param_3[2];
  plVar1 = (long *)param_3[3];
  plStack_38 = plVar1;
  if (plVar1 == (long *)0x0) {
    uVar2 = FUN_00b1eca0(param_1,param_2,&local_50);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    uVar2 = FUN_00b1eca0(param_1,param_2,&local_50);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_00b1f320(param_1,param_2);
    return uVar3;
  }
  return 1;
}


