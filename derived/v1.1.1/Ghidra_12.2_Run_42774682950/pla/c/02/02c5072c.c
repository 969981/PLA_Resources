/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5072c; name: FUN_02c5072c
 */


bool FUN_02c5072c(ushort param_1,char param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  
  if (((*PTR_DAT_043795f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043795f8);
  }
  lVar3 = *(long *)PTR_DAT_04379600;
  *(long *)PTR_DAT_04379608 = lVar3;
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x80), lVar3 != 0)) {
    uVar1 = 0;
    if (param_1 < 0x725) {
      uVar1 = param_1;
    }
    if ((uVar1 < *(ushort *)(lVar3 + 2)) &&
       (uVar1 = *(ushort *)(lVar3 + (ulong)uVar1 * 2 + 0x4c), uVar1 < *(ushort *)(lVar3 + 4))) {
      return *(char *)(lVar3 + (ulong)*(uint *)(lVar3 + 0x48) + (ulong)uVar1 * 0x3c + 0x20) ==
             param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


