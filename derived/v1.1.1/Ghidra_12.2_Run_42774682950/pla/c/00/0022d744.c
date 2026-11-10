/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d744; name: FUN_0022d744
 */


undefined8 FUN_0022d744(long param_1,long param_2,short param_3)

{
  if ((*(long *)(param_1 + 400) == param_2) && (*(short *)(param_1 + 0x198) == param_3)) {
    return 0;
  }
  *(long *)(param_1 + 400) = param_2;
  *(short *)(param_1 + 0x198) = param_3;
  return 1;
}


