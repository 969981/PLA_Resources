/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245cc0; name: _INIT_1028
 */


void _INIT_1028(void)

{
  if ((DAT_04439da0 & 1) == 0) {
    DAT_04439d98 = 0;
    DAT_04439d90 = FUN_03245d28;
    DAT_04439d88 = 1;
    DAT_04439d80 = &PTR_LAB_0434dae8;
    FUN_00100250(&LAB_032e1ebc,&DAT_04439d80,&PTR_LOOP_0411a000);
    DAT_04439da0 = 1;
  }
  return;
}


