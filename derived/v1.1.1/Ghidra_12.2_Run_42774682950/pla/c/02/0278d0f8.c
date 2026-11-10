/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278d0f8; name: FUN_0278d0f8
 */


void FUN_0278d0f8(long param_1,undefined8 param_2)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_01665cfc(param_1 + 0x18);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
    return;
  }
  FUN_02794a50(param_1,param_2);
  return;
}


