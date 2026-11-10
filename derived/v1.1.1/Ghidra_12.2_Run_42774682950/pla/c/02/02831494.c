/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02831494; name: FUN_02831494
 */


void FUN_02831494(long param_1)

{
  if (*(char *)(param_1 + 0x62) == '\0') {
    *(undefined1 *)(param_1 + 0x60) = 0;
    FUN_02831b48(*(undefined8 *)(param_1 + 0x58),0);
    return;
  }
  return;
}


