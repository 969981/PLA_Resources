/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8f91c; name: FUN_02c8f91c
 */


void FUN_02c8f91c(long param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  if ((*PTR_DAT_0437b6f0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_0437b6f0);
    if (iVar2 != 0) {
      FUN_00100250(PTR_LAB_0437f8b0,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b6f0);
    }
  }
  lVar3 = *(long *)PTR_DAT_0437b6f8;
  *(long *)PTR_DAT_0437b700 = lVar3;
  lVar4 = 0;
  lVar1 = *(long *)(lVar3 + 0x468) - *(long *)(lVar3 + 0x460);
  if (lVar1 != 0) {
    uVar5 = 0;
    plVar6 = (long *)(*(long *)(lVar3 + 0x460) + 0x140);
    do {
      if (*plVar6 == *param_2) {
        lVar4 = lVar4 >> 0x20;
        goto LAB_02c8f9b8;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x100000000;
      plVar6 = plVar6 + 0x2f;
    } while (uVar5 < (ulong)((lVar1 >> 3) * 0x51b3bea3677d46cf));
    lVar4 = 0;
  }
LAB_02c8f9b8:
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x78) + lVar4 * 0x10) + 0x90) = param_3;
  return;
}


