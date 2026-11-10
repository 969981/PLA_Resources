/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d70d60; name: FUN_00d70d60
 */


void FUN_00d70d60(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *local_28;
  
  uVar3 = FUN_00d71f94();
  if ((uVar3 & 1) == 0) {
    FUN_00d72038(param_2);
  }
  else {
    FUN_00d71fd8(&local_28,param_2);
  }
  plVar2 = local_28;
  local_28 = (long *)0x0;
  *param_1 = plVar2;
  plVar5 = (long *)PTR_DAT_04379c88;
  if (plVar2 != (long *)0x0) {
    plVar5 = plVar2 + 0xb;
  }
  plVar1 = (long *)PTR_PTR_04379d00;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 0xc;
  }
  lVar4 = *plVar1;
  if (plVar2 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = plVar2[0xd];
  }
  param_1[1] = *plVar5;
  param_1[2] = lVar4;
  param_1[3] = lVar6;
  param_1[4] = 0;
  plVar5 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    plVar5 = plVar2;
  }
  param_1[4] = plVar5;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_02a8eb50(param_1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


