/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c1858; name: FUN_014c1858
 */


void FUN_014c1858(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_043c44a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c44a0), iVar1 != 0)) {
    DAT_043c4420 = 0x106b4c77219f5598;
    DAT_043c4428 = "anime_keep_scr_01";
    DAT_043c4440 = 0x106b4f77219f5ab1;
    DAT_043c4448 = "anime_keep_scr_02";
    DAT_043c4430 = 0x11;
    DAT_043c4438 = 0;
    DAT_043c4460 = 0x106b4e77219f58fe;
    DAT_043c4468 = "anime_keep_scr_03";
    DAT_043c4450 = 0x11;
    DAT_043c4458 = 0;
    DAT_043c4470 = 0x11;
    DAT_043c4478 = 0;
    DAT_043c4480 = 0x106b5177219f5e17;
    DAT_043c4488 = "anime_keep_scr_04";
    DAT_043c4490 = 0x11;
    DAT_043c4498 = 0;
    FUN_00100250(&LAB_014c0310,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c44a0);
    lVar2 = *(long *)(param_1 + 0x2c8);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x2c8);
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_0283b1e8(lVar2,&DAT_043c4420 + (long)*(int *)(param_1 + 0x5b8) * 4);
  return;
}


