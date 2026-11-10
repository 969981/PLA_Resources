/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03395640; name: _INIT_1884
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1884(void)

{
  DAT_04450a50 = DAT_0444b318;
  DAT_04450a40 = 0;
  DAT_0444b318 = &DAT_044509f0;
  DAT_044509f0 = &DAT_04450a00;
  DAT_044509f8 = 0x8000000400000000;
  DAT_04450a42 = 1;
  DAT_04450a48 = "base.s11n.tagfile.write";
  FUN_00100250(&LAB_03325ec8,&DAT_044509f0,&PTR_LOOP_0411a000);
  DAT_04450a58 = &DAT_04450a68;
  DAT_04450a60 = 0x8000000400000000;
  DAT_04450aa8 = 0;
  DAT_04450aaa = 1;
  DAT_04450ab0 = "base.s11n.tagfile.write.compendium";
  DAT_04450ab8 = DAT_0444b318;
  DAT_0444b318 = &DAT_04450a58;
  FUN_00100250(&LAB_03325ec8,&DAT_04450a58,&PTR_LOOP_0411a000);
  DAT_04450ac0 = DAT_04444b38;
  _DAT_04450af0 = 0;
  DAT_04450ad0 = 0;
  DAT_04450ad8 = &DAT_04450880;
  DAT_04444b38 = &DAT_04450ac0;
  DAT_04450ac8 = "Common::WriteFormatBinaryTagfile";
  DAT_04450ae0 = &LAB_03395420;
  DAT_04450ae8 = 0;
  return;
}


