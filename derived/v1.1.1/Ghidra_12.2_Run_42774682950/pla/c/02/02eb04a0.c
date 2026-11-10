/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb04a0; name: FUN_02eb04a0
 */


void FUN_02eb04a0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,&PTR_PTR_042a9250);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_02eb02d4(param_1);
  return;
}


