/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e1418; name: FUN_010e1418
 */


void FUN_010e1418(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,long *param_6)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  void *__src;
  void *__src_00;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  
  if (0x1d < param_5) {
    return;
  }
  if (0x1d < param_3) {
    return;
  }
  if (0x1f < (param_4 | param_2)) {
    return;
  }
  __dest = (void *)(**(code **)(*param_6 + 0x10))(param_6,0x168,8);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  __src_00 = (void *)(param_1 + 0x68 + (ulong)param_2 * 0x2a30 + (ulong)param_3 * 0x168);
  __src = (void *)(param_1 + 0x68 + (ulong)param_4 * 0x2a30 + (ulong)param_5 * 0x168);
  memcpy(__dest,__src_00,0x168);
  memcpy(__src_00,__src,0x168);
  memcpy(__src,__dest,0x168);
  uVar2 = (**(code **)(*param_6 + 0xc0))(param_6);
  if ((uVar2 & 1) != 0) {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(param_6,__dest,0x168,8);
      goto LAB_010e154c;
    }
  }
  (**(code **)(*param_6 + 0x18))(param_6,__dest,0x168,8);
LAB_010e154c:
  local_70 = param_4;
  uStack_6c = param_5;
  local_68 = param_2;
  uStack_64 = param_3;
  FUN_010e1610(param_1 + 0x54670,&local_68,&local_70);
  return;
}


