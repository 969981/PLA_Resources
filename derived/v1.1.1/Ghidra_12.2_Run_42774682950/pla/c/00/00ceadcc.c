/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ceadcc; name: FUN_00ceadcc
 */


void FUN_00ceadcc(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 local_58;
  
  lVar14 = param_1[0x43];
  *param_1 = &PTR_FUN_041e8408;
  param_1[9] = &PTR_LAB_041e8528;
  param_1[10] = &PTR_LAB_041e8608;
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  if (lVar14 == 0) {
    plVar10 = (long *)param_1[0x42];
  }
  else {
    lVar15 = param_1[0x44];
    if (lVar15 == lVar14) {
      lVar15 = lVar14;
    }
    else {
      do {
        puVar12 = (undefined8 *)(lVar15 + -0x240);
        lVar15 = lVar15 + -0x250;
        puVar12 = (undefined8 *)*puVar12;
        if (puVar12 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar12 + 1);
          do {
            iVar9 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            puVar12[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar13 = *(long *)puVar6;
            *(long *)puVar7 = lVar13;
            local_58 = *puVar12;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
      } while (lVar15 != lVar14);
      lVar15 = param_1[0x43];
    }
    lVar13 = param_1[0x45];
    param_1[0x44] = lVar14;
    plVar10 = (long *)param_1[0x46];
    uVar11 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar11 & 1) != 0) {
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar14 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar15,lVar13 - lVar15,0x10);
        plVar10 = (long *)param_1[0x42];
        goto joined_r0x00ceb01c;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar15,lVar13 - lVar15,0x10);
    plVar10 = (long *)param_1[0x42];
  }
joined_r0x00ceb01c:
  if (plVar10 != (long *)0x0) {
    lVar14 = plVar10[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
      plVar10 = (long *)param_1[0x41];
      goto joined_r0x00ceae34;
    }
  }
  plVar10 = (long *)param_1[0x41];
joined_r0x00ceae34:
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      iVar9 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 500));
  FUN_02a4c4ec(param_1);
  return;
}


