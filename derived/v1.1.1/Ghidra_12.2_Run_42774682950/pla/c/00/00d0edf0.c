/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d0edf0; name: FUN_00d0edf0
 */


undefined8 FUN_00d0edf0(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_04379618 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379618), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437a720,PTR_DAT_04379620,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379618);
  }
  lVar2 = *(long *)PTR_DAT_04379620;
  *(long *)PTR_DAT_04379628 = lVar2;
  return *(undefined8 *)(lVar2 + 0x100);
}


