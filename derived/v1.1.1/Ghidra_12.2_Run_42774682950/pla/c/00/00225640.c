/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00225640; name: _INIT_23
 */


void _INIT_23(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04372950;
  puVar1 = PTR_DAT_04372948;
  if ((*PTR_DAT_04372948 & 1) == 0) {
    FUN_0022016c(PTR_DAT_04372950);
    *(undefined **)puVar2 = PTR_DAT_04372958 + 0x10;
    FUN_00100250(PTR_FUN_04372960,puVar2,&PTR_LOOP_0411a000);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


