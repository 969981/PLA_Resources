/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0159855c; name: FUN_0159855c
 */


void FUN_0159855c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *local_30;
  long *local_28;
  
  FUN_01598660(&local_28,*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388));
  FUN_01598698(param_1,local_28);
  local_30 = local_28;
  local_28 = (long *)0x0;
  FUN_00d89c8c(param_2,&local_30);
  plVar2 = local_30;
  plVar1 = local_28;
  if ((local_30 != (long *)0x0) &&
     (uVar3 = FUN_02a43a5c(local_30[0xb]), plVar1 = local_28, (uVar3 & 1) != 0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
    plVar1 = local_28;
  }
  if ((plVar1 != (long *)0x0) &&
     (local_28 = plVar1, uVar3 = FUN_02a43a5c(plVar1[0xb]), (uVar3 & 1) != 0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}


