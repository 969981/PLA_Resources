/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028503f8; name: FUN_028503f8
 */


void FUN_028503f8(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_0437b6f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437b6f0), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437f8b0,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b6f0);
  }
  lVar2 = *(long *)PTR_DAT_0437b6f8;
  *(long *)PTR_DAT_0437b700 = lVar2;
  if (lVar2 == 0) {
    return;
  }
  FUN_02c96b8c(lVar2,0xfffffc40,0x3c0,0x21c,0xfffffde4);
  return;
}


