/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099c8a8; name: FUN_0099c8a8
 */


void FUN_0099c8a8(long param_1,int param_2)

{
  if (-1 < param_2) {
    FUN_0183a190(param_2);
    return;
  }
  if (*(int *)(param_1 + 0x7c8) < 1) {
    FUN_0183a1a0();
    return;
  }
  FUN_0183a190();
  return;
}


