/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b30414; name: FUN_01b30414
 */


bool FUN_01b30414(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(long *)(param_1 + 0x1548) != 0) &&
     (bVar1 = false, **(char **)(*(long *)(param_1 + 0x1548) + 0x60) != '\0')) {
    bVar1 = *(char *)(param_1 + 0x17d0) != '\0';
  }
  if ((*(long *)(param_1 + 0xfe8) != 0) && (**(char **)(*(long *)(param_1 + 0xfe8) + 0x60) != '\0'))
  {
    bVar1 = (bool)(bVar1 | *(char *)(param_1 + 0x1270) != '\0');
  }
  if ((*(long *)(param_1 + 0x1298) == 0) ||
     (**(char **)(*(long *)(param_1 + 0x1298) + 0x60) == '\0')) {
    return bVar1;
  }
  return (bool)(bVar1 | *(char *)(param_1 + 0x1520) != '\0');
}


