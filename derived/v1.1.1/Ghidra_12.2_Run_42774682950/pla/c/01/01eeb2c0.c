/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eeb2c0; name: FUN_01eeb2c0
 */


void FUN_01eeb2c0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_0437e418 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437e418), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437f2f8,PTR_DAT_0437e420,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437e418);
  }
  uVar2 = *(undefined8 *)PTR_DAT_0437e420;
  *(undefined8 *)PTR_DAT_0437f2f0 = uVar2;
  FUN_010cc36c(uVar2,2);
  return;
}


