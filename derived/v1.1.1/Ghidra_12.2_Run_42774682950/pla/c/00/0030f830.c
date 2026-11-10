/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030f830; name: _INIT_37
 */


void _INIT_37(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_04373a70;
  *(undefined4 *)PTR_DAT_04373a70 = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar2 = PTR_LAB_04373a78;
  FUN_00100250(PTR_LAB_04373a78,puVar1,&PTR_LOOP_0411a000);
  puVar1 = PTR_DAT_04373a80;
  *(undefined4 *)PTR_DAT_04373a80 = 1;
  *(undefined2 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x12) = 0;
  *(undefined8 *)(puVar1 + 10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  FUN_00100250(puVar2,puVar1,&PTR_LOOP_0411a000);
  puVar1 = PTR_DAT_04373a88;
  *(undefined4 *)PTR_DAT_04373a88 = 2;
  *(undefined2 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x12) = 0;
  *(undefined8 *)(puVar1 + 10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  FUN_00100250(puVar2,puVar1,&PTR_LOOP_0411a000);
  return;
}


