/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03274bb0; name: _INIT_1386
 */


void _INIT_1386(void)

{
  if ((DAT_0443e258 & 1) == 0) {
    DAT_0443e250 = 0;
    DAT_0443e248 = FUN_03274c18;
    DAT_0443e240 = 1;
    DAT_0443e238 = &PTR_LAB_0434dae8;
    FUN_00100250(&LAB_032e1ebc,&DAT_0443e238,&PTR_LOOP_0411a000);
    DAT_0443e258 = 1;
  }
  return;
}


