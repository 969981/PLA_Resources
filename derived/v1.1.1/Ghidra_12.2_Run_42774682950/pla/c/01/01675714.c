/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01675714; name: FUN_01675714
 */


void FUN_01675714(long param_1,long *param_2)

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
  long *plVar11;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar6 = tpidr_el0;
LAB_01675754:
  do {
    plVar9 = (long *)*param_2;
    plVar11 = (long *)param_2[3];
    if (plVar11 != (long *)0x0) {
      plVar10 = (long *)param_2[4];
      if (plVar10 == plVar11) {
        plVar10 = plVar11;
      }
      else {
        do {
          plVar10 = plVar10 + -1;
          plVar7 = (long *)*plVar10;
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
        } while (plVar10 != plVar11);
        plVar10 = (long *)param_2[3];
      }
      lVar2 = param_2[5];
      plVar7 = (long *)param_2[6];
      param_2[4] = (long)plVar11;
      uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar8 & 1) != 0) {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar7,plVar10,lVar2 - (long)plVar10,8);
          goto LAB_01675824;
        }
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar10,lVar2 - (long)plVar10,8);
    }
LAB_01675824:
    plVar11 = *(long **)(param_1 + 0x38);
    uVar8 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar11,param_2,0x50,8);
        param_2 = plVar9;
        if (plVar9 == (long *)0x0) {
          return;
        }
        goto LAB_01675754;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,param_2,0x50,8);
    param_2 = plVar9;
    if (plVar9 == (long *)0x0) {
      return;
    }
  } while( true );
}


