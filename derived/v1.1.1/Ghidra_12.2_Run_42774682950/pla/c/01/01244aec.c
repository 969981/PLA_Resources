/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01244aec; name: FUN_01244aec
 */


uint FUN_01244aec(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0134fb30(*(undefined8 *)(param_1 + 0x70));
  uVar2 = FUN_0134fb30(*(undefined8 *)(param_1 + 0x78));
  return uVar1 & uVar2 & 1;
}


