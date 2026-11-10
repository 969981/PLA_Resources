/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046c0b0; name: FUN_0046c0b0
 */


undefined8 FUN_0046c0b0(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18) | param_2;
  if ((param_2 & 0x780) != 0) {
    uVar1 = uVar1 | 0x80;
  }
  *(ulong *)(param_1 + 0x18) = uVar1;
  return 1;
}


