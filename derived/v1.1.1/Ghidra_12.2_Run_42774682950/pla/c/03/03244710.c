/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244710; name: _INIT_950
 */


void _INIT_950(void)

{
  if ((DAT_04439170 & 1) == 0) {
    DAT_04439168 = 0;
    DAT_04439160 = FUN_032444c8;
    DAT_04439158 = 1;
    DAT_04439150 = &PTR_LAB_0434dae8;
    FUN_00100250(&LAB_032e1ebc,&DAT_04439150,&PTR_LOOP_0411a000);
    DAT_04439170 = 1;
  }
  return;
}


