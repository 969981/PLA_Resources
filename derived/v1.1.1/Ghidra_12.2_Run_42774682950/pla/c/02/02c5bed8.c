/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5bed8; name: FUN_02c5bed8
 */


undefined8 FUN_02c5bed8(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(char *)(*(long *)(param_1 + 0x98) + 0x19) != '\0') && ((param_2 & 1) != 0)) {
    FUN_02c66640(*(long *)(param_1 + 0x98));
    uVar1 = 1;
  }
  return uVar1;
}


