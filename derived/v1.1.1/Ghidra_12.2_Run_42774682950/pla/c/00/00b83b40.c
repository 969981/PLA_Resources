/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b83b40; name: FUN_00b83b40
 */


void FUN_00b83b40(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_78 [3];
  
  lVar7 = tpidr_el0;
  plVar12 = *(long **)(param_1 + 0x3e0);
joined_r0x00b83b6c:
  if (plVar12 != (long *)0x0) {
    do {
      plVar15 = (long *)*plVar12;
      FUN_00b743e8(plVar12 + 3);
      plVar14 = *(long **)(param_1 + 1000);
      uVar6 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar6 & 1) != 0) {
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar7 + 0x38d480)) goto LAB_00b83c18;
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar12,0x80,8);
      plVar12 = plVar15;
      if (plVar15 == (long *)0x0) break;
    } while( true );
  }
  lVar9 = *(long *)(param_1 + 0x3b0);
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  if (lVar9 != 0) {
    lVar11 = *(long *)(param_1 + 0x3b8) << 3;
    plVar12 = *(long **)(param_1 + 0x3c0);
    uVar6 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar6 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar12,lVar9,lVar11,8);
        plVar12 = *(long **)(param_1 + 0x378);
        goto joined_r0x00b84054;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,lVar11,8);
  }
  plVar12 = (long *)*(long *)(param_1 + 0x378);
joined_r0x00b83cc0:
  if (plVar12 != (long *)0x0) {
    do {
      plVar15 = (long *)*plVar12;
      FUN_00b74894(plVar12 + 3);
      plVar14 = *(long **)(param_1 + 0x380);
      uVar6 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar6 & 1) != 0) {
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar7 + 0x38d480)) goto LAB_00b83d6c;
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar12,0x80,8);
      plVar12 = plVar15;
joined_r0x00b84054:
      if (plVar12 == (long *)0x0) break;
    } while( true );
  }
  lVar9 = *(long *)(param_1 + 0x348);
  *(undefined8 *)(param_1 + 0x348) = 0;
  if (lVar9 == 0) {
LAB_00b83e10:
    lVar9 = *(long *)(param_1 + 0x310);
  }
  else {
    lVar11 = *(long *)(param_1 + 0x350) << 3;
    plVar12 = *(long **)(param_1 + 0x358);
    uVar6 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar6 & 1) == 0) {
LAB_00b83df4:
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,lVar11,8);
      goto LAB_00b83e10;
    }
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_00b83df4;
    FUN_02bcc824(plVar12,lVar9,lVar11,8);
    lVar9 = *(long *)(param_1 + 0x310);
  }
  if (lVar9 != 0) {
    FUN_00b74e00(param_1 + 0x310);
    lVar9 = *(long *)(param_1 + 0x310);
    lVar11 = *(long *)(param_1 + 800) - lVar9;
    plVar12 = *(long **)(param_1 + 0x328);
    uVar6 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar6 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar12,lVar9,lVar11,8);
        goto LAB_00b83e18;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,lVar11,8);
  }
LAB_00b83e18:
  FUN_00b847d8(param_1 + 0x2a8);
  FUN_00b847d8(param_1 + 0x240);
  FUN_00b847d8(param_1 + 0x1d8);
  if (*(long **)(param_1 + 0x1c8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1c8) + 0x20))();
  }
  lVar9 = *(long *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (lVar9 != 0) {
    FUN_02bcbe58(local_78,0);
    FUN_00936104(lVar9);
    plVar12 = *(long **)(param_1 + 0x1a0);
    uVar2 = *(undefined8 *)(param_1 + 0x1a8);
    uVar13 = *(undefined8 *)(param_1 + 0x1b0);
    uVar6 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar6 & 1) == 0) {
LAB_00b84224:
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,uVar2,uVar13);
    }
    else {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_00b84224;
      FUN_02bcc824(plVar12,lVar9,uVar2,uVar13);
    }
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar7 + 0x38d480) + -1;
    *(int *)(lVar7 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar7 + 0x38d484) = 0;
    }
  }
  FUN_00936104(param_1 + 0x168);
  puVar10 = *(undefined8 **)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = 0;
  if (puVar10 == (undefined8 *)0x0) {
LAB_00b83e64:
    plVar12 = *(long **)(param_1 + 0x140);
    if (plVar12 == (long *)0x0) goto LAB_00b83e88;
LAB_00b83e6c:
    lVar7 = plVar12[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00b83e88;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))();
    pcVar8 = *(code **)(param_1 + 200);
  }
  else {
    FUN_02bcbe58(local_78,0);
    (**(code **)*puVar10)(puVar10);
    plVar12 = *(long **)(param_1 + 0x150);
    uVar2 = *(undefined8 *)(param_1 + 0x158);
    uVar13 = *(undefined8 *)(param_1 + 0x160);
    uVar6 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar6 & 1) == 0) {
LAB_00b8446c:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar10,uVar2,uVar13);
    }
    else {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_00b8446c;
      FUN_02bcc824(plVar12,puVar10,uVar2,uVar13);
    }
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar7 + 0x38d480) + -1;
    *(int *)(lVar7 + 0x38d480) = iVar5;
    if (iVar5 != 0) goto LAB_00b83e64;
    FUN_02bcc320();
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar7 + 0x38d484) = 0;
    plVar12 = *(long **)(param_1 + 0x140);
    if (plVar12 != (long *)0x0) goto LAB_00b83e6c;
LAB_00b83e88:
    pcVar8 = *(code **)(param_1 + 200);
  }
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    (*pcVar8)(param_1 + 0xe0);
  }
  plVar12 = *(long **)(param_1 + 0x98);
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 10;
    do {
      iVar5 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar12 + 0x10))();
      puVar10 = *(undefined8 **)(param_1 + 0x80);
      goto joined_r0x00b83ec4;
    }
  }
  puVar10 = *(undefined8 **)(param_1 + 0x80);
joined_r0x00b83ec4:
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_78[0] = *puVar10;
      FUN_02a44274(lVar7 + 0xd8,local_78);
    }
  }
  puVar10 = *(undefined8 **)(param_1 + 0x70);
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_78[0] = *puVar10;
      FUN_02a44274(lVar7 + 0xd8,local_78);
    }
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_78[0] = *puVar10;
      FUN_02a44274(lVar7 + 0xd8,local_78);
    }
  }
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x20))();
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  }
  return;
LAB_00b83c18:
  FUN_02bcc824(plVar14,plVar12,0x80,8);
  plVar12 = plVar15;
  goto joined_r0x00b83b6c;
LAB_00b83d6c:
  FUN_02bcc824(plVar14,plVar12,0x80,8);
  plVar12 = plVar15;
  goto joined_r0x00b83cc0;
}


