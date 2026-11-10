/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00978f98; name: FUN_00978f98
 */


void FUN_00978f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long *local_38;
  long *local_28;
  
  FUN_00979a4c(&local_28,param_3,param_4);
  plVar1 = local_28;
  FUN_00979a84(param_1,local_28);
  local_28 = (long *)0x0;
  local_38 = plVar1;
  FUN_00db7bc0(param_2,&local_38);
  plVar1 = local_38;
  if ((local_38 != (long *)0x0) && (uVar2 = FUN_02a43a5c(local_38[0xb]), (uVar2 & 1) != 0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}


