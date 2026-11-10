/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c50328; name: FUN_02c50328
 */


undefined8 FUN_02c50328(uint param_1,ulong param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long local_20;
  uint local_18;
  
  if (param_1 < 0x725) {
    local_20 = 0;
    local_18 = 0;
    uVar4 = param_2;
    if ((*PTR_DAT_043795f8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_043795f8);
      uVar4 = param_2 & 0xffffffff;
      if (iVar2 != 0) {
        FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043795f8);
        uVar4 = param_2 & 0xffffffff;
      }
    }
    lVar5 = *(long *)PTR_DAT_04379600;
    *(long *)PTR_DAT_04379608 = lVar5;
    if ((((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x80), lVar5 == 0)) ||
        ((uint)*(ushort *)(lVar5 + 2) <= (param_1 & 0xffff))) ||
       (uVar1 = *(ushort *)(lVar5 + (ulong)(param_1 & 0xffff) * 2 + 0x4c),
       *(ushort *)(lVar5 + 4) <= uVar1)) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    local_20 = lVar5 + (ulong)*(uint *)(lVar5 + 0x48) + (ulong)uVar1 * 0x3c;
    local_18 = param_1;
    uVar3 = FUN_02c4fc60(&local_20,uVar4);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


