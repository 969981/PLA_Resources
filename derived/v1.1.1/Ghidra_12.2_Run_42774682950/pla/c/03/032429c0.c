/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032429c0; name: _INIT_895
 */


void _INIT_895(void)

{
  if ((DAT_044388d8 & 1) == 0) {
    DAT_044388d0 = 0;
    DAT_044388c8 = FUN_03242a28;
    DAT_044388c0 = 1;
    DAT_044388b8 = &PTR_LAB_0434dae8;
    FUN_00100250(&LAB_032e1ebc,&DAT_044388b8,&PTR_LOOP_0411a000);
    DAT_044388d8 = 1;
  }
  return;
}


