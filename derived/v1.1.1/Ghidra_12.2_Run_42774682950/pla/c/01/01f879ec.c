/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f879ec; name: FUN_01f879ec
 */


void FUN_01f879ec(long *param_1)

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
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  if ((long *)param_1[6] != (long *)0x0) {
    lVar12 = tpidr_el0;
    plVar13 = (long *)param_1[6];
LAB_01f87b08:
    do {
      plVar14 = (long *)*plVar13;
      plVar10 = (long *)plVar13[5];
      if (plVar10 == (long *)0x0) {
LAB_01f87b30:
        puVar15 = (undefined8 *)plVar13[3];
      }
      else {
        lVar11 = plVar10[0xb];
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
        if (iVar8 + -1 != 0) goto LAB_01f87b30;
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))();
        puVar15 = (undefined8 *)plVar13[3];
      }
      if (puVar15 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar15 + 1);
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
          puVar15[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar11 = *(long *)puVar6;
          *(long *)puVar7 = lVar11;
          local_68 = *puVar15;
          FUN_02a44274(lVar11 + 0xd8,&local_68);
        }
      }
      plVar10 = (long *)param_1[7];
      uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar9 & 1) == 0) {
LAB_01f87bc8:
        (**(code **)(*plVar10 + 0x18))(plVar10,plVar13,0x30,8);
        plVar13 = plVar14;
        if (plVar14 == (long *)0x0) break;
        goto LAB_01f87b08;
      }
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_01f87bc8;
      FUN_02bcc824(plVar10,plVar13,0x30,8);
      plVar13 = plVar14;
    } while (plVar14 != (long *)0x0);
  }
  lVar12 = *param_1;
  *param_1 = 0;
  if (lVar12 == 0) {
    return;
  }
  lVar11 = param_1[1];
  plVar13 = (long *)param_1[2];
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
      FUN_02bcc824(plVar13,lVar12,lVar11 << 3,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01f87ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar13 + 0x18))(plVar13,lVar12,lVar11 << 3,8);
  return;
}


