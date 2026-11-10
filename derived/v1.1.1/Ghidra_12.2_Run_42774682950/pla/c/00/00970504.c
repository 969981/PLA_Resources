/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00970504; name: FUN_00970504
 */


void FUN_00970504(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 local_38;
  
  lVar12 = param_1[0x36];
  *param_1 = (long)&PTR_FUN_041c3528;
  param_1[9] = (long)&PTR_LAB_041c3578;
  param_1[10] = (long)&PTR_LAB_041c35c0;
  if (lVar12 == 0) {
    lVar12 = param_1[0x2e];
    if (lVar12 != 0) goto LAB_00970670;
LAB_00970544:
    lVar12 = param_1[0x26];
joined_r0x009706f4:
    if (lVar12 == 0) goto LAB_0097054c;
LAB_009706f8:
    lVar4 = param_1[0x28];
    plVar5 = (long *)param_1[0x29];
    param_1[0x27] = lVar12;
    uVar10 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar10 & 1) == 0) {
LAB_0097075c:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar12,lVar4 - lVar12,4);
      lVar12 = param_1[0x1e];
      goto joined_r0x0097077c;
    }
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0097075c;
    FUN_02bcc824(plVar5,lVar12,lVar4 - lVar12,4);
    lVar12 = param_1[0x1e];
    if (lVar12 == 0) goto LAB_00970554;
LAB_00970780:
    lVar4 = param_1[0x20];
    plVar5 = (long *)param_1[0x21];
    param_1[0x1f] = lVar12;
    uVar10 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar10 & 1) == 0) {
LAB_009707e4:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar12,lVar4 - lVar12,4);
      lVar12 = param_1[0x16];
      goto joined_r0x00970558;
    }
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_009707e4;
    FUN_02bcc824(plVar5,lVar12,lVar4 - lVar12,4);
    lVar12 = param_1[0x16];
    if (lVar12 == 0) goto LAB_0097055c;
LAB_00970808:
    lVar4 = param_1[0x18];
    plVar5 = (long *)param_1[0x19];
    param_1[0x17] = lVar12;
    uVar10 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar10 & 1) != 0) {
      lVar8 = tpidr_el0;
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar8 + 0x38d480)) {
        FUN_02bcc824(plVar5,lVar12,lVar4 - lVar12,4);
        lVar12 = param_1[0xe];
        goto joined_r0x009709d0;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar12,lVar4 - lVar12,4);
    lVar12 = param_1[0xe];
  }
  else {
    lVar4 = param_1[0x38];
    plVar5 = (long *)param_1[0x39];
    param_1[0x37] = lVar12;
    uVar10 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar10 & 1) == 0) {
LAB_0097064c:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar12,lVar4 - lVar12,4);
      lVar12 = param_1[0x2e];
    }
    else {
      lVar8 = tpidr_el0;
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0097064c;
      FUN_02bcc824(plVar5,lVar12,lVar4 - lVar12,4);
      lVar12 = param_1[0x2e];
    }
    if (lVar12 == 0) goto LAB_00970544;
LAB_00970670:
    lVar4 = param_1[0x30];
    plVar5 = (long *)param_1[0x31];
    param_1[0x2f] = lVar12;
    uVar10 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar10 & 1) == 0) {
LAB_009706d4:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar12,lVar4 - lVar12,4);
      lVar12 = param_1[0x26];
      goto joined_r0x009706f4;
    }
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_009706d4;
    FUN_02bcc824(plVar5,lVar12,lVar4 - lVar12,4);
    lVar12 = param_1[0x26];
    if (lVar12 != 0) goto LAB_009706f8;
LAB_0097054c:
    lVar12 = param_1[0x1e];
joined_r0x0097077c:
    if (lVar12 != 0) goto LAB_00970780;
LAB_00970554:
    lVar12 = param_1[0x16];
joined_r0x00970558:
    if (lVar12 != 0) goto LAB_00970808;
LAB_0097055c:
    lVar12 = param_1[0xe];
  }
joined_r0x009709d0:
  if (lVar12 != 0) {
    lVar4 = param_1[0x10];
    plVar5 = (long *)param_1[0x11];
    param_1[0xf] = lVar12;
    uVar10 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar10 & 1) != 0) {
      lVar8 = tpidr_el0;
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar8 + 0x38d480)) {
        FUN_02bcc824(plVar5,lVar12,lVar4 - lVar12,4);
        goto LAB_00970890;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar12,lVar4 - lVar12,4);
  }
LAB_00970890:
  puVar1 = PTR_DAT_04379610 + 0x58;
  puVar2 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  puVar11 = (undefined8 *)param_1[0xb];
  if (puVar11 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar11 + 1);
    do {
      iVar9 = *piVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_38 = *puVar11;
      FUN_02a44274(lVar12 + 0xd8,&local_38);
    }
  }
  return;
}


