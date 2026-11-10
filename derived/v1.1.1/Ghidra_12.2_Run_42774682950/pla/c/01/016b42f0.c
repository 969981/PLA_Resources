/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b42f0; name: FUN_016b42f0
 */


undefined8 FUN_016b42f0(long param_1)

{
  if (*(long *)(param_1 + 0xe0) == 0) {
    if ((*(long *)(param_1 + 0x60) == 0) || (*(char *)(*(long *)(param_1 + 0x60) + 0x1e1) == '\0'))
    {
      return 0;
    }
    FUN_016b4330();
  }
  return 1;
}


