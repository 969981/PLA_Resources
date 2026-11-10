/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da9be8; name: FUN_00da9be8
 */


void FUN_00da9be8(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *local_18;
  
  if (*(long *)(param_1 + 0x318) == 0) {
    local_18 = (long *)0x0;
  }
  else {
    FUN_00da9c7c(&local_18,*(long *)(param_1 + 0x318));
  }
  FUN_02a5ca68(local_18,*(undefined4 *)(param_1 + 0x328),*(undefined4 *)(*param_2 + 0x328));
  plVar1 = local_18;
  if ((local_18 != (long *)0x0) && (uVar2 = FUN_02a43a5c(local_18[0xb]), (uVar2 & 1) != 0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}


