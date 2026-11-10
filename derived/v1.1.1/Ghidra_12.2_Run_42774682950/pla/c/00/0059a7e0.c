/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059a7e0; name: FUN_0059a7e0
 */


void FUN_0059a7e0(long param_1)

{
  if (*(char *)(param_1 + 0xcf0) == '\0') {
    *(undefined8 *)(param_1 + 0xfc0) = 0x8000000000000000;
    *(undefined4 *)(param_1 + 0xfc8) = 0;
    *(undefined4 *)(param_1 + 0xf10) = *(undefined4 *)(param_1 + 0xef0);
    return;
  }
  *(undefined4 *)(param_1 + 0xf10) = *(undefined4 *)(param_1 + 0xef0);
  return;
}


