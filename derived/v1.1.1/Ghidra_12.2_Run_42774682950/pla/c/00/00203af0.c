/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00203af0; name: FUN_00203af0
 */


undefined8 FUN_00203af0(void)

{
  undefined8 uVar1;
  
  if ((DAT_0438ec26 & 1) == 0) {
    DAT_0438ec26 = 1;
    uVar1 = (**(code **)(*(long *)PTR_PTR_04372758 + 0x20))();
    return uVar1;
  }
  return 1;
}


