/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00201e18; name: FUN_00201e18
 */


undefined8 FUN_00201e18(void)

{
  undefined8 uVar1;
  long in_x5;
  
  if ((*(uint *)(in_x5 + 0x18) - 2 < 4) || (*(uint *)(in_x5 + 0x18) < 2)) {
    uVar1 = FUN_00201e7c();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


