/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea69b8; name: FUN_02ea69b8
 */


void FUN_02ea69b8(long param_1)

{
  FUN_02ea6a04();
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (param_1 + 0x28 != *(long *)(param_1 + 0x30)) {
      FUN_02f59e70(4);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


