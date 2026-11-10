/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0097572c; name: FUN_0097572c
 */


void FUN_0097572c(void)

{
  int iVar1;
  long lVar2;
  
  FUN_009757b4();
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379578), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
  lVar2 = FUN_0095492c();
  *(ulong *)(lVar2 + 0x168) = *(ulong *)(lVar2 + 0x168) & 0xfffffffffffffff7;
  return;
}


