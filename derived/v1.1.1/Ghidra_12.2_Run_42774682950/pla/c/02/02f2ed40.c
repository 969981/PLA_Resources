/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2ed40; name: FUN_02f2ed40
 */


void FUN_02f2ed40(long param_1,long param_2,long param_3)

{
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x80) = (param_2 - param_3) + *(long *)(param_1 + 0x80);
  }
  return;
}


