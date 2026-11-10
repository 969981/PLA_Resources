/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244460; name: _INIT_946
 */


void _INIT_946(void)

{
  if ((DAT_044390d0 & 1) == 0) {
    DAT_044390c8 = 0;
    DAT_044390c0 = FUN_032444c8;
    DAT_044390b8 = 1;
    DAT_044390b0 = &PTR_LAB_0434dae8;
    FUN_00100250(&LAB_032e1ebc,&DAT_044390b0,&PTR_LOOP_0411a000);
    DAT_044390d0 = 1;
  }
  return;
}


