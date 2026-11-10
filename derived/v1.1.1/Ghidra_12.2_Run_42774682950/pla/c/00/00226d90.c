/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00226d90; name: _INIT_24
 */


void _INIT_24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04372970;
  puVar1 = PTR_DAT_04372968;
  if ((*PTR_DAT_04372970 & 1) == 0) {
    FUN_00220484(PTR_DAT_04372968);
    FUN_00100250(PTR_FUN_04372978,puVar1,&PTR_LOOP_0411a000);
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


