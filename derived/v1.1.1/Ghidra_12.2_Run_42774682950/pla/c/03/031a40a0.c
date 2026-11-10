/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a40a0; name: _INIT_820
 */


void _INIT_820(void)

{
  DAT_04434cd0 = DAT_0444b318;
  DAT_04434cc0 = 0;
  DAT_04434cc2 = 1;
  DAT_0444b318 = &DAT_04434c70;
  DAT_04434c70 = &DAT_04434c80;
  DAT_04434c78 = 0x8000000400000000;
  DAT_04434cc8 = "ai.NavMesh.Compact";
  FUN_00100250(&LAB_03325ec8,&DAT_04434c70,&PTR_LOOP_0411a000);
  return;
}


