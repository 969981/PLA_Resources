/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e825f8; name: FUN_02e825f8
 */


void FUN_02e825f8(long param_1,long param_2,long param_3)

{
  if (((param_1 == 0) || (param_2 == 0)) || (DAT_0440a320 == 0)) {
    return;
  }
  FUN_02e79cac(DAT_0440a320,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x48),
               param_3 + 0x18,*(undefined4 *)(param_3 + 0x14));
  return;
}


