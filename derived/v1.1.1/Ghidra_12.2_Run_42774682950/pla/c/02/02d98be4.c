/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d98be4; name: FUN_02d98be4
 */


void FUN_02d98be4(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 8) + 8) = param_2;
  }
  return;
}


