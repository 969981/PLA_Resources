/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02599418; name: FUN_02599418
 */


void FUN_02599418(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 < 9) {
    lVar2 = *(long *)(&DAT_03a7d6d8 + (long)(int)param_2 * 8);
  }
  else {
    lVar2 = 0;
  }
  if ((&DAT_03a7d6cc)[lVar2] == '\0') {
    param_2 = 0;
  }
  else {
    if (5 < param_2 - 3) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if ((*PTR_DAT_0437a780 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_0437a780);
      if (iVar1 != 0) {
        FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a780);
      }
    }
    lVar2 = *(long *)PTR_DAT_0437a788;
    *(long *)PTR_DAT_0437a790 = lVar2;
    FUN_02c90b20(*(undefined8 *)(param_1 + 0xa8),
                 *(long *)(lVar2 + 0x78) + (ulong)(param_2 - 3) * 0x30 + 0x308);
    FUN_02c90b50(*(undefined8 *)(param_1 + 0xa8),1);
  }
  *(uint *)(param_1 + 0xc4) = param_2;
  return;
}


