/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec743c; name: FUN_02ec743c
 */


void FUN_02ec743c(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_02edc938(DAT_0440a158);
  }
  FUN_02ec68b8(param_1 + 0x28);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_02ea800c();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


