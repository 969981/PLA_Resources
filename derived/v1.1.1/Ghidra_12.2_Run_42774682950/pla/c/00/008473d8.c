/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008473d8; name: FUN_008473d8
 */


void FUN_008473d8(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4a) != param_2) {
    *(char *)(param_1 + 0x4a) = param_2;
  }
  return;
}


