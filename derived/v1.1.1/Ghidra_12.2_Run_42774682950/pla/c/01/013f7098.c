/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f7098; name: FUN_013f7098
 */


bool FUN_013f7098(long param_1,undefined8 param_2)

{
  long lVar1;
  long *local_60 [4];
  long *local_40;
  char *local_28;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    local_28 = "bin/appli/pokedex/res_table/pokedex_research_task_table.bin";
    FUN_009f1b84(local_60,&local_28);
    FUN_00938764(param_1 + 8,0,local_60,0,param_2,0);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
    if (local_60[0] != (long *)0x0) {
      (**(code **)(*local_60[0] + 0x20))();
    }
    lVar1 = *(long *)(param_1 + 0x10);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x1e1) != '\0')) {
      *(ulong *)(param_1 + 0x38) =
           (long)*(uint **)(lVar1 + 0x250) + (ulong)**(uint **)(lVar1 + 0x250);
      FUN_013f6df8(param_1);
    }
  }
  return *(long *)(param_1 + 0x38) != 0;
}


