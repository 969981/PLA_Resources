/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01362f9c; name: FUN_01362f9c
 */


void FUN_01362f9c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_18 [8];
  
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (lVar2 = FUN_009cfbc8(*(long *)(param_1 + 0x90) + 0xf0,auStack_18), lVar2 != 0)) {
    if ((*PTR_DAT_0437a0d0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_0437a0d0);
      if (iVar1 != 0) {
        FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a0d0);
      }
    }
    FUN_0289f9a4(lVar2,PTR_DAT_0437a0d8);
  }
  return;
}


