/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e89120; name: FUN_02e89120
 */


void FUN_02e89120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_042a74f0;
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_02f59e60(0);
    param_1[7] = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
  }
  FUN_02e86aa4(param_1);
  return;
}


