/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dac4c0; name: FUN_00dac4c0
 */


undefined8 FUN_00dac4c0(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x1f) {
    uVar1 = FUN_00db1088((&PTR_s_capture_wild_field_041edae0)[(ulong)param_1 * 2]);
    return uVar1;
  }
  return 0;
}


