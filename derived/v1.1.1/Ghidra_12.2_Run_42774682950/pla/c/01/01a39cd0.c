/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a39cd0; name: FUN_01a39cd0
 */


undefined1  [16] FUN_01a39cd0(long param_1)

{
  undefined1 auVar1 [16];
  
  if (*(char *)(*(long *)(param_1 + 0xe2d0) + 8) == '\0') {
    auVar1 = FUN_01a4b7e0();
    return auVar1;
  }
  return *(undefined1 (*) [16])(*(long *)(param_1 + 0xe2d0) + 0x10);
}


