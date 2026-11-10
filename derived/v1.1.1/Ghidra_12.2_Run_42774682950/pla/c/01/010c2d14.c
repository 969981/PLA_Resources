/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c2d14; name: FUN_010c2d14
 */


void FUN_010c2d14(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_78 [24];
  
  puVar2 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar3 = PTR_DAT_04379528;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) {
    plVar9 = (long *)0x0;
  }
  else {
    plVar9 = *(long **)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_041f02a8;
  param_1[1] = (long)plVar9;
  param_1[9] = (long)&PTR_LAB_041f02e0;
  param_1[0xe] = 0;
  plVar11 = param_1 + 0xb;
  *plVar11 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x38,8);
  if (puVar6 == (undefined8 *)0x0) {
    plVar9 = (long *)0x0;
    lVar13 = 0;
    lVar5 = 0;
  }
  else {
    if (((*puVar2 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar4 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar9;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    FUN_00220484(puVar6);
    *(undefined1 *)(puVar6 + 4) = 0;
    *puVar6 = &PTR_LAB_041f0220;
    puVar6[1] = 0xff000000ff000000;
    lVar5 = 8;
    lVar13 = 0x38;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined4 *)((long)puVar6 + 0x24) = 2;
    puVar6[5] = 0;
    puVar6[6] = 0;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  plVar10 = (long *)*plVar11;
  *plVar11 = (long)puVar6;
  if (plVar10 == (long *)0x0) goto LAB_010c2e48;
  FUN_02bcbe58(auStack_78,0);
  (**(code **)(*plVar10 + 8))(plVar10);
  plVar11 = (long *)param_1[0xc];
  lVar7 = param_1[0xd];
  lVar12 = param_1[0xe];
  uVar8 = (**(code **)(*plVar11 + 0xc0))(plVar11);
  lVar1 = tpidr_el0;
  if ((uVar8 & 1) == 0) {
LAB_010c2eec:
    (**(code **)(*plVar11 + 0x18))(plVar11,plVar10,lVar7,lVar12);
  }
  else {
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_010c2eec;
    FUN_02bcc824(plVar11,plVar10,lVar7,lVar12);
  }
  if (*(char *)(lVar1 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar1 + 0x38d488) = 1;
    *(undefined8 *)(lVar1 + 0x38d478) = 0;
    *(undefined8 *)(lVar1 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar1 + 0x38d480) + -1;
  *(int *)(lVar1 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar1 + 0x38d484) = 0;
  }
LAB_010c2e48:
  param_1[0xc] = (long)plVar9;
  param_1[0xd] = lVar13;
  param_1[0xe] = lVar5;
  return;
}


