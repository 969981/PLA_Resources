/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c30a88; name: FUN_02c30a88
 */


/* WARNING: Removing unreachable block (ram,0x02c30de4) */

void FUN_02c30a88(long *param_1,long *param_2,byte param_3,undefined1 param_4,long param_5,
                 undefined1 param_6)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *__s;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  size_t __n;
  long lVar15;
  long *plVar16;
  undefined1 auStack_78 [24];
  
  puVar7 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar7 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar7 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar8 = PTR_DAT_04379528;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if ((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) {
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = *(long **)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&DAT_04289ea0;
  param_1[1] = (long)plVar14;
  param_1[9] = (long)&PTR_LAB_04289f40;
  plVar16 = param_1 + 0xb;
  *plVar16 = 0;
  param_1[0x10] = param_5;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar10 = *param_2;
  param_1[0x11] = lVar10;
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar14 = (long *)param_1[1];
  }
  param_1[0x12] = 0x4000600000000;
  *(undefined1 *)((long)param_1 + 0xa4) = param_6;
  __n = ((ulong)param_3 + (ulong)param_3 * 4) * 0x20;
  *(byte *)(param_1 + 0x13) = param_3;
  *(undefined4 *)((long)param_1 + 0x99) = 0;
  *(undefined1 *)((long)param_1 + 0x9d) = param_4;
  *(undefined4 *)((long)param_1 + 0x9e) = 0;
  *(undefined2 *)((long)param_1 + 0xa2) = 0;
  *(undefined2 *)((long)param_1 + 0xa5) = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0xe2) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)((long)param_1 + 0xb7) = 0;
  *(undefined8 *)((long)param_1 + 0x10a) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  __s = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,__n,0x10);
  if (__s == (undefined8 *)0x0) {
    plVar14 = (long *)0x0;
    __n = 0;
    lVar10 = 0;
  }
  else {
    if (((*puVar7 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar9 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar14;
    lVar13 = *(long *)(lVar10 + 0x80) + 1;
    *(long *)(lVar10 + 0x80) = lVar13;
    if (param_3 != 0) {
      memset(__s,0,__n);
      lVar13 = *(long *)(lVar10 + 0x80);
    }
    *(long *)(lVar10 + 0x80) = lVar13 + -1;
    lVar10 = 0x10;
  }
  lVar13 = *plVar16;
  *plVar16 = (long)__s;
  if (lVar13 != 0) {
    FUN_02bcbe58(auStack_78,0);
    plVar2 = (long *)param_1[0xc];
    lVar3 = param_1[0xd];
    lVar15 = param_1[0xe];
    uVar12 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    lVar6 = tpidr_el0;
    if ((uVar12 & 1) == 0) {
LAB_02c30d00:
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar13,lVar3,lVar15);
    }
    else {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02c30d00;
      FUN_02bcc824(plVar2,lVar13,lVar3,lVar15);
    }
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar9 = *(int *)(lVar6 + 0x38d480) + -1;
    *(int *)(lVar6 + 0x38d480) = iVar9;
    if (iVar9 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar6 + 0x38d484) = 0;
    }
    __s = (undefined8 *)*plVar16;
  }
  param_1[0xc] = (long)plVar14;
  param_1[0xd] = __n;
  param_1[0xe] = lVar10;
  if (__s == (undefined8 *)0x0) {
    return;
  }
  if ((param_3 != 0) && (*__s = 0, param_3 != 1)) {
    if (param_3 == 2) {
      lVar10 = 1;
    }
    else {
      lVar10 = 1;
      lVar13 = 0x140;
      do {
        *(undefined8 *)(*plVar16 + lVar13 + -0xa0) = 0;
        lVar10 = lVar10 + 2;
        *(undefined8 *)(*plVar16 + lVar13) = 0;
        lVar13 = lVar13 + 0x140;
      } while ((ulong)param_3 - ((ulong)(param_3 - 1) & 1) != lVar10);
      if ((param_3 - 1 & 1) == 0) goto LAB_02c30e2c;
    }
    *(undefined8 *)(*plVar16 + lVar10 * 0xa0) = 0;
  }
LAB_02c30e2c:
  *(undefined1 *)((long)param_1 + 0xa5) = *(undefined1 *)((long)param_1 + 0x9d);
  *(undefined1 *)((long)param_1 + 0xa6) = *(undefined1 *)((long)param_1 + 0xa4);
  *(undefined1 *)(param_1 + 0x22) = 1;
  return;
}


