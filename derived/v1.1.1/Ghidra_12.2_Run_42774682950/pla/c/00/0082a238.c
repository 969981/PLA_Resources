/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082a238; name: FUN_0082a238
 */


void FUN_0082a238(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    FUN_0083fb3c(*(undefined8 *)(param_1 + 0x28));
  }
  FUN_00847e68(*(long *)PTR_DAT_043773c0 + 0x10);
  return;
}


