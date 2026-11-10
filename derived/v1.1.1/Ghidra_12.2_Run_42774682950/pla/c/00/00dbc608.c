/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dbc608; name: FUN_00dbc608
 */


void FUN_00dbc608(long param_1)

{
  if ((*(int *)(*(long *)(param_1 + 0x68) + 0x60) < 4) &&
     (*(char *)(*(long *)(param_1 + 0x68) + 0x2a) == '\0')) {
    FUN_00dbbfb8(param_1,0);
    *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x2a) = 1;
  }
  return;
}


