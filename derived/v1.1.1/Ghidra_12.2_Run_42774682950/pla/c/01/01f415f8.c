/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f415f8; name: FUN_01f415f8
 */


void FUN_01f415f8(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x128) == *(long *)(param_1 + 0x130)) {
    FUN_01f4ecec(param_1 + 0x120,param_2);
    return;
  }
  FUN_01f4edc8(param_1 + 0x138);
  *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0x128) + 0x10;
  return;
}


