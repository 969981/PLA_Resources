/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d9a68; name: FUN_011d9a68
 */


void FUN_011d9a68(long param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  FUN_011d8770(param_1 + 0x5b0);
  FUN_011d8770(param_1 + 0x5f8);
  FUN_011d8770(param_1 + 0x640);
  FUN_011d8770(param_1 + 0x688);
  FUN_011d8770(param_1 + 0x6d0);
  local_40 = 0x994cd76cf26dfc40;
  pcStack_38 = "anime_wake";
  local_30 = 10;
  local_28 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_00d42690(param_1,1,1);
  *(undefined1 *)(param_1 + 0x722) = 1;
  return;
}


