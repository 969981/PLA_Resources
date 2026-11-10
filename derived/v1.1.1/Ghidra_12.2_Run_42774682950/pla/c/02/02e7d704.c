/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7d704; name: FUN_02e7d704
 */


void FUN_02e7d704(long param_1)

{
  FUN_02e7d760();
  FUN_02e7d9fc(param_1);
  FUN_02e7db68(param_1);
  if (*(long *)(param_1 + 0x10) != 0) {
    (*DAT_0442d150)(0x10,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  FUN_02e7dcd4(param_1 + 0x28);
  FUN_02e7dcd4(param_1 + 0x50);
  return;
}


