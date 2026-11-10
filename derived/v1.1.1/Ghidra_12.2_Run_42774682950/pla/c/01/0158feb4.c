/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158feb4; name: FUN_0158feb4
 */


void FUN_0158feb4(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (**(char **)(param_1 + 0x6c0) != '\0') {
    if ((*PTR_DAT_0437a480 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_0437a480);
      if (iVar1 != 0) {
        FUN_00100250(PTR_LAB_0437b4a8,PTR_DAT_0437a488,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a480);
      }
    }
    lVar2 = *(long *)PTR_DAT_0437a488;
    *(long *)PTR_DAT_0437a490 = lVar2;
    if (lVar2 != 0) {
      FUN_00d7e25c(lVar2,param_1 + 0x6b8);
      return;
    }
  }
  return;
}


