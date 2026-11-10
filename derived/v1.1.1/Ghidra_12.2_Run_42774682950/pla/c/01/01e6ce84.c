/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e6ce84; name: FUN_01e6ce84
 */


void FUN_01e6ce84(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  if (param_2 != (long *)0x0) {
    lVar5 = tpidr_el0;
    do {
      while( true ) {
        plVar9 = (long *)*param_2;
        plVar6 = (long *)param_2[3];
        if (plVar6 != (long *)0x0) {
          lVar8 = plVar6[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
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
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))();
          }
        }
        plVar6 = *(long **)(param_1 + 0x38);
        uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar7 & 1) != 0) break;
LAB_01e6cf4c:
        (**(code **)(*plVar6 + 0x18))(plVar6,param_2,0x20,8);
        param_2 = plVar9;
        if (plVar9 == (long *)0x0) {
          return;
        }
      }
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_01e6cf4c;
      FUN_02bcc824(plVar6,param_2,0x20,8);
      param_2 = plVar9;
    } while (plVar9 != (long *)0x0);
  }
  return;
}


