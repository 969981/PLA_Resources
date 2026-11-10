/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01621534; name: FUN_01621534
 */


void FUN_01621534(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  if (param_2 != (long *)0x0) {
    lVar5 = tpidr_el0;
    do {
      while( true ) {
        plVar8 = (long *)*param_2;
        plVar6 = (long *)param_2[3];
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 10;
          do {
            iVar4 = (int)*plVar1 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
        }
        plVar6 = *(long **)(param_1 + 0x38);
        uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar7 & 1) != 0) break;
LAB_016215f8:
        (**(code **)(*plVar6 + 0x18))(plVar6,param_2,0x20,8);
        param_2 = plVar8;
        if (plVar8 == (long *)0x0) {
          return;
        }
      }
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_016215f8;
      FUN_02bcc824(plVar6,param_2,0x20,8);
      param_2 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return;
}


