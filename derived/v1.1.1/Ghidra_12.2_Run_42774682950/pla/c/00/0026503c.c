/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026503c; name: FUN_0026503c
 */


undefined8 FUN_0026503c(long param_1)

{
  if (*(uint *)(param_1 + 0x10) == 3) {
    return 0;
  }
  return *(undefined8 *)
          (*(long *)(*(long *)(param_1 + 8) + 0x238) + (ulong)*(uint *)(param_1 + 0x10) * 8 + 0x340)
  ;
}


