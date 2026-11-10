/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02487c28; name: FUN_02487c28
 */


void FUN_02487c28(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_008e8b84(*(ulong *)(param_1 + 8),*param_2,*param_3);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_02487c8c(param_1);
  return;
}


