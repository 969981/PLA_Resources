/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e16c0; name: FUN_010e16c0
 */


void FUN_010e16c0(long param_1,uint param_2,uint param_3,long *param_4)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  void *__src;
  void *__src_00;
  undefined1 auStack_d0 [128];
  
  if (0x1f < (param_3 | param_2)) {
    return;
  }
  __dest = (void *)(**(code **)(*param_4 + 0x10))(param_4,0x2a30,8);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  __src = (void *)(param_1 + 0x68 + (ulong)param_2 * 0x2a30);
  memcpy(__dest,__src,0x2a30);
  __src_00 = (void *)(param_1 + 0x68 + (ulong)param_3 * 0x2a30);
  memcpy(__src,__src_00,0x2a30);
  memcpy(__src_00,__dest,0x2a30);
  uVar2 = (**(code **)(*param_4 + 0xc0))(param_4);
  if ((uVar2 & 1) != 0) {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(param_4,__dest,0x2a30,8);
      goto LAB_010e17dc;
    }
  }
  (**(code **)(*param_4 + 0x18))(param_4,__dest,0x2a30,8);
LAB_010e17dc:
  param_1 = param_1 + 0x54670;
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  FUN_010e1610(param_1,auStack_d0 + 0xa8,auStack_d0 + 0x98);
  return;
}


