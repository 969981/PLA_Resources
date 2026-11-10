/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f3f3bc; name: FUN_01f3f3bc
 */


void FUN_01f3f3bc(long param_1,undefined8 param_2)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_015913b0(param_1 + 0x18);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
    return;
  }
  FUN_01f4a134(param_1,param_2);
  return;
}


