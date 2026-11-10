/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01223180; name: FUN_01223180
 */


undefined4 FUN_01223180(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1678);
  *(undefined4 *)(param_1 + 0x1678) = 0;
  return uVar1;
}


