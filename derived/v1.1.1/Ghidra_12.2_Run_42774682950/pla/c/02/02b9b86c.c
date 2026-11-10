/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9b86c; name: FUN_02b9b86c
 */


void FUN_02b9b86c(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_78 [24];
  
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x60,8);
  if (lVar5 == 0) {
    param_2 = (long *)0x0;
    lVar10 = 0;
    lVar9 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar9 = 8;
    lVar10 = 0x60;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
  }
  lVar6 = *param_1;
  *param_1 = lVar5;
  if (lVar6 == 0) goto LAB_02b9ba24;
  FUN_02bcbe58(auStack_78,0);
  plVar1 = (long *)param_1[1];
  lVar5 = param_1[2];
  lVar8 = param_1[3];
  uVar7 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar2 = tpidr_el0;
  if ((uVar7 & 1) == 0) {
LAB_02b9b980:
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,lVar5,lVar8);
  }
  else {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02b9b980;
    FUN_02bcc824(plVar1,lVar6,lVar5,lVar8);
  }
  if (*(char *)(lVar2 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar2 + 0x38d488) = 1;
    *(undefined8 *)(lVar2 + 0x38d478) = 0;
    *(undefined8 *)(lVar2 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar2 + 0x38d480) + -1;
  *(int *)(lVar2 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar2 + 0x38d484) = 0;
  }
  lVar5 = *param_1;
LAB_02b9ba24:
  param_1[1] = (long)param_2;
  param_1[2] = lVar10;
  param_1[3] = lVar9;
  (*DAT_043f0838)(lVar5,param_3);
  param_1[4] = *param_4;
  lVar5 = param_4[1];
  lVar9 = param_4[2];
  lVar10 = param_4[4];
  param_1[7] = param_4[3];
  param_1[8] = lVar10;
  param_1[5] = lVar5;
  param_1[6] = lVar9;
  lVar10 = param_4[7];
  lVar5 = param_4[5];
  lVar9 = param_4[6];
  *(undefined8 *)((long)param_1 + 0x5d) = *(undefined8 *)((long)param_4 + 0x3d);
  param_1[10] = lVar9;
  param_1[0xb] = lVar10;
  param_1[9] = lVar5;
  return;
}


