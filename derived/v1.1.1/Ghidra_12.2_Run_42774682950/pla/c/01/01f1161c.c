/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f1161c; name: FUN_01f1161c
 */


void FUN_01f1161c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *local_68;
  
  *param_1 = (long)&PTR_FUN_04259e58;
  param_1[9] = (long)&PTR_LAB_04259ea8;
  param_1[10] = (long)&PTR_FUN_04259ef0;
  if (param_1[0xd] == 0) {
    local_68 = (long *)0x0;
  }
  else {
    FUN_019bf828(&local_68);
    if ((local_68 != (long *)0x0) && (FUN_01f0b488(), local_68 != (long *)0x0)) {
      lVar10 = local_68[0xb];
      piVar3 = (int *)(lVar10 + 0xc);
      do {
        iVar6 = *piVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  puVar11 = (undefined8 *)param_1[0x15];
  param_1[0x15] = 0;
  if (puVar11 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = (long *)*puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  param_1[0x16] = 0;
  puVar11 = (undefined8 *)param_1[0x13];
  param_1[0x13] = 0;
  if (puVar11 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = (long *)*puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  param_1[0x14] = 0;
  puVar11 = (undefined8 *)param_1[0x11];
  param_1[0x11] = 0;
  if (puVar11 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = (long *)*puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  param_1[0x12] = 0;
  puVar11 = (undefined8 *)param_1[0xf];
  param_1[0xf] = 0;
  if (puVar11 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = (long *)*puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  param_1[0x10] = 0;
  puVar11 = (undefined8 *)param_1[0xd];
  param_1[0xd] = 0;
  if (puVar11 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = (long *)*puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  param_1[0xe] = 0;
  FUN_00937d80(param_1 + 0xbccb);
  FUN_00937d80();
  FUN_00937d80();
  plVar9 = param_1 + 0x2010f;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x1f50a;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x1e905;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x1dd00;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x1d0fb;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x1c4f6;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x1b8f1;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  if ((long *)param_1[0x1aceb] != (long *)0x0) {
    lVar10 = tpidr_el0;
    plVar9 = (long *)param_1[0x1aceb];
    do {
      while( true ) {
        plVar7 = (long *)*plVar9;
        if ((long *)plVar9[5] != (long *)0x0) {
          (**(code **)(*(long *)plVar9[5] + 0x20))();
        }
        plVar12 = (long *)param_1[0x1acec];
        uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
        if ((uVar8 & 1) != 0) break;
LAB_01f11b9c:
        (**(code **)(*plVar12 + 0x18))(plVar12,plVar9,0x38,8);
        plVar9 = plVar7;
        if (plVar7 == (long *)0x0) goto LAB_01f11bc0;
      }
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_01f11b9c;
      FUN_02bcc824(plVar12,plVar9,0x38,8);
      plVar9 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
LAB_01f11bc0:
  lVar10 = param_1[0x1ace5];
  param_1[0x1ace5] = 0;
  if (lVar10 != 0) {
    FUN_01f22afc(param_1 + 0x1ace6);
  }
  plVar9 = param_1 + 0x1ace5;
  plVar7 = param_1 + 0x1ace0;
  do {
    lVar10 = -0x6000;
    plVar12 = (long *)*plVar7;
    plVar13 = plVar7;
    while( true ) {
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      if ((long *)plVar13[-4] != (long *)0x0) {
        (**(code **)(*(long *)plVar13[-4] + 0x20))();
      }
      plVar13 = plVar13 + -0xc;
      lVar10 = lVar10 + 0x60;
      if (lVar10 == 0) break;
      plVar12 = (long *)*plVar13;
    }
    plVar9 = plVar9 + -0xc01;
    plVar7 = plVar7 + -0xc01;
  } while (plVar9 != param_1 + 0xbcd1);
  FUN_00936104(param_1 + 0xbccb);
  plVar9 = param_1 + 0xbcc3;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0xb0c2;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0xa4c1;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x98c0;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x8cbf;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x80be;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x74bd;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x68bc;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x5cbb;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  FUN_00936104(param_1 + 0x50b9);
  FUN_01f1282c(param_1 + 0x4f7f);
  FUN_01f1282c(param_1 + 0x4e47);
  FUN_01f1282c(param_1 + 0x4d0f);
  FUN_01f1282c(param_1 + 0x4bd7);
  FUN_01f1282c(param_1 + 0x4a9f);
  FUN_01f1282c(param_1 + 0x4967);
  FUN_01f1282c(param_1 + 0x482f);
  plVar9 = param_1 + 0x482a;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x3c29;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x3028;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x2427;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  plVar9 = param_1 + 0x1826;
  lVar10 = -0x6000;
  plVar7 = (long *)*plVar9;
  while( true ) {
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if ((long *)plVar9[-4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[-4] + 0x20))();
    }
    plVar9 = plVar9 + -0xc;
    lVar10 = lVar10 + 0x60;
    if (lVar10 == 0) break;
    plVar7 = (long *)*plVar9;
  }
  FUN_00936104(param_1 + 0xc24);
  lVar10 = 0x6000;
  do {
    plVar9 = *(long **)((long)param_1 + lVar10 + 0xf0);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
    plVar9 = *(long **)((long)param_1 + lVar10 + 0xd0);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
    lVar10 = lVar10 + -0x60;
  } while (lVar10 != 0);
  puVar11 = (undefined8 *)param_1[0x17];
  if (puVar11 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = (long *)*puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  puVar11 = (undefined8 *)param_1[0x15];
  if (puVar11 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = (long *)*puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  puVar11 = (undefined8 *)param_1[0x13];
  if (puVar11 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = (long *)*puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  puVar11 = (undefined8 *)param_1[0x11];
  if (puVar11 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = (long *)*puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  puVar11 = (undefined8 *)param_1[0xf];
  if (puVar11 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = (long *)*puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  puVar11 = (undefined8 *)param_1[0xd];
  if (puVar11 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = (long *)*puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  puVar1 = PTR_DAT_04379610 + 0x58;
  puVar2 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  puVar11 = (undefined8 *)param_1[0xb];
  if (puVar11 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = (long *)*puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  return;
}


