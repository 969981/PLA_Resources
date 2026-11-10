/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f98b74; name: FUN_00f98b74
 */


void FUN_00f98b74(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  lVar11 = *param_1;
  if (lVar11 == 0) {
    return;
  }
  lVar12 = param_1[1];
  lVar5 = tpidr_el0;
  if (lVar12 != lVar11) {
    puVar15 = *(undefined8 **)(lVar12 + -0x38);
    do {
      if (puVar15 != (undefined8 *)0x0) {
        puVar14 = puVar15;
        if (*(undefined8 **)(lVar12 + -0x30) != puVar15) {
          puVar14 = *(undefined8 **)(lVar12 + -0x30) + -3;
          puVar13 = (undefined8 *)*puVar14;
          if (puVar13 == (undefined8 *)0x0) goto LAB_00f98c70;
          piVar1 = (int *)(puVar13 + 1);
          do {
            iVar8 = *piVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            if (iVar8 == 0) {
              puVar13[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar10 = *(long *)puVar6;
              *(long *)puVar7 = lVar10;
              local_68 = *puVar13;
              FUN_02a44274(lVar10 + 0xd8,&local_68);
            }
LAB_00f98c70:
            do {
              if (puVar14 == puVar15) {
                puVar14 = *(undefined8 **)(lVar12 + -0x38);
                goto LAB_00f98ca0;
              }
              puVar14 = puVar14 + -3;
              puVar13 = (undefined8 *)*puVar14;
            } while (puVar13 == (undefined8 *)0x0);
            piVar1 = (int *)(puVar13 + 1);
            do {
              iVar8 = *piVar1 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          } while( true );
        }
LAB_00f98ca0:
        plVar2 = *(long **)(lVar12 + -0x20);
        *(undefined8 **)(lVar12 + -0x30) = puVar15;
        lVar10 = *(long *)(lVar12 + -0x28) - (long)puVar14;
        uVar9 = (**(code **)(*plVar2 + 0xc0))(plVar2);
        if ((uVar9 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar2,puVar14,lVar10,8);
            goto LAB_00f98d14;
          }
        }
        (**(code **)(*plVar2 + 0x18))(plVar2,puVar14,lVar10,8);
      }
LAB_00f98d14:
      if (*(long **)(lVar12 + -0x40) != (long *)0x0) {
        (**(code **)(**(long **)(lVar12 + -0x40) + 0x20))();
      }
      if (lVar12 + -0x58 == lVar11) goto LAB_00f98d48;
      puVar15 = *(undefined8 **)(lVar12 + -0x90);
      lVar12 = lVar12 + -0x58;
    } while( true );
  }
  lVar12 = lVar11;
LAB_00f98d4c:
  lVar10 = param_1[2];
  plVar2 = (long *)param_1[3];
  param_1[1] = lVar11;
  uVar9 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar9 & 1) != 0) {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar2,lVar12,lVar10 - lVar12,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00f98de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar12,lVar10 - lVar12,8);
  return;
LAB_00f98d48:
  lVar12 = *param_1;
  goto LAB_00f98d4c;
}


