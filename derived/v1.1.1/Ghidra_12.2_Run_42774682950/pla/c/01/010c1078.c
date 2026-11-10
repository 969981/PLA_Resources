/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c1078; name: FUN_010c1078
 */


undefined8 FUN_010c1078(long param_1)

{
  if (*(char *)(param_1 + 0x178) != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x179) == '\0') {
    if (*(char *)(param_1 + 0x17a) == '\0') {
      if ((*(byte *)(*(long *)(param_1 + 0x118) + 0xac) & 6) == 0) {
        return 0;
      }
      if (*(char *)(param_1 + 0x17b) == '\0') {
        return 0;
      }
      if (**(char **)(param_1 + 0x1d8) != '\0') {
        FUN_028354b0(param_1 + 0x1d0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x17a) = 0;
    }
  }
  return 1;
}


