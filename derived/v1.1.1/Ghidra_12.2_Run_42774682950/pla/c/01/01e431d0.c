/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e431d0; name: FUN_01e431d0
 */


undefined4 FUN_01e431d0(void)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_0437a648 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar2 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar2;
  return *(undefined4 *)(*(long *)(lVar2 + 0x230) + 0x124);
}


