/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cabe78; name: FUN_00cabe78
 */


void FUN_00cabe78(long param_1,undefined8 param_2)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_00c63b38(param_1 + 0x18);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x48;
    return;
  }
  FUN_00cac4bc(param_1,param_2);
  return;
}


