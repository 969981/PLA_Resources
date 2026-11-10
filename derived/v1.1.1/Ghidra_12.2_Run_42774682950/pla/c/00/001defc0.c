/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001defc0; name: FUN_001defc0
 */


undefined8 FUN_001defc0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x1100) + 0x30);
  }
  else {
    FUN_001f43b0(param_1,5,2);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x1100) + 0x30);
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_001f43f8(param_1,5);
    }
  }
  return uVar1;
}


