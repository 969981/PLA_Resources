/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b05c6c; name: FUN_02b05c6c
 */


void FUN_02b05c6c(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  if (param_1[2] != 0) {
    lVar2 = *param_1;
    plVar8 = (long *)param_1[1];
    *(undefined8 *)(*plVar8 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = *plVar8;
    param_1[2] = 0;
    if (plVar8 != param_1) {
      lVar2 = tpidr_el0;
      do {
        plVar9 = (long *)plVar8[1];
        plVar6 = (long *)plVar8[4];
        if (plVar6 == (long *)0x0) {
LAB_02b05d08:
          plVar6 = (long *)plVar8[3];
          if (plVar6 == (long *)0x0) goto LAB_02b05d28;
LAB_02b05d10:
          plVar1 = plVar6 + 10;
          do {
            iVar5 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 != 0) goto LAB_02b05d28;
          (**(code **)(*plVar6 + 0x10))();
          plVar6 = (long *)plVar8[2];
        }
        else {
          plVar1 = plVar6 + 10;
          do {
            iVar5 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 != 0) goto LAB_02b05d08;
          (**(code **)(*plVar6 + 0x10))();
          plVar6 = (long *)plVar8[3];
          if (plVar6 != (long *)0x0) goto LAB_02b05d10;
LAB_02b05d28:
          plVar6 = (long *)plVar8[2];
        }
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 10;
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
            (**(code **)(*plVar6 + 0x10))();
          }
        }
        plVar6 = (long *)param_1[3];
        uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar7 & 1) == 0) {
LAB_02b05d98:
          (**(code **)(*plVar6 + 0x18))(plVar6,plVar8,0x30,8);
        }
        else {
          if (*(char *)(lVar2 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar2 + 0x38d488) = 1;
            *(undefined8 *)(lVar2 + 0x38d478) = 0;
            *(undefined8 *)(lVar2 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02b05d98;
          FUN_02bcc824(plVar6,plVar8,0x30,8);
        }
        plVar8 = plVar9;
      } while (plVar9 != param_1);
    }
  }
  return;
}


