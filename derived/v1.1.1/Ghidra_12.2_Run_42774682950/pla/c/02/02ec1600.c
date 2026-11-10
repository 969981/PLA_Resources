/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec1600; name: FUN_02ec1600
 */


bool FUN_02ec1600(long param_1)

{
  if ((*(long *)(param_1 + 0x10) == 0) || (*(int *)(param_1 + 0x78) == 3)) {
    return true;
  }
  if (*(int *)(param_1 + 0x7c) < 2) {
    return *(int *)(param_1 + 0x84) == 0;
  }
  return false;
}


