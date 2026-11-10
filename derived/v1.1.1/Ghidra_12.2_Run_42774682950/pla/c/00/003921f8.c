/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003921f8; name: FUN_003921f8
 */


undefined8 * FUN_003921f8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return puVar1;
  }
  return (undefined8 *)*puVar1;
}


