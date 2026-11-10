/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00931f30; name: FUN_00931f30
 */


ushort FUN_00931f30(long param_1)

{
  return *(ushort *)(*(long *)(param_1 + 0x70) + 0x87) & 0x1f;
}


