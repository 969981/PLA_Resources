/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00784830; name: FUN_00784830
 */


void FUN_00784830(long param_1)

{
  long *plVar1;
  undefined1 auStack_40 [32];
  
  FUN_00783834(auStack_40);
  plVar1 = (long *)FUN_00783790();
  *plVar1 = param_1;
  FUN_00785a9c(param_1 + 8);
  FUN_00783964(auStack_40);
  return;
}


