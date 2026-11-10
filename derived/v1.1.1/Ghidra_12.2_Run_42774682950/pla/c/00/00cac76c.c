/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cac76c; name: FUN_00cac76c
 */


void FUN_00cac76c(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 != param_2) {
    lVar5 = tpidr_el0;
    do {
      *(long **)(param_1 + 0x10) = (long *)(lVar14 + -0x48);
      lVar15 = *(long *)(lVar14 + -0x48);
      if (lVar15 != 0) {
        lVar13 = *(long *)(lVar14 + -0x40);
        if (lVar13 == lVar15) {
          lVar13 = lVar15;
        }
        else {
          do {
            puVar12 = (undefined8 *)(lVar13 + -0x240);
            lVar13 = lVar13 + -0x250;
            puVar12 = (undefined8 *)*puVar12;
            if (puVar12 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar12 + 1);
              do {
                iVar9 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar9 + -1 == 0) {
                puVar12[2] = 0;
                if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar6);
                }
                lVar11 = *(long *)puVar7;
                *(long *)puVar8 = lVar11;
                local_68 = *puVar12;
                FUN_02a44274(lVar11 + 0xd8,&local_68);
              }
            }
          } while (lVar13 != lVar15);
          lVar13 = *(long *)(lVar14 + -0x48);
        }
        *(long *)(lVar14 + -0x40) = lVar15;
        plVar2 = *(long **)(lVar14 + -0x30);
        lVar14 = *(long *)(lVar14 + -0x38) - lVar13;
        uVar10 = (**(code **)(*plVar2 + 0xc0))(plVar2);
        if ((uVar10 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar2,lVar13,lVar14,0x10);
            goto LAB_00cac7e0;
          }
        }
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar13,lVar14,0x10);
      }
LAB_00cac7e0:
      lVar14 = *(long *)(param_1 + 0x10);
    } while (lVar14 != param_2);
  }
  return;
}


