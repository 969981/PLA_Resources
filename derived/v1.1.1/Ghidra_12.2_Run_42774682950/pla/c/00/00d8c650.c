/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d8c650; name: FUN_00d8c650
 */


void FUN_00d8c650(long param_1)

{
  long lVar1;
  
  FUN_00d8c68c();
  lVar1 = *(long *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_00d8e7f0(param_1 + 0x118);
  return;
}


