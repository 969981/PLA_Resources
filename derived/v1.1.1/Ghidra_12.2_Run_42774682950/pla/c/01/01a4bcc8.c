/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4bcc8; name: FUN_01a4bcc8
 */


undefined1  [16] FUN_01a4bcc8(long param_1)

{
  undefined1 auVar1 [16];
  
  if (*(char *)(param_1 + 0x370) == '\0') {
    return ZEXT416(*(uint *)(param_1 + 0x360));
  }
  auVar1 = FUN_01832b18(CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x350) >> 0x20) -
                                 (float)((ulong)*(undefined8 *)(param_1 + 0x340) >> 0x20),
                                 (float)*(undefined8 *)(param_1 + 0x350) -
                                 (float)*(undefined8 *)(param_1 + 0x340)));
  return auVar1;
}


