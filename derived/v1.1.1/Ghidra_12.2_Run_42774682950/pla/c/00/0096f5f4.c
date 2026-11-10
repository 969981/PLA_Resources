/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0096f5f4; name: FUN_0096f5f4
 */


uint FUN_0096f5f4(void)

{
  uint uVar1;
  int iVar2;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379690), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  uVar1 = FUN_0286b054();
  return ~uVar1 & 1;
}


