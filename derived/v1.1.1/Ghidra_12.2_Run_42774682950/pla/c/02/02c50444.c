/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c50444; name: FUN_02c50444
 */


bool FUN_02c50444(uint param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  if (param_1 < 0x725) {
    if (((*PTR_DAT_043795f8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar3 != 0)) {
      FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043795f8);
    }
    lVar4 = *(long *)PTR_DAT_04379600;
    *(long *)PTR_DAT_04379608 = lVar4;
    if ((((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x80), lVar4 == 0)) ||
        ((uint)*(ushort *)(lVar4 + 2) <= (param_1 & 0xffff))) ||
       (uVar1 = *(ushort *)(lVar4 + (ulong)(param_1 & 0xffff) * 2 + 0x4c),
       *(ushort *)(lVar4 + 4) <= uVar1)) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    bVar2 = *(char *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x48) + (ulong)uVar1 * 0x3c + 0x16) == '\t';
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


