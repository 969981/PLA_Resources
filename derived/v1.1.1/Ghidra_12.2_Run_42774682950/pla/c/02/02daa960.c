/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02daa960; name: FUN_02daa960
 */


void FUN_02daa960(long *param_1,size_t param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  void *__s;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  size_t sVar10;
  undefined1 auStack_78 [24];
  
  __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,param_2,1);
  if (__s == (void *)0x0) {
    param_1 = (long *)0x0;
    sVar10 = 0;
    uVar9 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar5 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_1;
    lVar8 = *(long *)(lVar6 + 0x80) + 1;
    *(long *)(lVar6 + 0x80) = lVar8;
    if (param_2 != 0) {
      memset(__s,0,param_2);
      lVar8 = *(long *)(lVar6 + 0x80);
    }
    uVar9 = 1;
    *(long *)(lVar6 + 0x80) = lVar8 + -1;
    sVar10 = param_2;
  }
  lVar6 = (long)DAT_04408e40;
  if (DAT_04408e40 == (void *)0x0) {
    DAT_04408e40 = __s;
    DAT_04408e48 = param_1;
    DAT_04408e50 = sVar10;
    DAT_04408e58 = uVar9;
    DAT_04408e60 = param_2;
    return;
  }
  DAT_04408e40 = __s;
  FUN_02bcbe58(auStack_78,0);
  uVar4 = DAT_04408e58;
  uVar3 = DAT_04408e50;
  plVar2 = DAT_04408e48;
  uVar7 = (**(code **)(*DAT_04408e48 + 0xc0))(DAT_04408e48);
  lVar8 = tpidr_el0;
  if ((uVar7 & 1) != 0) {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar2,lVar6,uVar3,uVar4);
      goto LAB_02daaab8;
    }
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar6,uVar3,uVar4);
LAB_02daaab8:
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar5 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar5;
  if (iVar5 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
  DAT_04408e48 = param_1;
  DAT_04408e50 = sVar10;
  DAT_04408e58 = uVar9;
  DAT_04408e60 = param_2;
  return;
}


