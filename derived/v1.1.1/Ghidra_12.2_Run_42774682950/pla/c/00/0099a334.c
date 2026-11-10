/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099a334; name: FUN_0099a334
 */


void FUN_0099a334(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
    FUN_009b3b24(param_1,param_2);
    return;
  }
  FUN_0091d308(param_1 + 0x18);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  return;
}


