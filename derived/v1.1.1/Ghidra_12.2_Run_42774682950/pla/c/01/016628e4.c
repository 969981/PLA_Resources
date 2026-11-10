/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016628e4; name: FUN_016628e4
 */


undefined8 FUN_016628e4(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x54) != '\0') {
    return 1;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x1e1) == '\0')) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x54) = 1;
  return 1;
}


