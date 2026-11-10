/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d93780; name: FUN_00d93780
 */


undefined8 FUN_00d93780(void)

{
  int iVar1;
  
  if (((*PTR_DAT_0437b228 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b228);
  }
  *(undefined8 *)PTR_DAT_0437b238 = *(undefined8 *)PTR_DAT_0437b230;
  FUN_010b75d0();
  return 0;
}


