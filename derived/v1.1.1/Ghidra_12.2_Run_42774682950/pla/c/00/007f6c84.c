/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f6c84; name: FUN_007f6c84
 */


uint FUN_007f6c84(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_007f0ee4(param_1 + 0xb8);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_007f0ee4(param_1 + 0x98);
    if ((uVar2 & 1) != 0) {
      uVar1 = FUN_007f0f48(param_1 + 0x98,param_1 + 0xb8);
      return (uVar1 ^ 1) & 1;
    }
  }
  return 0;
}


