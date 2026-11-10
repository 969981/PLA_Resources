/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008473fc; name: FUN_008473fc
 */


void FUN_008473fc(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x50) != param_2) {
    *(long *)(param_1 + 0x50) = param_2;
  }
  return;
}


