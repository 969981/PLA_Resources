/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dbbbc4; name: FUN_01dbbbc4
 */


void FUN_01dbbbc4(long param_1)

{
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (*(char *)(param_1 + 0x90) != '\0') {
      *(undefined1 *)(param_1 + 0x90) = 0;
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0xd0) != '\0') {
    if (*(char *)(param_1 + 0x160) != '\0') {
      *(undefined1 *)(param_1 + 0x160) = 0;
    }
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  if (*(char *)(param_1 + 0x1a0) != '\0') {
    if (*(char *)(param_1 + 0x230) != '\0') {
      *(undefined1 *)(param_1 + 0x230) = 0;
    }
    *(undefined1 *)(param_1 + 0x1a0) = 0;
  }
  return;
}


