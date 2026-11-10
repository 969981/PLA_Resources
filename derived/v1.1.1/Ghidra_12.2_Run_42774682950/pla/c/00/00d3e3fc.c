/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d3e3fc; name: FUN_00d3e3fc
 */


void FUN_00d3e3fc(long param_1,undefined8 param_2)

{
  uint *puVar1;
  long *local_60 [4];
  long *local_40;
  char *local_28;
  
  local_28 = "bin/appli/res_pokemon/list/pokemon_info_list.bin";
  FUN_009f1b84(local_60,&local_28);
  FUN_00938764(param_1 + 8,0,local_60,0,param_2,0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  puVar1 = *(uint **)(*(long *)(param_1 + 0x10) + 0x250);
  *(ulong *)(param_1 + 0x38) = (long)puVar1 + (ulong)*puVar1;
  return;
}


