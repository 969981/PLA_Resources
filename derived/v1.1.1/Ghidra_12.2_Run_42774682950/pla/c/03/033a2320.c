/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a2320; name: _INIT_1894
 */


void _INIT_1894(void)

{
  DAT_04450e80 = DAT_0444b318;
  DAT_04450e70 = 0;
  DAT_04450e72 = 1;
  DAT_0444b318 = &DAT_04450e20;
  DAT_04450e20 = &DAT_04450e30;
  DAT_04450e28 = 0x8000000400000000;
  DAT_04450e78 = "sys.io.loadutil";
  FUN_00100250(&LAB_03325ec8,&DAT_04450e20,&PTR_LOOP_0411a000);
  return;
}


