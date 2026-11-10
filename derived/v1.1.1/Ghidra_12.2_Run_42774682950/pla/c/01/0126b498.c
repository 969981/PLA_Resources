/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126b498; name: FUN_0126b498
 */


void FUN_0126b498(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x1a8);
  *(bool *)(param_1 + 0x1a8) = (ulong)bVar1 == 0;
  FUN_01351d04(*(undefined8 *)(param_1 + 0x70 + (ulong)bVar1 * 8),1);
  FUN_01351d04(*(undefined8 *)(param_1 + 0x70 + (ulong)*(byte *)(param_1 + 0x1a8) * 8),0);
  return;
}


