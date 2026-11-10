/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bcb6dc; name: FUN_00bcb6dc
 */


void FUN_00bcb6dc(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  plVar10 = (long *)param_1[0x26];
  *param_1 = &PTR_FUN_041d9ba8;
  param_1[9] = &PTR_LAB_041d9c38;
  if (plVar10 != (long *)0x0) {
    plVar9 = (long *)param_1[0x27];
    if (plVar9 == plVar10) {
      plVar9 = plVar10;
    }
    else {
      plVar7 = (long *)plVar9[-1];
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      if (plVar9 + -1 != plVar10) {
        plVar9 = plVar9 + -2;
        plVar7 = (long *)*plVar9;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 10;
          do {
            iVar5 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) goto LAB_00bcb790;
        }
LAB_00bcb768:
        if (plVar9 != plVar10) {
          while( true ) {
            plVar9 = plVar9 + -1;
            plVar7 = (long *)*plVar9;
            if (plVar7 == (long *)0x0) break;
            plVar1 = plVar7 + 10;
            do {
              iVar5 = (int)*plVar1 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 != 0) break;
LAB_00bcb790:
            (**(code **)(*plVar7 + 0x10))();
            if (plVar9 == plVar10) goto LAB_00bcb7a4;
          }
          goto LAB_00bcb768;
        }
      }
LAB_00bcb7a4:
      plVar9 = (long *)param_1[0x26];
    }
    lVar2 = param_1[0x28];
    plVar7 = (long *)param_1[0x29];
    param_1[0x27] = plVar10;
    uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar8 & 1) != 0) {
      lVar6 = tpidr_el0;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar7,plVar9,lVar2 - (long)plVar9,8);
        goto LAB_00bcb828;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar9,lVar2 - (long)plVar9,8);
  }
LAB_00bcb828:
  FUN_00bbcdac(param_1);
  return;
}


