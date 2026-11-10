/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b5f084; name: FUN_01b5f084
 */


void FUN_01b5f084(long *param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
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
  undefined8 *puVar15;
  undefined8 local_68;
  
  plVar13 = (long *)param_1[3];
  if (plVar13 == *(long **)(param_2 + 0x18)) goto LAB_01b5f24c;
  puVar2 = (undefined8 *)*param_1;
  if ((undefined8 *)param_1[1] == puVar2) {
    puVar14 = puVar2;
  }
  else {
    puVar15 = (undefined8 *)param_1[1] + -2;
    puVar14 = (undefined8 *)*puVar15;
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
    puVar8 = PTR_LAB_04379590;
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_04379498;
    if (puVar15 != puVar2) {
      plVar13 = (long *)PTR_DAT_043794a0;
      do {
        puVar15 = puVar15 + -2;
        puVar14 = (undefined8 *)*puVar15;
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
            if ((*puVar6 & 1) == 0) {
              iVar9 = __cxa_guard_acquire(puVar6);
              plVar13 = (long *)PTR_DAT_043794a0;
              if (iVar9 != 0) {
                FUN_00100250(puVar8,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar6);
                plVar13 = (long *)PTR_DAT_043794a0;
              }
            }
            lVar11 = *plVar13;
            *(long *)puVar7 = lVar11;
            local_68 = *puVar14;
            FUN_02a44274(lVar11 + 0xd8,&local_68);
          }
        }
      } while (puVar15 != puVar2);
    }
    plVar13 = (long *)param_1[3];
    puVar14 = (undefined8 *)*param_1;
  }
  lVar11 = param_1[2];
  param_1[1] = (long)puVar2;
  uVar10 = (**(code **)(*plVar13 + 0xc0))(plVar13);
  if ((uVar10 & 1) == 0) {
LAB_01b5f228:
    (**(code **)(*plVar13 + 0x18))(plVar13,puVar14,lVar11 - (long)puVar14,8);
  }
  else {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_01b5f228;
    FUN_02bcc824(plVar13,puVar14,lVar11 - (long)puVar14,8);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
LAB_01b5f24c:
  lVar11 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  lVar12 = *(long *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[3] = lVar11;
  param_1[4] = lVar3;
  param_1[5] = lVar12;
  return;
}


