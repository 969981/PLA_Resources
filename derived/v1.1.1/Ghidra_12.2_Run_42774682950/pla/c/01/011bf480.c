/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011bf480; name: FUN_011bf480
 */


void FUN_011bf480(long *param_1,long param_2,long *param_3,long *param_4,long *param_5,
                 undefined1 param_6)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = param_2;
  if (param_2 != 0) {
    lVar7 = *param_3;
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = (long *)param_1[1];
    param_1[1] = lVar7;
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 10;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      lVar7 = param_1[1];
    }
    if (lVar7 != 0) {
      lVar7 = *param_4;
      if (lVar7 != 0) {
        piVar1 = (int *)(lVar7 + 0x50);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar6 = (long *)param_1[2];
      param_1[2] = lVar7;
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 10;
        do {
          iVar5 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        lVar7 = param_1[2];
      }
      if (lVar7 != 0) {
        lVar7 = *param_5;
        if (lVar7 != 0) {
          piVar1 = (int *)(lVar7 + 0x50);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar6 = (long *)param_1[3];
        param_1[3] = lVar7;
        if (plVar6 != (long *)0x0) {
          plVar2 = plVar6 + 10;
          do {
            iVar5 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
          lVar7 = param_1[3];
        }
        if (lVar7 != 0) {
          *(undefined1 *)(param_1 + 4) = param_6;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


