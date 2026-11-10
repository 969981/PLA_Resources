/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c9a9c; name: FUN_014c9a9c
 */


void FUN_014c9a9c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00d71014(*(undefined8 *)(param_1 + 0x98));
  if ((uVar1 & 1) == 0) {
    FUN_014cda24(*(undefined8 *)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return;
}


