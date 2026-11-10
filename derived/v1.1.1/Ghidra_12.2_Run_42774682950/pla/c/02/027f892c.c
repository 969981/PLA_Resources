/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f892c; name: FUN_027f892c
 */


bool FUN_027f892c(long param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if ((param_2 & 0xffffffff) < *(ulong *)(param_1 + 0x120)) {
    if ((*PTR_DAT_04379690 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04379690);
      if (iVar2 != 0) {
        FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379690);
      }
    }
    lVar3 = *(long *)PTR_DAT_04379698;
    *(long *)PTR_DAT_043796a0 = lVar3;
    bVar1 = *(int *)(*(long *)(lVar3 + 0x50) +
                     (ulong)*(byte *)(*(long *)(param_1 + 0x118) + (param_2 & 0xffffffff)) * 0x120 +
                    0x100) == 3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


