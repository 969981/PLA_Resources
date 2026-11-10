/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081aa60; name: _INIT_119
 */


void _INIT_119(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_LAB_04377b38;
  puVar3 = PTR_DAT_04377b30;
  puVar1 = PTR_DAT_04377b30 + 8;
  puVar2 = PTR_DAT_04377b20 + 0x10;
  *(undefined4 *)(PTR_DAT_04377b30 + 0x18) = 0;
  *(undefined **)puVar3 = puVar2;
  *(undefined **)(puVar3 + 8) = puVar1;
  *(undefined **)(puVar3 + 0x10) = puVar1;
  FUN_00100250(puVar4,puVar3,&PTR_LOOP_0411a000);
  return;
}


