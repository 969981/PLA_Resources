/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5d8f0; name: FUN_02c5d8f0
 */


undefined8 FUN_02c5d8f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  if (iVar1 == 0x365) {
    uVar2 = FUN_02c8ad24(*(undefined8 *)(param_1 + 0x98));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


