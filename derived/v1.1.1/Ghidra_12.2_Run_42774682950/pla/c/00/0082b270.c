/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082b270; name: FUN_0082b270
 */


undefined4 FUN_0082b270(long param_1)

{
  if ((*(long *)(param_1 + 0xb8) == 0) || (*(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xc0)))
  {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x68);
}


