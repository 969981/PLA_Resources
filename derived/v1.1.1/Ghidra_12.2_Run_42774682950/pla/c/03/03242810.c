/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242810; name: _INIT_889
 */


void _INIT_889(void)

{
  if ((DAT_044387e8 & 1) == 0) {
    DAT_044387e0 = 0;
    DAT_044387d8 = FUN_032425c8;
    DAT_044387d0 = 1;
    DAT_044387c8 = &PTR_LAB_0434dae8;
    FUN_00100250(&LAB_032e1ebc,&DAT_044387c8,&PTR_LOOP_0411a000);
    DAT_044387e8 = 1;
  }
  return;
}


