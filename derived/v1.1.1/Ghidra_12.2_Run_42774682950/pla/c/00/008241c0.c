/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008241c0; name: _INIT_124
 */


void _INIT_124(void)

{
  undefined *puVar1;
  
  DAT_043a4960 = &DAT_043a496c;
  DAT_043a4958 = PTR_DAT_04377b50 + 0x10;
  DAT_043a4968 = 0x400;
  FUN_0081f2c0(&DAT_043a4958);
  puVar1 = PTR_DAT_04377c50;
  *DAT_043a4960 = *PTR_DAT_04377b60;
  DAT_043a4958 = puVar1 + 0x10;
  FUN_00100250(PTR_LAB_04377c18,&DAT_043a4958,&PTR_LOOP_0411a000);
  FUN_008248f4(&DAT_043a4918);
  FUN_00100250(PTR_FUN_04377c58,&DAT_043a4918,&PTR_LOOP_0411a000);
  return;
}


