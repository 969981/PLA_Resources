/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b0f6c; name: FUN_011b0f6c
 */


void FUN_011b0f6c(long param_1,undefined8 param_2)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_01161aec(param_1 + 0x18);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    return;
  }
  FUN_011b111c(param_1,param_2);
  return;
}


