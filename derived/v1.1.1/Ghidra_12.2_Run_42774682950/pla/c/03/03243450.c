/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03243450; name: _INIT_910
 */


void _INIT_910(void)

{
  if ((DAT_04438b30 & 1) == 0) {
    DAT_04438b28 = 0;
    DAT_04438b20 = FUN_03243078;
    DAT_04438b18 = 1;
    DAT_04438b10 = &PTR_LAB_0434dae8;
    FUN_00100250(&LAB_032e1ebc,&DAT_04438b10,&PTR_LOOP_0411a000);
    DAT_04438b30 = 1;
  }
  return;
}


