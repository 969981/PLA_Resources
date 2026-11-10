/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a823b8; name: FUN_01a823b8
 */


void FUN_01a823b8(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 0x6a0) == '\0') {
    return;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x6b8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x6b0);
  *param_1 = 1;
  return;
}


