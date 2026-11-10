/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8d2a0; name: _INIT_405
 */


void _INIT_405(void)

{
  std::locale::locale((locale *)&DAT_043eef78);
  DAT_043eef80 = std::locale::use_facet((id *)&DAT_043eef78);
  DAT_043eef88 = std::locale::use_facet((id *)&DAT_043eef78);
  DAT_043eef90 = 0;
  DAT_043eef98 = 0;
  DAT_043eefa0 = 0;
  DAT_043eefa8 = 0;
  DAT_043eefb0 = 0;
  FUN_02a7d7b0(&DAT_043eef78,"UnixTimeSecond *: *([0-9]+)");
  FUN_00100250(FUN_02a7d758,&DAT_043eef78,&PTR_LOOP_0411a000);
  return;
}


