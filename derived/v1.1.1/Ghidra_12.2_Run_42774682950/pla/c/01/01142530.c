/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01142530; name: FUN_01142530
 */


void FUN_01142530(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_0114258c(*(undefined8 *)(param_1 + 0x18));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x30;
    return;
  }
  FUN_01142704(param_1,param_2,param_3);
  return;
}


