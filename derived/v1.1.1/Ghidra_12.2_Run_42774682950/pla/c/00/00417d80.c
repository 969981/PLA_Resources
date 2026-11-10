/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00417d80; name: FUN_00417d80
 */


void FUN_00417d80(long param_1)

{
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    return;
  }
  FUN_00405f50(*(long *)(param_1 + 0x10),0);
  FUN_00405e20(*(undefined8 *)(param_1 + 0x10),&LAB_00417de0,*(undefined8 *)(param_1 + 0x10));
  FUN_00405db0(*(undefined8 *)(param_1 + 0x10),&LAB_00417e00);
  FUN_00405760(*(undefined8 *)(param_1 + 0x10));
  return;
}


