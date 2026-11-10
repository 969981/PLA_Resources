/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2d4f0; name: FUN_02c2d4f0
 */


undefined8 FUN_02c2d4f0(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  if ((uVar1 - 0x430 < 0x20) ||
     (uVar2 = uVar1 - 0xe3, uVar2 < 0x1c && (1 << (ulong)(uVar2 & 0x1f) & 0xc60a205U) != 0)) {
    *param_2 = uVar1 - 0x20;
    return 1;
  }
  return 0;
}


