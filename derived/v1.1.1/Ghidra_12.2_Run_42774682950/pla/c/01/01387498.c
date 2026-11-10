/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01387498; name: FUN_01387498
 */


void FUN_01387498(long param_1,undefined8 param_2)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_01161aec(param_1 + 0x18);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    return;
  }
  FUN_01387660(param_1,param_2);
  return;
}


