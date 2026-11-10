/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01616808; name: FUN_01616808
 */


void FUN_01616808(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_01616b3c(param_1 + 0x18);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    return;
  }
  FUN_01616a4c(param_1,param_2,param_3);
  return;
}


