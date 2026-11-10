/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081f490; name: _INIT_122
 */


void _INIT_122(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_04377c10;
  *(undefined **)PTR_DAT_04377c10 = PTR_DAT_043773d0 + 0x10;
  *(undefined1 **)(puVar1 + 8) = &DAT_03996322;
  FUN_00100250(PTR_LAB_04377c18,puVar1,&PTR_LOOP_0411a000);
  puVar2 = PTR_LAB_04377c30;
  puVar1 = PTR_DAT_04377c28;
  *(undefined **)PTR_DAT_04377c28 = PTR_DAT_04377c20 + 0x10;
  *(undefined **)(puVar1 + 8) = &DAT_03a73ba2;
  FUN_00100250(puVar2,puVar1,&PTR_LOOP_0411a000);
  return;
}


