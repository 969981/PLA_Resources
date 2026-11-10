/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fab94; name: FUN_007fab94
 */


bool FUN_007fab94(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar2 = FUN_007f0ee4(param_1 + 0x98);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  uVar1 = FUN_008026bc(*(undefined8 *)(param_1 + 0x120));
  return 1 < uVar1;
}


