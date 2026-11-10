/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028dfd0c; name: FUN_028dfd0c
 */


void FUN_028dfd0c(long *param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 local_68;
  
  lVar11 = param_1[0x68];
  if (lVar11 == 0) {
LAB_028dfdbc:
    puVar16 = (undefined8 *)param_1[0x60];
    if (puVar16 == (undefined8 *)0x0) goto LAB_028e00a8;
LAB_028dfdc4:
    puVar5 = PTR_DAT_043794a0;
    if ((undefined8 *)param_1[0x61] == puVar16) {
      puVar12 = puVar16;
    }
    else {
      lVar11 = tpidr_el0;
      puVar12 = (undefined8 *)param_1[0x61];
      do {
        puVar13 = puVar12 + -0x17;
        *puVar13 = &PTR_LAB_04274188;
        puVar15 = (undefined8 *)puVar12[-8];
        if (puVar15 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar15 + 1);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar15[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)puVar5;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_68 = *puVar15;
            FUN_02a44274(lVar10 + 0xd8,&local_68);
          }
        }
        puVar15 = (undefined8 *)puVar12[-0xc];
        if (puVar15 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar15 + 1);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar15[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)puVar5;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_68 = *puVar15;
            FUN_02a44274(lVar10 + 0xd8,&local_68);
          }
        }
        lVar10 = puVar12[-0x15];
        puVar12[-0x17] = &PTR_LAB_04274770;
        if (lVar10 != 0) {
          lVar2 = puVar12[-0x13];
          plVar14 = (long *)puVar12[-0x12];
          puVar12[-0x14] = lVar10;
          uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
          if ((uVar9 & 1) != 0) {
            if (*(char *)(lVar11 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar11 + 0x38d488) = 1;
              *(undefined8 *)(lVar11 + 0x38d478) = 0;
              *(undefined8 *)(lVar11 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar11 + 0x38d480)) {
              FUN_02bcc824(plVar14,lVar10,lVar2 - lVar10,8);
              goto LAB_028dfe10;
            }
          }
          (**(code **)(*plVar14 + 0x18))(plVar14,lVar10,lVar2 - lVar10,8);
        }
LAB_028dfe10:
        puVar12 = puVar13;
      } while (puVar13 != puVar16);
      puVar12 = (undefined8 *)param_1[0x60];
    }
    lVar11 = param_1[0x62];
    param_1[0x61] = (long)puVar16;
    plVar14 = (long *)param_1[99];
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) == 0) {
LAB_028e008c:
      (**(code **)(*plVar14 + 0x18))(plVar14,puVar12,lVar11 - (long)puVar12,8);
      goto LAB_028e00a8;
    }
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_028e008c;
    FUN_02bcc824(plVar14,puVar12,lVar11 - (long)puVar12,8);
    lVar11 = param_1[0x58];
    if (lVar11 != 0) goto LAB_028e00b0;
LAB_028e0134:
    puVar16 = (undefined8 *)param_1[0x50];
    if (puVar16 == (undefined8 *)0x0) goto LAB_028e0390;
LAB_028e013c:
    puVar5 = PTR_DAT_043794a0;
    if ((undefined8 *)param_1[0x51] == puVar16) {
      puVar12 = puVar16;
    }
    else {
      lVar11 = tpidr_el0;
      puVar12 = (undefined8 *)param_1[0x51];
      do {
        puVar13 = puVar12 + -0x12;
        *puVar13 = &PTR_LAB_04274608;
        puVar15 = (undefined8 *)puVar12[-8];
        if (puVar15 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar15 + 1);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar15[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)puVar5;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_68 = *puVar15;
            FUN_02a44274(lVar10 + 0xd8,&local_68);
          }
        }
        lVar10 = puVar12[-0x10];
        puVar12[-0x12] = &PTR_LAB_04274770;
        if (lVar10 != 0) {
          lVar2 = puVar12[-0xe];
          plVar14 = (long *)puVar12[-0xd];
          puVar12[-0xf] = lVar10;
          uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
          if ((uVar9 & 1) != 0) {
            if (*(char *)(lVar11 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar11 + 0x38d488) = 1;
              *(undefined8 *)(lVar11 + 0x38d478) = 0;
              *(undefined8 *)(lVar11 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar11 + 0x38d480)) {
              FUN_02bcc824(plVar14,lVar10,lVar2 - lVar10,8);
              goto LAB_028e0188;
            }
          }
          (**(code **)(*plVar14 + 0x18))(plVar14,lVar10,lVar2 - lVar10,8);
        }
LAB_028e0188:
        puVar12 = puVar13;
      } while (puVar13 != puVar16);
      puVar12 = (undefined8 *)param_1[0x50];
    }
    lVar11 = param_1[0x52];
    param_1[0x51] = (long)puVar16;
    plVar14 = (long *)param_1[0x53];
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) == 0) {
LAB_028e0374:
      (**(code **)(*plVar14 + 0x18))(plVar14,puVar12,lVar11 - (long)puVar12,8);
      goto LAB_028e0390;
    }
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_028e0374;
    FUN_02bcc824(plVar14,puVar12,lVar11 - (long)puVar12,8);
    puVar16 = (undefined8 *)param_1[0x48];
    if (puVar16 != (undefined8 *)0x0) goto LAB_028e0398;
LAB_028e044c:
    puVar16 = (undefined8 *)param_1[0x40];
    if (puVar16 == (undefined8 *)0x0) goto LAB_028e0508;
LAB_028e0454:
    puVar12 = (undefined8 *)param_1[0x41];
    if (puVar12 == puVar16) {
      puVar12 = puVar16;
    }
    else {
      do {
        puVar12 = puVar12 + -10;
        (**(code **)*puVar12)(puVar12);
      } while (puVar16 != puVar12);
      puVar12 = (undefined8 *)param_1[0x40];
    }
    lVar11 = param_1[0x42];
    param_1[0x41] = (long)puVar16;
    plVar14 = (long *)param_1[0x43];
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) == 0) {
LAB_028e04ec:
      (**(code **)(*plVar14 + 0x18))(plVar14,puVar12,lVar11 - (long)puVar12,8);
      goto LAB_028e0508;
    }
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_028e04ec;
    FUN_02bcc824(plVar14,puVar12,lVar11 - (long)puVar12,8);
    lVar11 = param_1[0x38];
    if (lVar11 != 0) goto LAB_028e0510;
LAB_028e0590:
    puVar16 = (undefined8 *)param_1[0x30];
    if (puVar16 == (undefined8 *)0x0) goto LAB_028e06fc;
LAB_028e0598:
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    if ((undefined8 *)param_1[0x31] == puVar16) {
      puVar12 = puVar16;
    }
    else {
      puVar12 = (undefined8 *)param_1[0x31];
      do {
        puVar15 = puVar12 + -0xc;
        *puVar15 = &PTR_LAB_04273f28;
        puVar13 = (undefined8 *)puVar12[-4];
        if (puVar13 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar13 + 1);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar13[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar11 = *(long *)puVar6;
            *(long *)puVar7 = lVar11;
            local_68 = *puVar13;
            FUN_02a44274(lVar11 + 0xd8,&local_68);
          }
        }
        if ((long *)puVar12[-5] != (long *)0x0) {
          (**(code **)(*(long *)puVar12[-5] + 0x20))();
        }
        puVar12 = puVar15;
      } while (puVar15 != puVar16);
      puVar12 = (undefined8 *)param_1[0x30];
    }
    lVar11 = param_1[0x32];
    plVar14 = (long *)param_1[0x33];
    param_1[0x31] = (long)puVar16;
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) == 0) {
LAB_028e06e0:
      (**(code **)(*plVar14 + 0x18))(plVar14,puVar12,lVar11 - (long)puVar12,8);
      goto LAB_028e06fc;
    }
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_028e06e0;
    FUN_02bcc824(plVar14,puVar12,lVar11 - (long)puVar12,8);
    lVar11 = param_1[0x28];
    if (lVar11 != 0) goto LAB_028e0704;
LAB_028e07c4:
    lVar11 = param_1[0x20];
    if (lVar11 == 0) goto LAB_028e084c;
LAB_028e07cc:
    lVar10 = param_1[0x22];
    plVar14 = (long *)param_1[0x23];
    param_1[0x21] = lVar11;
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) == 0) {
LAB_028e0830:
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar11,lVar10 - lVar11,8);
      goto LAB_028e084c;
    }
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_028e0830;
    FUN_02bcc824(plVar14,lVar11,lVar10 - lVar11,8);
    puVar16 = (undefined8 *)param_1[0x18];
    if (puVar16 != (undefined8 *)0x0) goto LAB_028e0854;
LAB_028e091c:
    lVar11 = param_1[0x10];
    if (lVar11 == 0) goto LAB_028e09a4;
LAB_028e0924:
    lVar10 = param_1[0x12];
    plVar14 = (long *)param_1[0x13];
    param_1[0x11] = lVar11;
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) == 0) {
LAB_028e0988:
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar11,lVar10 - lVar11,8);
      goto LAB_028e09a4;
    }
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_028e0988;
    FUN_02bcc824(plVar14,lVar11,lVar10 - lVar11,8);
    puVar16 = (undefined8 *)param_1[8];
  }
  else {
    lVar10 = param_1[0x6a];
    param_1[0x69] = lVar11;
    plVar14 = (long *)param_1[0x6b];
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) == 0) {
LAB_028dfda0:
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar11,lVar10 - lVar11,8);
      goto LAB_028dfdbc;
    }
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_028dfda0;
    FUN_02bcc824(plVar14,lVar11,lVar10 - lVar11,8);
    puVar16 = (undefined8 *)param_1[0x60];
    if (puVar16 != (undefined8 *)0x0) goto LAB_028dfdc4;
LAB_028e00a8:
    lVar11 = param_1[0x58];
    if (lVar11 == 0) goto LAB_028e0134;
LAB_028e00b0:
    lVar10 = param_1[0x5a];
    param_1[0x59] = lVar11;
    plVar14 = (long *)param_1[0x5b];
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) == 0) {
LAB_028e0118:
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar11,lVar10 - lVar11,8);
      goto LAB_028e0134;
    }
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_028e0118;
    FUN_02bcc824(plVar14,lVar11,lVar10 - lVar11,8);
    puVar16 = (undefined8 *)param_1[0x50];
    if (puVar16 != (undefined8 *)0x0) goto LAB_028e013c;
LAB_028e0390:
    puVar16 = (undefined8 *)param_1[0x48];
    if (puVar16 == (undefined8 *)0x0) goto LAB_028e044c;
LAB_028e0398:
    puVar12 = (undefined8 *)param_1[0x49];
    if (puVar12 == puVar16) {
      puVar12 = puVar16;
    }
    else {
      do {
        puVar12 = puVar12 + -0x1b;
        (**(code **)*puVar12)(puVar12);
      } while (puVar16 != puVar12);
      puVar12 = (undefined8 *)param_1[0x48];
    }
    lVar11 = param_1[0x4a];
    param_1[0x49] = (long)puVar16;
    plVar14 = (long *)param_1[0x4b];
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) == 0) {
LAB_028e0430:
      (**(code **)(*plVar14 + 0x18))(plVar14,puVar12,lVar11 - (long)puVar12,8);
      goto LAB_028e044c;
    }
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_028e0430;
    FUN_02bcc824(plVar14,puVar12,lVar11 - (long)puVar12,8);
    puVar16 = (undefined8 *)param_1[0x40];
    if (puVar16 != (undefined8 *)0x0) goto LAB_028e0454;
LAB_028e0508:
    lVar11 = param_1[0x38];
    if (lVar11 == 0) goto LAB_028e0590;
LAB_028e0510:
    lVar10 = param_1[0x3a];
    plVar14 = (long *)param_1[0x3b];
    param_1[0x39] = lVar11;
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) == 0) {
LAB_028e0574:
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar11,lVar10 - lVar11,8);
      goto LAB_028e0590;
    }
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_028e0574;
    FUN_02bcc824(plVar14,lVar11,lVar10 - lVar11,8);
    puVar16 = (undefined8 *)param_1[0x30];
    if (puVar16 != (undefined8 *)0x0) goto LAB_028e0598;
LAB_028e06fc:
    lVar11 = param_1[0x28];
    if (lVar11 == 0) goto LAB_028e07c4;
LAB_028e0704:
    lVar10 = param_1[0x29];
    if (lVar10 == lVar11) {
      lVar10 = lVar11;
    }
    else {
      do {
        plVar14 = (long *)(lVar10 + -8);
        lVar10 = lVar10 + -0x20;
        if ((long *)*plVar14 != (long *)0x0) {
          (**(code **)(*(long *)*plVar14 + 0x20))();
        }
      } while (lVar11 != lVar10);
      lVar10 = param_1[0x28];
    }
    lVar2 = param_1[0x2a];
    plVar14 = (long *)param_1[0x2b];
    param_1[0x29] = lVar11;
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) == 0) {
LAB_028e07a8:
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar10,lVar2 - lVar10,8);
      goto LAB_028e07c4;
    }
    lVar11 = tpidr_el0;
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_028e07a8;
    FUN_02bcc824(plVar14,lVar10,lVar2 - lVar10,8);
    lVar11 = param_1[0x20];
    if (lVar11 != 0) goto LAB_028e07cc;
LAB_028e084c:
    puVar16 = (undefined8 *)param_1[0x18];
    if (puVar16 == (undefined8 *)0x0) goto LAB_028e091c;
LAB_028e0854:
    puVar12 = (undefined8 *)param_1[0x19];
    if (puVar12 == puVar16) {
      puVar12 = puVar16;
    }
    else {
      do {
        puVar13 = puVar12 + -0xb;
        *puVar13 = &PTR_LAB_042740f0;
        if ((long *)puVar12[-6] != (long *)0x0) {
          (**(code **)(*(long *)puVar12[-6] + 0x20))();
        }
        puVar12 = puVar13;
      } while (puVar16 != puVar13);
      puVar12 = (undefined8 *)param_1[0x18];
    }
    lVar11 = param_1[0x1a];
    plVar14 = (long *)param_1[0x1b];
    param_1[0x19] = (long)puVar16;
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) == 0) {
LAB_028e0900:
      (**(code **)(*plVar14 + 0x18))(plVar14,puVar12,lVar11 - (long)puVar12,8);
      goto LAB_028e091c;
    }
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_028e0900;
    FUN_02bcc824(plVar14,puVar12,lVar11 - (long)puVar12,8);
    lVar11 = param_1[0x10];
    if (lVar11 != 0) goto LAB_028e0924;
LAB_028e09a4:
    puVar16 = (undefined8 *)param_1[8];
  }
  if (puVar16 != (undefined8 *)0x0) {
    if ((undefined8 *)param_1[9] == puVar16) {
      puVar12 = puVar16;
    }
    else {
      puVar12 = (undefined8 *)param_1[9];
      do {
        puVar13 = puVar12 + -0xe;
        *puVar13 = &PTR_LAB_04273f58;
        if ((long *)puVar12[-4] != (long *)0x0) {
          (**(code **)(*(long *)puVar12[-4] + 0x20))();
        }
        if ((long *)puVar12[-8] != (long *)0x0) {
          (**(code **)(*(long *)puVar12[-8] + 0x20))();
        }
        puVar12 = puVar13;
      } while (puVar16 != puVar13);
      puVar12 = (undefined8 *)param_1[8];
    }
    lVar11 = param_1[10];
    plVar14 = (long *)param_1[0xb];
    param_1[9] = (long)puVar16;
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) != 0) {
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar10 + 0x38d480)) {
        FUN_02bcc824(plVar14,puVar12,lVar11 - (long)puVar12,8);
        lVar11 = *param_1;
        goto joined_r0x028e0ccc;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,puVar12,lVar11 - (long)puVar12,8);
  }
  lVar11 = *param_1;
joined_r0x028e0ccc:
  if (lVar11 == 0) {
    return;
  }
  lVar10 = param_1[2];
  plVar14 = (long *)param_1[3];
  param_1[1] = lVar11;
  uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
  if ((uVar9 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar14,lVar11,lVar10 - lVar11,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x028e0b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar14 + 0x18))(plVar14,lVar11,lVar10 - lVar11,8);
  return;
}


