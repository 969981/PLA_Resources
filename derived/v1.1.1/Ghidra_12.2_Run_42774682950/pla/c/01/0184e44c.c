/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0184e44c; name: FUN_0184e44c
 */


void FUN_0184e44c(undefined8 *param_1)

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
  code *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 local_58;
  
  puVar9 = PTR_LAB_04379590;
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  puVar14 = (undefined8 *)*param_1;
  if (puVar14 == (undefined8 *)0x0) {
    return;
  }
  puVar15 = (undefined8 *)param_1[1];
  if (puVar15 == puVar14) {
    puVar15 = puVar14;
  }
  else {
    do {
      pcVar12 = (code *)puVar15[-0x11];
      if (pcVar12 != (code *)0x0) {
        puVar15[-0x10] = 0;
        puVar15[-0xf] = 0;
        puVar15[-0x12] = 0;
        puVar15[-0x11] = 0;
        (*pcVar12)(puVar15 + -0xe);
      }
      pcVar12 = (code *)puVar15[-0x21];
      puVar16 = puVar15 + -0x26;
      if (pcVar12 != (code *)0x0) {
        puVar15[-0x20] = 0;
        puVar15[-0x1f] = 0;
        puVar15[-0x21] = 0;
        puVar15[-0x22] = 0;
        (*pcVar12)(puVar15 + -0x1e);
      }
      puVar15 = (undefined8 *)puVar15[-0x24];
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
          lVar13 = *(long *)puVar7;
          *(long *)puVar8 = lVar13;
          local_58 = *puVar15;
          FUN_02a44274(lVar13 + 0xd8,&local_58);
        }
      }
      puVar15 = (undefined8 *)*puVar16;
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
          lVar13 = *(long *)puVar7;
          *(long *)puVar8 = lVar13;
          local_58 = *puVar15;
          FUN_02a44274(lVar13 + 0xd8,&local_58);
        }
      }
      puVar15 = puVar16;
    } while (puVar16 != puVar14);
    puVar15 = (undefined8 *)*param_1;
  }
  lVar13 = param_1[2];
  plVar2 = (long *)param_1[3];
  param_1[1] = puVar14;
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
      FUN_02bcc824(plVar2,puVar15,lVar13 - (long)puVar15,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0184e6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar15,lVar13 - (long)puVar15,0x10);
  return;
}


