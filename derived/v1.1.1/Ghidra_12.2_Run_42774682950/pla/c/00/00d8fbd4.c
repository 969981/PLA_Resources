/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d8fbd4; name: FUN_00d8fbd4
 */


void FUN_00d8fbd4(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_0437b548 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437b548), iVar1 != 0))
  {
    FUN_00100250(&LAB_00d8fd98,PTR_DAT_0437b550,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b548);
  }
  lVar2 = *(long *)PTR_DAT_0437b550;
  *(long *)PTR_DAT_0437b558 = lVar2;
  if (lVar2 == 0) {
    return;
  }
  FUN_02cbb4a0();
  return;
}


