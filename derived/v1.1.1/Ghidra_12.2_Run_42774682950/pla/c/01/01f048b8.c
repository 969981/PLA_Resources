/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f048b8; name: FUN_01f048b8
 */


void FUN_01f048b8(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 local_58;
  
  puVar9 = PTR_LAB_04379590;
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  puVar13 = (undefined8 *)*param_1;
  if (puVar13 == (undefined8 *)0x0) {
    return;
  }
  puVar14 = (undefined8 *)param_1[1];
  puVar15 = puVar13;
  if (puVar14 != puVar13) {
    do {
      puVar15 = (undefined8 *)puVar14[-3];
      puVar14 = puVar14 + -5;
      if (puVar15 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar15 + 1);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          puVar15[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_58 = *puVar15;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
        }
      }
      puVar15 = (undefined8 *)*puVar14;
      if (puVar15 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar15 + 1);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          puVar15[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_58 = *puVar15;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
        }
      }
    } while (puVar14 != puVar13);
    puVar15 = (undefined8 *)*param_1;
  }
  lVar12 = param_1[2];
  plVar2 = (long *)param_1[3];
  param_1[1] = puVar13;
  uVar11 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar11 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar2,puVar15,lVar12 - (long)puVar15,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01f0499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar15,lVar12 - (long)puVar15,8);
  return;
}


