/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf4f3c; name: FUN_01bf4f3c
 */


void FUN_01bf4f3c(long param_1,byte param_2,ulong param_3)

{
  *(byte *)(param_1 + 0x10a5) = param_2 & 1;
  if ((param_3 & 1) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x10a8) & 0xfffffffe) == 2) {
    FUN_01a51334(param_1,param_1 + 0xfb0,2);
    return;
  }
  if (*(char *)(param_1 + 0x10a3) != '\0') {
    FUN_01a51334(param_1,param_1 + 0xfb0,4);
    return;
  }
  if ((*(char *)(param_1 + 0x10a1) == '\0') && ((param_2 & 1) == 0)) {
    FUN_01a51334(param_1,param_1 + 0xfb0,1);
    return;
  }
  FUN_01a51334(param_1,param_1 + 0xfb0,3);
  return;
}


