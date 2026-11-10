/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0247d544; name: FUN_0247d544
 */


undefined8 FUN_0247d544(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_DAT_04387520;
  if (((*PTR_DAT_04387518 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04387518), iVar3 != 0))
  {
    if (((*PTR_DAT_04387488 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04387488), puVar1 = PTR_DAT_04387470, iVar3 != 0)) {
      FUN_0247cdf0(PTR_DAT_04387470);
      FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04387488);
    }
    *(undefined **)puVar2 = PTR_DAT_04387470;
    __cxa_guard_release(PTR_DAT_04387518);
  }
  return *(undefined8 *)puVar2;
}


