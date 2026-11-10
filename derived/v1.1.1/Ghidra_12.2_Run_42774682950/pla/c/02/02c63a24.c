/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c63a24; name: FUN_02c63a24
 */


bool FUN_02c63a24(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_02c68b0c(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_02c70958(*(undefined8 *)(param_1 + 0x98));
  return (uVar1 & 0xfff0 ^ uVar1 >> 0x10 ^ uVar2 >> 0x10 ^ uVar2 & 0xfff0) < 0x10;
}


