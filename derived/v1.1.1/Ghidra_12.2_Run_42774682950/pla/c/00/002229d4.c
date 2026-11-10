/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002229d4; name: FUN_002229d4
 */


void FUN_002229d4(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_00223e54(*(long *)(param_1 + 0x30),1 << (ulong)(param_2 & 0x1f));
  return;
}


