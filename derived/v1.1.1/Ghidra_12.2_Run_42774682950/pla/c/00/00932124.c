/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00932124; name: FUN_00932124
 */


long FUN_00932124(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(long *)(param_1 + 0x70) + 0x7d);
  if (bVar1 < 6) {
    return 0;
  }
  if (bVar1 < 0xc) {
    return 2;
  }
  if (bVar1 < 0x12) {
    return 1;
  }
  if (bVar1 < 0x18) {
    return 3;
  }
  return (ulong)(bVar1 < 0x1e) << 2;
}


