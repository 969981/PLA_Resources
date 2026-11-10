/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2f1e4; name: FUN_00d2f1e4
 */


void FUN_00d2f1e4(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x2c0) == 0) {
    return;
  }
  FUN_028314b0(*(long *)(param_1 + 0x2c0),param_2 & 1);
  return;
}


