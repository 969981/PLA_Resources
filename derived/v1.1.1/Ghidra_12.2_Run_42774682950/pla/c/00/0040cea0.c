/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040cea0; name: FUN_0040cea0
 */


void FUN_0040cea0(long param_1,int param_2)

{
  if ((param_2 == 0) || (*(int *)(param_1 + 8) == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  return;
}


