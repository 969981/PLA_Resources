/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c542d8; name: FUN_01c542d8
 */


void FUN_01c542d8(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 local_58;
  
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  puVar14 = (undefined8 *)*param_1;
  if (puVar14 == (undefined8 *)0x0) {
    return;
  }
  puVar15 = (undefined8 *)param_1[1];
  puVar13 = puVar14;
  if (puVar15 != puVar14) {
    do {
      plVar11 = (long *)puVar15[-2];
      if (plVar11 != (long *)0x0) {
        lVar12 = plVar11[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))();
        }
      }
      puVar13 = (undefined8 *)puVar15[-6];
      puVar16 = puVar15 + -10;
      if (puVar13 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar13 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          puVar13[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar12 = *(long *)puVar6;
          *(long *)puVar7 = lVar12;
          local_58 = *puVar13;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
        }
      }
      puVar13 = (undefined8 *)puVar15[-8];
      if (puVar13 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar13 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          puVar13[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar12 = *(long *)puVar6;
          *(long *)puVar7 = lVar12;
          local_58 = *puVar13;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
        }
      }
      puVar13 = (undefined8 *)*puVar16;
      if (puVar13 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar13 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          puVar13[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar12 = *(long *)puVar6;
          *(long *)puVar7 = lVar12;
          local_58 = *puVar13;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
        }
      }
      puVar15 = puVar16;
    } while (puVar16 != puVar14);
    puVar13 = (undefined8 *)*param_1;
  }
  lVar12 = param_1[2];
  plVar11 = (long *)param_1[3];
  param_1[1] = puVar14;
  uVar10 = (**(code **)(*plVar11 + 0xc0))(plVar11);
  if ((uVar10 & 1) != 0) {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar11,puVar13,lVar12 - (long)puVar13,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01c543cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar11 + 0x18))(plVar11,puVar13,lVar12 - (long)puVar13,0x10);
  return;
}


