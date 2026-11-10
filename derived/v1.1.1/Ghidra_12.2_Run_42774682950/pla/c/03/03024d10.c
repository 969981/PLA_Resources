/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03024d10; name: FUN_03024d10
 */


undefined8 FUN_03024d10(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_2 + 8) & 0xffffff;
  if ((int)uVar1 == 0xffffff) {
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar1 * 0xc0 + 0xb0);
}


