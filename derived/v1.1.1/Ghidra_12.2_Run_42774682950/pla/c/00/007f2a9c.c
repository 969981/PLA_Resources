/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f2a9c; name: FUN_007f2a9c
 */


void FUN_007f2a9c(long param_1,long param_2)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x40))
            (*(long **)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  memcpy((void *)(param_1 + 0x10),(void *)(param_2 + 0x10),0x10);
  return;
}


