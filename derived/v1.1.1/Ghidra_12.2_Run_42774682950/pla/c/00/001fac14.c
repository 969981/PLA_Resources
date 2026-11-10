/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fac14; name: FUN_001fac14
 */


undefined8 FUN_001fac14(long param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_2 + 0xd0) = *(uint *)(param_2 + 0xd0) & 0xfffffffd;
  FUN_001ef9e8();
  if (((*(byte *)(param_1 + 0x3fe) & 1) == 0) || (uVar1 = FUN_001f954c(param_1), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}


