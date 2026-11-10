/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f0848; name: FUN_007f0848
 */


long FUN_007f0848(long param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x5f8);
  uVar1 = uVar2 + param_2;
  if (uVar1 < 0x5c1) {
    *(uint *)(param_1 + 0x5f8) = uVar1;
    *(byte *)(param_1 + 0x14) = param_2;
    return param_1 + (ulong)uVar2 + 0x30;
  }
  return 0;
}


