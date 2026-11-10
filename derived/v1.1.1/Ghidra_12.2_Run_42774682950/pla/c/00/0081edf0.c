/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081edf0; name: _INIT_120
 */


void _INIT_120(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_04377bc8;
  *(undefined **)PTR_DAT_04377bc8 = PTR_DAT_04377bd8 + 0x10;
  *(undefined8 *)(puVar1 + 8) = 0;
  FUN_00100250(PTR_LAB_04377be0,puVar1,&PTR_LOOP_0411a000);
  puVar1 = PTR_DAT_04377be8;
  *(undefined8 *)PTR_DAT_04377be8 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  FUN_00100250(PTR_LAB_04377410,puVar1,&PTR_LOOP_0411a000);
  puVar2 = PTR_DAT_043773f0;
  puVar1 = PTR_DAT_043773f0 + 0x10;
  *(undefined8 *)PTR_DAT_043773f0 = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  FUN_0081eeb0(puVar2,4,puVar1);
  puVar2 = PTR_DAT_04377bd0;
  puVar1 = PTR_DAT_04377bd0 + 0x10;
  *(undefined8 *)PTR_DAT_04377bd0 = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  FUN_0081eeb0(puVar2,4,puVar1);
  puVar1 = PTR_DAT_04377bb0;
  FUN_00824760(PTR_DAT_04377bb0);
  FUN_00100250(PTR_FUN_04377bf0,puVar1,&PTR_LOOP_0411a000);
  *(undefined4 *)PTR_DAT_04377ba8 = 0;
  return;
}


