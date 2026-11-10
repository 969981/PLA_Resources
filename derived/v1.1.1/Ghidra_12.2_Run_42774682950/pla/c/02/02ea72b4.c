/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea72b4; name: FUN_02ea72b4
 */


void FUN_02ea72b4(long param_1)

{
  FUN_02ea69b8(param_1 + 0x20);
  FUN_02ea69b8(param_1 + 0x60);
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if (param_1 + 0xa0 != *(long *)(param_1 + 0xa8)) {
      FUN_02f59e70(4);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  *(bool *)(param_1 + 0xb9) = DAT_0440a410 == param_1;
  return;
}


