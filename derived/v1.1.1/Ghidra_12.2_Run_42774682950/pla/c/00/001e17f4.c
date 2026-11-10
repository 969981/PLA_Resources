/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e17f4; name: FUN_001e17f4
 */


void FUN_001e17f4(long *param_1)

{
  if ((*(byte *)(*param_1 + 0xf47) & 1) == 0) {
    FUN_001dfa98();
    return;
  }
  FUN_001e23e0();
  return;
}


