/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315f5b0; name: FUN_0315f5b0
 */


undefined8 FUN_0315f5b0(long param_1,undefined8 param_2)

{
  return *(undefined8 *)
          (*(long *)(*(long *)(param_1 + 0x18) + (long)(int)param_2 * 0x18) +
          (long)(int)((ulong)param_2 >> 0x20) * 0x18);
}


