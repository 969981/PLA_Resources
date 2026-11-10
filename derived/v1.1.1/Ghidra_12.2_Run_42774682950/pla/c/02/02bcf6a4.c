/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcf6a4; name: FUN_02bcf6a4
 */


undefined * FUN_02bcf6a4(void)

{
  int iVar1;
  
  if (((DAT_043f1fd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043f1fd0), iVar1 != 0)) {
    nn::os::InitializeLightEvent(&DAT_043f1fbc,0,1);
    DAT_043f1fc8 = 0;
    FUN_00100250(PTR_LAB_04381908,&DAT_043f1fb8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043f1fd0);
  }
  return &DAT_043f1fb8;
}


