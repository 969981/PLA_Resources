/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02727cd8; name: FUN_02727cd8
 */


void FUN_02727cd8(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 0x20) != '\0') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x28);
    *param_1 = 1;
  }
  return;
}


