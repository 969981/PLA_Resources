/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242e20; name: _INIT_899
 */


void _INIT_899(void)

{
  if ((DAT_04438978 & 1) == 0) {
    DAT_04438970 = 0;
    DAT_04438968 = FUN_03242a28;
    DAT_04438960 = 1;
    DAT_04438958 = &PTR_LAB_0434dae8;
    FUN_00100250(&LAB_032e1ebc,&DAT_04438958,&PTR_LOOP_0411a000);
    DAT_04438978 = 1;
  }
  return;
}


