/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ceacbc; name: FUN_00ceacbc
 */


void FUN_00ceacbc(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + -0x48);
  (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((*(long *)(param_1 + 0x1c8) == 0) || (*(char *)(*(long *)(param_1 + 0x1c8) + 0x80) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00cead14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xf0))(plVar1,param_2);
    return;
  }
  return;
}


