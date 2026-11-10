/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e46c0; name: FUN_003e46c0
 */


void FUN_003e46c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_002e4a10();
  }
  uVar1 = FUN_002e45d0(param_2);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}


