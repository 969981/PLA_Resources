/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014de850; name: FUN_014de850
 */


bool FUN_014de850(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x68) == 0) {
    return *(int *)(param_1 + 0x78) == param_2;
  }
  return false;
}


