/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02909918; name: FUN_02909918
 */


void FUN_02909918(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined1 auStack_78 [24];
  
  *param_1 = &PTR_FUN_04274fc8;
  param_1[9] = &PTR_LAB_042750f0;
  param_1[10] = &PTR_LAB_042751d0;
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar12 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar12;
  if (*(char *)(param_1 + 0x65) == '\0') {
    nn::os::LockMutex((MutexType *)(param_1 + 0x49));
    plVar10 = (long *)param_1[0x4d];
    plVar7 = (long *)param_1[0x4e];
    while (plVar7 != plVar10) {
      plVar7 = plVar7 + -1;
      if ((long *)*plVar7 != (long *)0x0) {
        (**(code **)(*(long *)*plVar7 + 0x20))();
      }
    }
    param_1[0x4e] = plVar10;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x49));
    nn::os::LockMutex((MutexType *)(param_1 + 0x3e));
    plVar7 = (long *)param_1[0x42];
    plVar10 = (long *)param_1[0x43];
    if (plVar7 != plVar10) {
      do {
        FUN_02916f80(*(undefined8 *)(lVar12 + 0x178),(int)plVar7[1]);
        plVar7 = plVar7 + 2;
      } while (plVar10 != plVar7);
      plVar7 = (long *)param_1[0x42];
      plVar10 = (long *)param_1[0x43];
      while (plVar10 != plVar7) {
        plVar10 = plVar10 + -2;
        if ((long *)*plVar10 != (long *)0x0) {
          (**(code **)(*(long *)*plVar10 + 0x20))();
        }
      }
    }
    param_1[0x43] = plVar7;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x3e));
    plVar7 = (long *)param_1[0x55];
  }
  else {
    FUN_0290a5c0(param_1);
    plVar7 = (long *)param_1[0x55];
  }
  if (plVar7 != (long *)0x0) {
    if (plVar7[0xb] == 0) {
      param_1[0x55] = 0;
    }
    else {
      if ((long *)plVar7[6] != (long *)0x0) {
        lVar5 = tpidr_el0;
        plVar10 = (long *)plVar7[6];
        do {
          while( true ) {
            plVar13 = (long *)*plVar10;
            if ((long *)plVar10[3] != (long *)0x0) {
              (**(code **)(*(long *)plVar10[3] + 0x20))();
            }
            if ((long *)plVar10[2] != (long *)0x0) {
              (**(code **)(*(long *)plVar10[2] + 0x20))();
            }
            plVar11 = (long *)plVar7[7];
            uVar2 = (**(code **)(*plVar11 + 0xc0))(plVar11);
            if ((uVar2 & 1) != 0) break;
LAB_02909a3c:
            (**(code **)(*plVar11 + 0x18))(plVar11,plVar10,0x20,8);
            plVar10 = plVar13;
            if (plVar13 == (long *)0x0) goto LAB_02909ad0;
          }
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02909a3c;
          FUN_02bcc824(plVar11,plVar10,0x20,8);
          plVar10 = plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_02909ad0:
      uVar2 = plVar7[1];
      plVar7[6] = 0;
      if (uVar2 != 0) {
        uVar3 = uVar2 & 3;
        if (uVar2 - 1 < 3) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          do {
            lVar6 = lVar5 * 8;
            lVar5 = lVar5 + 4;
            *(undefined8 *)(*plVar7 + lVar6) = 0;
            *(undefined8 *)(*plVar7 + lVar6 + 8) = 0;
            *(undefined8 *)(*plVar7 + lVar6 + 0x10) = 0;
            *(undefined8 *)(*plVar7 + lVar6 + 0x18) = 0;
          } while (uVar2 - uVar3 != lVar5);
        }
        if (uVar3 != 0) {
          lVar5 = lVar5 << 3;
          do {
            *(undefined8 *)(*plVar7 + lVar5) = 0;
            uVar3 = uVar3 - 1;
            lVar5 = lVar5 + 8;
          } while (uVar3 != 0);
        }
      }
      plVar7[0xb] = 0;
      plVar7 = (long *)param_1[0x55];
      param_1[0x55] = 0;
      if (plVar7 == (long *)0x0) goto LAB_02909c48;
    }
    FUN_0290db48(param_1 + 0x56,plVar7);
  }
LAB_02909c48:
  plVar7 = (long *)param_1[0x5d];
  if (plVar7 != (long *)0x0) {
    if (plVar7[0xb] == 0) {
      param_1[0x5d] = 0;
    }
    else {
      if ((long *)plVar7[6] != (long *)0x0) {
        lVar5 = tpidr_el0;
        plVar10 = (long *)plVar7[6];
        do {
          while( true ) {
            plVar13 = (long *)*plVar10;
            if ((long *)plVar10[2] != (long *)0x0) {
              (**(code **)(*(long *)plVar10[2] + 0x20))();
            }
            plVar11 = (long *)plVar7[7];
            uVar2 = (**(code **)(*plVar11 + 0xc0))(plVar11);
            if ((uVar2 & 1) != 0) break;
LAB_02909ce4:
            (**(code **)(*plVar11 + 0x18))(plVar11,plVar10,0x20,8);
            plVar10 = plVar13;
            if (plVar13 == (long *)0x0) goto LAB_02909d78;
          }
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02909ce4;
          FUN_02bcc824(plVar11,plVar10,0x20,8);
          plVar10 = plVar13;
        } while (plVar13 != (long *)0x0);
      }
LAB_02909d78:
      uVar2 = plVar7[1];
      plVar7[6] = 0;
      if (uVar2 != 0) {
        uVar3 = uVar2 & 3;
        if (uVar2 - 1 < 3) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          do {
            lVar6 = lVar5 * 8;
            lVar5 = lVar5 + 4;
            *(undefined8 *)(*plVar7 + lVar6) = 0;
            *(undefined8 *)(*plVar7 + lVar6 + 8) = 0;
            *(undefined8 *)(*plVar7 + lVar6 + 0x10) = 0;
            *(undefined8 *)(*plVar7 + lVar6 + 0x18) = 0;
          } while (uVar2 - uVar3 != lVar5);
        }
        if (uVar3 != 0) {
          lVar5 = lVar5 << 3;
          do {
            *(undefined8 *)(*plVar7 + lVar5) = 0;
            uVar3 = uVar3 - 1;
            lVar5 = lVar5 + 8;
          } while (uVar3 != 0);
        }
      }
      plVar7[0xb] = 0;
      plVar7 = (long *)param_1[0x5d];
      param_1[0x5d] = 0;
      if (plVar7 == (long *)0x0) goto LAB_02909f30;
    }
    FUN_02bcbe58(auStack_78,0);
    FUN_0290dfcc(plVar7);
    plVar10 = (long *)param_1[0x5e];
    uVar8 = param_1[0x5f];
    uVar9 = param_1[0x60];
    uVar2 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar2 & 1) == 0) {
LAB_02909e90:
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar7,uVar8,uVar9);
    }
    else {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02909e90;
      FUN_02bcc824(plVar10,plVar7,uVar8,uVar9);
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
LAB_02909f30:
  if (*(char *)((long)param_1 + 0x32b) != '\0') {
    plVar7 = *(long **)(*(long *)(lVar12 + 0x158) + 0x60);
    (**(code **)(*plVar7 + 0x58))(plVar7,param_1[0x86]);
  }
  pcVar4 = (code *)param_1[0x77];
  if (pcVar4 != (code *)0x0) {
    param_1[0x79] = 0;
    param_1[0x78] = 0;
    param_1[0x77] = 0;
    param_1[0x76] = 0;
    (*pcVar4)(param_1 + 0x7a);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x6c));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x66));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x61));
  lVar12 = param_1[0x5d];
  param_1[0x5d] = 0;
  if (lVar12 != 0) {
    FUN_02bcbe58(auStack_78,0);
    FUN_0290dfcc(lVar12);
    plVar7 = (long *)param_1[0x5e];
    uVar8 = param_1[0x5f];
    uVar9 = param_1[0x60];
    uVar2 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar2 & 1) == 0) {
LAB_0290a00c:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar12,uVar8,uVar9);
    }
    else {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_0290a00c;
      FUN_02bcc824(plVar7,lVar12,uVar8,uVar9);
    }
    lVar12 = tpidr_el0;
    if (*(char *)(lVar12 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar12 + 0x38d488) = 1;
      *(undefined8 *)(lVar12 + 0x38d478) = 0;
      *(undefined8 *)(lVar12 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar12 + 0x38d480) + -1;
    *(int *)(lVar12 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar12 + 0x38d484) = 0;
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x59));
  lVar12 = param_1[0x55];
  param_1[0x55] = 0;
  if (lVar12 != 0) {
    FUN_0290db48(param_1 + 0x56);
  }
  plVar7 = (long *)param_1[0x4d];
  if (plVar7 != (long *)0x0) {
    plVar10 = (long *)param_1[0x4e];
    if (plVar10 == plVar7) {
      plVar10 = plVar7;
    }
    else {
      do {
        plVar10 = plVar10 + -1;
        if ((long *)*plVar10 != (long *)0x0) {
          (**(code **)(*(long *)*plVar10 + 0x20))();
        }
      } while (plVar7 != plVar10);
      plVar10 = (long *)param_1[0x4d];
    }
    lVar12 = param_1[0x4f];
    param_1[0x4e] = plVar7;
    plVar7 = (long *)param_1[0x50];
    uVar2 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar2 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar7,plVar10,lVar12 - (long)plVar10,8);
        goto LAB_0290a18c;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar10,lVar12 - (long)plVar10,8);
  }
LAB_0290a18c:
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x49));
  plVar7 = (long *)param_1[0x42];
  if (plVar7 != (long *)0x0) {
    plVar10 = (long *)param_1[0x43];
    if (plVar10 == plVar7) {
      plVar10 = plVar7;
    }
    else {
      do {
        plVar10 = plVar10 + -2;
        if ((long *)*plVar10 != (long *)0x0) {
          (**(code **)(*(long *)*plVar10 + 0x20))();
        }
      } while (plVar7 != plVar10);
      plVar10 = (long *)param_1[0x42];
    }
    lVar12 = param_1[0x44];
    param_1[0x43] = plVar7;
    plVar7 = (long *)param_1[0x45];
    uVar2 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar2 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar7,plVar10,lVar12 - (long)plVar10,8);
        goto LAB_0290a258;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar10,lVar12 - (long)plVar10,8);
  }
LAB_0290a258:
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3e));
  FUN_02a4c4ec(param_1);
  return;
}


