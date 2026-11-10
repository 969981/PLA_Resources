/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f3f44; name: FUN_007f3f44
 */


void FUN_007f3f44(long param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x110))();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


