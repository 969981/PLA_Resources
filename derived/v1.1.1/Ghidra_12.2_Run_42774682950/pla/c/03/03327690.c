/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03327690; name: FUN_03327690
 */


void FUN_03327690(void)

{
  DAT_0444b370 = 0;
  if ((-1 < DAT_0444b374) && (DAT_0444b368 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,DAT_0444b368,DAT_0444b374 << 2)
    ;
  }
  DAT_0444b368 = 0;
  DAT_0444b374 = 0x80000000;
  FUN_032c21f8(&DAT_0444b378);
  return;
}


