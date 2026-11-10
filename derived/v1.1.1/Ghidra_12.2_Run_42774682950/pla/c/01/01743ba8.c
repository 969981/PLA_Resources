/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01743ba8; name: FUN_01743ba8
 */


void FUN_01743ba8(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_008e8b84(*(ulong *)(param_1 + 8),*param_2,*param_3);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_01743c0c(param_1);
  return;
}


