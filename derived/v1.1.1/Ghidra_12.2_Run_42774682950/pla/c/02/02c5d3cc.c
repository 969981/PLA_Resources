/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5d3cc; name: FUN_02c5d3cc
 */


uint FUN_02c5d3cc(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_02c69870(*(undefined8 *)(param_1 + 0x98));
  uVar1 = (param_2 & 0x7fff) << 1;
  return (uVar2 & 3 << (ulong)(uVar1 & 0x1f) & 0xffff) >> (ulong)(uVar1 & 0x1f) & 0xffff;
}


