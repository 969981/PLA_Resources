/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cac29c; name: FUN_00cac29c
 */


void FUN_00cac29c(long param_1,long *param_2)

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
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  if (*(long **)(param_1 + 8) != param_2) {
    lVar4 = tpidr_el0;
    plVar12 = *(long **)(param_1 + 8);
LAB_00cac314:
    do {
      plVar13 = plVar12 + -9;
      lVar15 = *plVar13;
      if (lVar15 != 0) {
        lVar14 = plVar12[-8];
        if (lVar14 == lVar15) {
          lVar14 = lVar15;
        }
        else {
          do {
            puVar11 = (undefined8 *)(lVar14 + -0x240);
            lVar14 = lVar14 + -0x250;
            puVar11 = (undefined8 *)*puVar11;
            if (puVar11 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar11 + 1);
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
                puVar11[2] = 0;
                if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar5);
                }
                lVar10 = *(long *)puVar6;
                *(long *)puVar7 = lVar10;
                local_68 = *puVar11;
                FUN_02a44274(lVar10 + 0xd8,&local_68);
              }
            }
          } while (lVar14 != lVar15);
          lVar14 = *plVar13;
        }
        plVar12[-8] = lVar15;
        lVar15 = plVar12[-7];
        plVar12 = (long *)plVar12[-6];
        uVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
        if ((uVar9 & 1) != 0) {
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar4 + 0x38d480)) {
            FUN_02bcc824(plVar12,lVar14,lVar15 - lVar14,0x10);
            plVar12 = plVar13;
            if (plVar13 == param_2) break;
            goto LAB_00cac314;
          }
        }
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar14,lVar15 - lVar14,0x10);
      }
      plVar12 = plVar13;
    } while (plVar13 != param_2);
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}


