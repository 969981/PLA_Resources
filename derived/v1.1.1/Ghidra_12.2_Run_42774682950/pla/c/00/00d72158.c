/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d72158; name: FUN_00d72158
 */


void FUN_00d72158(long param_1,byte param_2)

{
  if (*(char *)(param_1 + 0x5ab) == '\0') {
    FUN_00d42690(param_1,1,1);
    FUN_00d42438(param_1,1,1);
    FUN_00d7331c(param_1,0);
    *(byte *)(param_1 + 0x5ac) = param_2 & 1;
    *(undefined1 *)(param_1 + 0x5ab) = 1;
    *(undefined4 *)(param_1 + 0x5c0) = 0x5a;
  }
  return;
}


