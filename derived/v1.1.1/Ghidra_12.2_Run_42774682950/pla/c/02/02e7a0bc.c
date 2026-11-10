/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7a0bc; name: FUN_02e7a0bc
 */


void FUN_02e7a0bc(long param_1,long param_2)

{
  if (*(long *)(param_1 + 8) == 0) {
    *(long *)(param_1 + 8) = param_2;
    *(undefined8 *)(param_2 + 8) = 0;
    return;
  }
  *(long *)(param_2 + 8) = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = param_2;
  return;
}


