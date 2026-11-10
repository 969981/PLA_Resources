/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b6fb00; name: FUN_01b6fb00
 */


void FUN_01b6fb00(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 local_78 [3];
  
  plVar13 = (long *)param_1[0xcc];
  *param_1 = &PTR_FUN_042418c8;
  param_1[9] = &PTR_LAB_04241a10;
  param_1[10] = &PTR_LAB_04241af0;
  param_1[0x3e] = &PTR_LAB_04241b18;
  param_1[0x41] = &PTR_LAB_04241bb8;
  param_1[0xcc] = 0;
  if (plVar13 != (long *)0x0) {
    FUN_02bcbe58(local_78,0);
    (**(code **)(*plVar13 + 0x58))(plVar13);
    plVar17 = (long *)param_1[0xcd];
    uVar10 = param_1[0xce];
    uVar16 = param_1[0xcf];
    uVar9 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    lVar8 = tpidr_el0;
    if ((uVar9 & 1) == 0) {
LAB_01b6fe20:
      (**(code **)(*plVar17 + 0x18))(plVar17,plVar13,uVar10,uVar16);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_01b6fe20;
      FUN_02bcc824(plVar17,plVar13,uVar10,uVar16);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar8 + 0x38d484) = 0;
    }
  }
  plVar13 = (long *)param_1[200];
  param_1[200] = 0;
  if (plVar13 == (long *)0x0) {
LAB_01b6fb64:
    puVar14 = (undefined8 *)param_1[0xc1];
  }
  else {
    FUN_02bcbe58(local_78,0);
    (**(code **)(*plVar13 + 0x58))(plVar13);
    plVar17 = (long *)param_1[0xc9];
    uVar10 = param_1[0xca];
    uVar16 = param_1[0xcb];
    uVar9 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar9 & 1) == 0) {
LAB_01b6ff40:
      (**(code **)(*plVar17 + 0x18))(plVar17,plVar13,uVar10,uVar16);
    }
    else {
      lVar8 = tpidr_el0;
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_01b6ff40;
      FUN_02bcc824(plVar17,plVar13,uVar10,uVar16);
    }
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar7;
    if (iVar7 != 0) goto LAB_01b6fb64;
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
    puVar14 = (undefined8 *)param_1[0xc1];
  }
  if (puVar14 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar14 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar14[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_78[0] = *puVar14;
      FUN_02a44274(lVar8 + 0xd8,local_78);
    }
  }
  plVar13 = (long *)param_1[0xb8];
  if (plVar13 == (long *)0x0) {
LAB_01b6fbe4:
    puVar14 = (undefined8 *)param_1[0xb6];
  }
  else {
    plVar17 = plVar13 + 10;
    do {
      iVar7 = (int)*plVar17 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 != 0) goto LAB_01b6fbe4;
    (**(code **)(*plVar13 + 0x10))();
    puVar14 = (undefined8 *)param_1[0xb6];
  }
  if (puVar14 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar14 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar14[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_78[0] = *puVar14;
      FUN_02a44274(lVar8 + 0xd8,local_78);
    }
  }
  if ((long *)param_1[0x9f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x9f] + 0x20))();
  }
  if ((long *)param_1[0x9b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x9b] + 0x20))();
  }
  if ((long *)param_1[0x97] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x97] + 0x20))();
  }
  if ((long *)param_1[0x93] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x93] + 0x20))();
  }
  if ((long *)param_1[0x8f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8f] + 0x20))();
  }
  if ((long *)param_1[0x8b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8b] + 0x20))();
  }
  FUN_01b708bc(param_1 + 0x52);
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  puVar14 = (undefined8 *)param_1[0x44];
  puVar15 = (undefined8 *)param_1[0x45];
  if (puVar15 != puVar14) {
    uVar9 = param_1[0x4b];
    plVar13 = (long *)((long)puVar14 + (uVar9 >> 1 & 0x7ffffffffffffff8));
    lVar8 = *plVar13 + (uVar9 & 0xf) * 0x140;
    lVar12 = *(long *)((long)puVar14 + (param_1[0x4c] + uVar9 >> 1 & 0x7ffffffffffffff8)) +
             (param_1[0x4c] + uVar9 & 0xf) * 0x140;
    if (lVar12 != lVar8) {
      do {
        if (*(long **)(lVar8 + 0x130) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + 0x130) + 0x20))();
        }
        puVar14 = *(undefined8 **)(lVar8 + 0x108);
        if (puVar14 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar14 + 1);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            puVar14[2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar4);
            }
            lVar11 = *(long *)puVar5;
            *(long *)puVar6 = lVar11;
            local_78[0] = *puVar14;
            FUN_02a44274(lVar11 + 0xd8,local_78);
          }
        }
        puVar14 = *(undefined8 **)(lVar8 + 0xf8);
        if (puVar14 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar14 + 1);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            puVar14[2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar4);
            }
            lVar11 = *(long *)puVar5;
            *(long *)puVar6 = lVar11;
            local_78[0] = *puVar14;
            FUN_02a44274(lVar11 + 0xd8,local_78);
          }
        }
        if (*(long **)(lVar8 + 0xa0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + 0xa0) + 0x20))();
        }
        puVar14 = *(undefined8 **)(lVar8 + 0x78);
        if (puVar14 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar14 + 1);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            puVar14[2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar4);
            }
            lVar11 = *(long *)puVar5;
            *(long *)puVar6 = lVar11;
            local_78[0] = *puVar14;
            FUN_02a44274(lVar11 + 0xd8,local_78);
          }
        }
        puVar14 = *(undefined8 **)(lVar8 + 0x68);
        if (puVar14 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar14 + 1);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            puVar14[2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar4);
            }
            lVar11 = *(long *)puVar5;
            *(long *)puVar6 = lVar11;
            local_78[0] = *puVar14;
            FUN_02a44274(lVar11 + 0xd8,local_78);
          }
        }
        lVar8 = lVar8 + 0x140;
        if (lVar8 - *plVar13 == 0x1400) {
          plVar13 = plVar13 + 1;
          lVar8 = *plVar13;
        }
      } while (lVar12 != lVar8);
      puVar15 = (undefined8 *)param_1[0x45];
      puVar14 = (undefined8 *)param_1[0x44];
    }
  }
  uVar9 = (long)puVar15 - (long)puVar14 >> 3;
  param_1[0x4c] = 0;
  if (2 < uVar9) {
    lVar8 = tpidr_el0;
    do {
      plVar13 = (long *)param_1[0x4d];
      uVar10 = *puVar14;
      uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar9 & 1) == 0) {
LAB_01b7055c:
        (**(code **)(*plVar13 + 0x18))(plVar13,uVar10,0x1400,0x10);
      }
      else {
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_01b7055c;
        FUN_02bcc824(plVar13,uVar10,0x1400,0x10);
      }
      puVar14 = (undefined8 *)(param_1[0x44] + 8);
      puVar15 = (undefined8 *)param_1[0x45];
      uVar9 = (long)puVar15 - (long)puVar14 >> 3;
      param_1[0x44] = puVar14;
    } while (2 < uVar9);
  }
  if (uVar9 == 1) {
    uVar10 = 8;
LAB_01b6fcf8:
    param_1[0x4b] = uVar10;
  }
  else if (uVar9 == 2) {
    uVar10 = 0x10;
    goto LAB_01b6fcf8;
  }
  if (puVar14 == puVar15) {
LAB_01b6fd04:
    lVar8 = param_1[0x43];
  }
  else {
    lVar8 = tpidr_el0;
    do {
      plVar13 = (long *)param_1[0x4d];
      uVar10 = *puVar14;
      uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar9 & 1) == 0) {
LAB_01b70238:
        (**(code **)(*plVar13 + 0x18))(plVar13,uVar10,0x1400,0x10);
      }
      else {
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_01b70238;
        FUN_02bcc824(plVar13,uVar10,0x1400,0x10);
      }
      puVar14 = puVar14 + 1;
    } while (puVar15 != puVar14);
    lVar8 = param_1[0x45] - param_1[0x44];
    if (lVar8 == 0) goto LAB_01b6fd04;
    param_1[0x45] = param_1[0x45] + (lVar8 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    lVar8 = param_1[0x43];
  }
  if (lVar8 != 0) {
    lVar12 = param_1[0x46];
    plVar13 = (long *)param_1[0x47];
    uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar9 & 1) != 0) {
      lVar11 = tpidr_el0;
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar11 + 0x38d480)) {
        FUN_02bcc824(plVar13,lVar8,lVar12 - lVar8,0x10);
        goto LAB_01b6fd0c;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar8,lVar12 - lVar8,0x10);
  }
LAB_01b6fd0c:
  puVar14 = (undefined8 *)param_1[0x3f];
  param_1[0x3e] = &PTR_FUN_04255188;
  if (puVar14 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar14 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar14[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_78[0] = *puVar14;
      FUN_02a44274(lVar8 + 0xd8,local_78);
    }
  }
  FUN_02a4c4ec(param_1);
  return;
}


