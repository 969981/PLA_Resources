/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03329570; name: FUN_03329570
 */


undefined8 FUN_03329570(void)

{
  undefined8 *local_28;
  
  if (DAT_0444b3c8 != '\0') {
    local_28 = &DAT_0444b440;
    FUN_033290c0(&local_28);
    if (DAT_0444b438 != (long *)0x0) {
      (**(code **)(*DAT_0444b438 + 8))();
      DAT_0444b438 = (long *)0x0;
    }
    DAT_0444b3c8 = '\0';
  }
  return 0;
}


