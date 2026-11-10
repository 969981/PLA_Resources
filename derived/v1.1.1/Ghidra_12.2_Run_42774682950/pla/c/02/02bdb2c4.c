/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bdb2c4; name: FUN_02bdb2c4
 */


undefined8 FUN_02bdb2c4(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x7c) == 2) {
    *(undefined4 *)(param_1 + 0x414) = param_2;
    *(undefined1 *)(param_1 + 0x410) = 1;
    return 1;
  }
  return 0;
}


