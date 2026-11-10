/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a7dde0; name: FUN_01a7dde0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01a7dde0(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined1 *local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  undefined1 auStack_d0 [104];
  long *local_68;
  
  *param_1 = &PTR_FUN_04239ab0;
  param_1[9] = &PTR_LAB_04239e88;
  param_1[10] = &PTR_LAB_04239f68;
  param_1[0x3e] = &PTR_LAB_04239f90;
  param_1[0x40] = &PTR_LAB_04239ff8;
  param_1[0x42] = &PTR_LAB_0423a050;
  param_1[0x43] = &PTR_LAB_0423a0b8;
  FUN_01839c8c(&local_68,param_1 + 0x15a);
  plVar9 = local_68;
  if (local_68 != (long *)0x0) {
    local_f0 = &LAB_01aa4da4;
    local_e8 = FUN_01aa4db0;
    local_e0 = FUN_01aa4db4;
    local_d8 = &LAB_01aa4db8;
    pcVar12 = (code *)local_68[0x31];
    plVar15 = local_68 + 0x30;
    if (pcVar12 == (code *)0x0) {
LAB_01a7dea0:
      (*local_e0)(auStack_d0,plVar9 + 0x34);
      plVar9[0x31] = (long)local_e8;
      plVar9[0x33] = (long)local_d8;
      plVar9[0x32] = (long)local_e0;
      *plVar15 = (long)local_f0;
    }
    else {
      local_68[0x32] = 0;
      local_68[0x33] = 0;
      *plVar15 = 0;
      local_68[0x31] = 0;
      (*pcVar12)(local_68 + 0x34);
      if (local_e0 != (code *)0x0) goto LAB_01a7dea0;
    }
    pcVar12 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (code *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar12)(auStack_d0);
    }
    plVar15 = local_68;
    plVar9 = local_68 + 0x40;
    local_f0 = &LAB_01aa4dbc;
    local_e8 = FUN_01aa4e04;
    local_e0 = FUN_01aa4e9c;
    local_d8 = &LAB_01aa4ea0;
    pcVar12 = (code *)local_68[0x41];
    if (pcVar12 == (code *)0x0) {
LAB_01a7df3c:
      (*local_e0)(auStack_d0,plVar15 + 0x44);
      plVar15[0x41] = (long)local_e8;
      plVar15[0x43] = (long)local_d8;
      plVar15[0x42] = (long)local_e0;
      *plVar9 = (long)local_f0;
    }
    else {
      local_68[0x42] = 0;
      local_68[0x43] = 0;
      *plVar9 = 0;
      local_68[0x41] = 0;
      (*pcVar12)(local_68 + 0x44);
      if (local_e0 != (code *)0x0) goto LAB_01a7df3c;
    }
    pcVar12 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (code *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar12)(auStack_d0);
    }
    if (local_68 != (long *)0x0) {
      lVar10 = local_68[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  puVar17 = (undefined8 *)param_1[0x170];
  puVar18 = (undefined8 *)param_1[0x171];
  if ((long)puVar18 - (long)puVar17 != 0) {
    uVar13 = param_1[0x177];
    lVar10 = puVar17[uVar13 / 0x55] + (uVar13 % 0x55) * 0x30;
    lVar14 = puVar17[(param_1[0x178] + uVar13) / 0x55] + ((param_1[0x178] + uVar13) % 0x55) * 0x30;
    if (lVar14 != lVar10) {
      plVar9 = puVar17 + uVar13 / 0x55;
      do {
        lVar10 = lVar10 + 0x30;
        if (lVar10 - *plVar9 == 0xff0) {
          plVar9 = plVar9 + 1;
          lVar10 = *plVar9;
        }
      } while (lVar14 != lVar10);
    }
  }
  uVar13 = (long)puVar18 - (long)puVar17 >> 3;
  param_1[0x178] = 0;
  if (2 < uVar13) {
    lVar10 = tpidr_el0;
    do {
      plVar9 = (long *)param_1[0x179];
      uVar11 = *puVar17;
      uVar13 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar13 & 1) == 0) {
LAB_01a7f024:
        (**(code **)(*plVar9 + 0x18))(plVar9,uVar11,0xff0,0x10);
      }
      else {
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_01a7f024;
        FUN_02bcc824(plVar9,uVar11,0xff0,0x10);
      }
      puVar17 = (undefined8 *)(param_1[0x170] + 8);
      puVar18 = (undefined8 *)param_1[0x171];
      uVar13 = (long)puVar18 - (long)puVar17 >> 3;
      param_1[0x170] = puVar17;
    } while (2 < uVar13);
  }
  if (uVar13 == 1) {
    uVar11 = 0x2a;
LAB_01a7e028:
    param_1[0x177] = uVar11;
  }
  else if (uVar13 == 2) {
    uVar11 = 0x55;
    goto LAB_01a7e028;
  }
  if (puVar17 == puVar18) {
LAB_01a7e034:
    lVar10 = param_1[0x16f];
    if (lVar10 != 0) goto LAB_01a7ea0c;
LAB_01a7e03c:
    plVar9 = (long *)param_1[0x16c];
    if (plVar9 != (long *)0x0) goto LAB_01a7e044;
LAB_01a7e060:
    pcVar12 = (code *)param_1[0x15d];
  }
  else {
    lVar10 = tpidr_el0;
    do {
      plVar9 = (long *)param_1[0x179];
      uVar11 = *puVar17;
      uVar13 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar13 & 1) == 0) {
LAB_01a7e9b8:
        (**(code **)(*plVar9 + 0x18))(plVar9,uVar11,0xff0,0x10);
      }
      else {
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_01a7e9b8;
        FUN_02bcc824(plVar9,uVar11,0xff0,0x10);
      }
      puVar17 = puVar17 + 1;
    } while (puVar18 != puVar17);
    lVar10 = param_1[0x171] - param_1[0x170];
    if (lVar10 == 0) goto LAB_01a7e034;
    param_1[0x171] = param_1[0x171] + (lVar10 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    lVar10 = param_1[0x16f];
    if (lVar10 == 0) goto LAB_01a7e03c;
LAB_01a7ea0c:
    lVar14 = param_1[0x172];
    plVar9 = (long *)param_1[0x173];
    uVar13 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar13 & 1) == 0) {
LAB_01a7ea70:
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,lVar14 - lVar10,0x10);
      plVar9 = (long *)param_1[0x16c];
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_01a7ea70;
      FUN_02bcc824(plVar9,lVar10,lVar14 - lVar10,0x10);
      plVar9 = (long *)param_1[0x16c];
    }
    if (plVar9 == (long *)0x0) goto LAB_01a7e060;
LAB_01a7e044:
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01a7e060;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))();
    pcVar12 = (code *)param_1[0x15d];
  }
  if (pcVar12 != (code *)0x0) {
    param_1[0x15f] = 0;
    param_1[0x15e] = 0;
    param_1[0x15d] = 0;
    param_1[0x15c] = 0;
    (*pcVar12)(param_1 + 0x160);
  }
  puVar17 = (undefined8 *)param_1[0x15a];
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_f0 = (undefined1 *)*puVar17;
      FUN_02a44274(lVar10 + 0xd8,&local_f0);
    }
  }
  plVar9 = (long *)param_1[0x159];
  if (plVar9 == (long *)0x0) {
LAB_01a7e104:
    plVar9 = (long *)param_1[0x158];
    if (plVar9 == (long *)0x0) goto LAB_01a7e128;
LAB_01a7e10c:
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01a7e128;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))();
    plVar9 = (long *)param_1[0x157];
    if (plVar9 != (long *)0x0) goto LAB_01a7e130;
LAB_01a7e14c:
    plVar9 = (long *)param_1[0x156];
    if (plVar9 == (long *)0x0) goto LAB_01a7e170;
LAB_01a7e154:
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01a7e170;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))();
    plVar9 = (long *)param_1[0x155];
    if (plVar9 != (long *)0x0) goto LAB_01a7e178;
LAB_01a7e194:
    lVar10 = param_1[0x14f];
  }
  else {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01a7e104;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))();
    plVar9 = (long *)param_1[0x158];
    if (plVar9 != (long *)0x0) goto LAB_01a7e10c;
LAB_01a7e128:
    plVar9 = (long *)param_1[0x157];
    if (plVar9 == (long *)0x0) goto LAB_01a7e14c;
LAB_01a7e130:
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01a7e14c;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))();
    plVar9 = (long *)param_1[0x156];
    if (plVar9 != (long *)0x0) goto LAB_01a7e154;
LAB_01a7e170:
    plVar9 = (long *)param_1[0x155];
    if (plVar9 == (long *)0x0) goto LAB_01a7e194;
LAB_01a7e178:
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01a7e194;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))();
    lVar10 = param_1[0x14f];
  }
  if (lVar10 != 0) {
    plVar9 = (long *)param_1[0x14e];
    lVar10 = param_1[0x14d];
    *(undefined8 *)(*plVar9 + 8) = *(undefined8 *)(lVar10 + 8);
    **(long **)(lVar10 + 8) = *plVar9;
    param_1[0x14f] = 0;
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    if (plVar9 != param_1 + 0x14d) {
      lVar10 = tpidr_el0;
      do {
        plVar15 = (long *)plVar9[1];
        puVar17 = (undefined8 *)plVar9[2];
        if (puVar17 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar17 + 1);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            puVar17[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar14 = *(long *)puVar6;
            *(long *)puVar7 = lVar14;
            local_f0 = (undefined1 *)*puVar17;
            FUN_02a44274(lVar14 + 0xd8,&local_f0);
          }
        }
        plVar19 = (long *)param_1[0x150];
        uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar13 & 1) == 0) {
LAB_01a7e288:
          (**(code **)(*plVar19 + 0x18))(plVar19,plVar9,0x20,8);
        }
        else {
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_01a7e288;
          FUN_02bcc824(plVar19,plVar9,0x20,8);
        }
        plVar9 = plVar15;
      } while (plVar15 != param_1 + 0x14d);
    }
  }
  if (*(char *)(param_1 + 0x146) == '\0') {
    plVar9 = (long *)param_1[0x142];
  }
  else {
    *(undefined1 *)(param_1 + 0x146) = 0;
    plVar9 = (long *)param_1[0x142];
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  plVar9 = (long *)param_1[0x13e];
  if (plVar9 == (long *)0x0) {
LAB_01a7e2f0:
    plVar9 = (long *)param_1[0x13d];
    if (plVar9 == (long *)0x0) goto LAB_01a7e314;
LAB_01a7e2f8:
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01a7e314;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))();
    plVar9 = (long *)param_1[0x13b];
    if (plVar9 != (long *)0x0) goto LAB_01a7e31c;
LAB_01a7e338:
    lVar10 = param_1[300];
  }
  else {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01a7e2f0;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))();
    plVar9 = (long *)param_1[0x13d];
    if (plVar9 != (long *)0x0) goto LAB_01a7e2f8;
LAB_01a7e314:
    plVar9 = (long *)param_1[0x13b];
    if (plVar9 == (long *)0x0) goto LAB_01a7e338;
LAB_01a7e31c:
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01a7e338;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))();
    lVar10 = param_1[300];
  }
  if (lVar10 == 0) goto LAB_01a7e340;
  plVar15 = (long *)param_1[299];
  plVar9 = param_1 + 0x12a;
  lVar10 = param_1[0x12a];
  *(undefined8 *)(*plVar15 + 8) = *(undefined8 *)(lVar10 + 8);
  **(long **)(lVar10 + 8) = *plVar15;
  param_1[300] = 0;
  if (plVar15 == plVar9) goto LAB_01a7e340;
  plVar16 = (long *)param_1[0x12d];
  plVar19 = (long *)plVar15[1];
  uVar13 = (**(code **)(*plVar16 + 0xc0))(plVar16);
  if ((uVar13 & 1) == 0) {
LAB_01a7ecd4:
    (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,0x30,0x10);
  }
  else {
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_01a7ecd4;
    FUN_02bcc824(plVar16,plVar15,0x30,0x10);
  }
  if (plVar19 == plVar9) goto LAB_01a7e340;
  plVar16 = (long *)param_1[0x12d];
  plVar15 = (long *)plVar19[1];
  uVar13 = (**(code **)(*plVar16 + 0xc0))(plVar16);
  if ((uVar13 & 1) == 0) {
LAB_01a7ed58:
    (**(code **)(*plVar16 + 0x18))(plVar16,plVar19,0x30,0x10);
  }
  else {
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_01a7ed58;
    FUN_02bcc824(plVar16,plVar19,0x30,0x10);
  }
  if (plVar15 != plVar9) {
    lVar10 = tpidr_el0;
    do {
      plVar19 = (long *)param_1[0x12d];
      plVar16 = (long *)plVar15[1];
      uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar13 & 1) == 0) {
LAB_01a7edf4:
        (**(code **)(*plVar19 + 0x18))(plVar19,plVar15,0x30,0x10);
      }
      else {
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_01a7edf4;
        FUN_02bcc824(plVar19,plVar15,0x30,0x10);
      }
      plVar15 = plVar16;
    } while (plVar16 != plVar9);
  }
LAB_01a7e340:
  if (*(char *)(param_1 + 0x126) == '\0') {
    pcVar12 = (code *)param_1[0xff];
  }
  else {
    *(undefined1 *)(param_1 + 0x126) = 0;
    pcVar12 = (code *)param_1[0xff];
  }
  if (pcVar12 != (code *)0x0) {
    param_1[0x101] = 0;
    param_1[0x100] = 0;
    param_1[0xff] = 0;
    param_1[0xfe] = 0;
    (*pcVar12)(param_1 + 0x102);
  }
  if (*(char *)(param_1 + 0xf4) == '\0') {
    cVar2 = *(char *)(param_1 + 0xf0);
  }
  else {
    *(undefined1 *)(param_1 + 0xf4) = 0;
    cVar2 = *(char *)(param_1 + 0xf0);
  }
  if (cVar2 == '\0') {
    cVar2 = *(char *)(param_1 + 0xdc);
  }
  else {
    *(undefined1 *)(param_1 + 0xf0) = 0;
    cVar2 = *(char *)(param_1 + 0xdc);
  }
  if (cVar2 == '\0') {
    cVar2 = *(char *)(param_1 + 0xd8);
  }
  else {
    *(undefined1 *)(param_1 + 0xdc) = 0;
    cVar2 = *(char *)(param_1 + 0xd8);
  }
  if (cVar2 == '\0') {
    cVar2 = *(char *)(param_1 + 0xd4);
  }
  else {
    *(undefined1 *)(param_1 + 0xd8) = 0;
    cVar2 = *(char *)(param_1 + 0xd4);
  }
  if (cVar2 == '\0') {
    puVar17 = (undefined8 *)param_1[0xcf];
  }
  else {
    *(undefined1 *)(param_1 + 0xd4) = 0;
    puVar17 = (undefined8 *)param_1[0xcf];
  }
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_f0 = (undefined1 *)*puVar17;
      FUN_02a44274(lVar10 + 0xd8,&local_f0);
    }
  }
  puVar17 = (undefined8 *)param_1[0xcd];
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_f0 = (undefined1 *)*puVar17;
      FUN_02a44274(lVar10 + 0xd8,&local_f0);
    }
  }
  puVar17 = (undefined8 *)param_1[0xcb];
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_f0 = (undefined1 *)*puVar17;
      FUN_02a44274(lVar10 + 0xd8,&local_f0);
    }
  }
  puVar17 = (undefined8 *)param_1[0xc9];
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_f0 = (undefined1 *)*puVar17;
      FUN_02a44274(lVar10 + 0xd8,&local_f0);
    }
  }
  puVar17 = (undefined8 *)param_1[199];
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_f0 = (undefined1 *)*puVar17;
      FUN_02a44274(lVar10 + 0xd8,&local_f0);
    }
  }
  puVar17 = (undefined8 *)param_1[0xc5];
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_f0 = (undefined1 *)*puVar17;
      FUN_02a44274(lVar10 + 0xd8,&local_f0);
    }
  }
  puVar17 = (undefined8 *)param_1[0xc3];
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_f0 = (undefined1 *)*puVar17;
      FUN_02a44274(lVar10 + 0xd8,&local_f0);
    }
  }
  puVar17 = (undefined8 *)param_1[0xc1];
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_f0 = (undefined1 *)*puVar17;
      FUN_02a44274(lVar10 + 0xd8,&local_f0);
    }
  }
  puVar17 = (undefined8 *)param_1[0xbf];
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_f0 = (undefined1 *)*puVar17;
      FUN_02a44274(lVar10 + 0xd8,&local_f0);
    }
  }
  puVar17 = (undefined8 *)param_1[0xbd];
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_f0 = (undefined1 *)*puVar17;
      FUN_02a44274(lVar10 + 0xd8,&local_f0);
    }
  }
  puVar17 = (undefined8 *)param_1[0xbb];
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_f0 = (undefined1 *)*puVar17;
      FUN_02a44274(lVar10 + 0xd8,&local_f0);
    }
  }
  puVar17 = (undefined8 *)param_1[0xb9];
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_f0 = (undefined1 *)*puVar17;
      FUN_02a44274(lVar10 + 0xd8,&local_f0);
    }
  }
  plVar9 = (long *)param_1[0xb8];
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  FUN_01a7f4b4(param_1 + 0x44);
  plVar9 = (long *)param_1[0x41];
  param_1[0x40] = &PTR_LAB_0423a110;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  plVar9 = (long *)param_1[0x3f];
  param_1[0x3e] = &PTR_LAB_0423a168;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  FUN_02a4c4ec(param_1);
  return;
}


