/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018592a8; name: FUN_018592a8
 */


bool FUN_018592a8(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (*(char *)(*param_1 + 0x1f0) != '\0') {
    lVar2 = *(long *)(*param_1 + 0x360);
    if (lVar2 != 0) {
      if ((ulong)(*(long *)(lVar2 + 0x128) - *(long *)(lVar2 + 0x120) >> 5) < 2) {
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_0437a0d0), plVar3 = (long *)PTR_DAT_0437a0d8,
           iVar1 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        else {
          plVar3 = (long *)PTR_DAT_0437a0d8;
        }
      }
      else {
        plVar3 = (long *)(*(long *)(lVar2 + 0x120) + 0x20);
      }
      if (*plVar3 == -0x7afa371b5cc2d8db) {
        return (bool)2;
      }
      return *plVar3 == -0x6862c6fa26b0f4ca;
    }
  }
  return false;
}


