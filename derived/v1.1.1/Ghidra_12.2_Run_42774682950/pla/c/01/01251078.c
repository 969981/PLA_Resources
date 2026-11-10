/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01251078; name: FUN_01251078
 */


void FUN_01251078(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_01234bc0(param_1 + 0x9c0,
                       *(undefined4 *)
                        (*(long *)(param_1 + 0x1270) + (ulong)*(byte *)(param_1 + 0x12a8) * 4));
  FUN_0280779c(*(undefined8 *)(param_1 + 0x14c8),uVar1 & 1);
  return;
}


