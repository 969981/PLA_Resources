/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01252504; name: FUN_01252504
 */


void FUN_01252504(undefined8 *param_1,long *param_2)

{
  long *local_18;
  
  local_18 = (long *)*param_2;
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x18))();
  }
  (*(code *)*param_1)(param_1 + 4,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


