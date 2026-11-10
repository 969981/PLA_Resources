/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245860; name: _INIT_1018
 */


void _INIT_1018(void)

{
  if ((DAT_04439c10 & 1) == 0) {
    DAT_04439c08 = 0;
    DAT_04439c00 = FUN_032458c8;
    DAT_04439bf8 = 1;
    DAT_04439bf0 = &PTR_LAB_0434dae8;
    FUN_00100250(&LAB_032e1ebc,&DAT_04439bf0,&PTR_LOOP_0411a000);
    DAT_04439c10 = 1;
  }
  return;
}


