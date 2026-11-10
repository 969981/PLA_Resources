/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01661c48; name: FUN_01661c48
 */


undefined8 FUN_01661c48(void)

{
  undefined8 local_40 [3];
  long *local_28;
  
  FUN_01661b20(local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_40[0];
}


