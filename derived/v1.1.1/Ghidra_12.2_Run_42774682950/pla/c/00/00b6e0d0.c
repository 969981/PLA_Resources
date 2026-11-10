/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b6e0d0; name: FUN_00b6e0d0
 */


void FUN_00b6e0d0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_78 [24];
  
  plVar7 = *(long **)(param_1 + 0x158);
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar11 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  lVar12 = *(long *)(param_1 + 0x120);
  lVar6 = tpidr_el0;
  if (lVar12 != 0) {
    lVar9 = *(long *)(param_1 + 0x128);
    if (lVar9 == lVar12) {
      lVar9 = lVar12;
    }
    else {
      if (*(long **)(lVar9 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + -8) + 0x20))();
      }
      if (lVar9 + -0x20 != lVar12) {
        if (*(long **)(lVar9 + -0x28) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + -0x28) + 0x20))();
        }
        if (lVar9 + -0x40 != lVar12) {
          if (*(long **)(lVar9 + -0x48) != (long *)0x0) {
            (**(code **)(**(long **)(lVar9 + -0x48) + 0x20))();
          }
          if (lVar9 + -0x60 != lVar12) {
            plVar7 = *(long **)(lVar9 + -0x68);
            while( true ) {
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 0x20))();
              }
              if (lVar12 + 0x60 == lVar9 + -0x20) break;
              plVar7 = *(long **)(lVar9 + -0x88);
              lVar9 = lVar9 + -0x20;
            }
          }
        }
      }
      lVar9 = *(long *)(param_1 + 0x120);
    }
    plVar7 = *(long **)(param_1 + 0x138);
    *(long *)(param_1 + 0x128) = lVar12;
    lVar12 = *(long *)(param_1 + 0x130) - lVar9;
    uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar7,lVar9,lVar12,8);
        goto LAB_00b6e20c;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar12,8);
  }
LAB_00b6e20c:
  puVar10 = *(undefined8 **)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar10)(puVar10);
    plVar7 = *(long **)(param_1 + 0x108);
    uVar2 = *(undefined8 *)(param_1 + 0x110);
    uVar14 = *(undefined8 *)(param_1 + 0x118);
    uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar8 & 1) == 0) {
LAB_00b6e290:
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar10,uVar2,uVar14);
    }
    else {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00b6e290;
      FUN_02bcc824(plVar7,puVar10,uVar2,uVar14);
    }
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar6 + 0x38d480) + -1;
    *(int *)(lVar6 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar6 + 0x38d484) = 0;
    }
  }
  FUN_00b6ea58(param_1 + 0x98,*(undefined8 *)(param_1 + 200));
  lVar12 = *(long *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (lVar12 == 0) {
LAB_00b6e380:
    plVar7 = *(long **)(param_1 + 0x60);
  }
  else {
    plVar7 = *(long **)(param_1 + 0xa8);
    lVar9 = *(long *)(param_1 + 0xa0) << 3;
    uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar8 & 1) == 0) {
LAB_00b6e364:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar12,lVar9,8);
      goto LAB_00b6e380;
    }
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00b6e364;
    FUN_02bcc824(plVar7,lVar12,lVar9,8);
    plVar7 = *(long **)(param_1 + 0x60);
  }
  if (plVar7 != (long *)0x0) {
    if (*(long **)(param_1 + 0x68) == plVar7) {
      plVar11 = plVar7;
    }
    else {
      plVar11 = *(long **)(param_1 + 0x68);
      do {
        plVar13 = plVar11 + -4;
        lVar12 = *plVar13;
        *plVar13 = 0;
        if (lVar12 != 0) {
          FUN_02bcbe58(auStack_78,0);
          FUN_00936104(lVar12);
          plVar1 = (long *)plVar11[-3];
          lVar9 = plVar11[-2];
          lVar15 = plVar11[-1];
          uVar8 = (**(code **)(*plVar1 + 0xc0))(plVar1);
          if ((uVar8 & 1) == 0) {
LAB_00b6e6f0:
            (**(code **)(*plVar1 + 0x18))(plVar1,lVar12,lVar9,lVar15);
          }
          else {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00b6e6f0;
            FUN_02bcc824(plVar1,lVar12,lVar9,lVar15);
          }
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar5 = *(int *)(lVar6 + 0x38d480) + -1;
          *(int *)(lVar6 + 0x38d480) = iVar5;
          if (iVar5 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar6 + 0x38d484) = 0;
          }
        }
        plVar11 = plVar13;
      } while (plVar7 != plVar13);
      plVar11 = *(long **)(param_1 + 0x60);
    }
    plVar13 = *(long **)(param_1 + 0x78);
    *(long **)(param_1 + 0x68) = plVar7;
    lVar12 = *(long *)(param_1 + 0x70) - (long)plVar11;
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar13,plVar11,lVar12,8);
        goto LAB_00b6e388;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,plVar11,lVar12,8);
  }
LAB_00b6e388:
  FUN_00936104(param_1 + 0x30);
  FUN_00936104(param_1);
  return;
}


