/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f48518; name: FUN_01f48518
 */


void FUN_01f48518(long *param_1)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_68;
  
  if (param_1[2] != 0) {
    lVar2 = *param_1;
    plVar13 = (long *)param_1[1];
    *(undefined8 *)(*plVar13 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = *plVar13;
    param_1[2] = 0;
    puVar9 = PTR_DAT_043794a8;
    puVar8 = PTR_DAT_043794a0;
    puVar7 = PTR_DAT_04379498;
    if (plVar13 != param_1) {
      lVar2 = tpidr_el0;
      do {
        plVar3 = (long *)plVar13[1];
        puVar4 = (undefined8 *)plVar13[2];
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          do {
            iVar10 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 + -1 == 0) {
            puVar4[2] = 0;
            if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar8,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar7);
            }
            lVar12 = *(long *)puVar8;
            *(long *)puVar9 = lVar12;
            local_68 = *puVar4;
            FUN_02a44274(lVar12 + 0xd8,&local_68);
          }
        }
        plVar14 = (long *)param_1[3];
        uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
        if ((uVar11 & 1) == 0) {
LAB_01f48630:
          (**(code **)(*plVar14 + 0x18))(plVar14,plVar13,0x20,8);
        }
        else {
          if (*(char *)(lVar2 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar2 + 0x38d488) = 1;
            *(undefined8 *)(lVar2 + 0x38d478) = 0;
            *(undefined8 *)(lVar2 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_01f48630;
          FUN_02bcc824(plVar14,plVar13,0x20,8);
        }
        plVar13 = plVar3;
      } while (plVar3 != param_1);
    }
  }
  return;
}


