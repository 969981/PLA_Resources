/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018590b8; name: FUN_018590b8
 */


undefined8 FUN_018590b8(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (*(char *)(*param_1 + 0x1f0) != '\0') {
    lVar2 = *(long *)(*param_1 + 0x360);
    if (lVar2 != 0) {
      plVar3 = *(long **)(lVar2 + 0x120);
      if (*(long **)(lVar2 + 0x128) == *(long **)(lVar2 + 0x120)) {
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
      lVar2 = *plVar3;
      if (lVar2 == -0x6862c6fa26b0f4ca) {
        return 1;
      }
      if (lVar2 == -0x6034c566b8a5ad85) {
        return 3;
      }
      if (lVar2 == -0x7afa371b5cc2d8db) {
        return 2;
      }
    }
  }
  return 0;
}


