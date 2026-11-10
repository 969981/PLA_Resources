/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a52414; name: FUN_02a52414
 */


void FUN_02a52414(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *local_58;
  
  *param_1 = (long)&PTR_FUN_0427dc80;
  param_1[9] = (long)&PTR_LAB_0427dd38;
  param_1[10] = (long)&PTR_FUN_0427dd80;
  param_1[0x1d] = (long)&PTR_LAB_0427dda8;
  if (param_1[99] == 0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_00da9c7c(&local_58);
  }
  FUN_02a5b700(local_58,param_1);
  if (local_58 == (long *)0x0) {
LAB_02a5248c:
    puVar13 = (undefined8 *)param_1[99];
  }
  else {
    lVar10 = local_58[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 != 0) goto LAB_02a5248c;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*local_58 + 0x20))();
    puVar13 = (undefined8 *)param_1[99];
  }
  if (puVar13 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar13 + 1);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_58 = (long *)*puVar13;
      FUN_02a44274(lVar10 + 0xd8,&local_58);
    }
  }
  lVar10 = param_1[0x5b];
  if (lVar10 == 0) {
LAB_02a525bc:
    plVar16 = (long *)param_1[0x54];
    pbVar6 = PTR_DAT_04379498;
    plVar15 = (long *)PTR_DAT_043794a0;
    plVar7 = (long *)PTR_DAT_043794a8;
    puVar2 = PTR_LAB_04379590;
  }
  else {
    lVar14 = param_1[0x5c];
    if (param_1[0x5c] == lVar10) {
      lVar14 = lVar10;
    }
    else {
      do {
        pcVar12 = *(code **)(lVar14 + -0x38);
        lVar11 = lVar14 + -0x40;
        if (pcVar12 != (code *)0x0) {
          *(undefined8 *)(lVar14 + -0x30) = 0;
          *(undefined8 *)(lVar14 + -0x28) = 0;
          *(undefined8 *)(lVar14 + -0x40) = 0;
          *(undefined8 *)(lVar14 + -0x38) = 0;
          (*pcVar12)(lVar14 + -0x20);
        }
        lVar14 = lVar11;
      } while (lVar10 != lVar11);
      lVar14 = param_1[0x5b];
    }
    lVar11 = param_1[0x5d];
    param_1[0x5c] = lVar10;
    plVar16 = (long *)param_1[0x5e];
    uVar9 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar9 & 1) == 0) {
LAB_02a525a0:
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar14,lVar11 - lVar14,0x10);
      goto LAB_02a525bc;
    }
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02a525a0;
    FUN_02bcc824(plVar16,lVar14,lVar11 - lVar14,0x10);
    plVar16 = (long *)param_1[0x54];
    pbVar6 = PTR_DAT_04379498;
    plVar15 = (long *)PTR_DAT_043794a0;
    plVar7 = (long *)PTR_DAT_043794a8;
    puVar2 = PTR_LAB_04379590;
  }
  PTR_DAT_04379498 = pbVar6;
  PTR_DAT_043794a0 = (undefined *)plVar15;
  PTR_DAT_043794a8 = (undefined *)plVar7;
  PTR_LAB_04379590 = puVar2;
  if (plVar16 != (long *)0x0) {
    if ((long *)param_1[0x55] == plVar16) {
      plVar15 = plVar16;
    }
    else {
      plVar17 = (long *)param_1[0x55] + -2;
      puVar13 = (undefined8 *)*plVar17;
      while( true ) {
        if (puVar13 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar13 + 1);
          do {
            iVar8 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 + -1 == 0) {
            puVar13[2] = 0;
            if (((*pbVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar6), iVar8 != 0)) {
              FUN_00100250(puVar2,plVar15,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar6);
            }
            lVar10 = *plVar15;
            *plVar7 = lVar10;
            local_58 = (long *)*puVar13;
            FUN_02a44274(lVar10 + 0xd8,&local_58);
          }
        }
        if (plVar17 == plVar16) break;
        plVar17 = plVar17 + -2;
        puVar13 = (undefined8 *)*plVar17;
      }
      plVar15 = (long *)param_1[0x54];
    }
    lVar10 = param_1[0x56];
    param_1[0x55] = (long)plVar16;
    plVar16 = (long *)param_1[0x57];
    uVar9 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar9 & 1) != 0) {
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar14 + 0x38d480)) {
        FUN_02bcc824(plVar16,plVar15,lVar10 - (long)plVar15,8);
        goto LAB_02a52718;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,lVar10 - (long)plVar15,8);
  }
LAB_02a52718:
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x28c));
  puVar13 = (undefined8 *)param_1[0x4e];
  if (puVar13 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar13 + 1);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_58 = (long *)*puVar13;
      FUN_02a44274(lVar10 + 0xd8,&local_58);
    }
  }
  puVar13 = (undefined8 *)param_1[0x4c];
  if (puVar13 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar13 + 1);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_58 = (long *)*puVar13;
      FUN_02a44274(lVar10 + 0xd8,&local_58);
    }
  }
  puVar13 = (undefined8 *)param_1[0x4a];
  if (puVar13 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar13 + 1);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_58 = (long *)*puVar13;
      FUN_02a44274(lVar10 + 0xd8,&local_58);
    }
  }
  if ((long *)param_1[0x49] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x49] + 0x20))();
  }
  plVar16 = (long *)param_1[0x45];
  if (plVar16 != (long *)0x0) {
    lVar10 = plVar16[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))();
      plVar16 = (long *)param_1[0x44];
      goto joined_r0x02a5287c;
    }
  }
  plVar16 = (long *)param_1[0x44];
joined_r0x02a5287c:
  if (plVar16 != (long *)0x0) {
    lVar10 = plVar16[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))();
    }
  }
  FUN_02a4c760(param_1 + 0x1e);
  puVar2 = PTR_DAT_04379610 + 0x58;
  puVar3 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  puVar13 = (undefined8 *)param_1[0xb];
  if (puVar13 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar13 + 1);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_58 = (long *)*puVar13;
      FUN_02a44274(lVar10 + 0xd8,&local_58);
    }
  }
  return;
}


