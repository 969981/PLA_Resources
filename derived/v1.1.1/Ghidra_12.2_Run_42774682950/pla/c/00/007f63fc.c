/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f63fc; name: FUN_007f63fc
 */


undefined8 FUN_007f63fc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_007f0ee4(param_1 + 0xb8);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_007f0ee4(param_1 + 0x98);
    if ((uVar1 & 1) != 0) {
      uVar2 = FUN_007f0f48(param_1 + 0x98,param_1 + 0xb8);
      return uVar2;
    }
  }
  return 0;
}


