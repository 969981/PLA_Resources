/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba4118; name: FUN_01ba4118
 */


void FUN_01ba4118(long *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 local_68;
  
  plVar13 = (long *)param_1[3];
  if (plVar13 == *(long **)(param_2 + 0x18)) goto LAB_01ba42c4;
  plVar2 = (long *)*param_1;
  plVar15 = (long *)param_1[1];
  if (plVar15 == plVar2) {
    plVar15 = plVar2;
  }
  else {
    puVar14 = (undefined8 *)plVar15[-2];
    if (puVar14 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar14 + 1);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        puVar14[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_68 = *puVar14;
        FUN_02a44274(lVar11 + 0xd8,&local_68);
      }
    }
    if (plVar15 + -2 != plVar2) {
      puVar14 = (undefined8 *)plVar15[-4];
      if (puVar14 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar14 + 1);
        do {
          iVar9 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          puVar14[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_68 = *puVar14;
          FUN_02a44274(lVar11 + 0xd8,&local_68);
        }
      }
      puVar8 = PTR_DAT_043794a8;
      puVar7 = PTR_DAT_043794a0;
      puVar6 = PTR_DAT_04379498;
      if (plVar15 + -4 != plVar2) {
        plVar15 = plVar15 + -6;
        puVar14 = (undefined8 *)*plVar15;
        while( true ) {
          if (puVar14 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar14 + 1);
            do {
              iVar9 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 + -1 == 0) {
              puVar14[2] = 0;
              if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar6);
              }
              lVar11 = *(long *)puVar7;
              *(long *)puVar8 = lVar11;
              local_68 = *puVar14;
              FUN_02a44274(lVar11 + 0xd8,&local_68);
            }
          }
          if (plVar15 == plVar2) break;
          plVar15 = plVar15 + -2;
          puVar14 = (undefined8 *)*plVar15;
        }
      }
    }
    plVar13 = (long *)param_1[3];
    plVar15 = (long *)*param_1;
  }
  lVar11 = param_1[2];
  param_1[1] = (long)plVar2;
  uVar10 = (**(code **)(*plVar13 + 0xc0))(plVar13);
  if ((uVar10 & 1) == 0) {
LAB_01ba42a0:
    (**(code **)(*plVar13 + 0x18))(plVar13,plVar15,lVar11 - (long)plVar15,8);
  }
  else {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_01ba42a0;
    FUN_02bcc824(plVar13,plVar15,lVar11 - (long)plVar15,8);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
LAB_01ba42c4:
  lVar11 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  lVar12 = *(long *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[3] = lVar11;
  param_1[4] = lVar3;
  param_1[5] = lVar12;
  return;
}


