/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01088428; name: FUN_01088428
 */


float FUN_01088428(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 5;
  uVar1 = uVar2 - 1;
  if (uVar1 == 0) {
    return 0.0;
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    uVar1 = uVar2;
  }
  return (float)uVar1;
}


