/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ec930; name: FUN_002ec930
 */


undefined4 FUN_002ec930(char *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  char *local_8;
  
  uVar2 = strtol(param_1,&local_8,0);
  uVar1 = (undefined4)uVar2;
  if (*local_8 != '\0' || uVar2 >> 0x1f != 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


