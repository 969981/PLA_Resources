/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ee450; name: FUN_010ee450
 */


void FUN_010ee450(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_010ee4b4(*(undefined8 *)(param_1 + 0x18));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x30;
    return;
  }
  FUN_010ee62c(param_1,param_2,param_3,param_4);
  return;
}


