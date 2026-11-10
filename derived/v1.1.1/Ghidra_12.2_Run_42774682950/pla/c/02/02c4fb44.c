/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4fb44; name: FUN_02c4fb44
 */


void FUN_02c4fb44(long *param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (((*PTR_DAT_043795f8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar3 != 0))
  {
    FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043795f8);
  }
  lVar4 = *(long *)PTR_DAT_04379600;
  *(long *)PTR_DAT_04379608 = lVar4;
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x80), lVar4 != 0)) {
    uVar1 = 0;
    if ((param_2 & 0xffff) < 0x725) {
      uVar1 = param_2;
    }
    if (((uVar1 & 0xffff) < (uint)*(ushort *)(lVar4 + 2)) &&
       (uVar2 = *(ushort *)(lVar4 + (ulong)(ushort)uVar1 * 2 + 0x4c), uVar2 < *(ushort *)(lVar4 + 4)
       )) {
      uVar1 = *(uint *)(lVar4 + 0x48);
      *(uint *)(param_1 + 1) = param_2;
      *param_1 = lVar4 + (ulong)uVar1 + (ulong)uVar2 * 0x3c;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


