/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8ef68; name: FUN_02e8ef68
 */


void FUN_02e8ef68(long param_1)

{
  FUN_02e8efcc();
  FUN_02e9785c(param_1 + 0xa8);
  FUN_02e8f198(param_1 + 0x88);
  FUN_02e8f1dc(param_1);
  FUN_02e9b2ec(param_1 + 8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  return;
}


