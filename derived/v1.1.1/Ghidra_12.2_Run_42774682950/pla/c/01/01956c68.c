/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01956c68; name: FUN_01956c68
 */


void FUN_01956c68(undefined8 *param_1)

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
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_58;
  
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  plVar14 = (long *)*param_1;
  if (plVar14 == (long *)0x0) {
    return;
  }
  plVar15 = (long *)param_1[1];
  plVar11 = plVar14;
  if (plVar15 != plVar14) {
    do {
      while( true ) {
        puVar12 = (undefined8 *)plVar15[-3];
        plVar15 = plVar15 + -5;
        if (puVar12 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar12 + 1);
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
            puVar12[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar13 = *(long *)puVar6;
            *(long *)puVar7 = lVar13;
            local_58 = *puVar12;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
        plVar11 = (long *)*plVar15;
        if (plVar11 != (long *)0x0) break;
LAB_01956dec:
        if (plVar15 == plVar14) goto LAB_01956df4;
      }
      lVar13 = plVar11[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 != 0) goto LAB_01956dec;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    } while (plVar15 != plVar14);
LAB_01956df4:
    plVar11 = (long *)*param_1;
  }
  lVar13 = param_1[2];
  plVar15 = (long *)param_1[3];
  param_1[1] = plVar14;
  uVar10 = (**(code **)(*plVar15 + 0xc0))(plVar15);
  if ((uVar10 & 1) != 0) {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar15,plVar11,lVar13 - (long)plVar11,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01956d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar15 + 0x18))(plVar15,plVar11,lVar13 - (long)plVar11,8);
  return;
}


