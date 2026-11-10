/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009477f8; name: FUN_009477f8
 */


void FUN_009477f8(long param_1)

{
  long *local_28;
  long *local_18;
  
  FUN_00947cf8(&local_28,"bin/haxe/release/battle/battle.blua");
  local_18 = local_28;
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x40))(*(long **)(param_1 + 0xb0),&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


