/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6001c; name: FUN_02a6001c
 */


void FUN_02a6001c(long *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  lVar8 = *param_1;
  if ((ulong)(param_1[2] - lVar8 >> 3) < param_2) {
    plVar10 = param_1 + 3;
    lVar9 = param_1[1];
    lVar5 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,param_2 << 3,8);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xb8))();
    }
    lVar8 = lVar5 + (lVar9 - lVar8 >> 3) * 8;
    plVar12 = (long *)*param_1;
    plVar11 = (long *)param_1[1];
    lVar9 = lVar8;
    if (plVar11 == plVar12) {
      plVar11 = plVar12;
    }
    else {
      do {
        lVar9 = lVar9 + -8;
        plVar11 = plVar11 + -1;
        FUN_02a60914(plVar10,lVar9,plVar11);
      } while (plVar12 != plVar11);
      plVar12 = (long *)*param_1;
      plVar11 = (long *)param_1[1];
    }
    *param_1 = lVar9;
    param_1[1] = lVar8;
    lVar8 = param_1[2];
    param_1[2] = lVar5 + param_2 * 8;
    while (plVar11 != plVar12) {
      plVar11 = plVar11 + -1;
      plVar7 = (long *)*plVar11;
      if (plVar7 != (long *)0x0) {
        lVar5 = plVar7[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))();
        }
      }
    }
    if (plVar12 != (long *)0x0) {
      plVar10 = (long *)*plVar10;
      uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar6 & 1) != 0) {
        lVar5 = tpidr_el0;
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar10,plVar12,lVar8 - (long)plVar12,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02a60178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar12,lVar8 - (long)plVar12,8);
      return;
    }
  }
  return;
}


