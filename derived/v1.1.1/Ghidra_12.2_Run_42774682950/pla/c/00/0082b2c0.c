/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082b2c0; name: FUN_0082b2c0
 */


undefined8 FUN_0082b2c0(void)

{
  undefined8 uVar1;
  
  if (*(code **)(*(long *)PTR_DAT_04377550 + 0x80) == (code *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0082b2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)PTR_DAT_04377550 + 0x80))();
  return uVar1;
}


