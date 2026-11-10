/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111f718; name: FUN_0111f718
 */


void FUN_0111f718(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_0111f77c(*(undefined8 *)(param_1 + 0x18));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x30;
    return;
  }
  FUN_0111f8f4(param_1,param_2,param_3,param_4);
  return;
}


