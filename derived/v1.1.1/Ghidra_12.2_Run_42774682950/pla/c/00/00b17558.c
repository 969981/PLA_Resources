/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b17558; name: FUN_00b17558
 */


void FUN_00b17558(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 local_38;
  
  plVar5 = *(long **)(param_1 + 0x1e8);
  if (plVar5 == (long *)0x0) {
LAB_00b17594:
    plVar5 = *(long **)(param_1 + 0x1c8);
  }
  else {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_00b17594;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = *(long **)(param_1 + 0x1c8);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  if (*(long **)(param_1 + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a8) + 0x20))();
  }
  if (*(long **)(param_1 + 0x198) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x198) + 0x20))();
  }
  if (*(long **)(param_1 + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x178) + 0x20))();
  }
  FUN_00b179d8(param_1 + 0x138);
  puVar9 = *(undefined8 **)(param_1 + 0x120);
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_38 = *puVar9;
      FUN_02a44274(lVar7 + 0xd8,&local_38);
    }
  }
  puVar9 = *(undefined8 **)(param_1 + 0x110);
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_38 = *puVar9;
      FUN_02a44274(lVar7 + 0xd8,&local_38);
    }
  }
  lVar7 = *(long *)(param_1 + 0xa8);
  if (lVar7 == 0) {
LAB_00b17770:
    lVar7 = *(long *)(param_1 + 0x70);
  }
  else {
    lVar8 = *(long *)(param_1 + 0xb0);
    if (lVar8 == lVar7) {
      lVar8 = lVar7;
    }
    else {
      do {
        plVar5 = (long *)(lVar8 + -0x50);
        lVar8 = lVar8 + -0x68;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
        }
      } while (lVar7 != lVar8);
      lVar8 = *(long *)(param_1 + 0xa8);
    }
    plVar5 = *(long **)(param_1 + 0xc0);
    *(long *)(param_1 + 0xb0) = lVar7;
    lVar7 = *(long *)(param_1 + 0xb8) - lVar8;
    uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar6 & 1) == 0) {
LAB_00b17754:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar7,8);
      goto LAB_00b17770;
    }
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00b17754;
    FUN_02bcc824(plVar5,lVar8,lVar7,8);
    lVar7 = *(long *)(param_1 + 0x70);
  }
  if (lVar7 != 0) {
    lVar10 = *(long *)(param_1 + 0x78);
    lVar8 = lVar7;
    if (lVar10 != lVar7) {
      do {
        if (*(long **)(lVar10 + -0x10) != (long *)0x0) {
          (**(code **)(**(long **)(lVar10 + -0x10) + 0x20))();
        }
        plVar5 = (long *)(lVar10 + -0x30);
        lVar10 = lVar10 + -0x30;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
        }
      } while (lVar7 != lVar10);
      lVar8 = *(long *)(param_1 + 0x70);
    }
    plVar5 = *(long **)(param_1 + 0x88);
    *(long *)(param_1 + 0x78) = lVar7;
    lVar7 = *(long *)(param_1 + 0x80) - lVar8;
    uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar10 + 0x38d480)) {
        FUN_02bcc824(plVar5,lVar8,lVar7,8);
        goto LAB_00b17844;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar7,8);
  }
LAB_00b17844:
  FUN_00b0ff04(param_1 + 0x38);
  FUN_00b0ff04(param_1);
  return;
}


