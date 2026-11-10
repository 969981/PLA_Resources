/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01211544; name: FUN_01211544
 */


undefined8 FUN_01211544(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x5d8) == 3) {
    uVar1 = FUN_0284ce00(*(undefined8 *)(param_1 + 0x5c0));
    return uVar1;
  }
  if (*(int *)(param_1 + 0x5d8) == 0) {
    uVar1 = FUN_0284ce00(*(undefined8 *)(param_1 + 0x5b8));
    return uVar1;
  }
  return 0;
}


