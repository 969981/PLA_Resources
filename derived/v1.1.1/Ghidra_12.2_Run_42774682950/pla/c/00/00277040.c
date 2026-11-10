/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00277040; name: _INIT_28
 */


void _INIT_28(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_04372ed0;
  FUN_00878478(PTR_DAT_04372ed0);
  FUN_0087eba4(puVar1 + 0x120);
  FUN_0087ea5c(puVar1 + 0x168);
  *(undefined8 *)(puVar1 + 0x260) = 0xffffffffffffffff;
  puVar2 = PTR_LAB_04372ee8;
  *(undefined8 *)(puVar1 + 0x250) = 0;
  FUN_00100250(puVar2,puVar1,&PTR_LOOP_0411a000);
  return;
}


