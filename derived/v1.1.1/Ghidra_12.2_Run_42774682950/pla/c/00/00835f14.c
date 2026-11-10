/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00835f14; name: FUN_00835f14
 */


void FUN_00835f14(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  FUN_00847370();
  plVar1 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
                    /* WARNING: Could not recover jumptable at 0x00835f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_2 + 8));
  return;
}


