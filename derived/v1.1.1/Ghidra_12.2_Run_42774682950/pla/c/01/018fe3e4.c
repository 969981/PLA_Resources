/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018fe3e4; name: FUN_018fe3e4
 */


void FUN_018fe3e4(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  if ((long *)param_1[6] != (long *)0x0) {
    lVar9 = tpidr_el0;
    plVar11 = (long *)param_1[6];
LAB_018fe488:
    do {
      plVar12 = (long *)*plVar11;
      puVar13 = (undefined8 *)plVar11[8];
      if (puVar13 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar13 + 1);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          puVar13[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar4);
          }
          lVar10 = *(long *)puVar5;
          *(long *)puVar6 = lVar10;
          local_68 = *puVar13;
          FUN_02a44274(lVar10 + 0xd8,&local_68);
        }
      }
      puVar13 = (undefined8 *)plVar11[3];
      if (puVar13 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar13 + 1);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          puVar13[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar4);
          }
          lVar10 = *(long *)puVar5;
          *(long *)puVar6 = lVar10;
          local_68 = *puVar13;
          FUN_02a44274(lVar10 + 0xd8,&local_68);
        }
      }
      plVar14 = (long *)param_1[7];
      uVar8 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar8 & 1) != 0) {
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar14,plVar11,0x50,8);
          plVar11 = plVar12;
          if (plVar12 == (long *)0x0) break;
          goto LAB_018fe488;
        }
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar11,0x50,8);
      plVar11 = plVar12;
    } while (plVar12 != (long *)0x0);
  }
  lVar9 = *param_1;
  *param_1 = 0;
  if (lVar9 == 0) {
    return;
  }
  FUN_018fe668(param_1 + 1);
  return;
}


