/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d27930; name: FUN_00d27930
 */


long FUN_00d27930(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_043796b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043796b8);
  }
  lVar2 = *(long *)PTR_DAT_043796c0;
  *(long *)PTR_DAT_043796c8 = lVar2;
  if (param_2 == 2) {
    lVar2 = param_1 + 0x118;
  }
  else {
    lVar2 = lVar2 + 0x70;
    if (param_2 == 0) {
      lVar2 = param_1 + 0x10;
    }
  }
  return lVar2;
}


