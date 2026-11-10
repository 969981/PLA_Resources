/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00784774; name: FUN_00784774
 */


uint FUN_00784774(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined1 auStack_40 [32];
  
  FUN_00783834(auStack_40);
  plVar2 = (long *)FUN_00783790();
  *plVar2 = param_1;
  uVar1 = FUN_00785a18(param_1 + 8);
  FUN_00783964(auStack_40);
  return uVar1 & 1;
}


