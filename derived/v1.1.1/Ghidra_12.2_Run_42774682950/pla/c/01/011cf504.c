/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011cf504; name: FUN_011cf504
 */


void FUN_011cf504(long param_1)

{
  *(undefined4 *)(param_1 + 0x5ac) = 0;
  if (*(int *)(*(long *)(param_1 + 0x650) + 0xb0) != 0) {
    FUN_011cf55c(param_1,1);
  }
  FUN_00d42438(param_1,1,1);
  FUN_00d428b0(param_1,0);
  return;
}


