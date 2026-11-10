/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0196410c; name: FUN_0196410c
 */


void FUN_0196410c(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 local_58;
  
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  lVar13 = *param_1;
  if (lVar13 == 0) {
    return;
  }
  lVar12 = param_1[1];
  lVar11 = lVar13;
  if (param_1[1] != lVar13) {
    do {
      while( true ) {
        puVar14 = *(undefined8 **)(lVar12 + -0x20);
        if (puVar14 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar14 + 1);
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
            puVar14[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar11 = *(long *)puVar6;
            *(long *)puVar7 = lVar11;
            local_58 = *puVar14;
            FUN_02a44274(lVar11 + 0xd8,&local_58);
          }
        }
        lVar11 = lVar12 + -0xe0;
        if (*(char *)(lVar12 + -0x70) == '\0') break;
        *(undefined1 *)(lVar12 + -0x70) = 0;
        lVar12 = lVar11;
        if (lVar11 == lVar13) goto LAB_01964304;
      }
      lVar12 = lVar11;
    } while (lVar11 != lVar13);
LAB_01964304:
    lVar11 = *param_1;
  }
  lVar12 = param_1[2];
  plVar2 = (long *)param_1[3];
  param_1[1] = lVar13;
  uVar10 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar10 & 1) != 0) {
    lVar13 = tpidr_el0;
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar13 + 0x38d480)) {
      FUN_02bcc824(plVar2,lVar11,lVar12 - lVar11,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x019641f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar11,lVar12 - lVar11,0x10);
  return;
}


