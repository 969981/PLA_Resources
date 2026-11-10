/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cf2d30; name: FUN_00cf2d30
 */


void FUN_00cf2d30(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_68;
  
  *param_1 = &PTR_FUN_041e8838;
  param_1[0x4b] = &PTR_LAB_041e8a70;
  param_1[9] = &PTR_LAB_041e8968;
  param_1[10] = &PTR_LAB_041e8a48;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  if ((long *)param_1[0x56] != (long *)0x0) {
    lVar11 = tpidr_el0;
    plVar13 = (long *)param_1[0x56];
    do {
      while( true ) {
        plVar14 = (long *)*plVar13;
        puVar12 = (undefined8 *)plVar13[0x51];
        if (puVar12 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar12 + 1);
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
            puVar12[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar10 = *(long *)puVar6;
            *(long *)puVar7 = lVar10;
            local_68 = *puVar12;
            FUN_02a44274(lVar10 + 0xd8,&local_68);
          }
        }
        puVar12 = (undefined8 *)plVar13[0x4e];
        if (puVar12 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar12 + 1);
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
            puVar12[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar10 = *(long *)puVar6;
            *(long *)puVar7 = lVar10;
            local_68 = *puVar12;
            FUN_02a44274(lVar10 + 0xd8,&local_68);
          }
        }
        puVar12 = (undefined8 *)plVar13[6];
        if (puVar12 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar12 + 1);
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
            puVar12[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar10 = *(long *)puVar6;
            *(long *)puVar7 = lVar10;
            local_68 = *puVar12;
            FUN_02a44274(lVar10 + 0xd8,&local_68);
          }
        }
        plVar15 = (long *)param_1[0x57];
        uVar9 = (**(code **)(*plVar15 + 0xc0))(plVar15);
        if ((uVar9 & 1) != 0) break;
LAB_00cf3030:
        (**(code **)(*plVar15 + 0x18))(plVar15,plVar13,0x2a0,0x10);
        plVar13 = plVar14;
        if (plVar14 == (long *)0x0) goto LAB_00cf2d7c;
      }
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_00cf3030;
      FUN_02bcc824(plVar15,plVar13,0x2a0,0x10);
      plVar13 = plVar14;
    } while (plVar14 != (long *)0x0);
  }
LAB_00cf2d7c:
  lVar11 = param_1[0x51];
  param_1[0x51] = 0;
  if (lVar11 != 0) {
    lVar10 = param_1[0x52];
    plVar13 = (long *)param_1[0x53];
    uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar9 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar13,lVar11,lVar10 << 3,0x10);
        plVar13 = (long *)param_1[0x50];
        goto joined_r0x00cf2e0c;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar11,lVar10 << 3,0x10);
  }
  plVar13 = (long *)param_1[0x50];
joined_r0x00cf2e0c:
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  puVar12 = (undefined8 *)param_1[0x4c];
  param_1[0x4b] = &PTR_FUN_04255188;
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
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
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_68 = *puVar12;
      FUN_02a44274(lVar11 + 0xd8,&local_68);
    }
  }
  FUN_00ceadcc(param_1);
  return;
}


