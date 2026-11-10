/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0199f618; name: FUN_0199f618
 */


undefined * FUN_0199f618(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04379c88;
  if (*(long *)(param_1 + 0x218) != 0) {
    puVar1 = (undefined *)(*(long *)(param_1 + 0x218) + 0x58);
  }
  return puVar1;
}


