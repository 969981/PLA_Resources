/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b3d60; name: _INIT_1540
 */


void _INIT_1540(void)

{
  DAT_04440a38 = DAT_0444b318;
  DAT_04440a28 = 0;
  DAT_04440a2a = 1;
  DAT_0444b318 = &DAT_044409d8;
  DAT_044409d8 = &DAT_044409e8;
  DAT_044409e0 = 0x8000000400000000;
  DAT_04440a30 = "common.image.hdr";
  FUN_00100250(&LAB_03325ec8,&DAT_044409d8,&PTR_LOOP_0411a000);
  return;
}


