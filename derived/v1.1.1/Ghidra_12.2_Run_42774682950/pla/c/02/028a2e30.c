/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a2e30; name: FUN_028a2e30
 */


bool FUN_028a2e30(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar11 = *param_1;
    if (*(uint *)(param_2[-1] + 0x178) < *(uint *)(lVar11 + 0x178)) {
      *param_1 = 0;
      lVar7 = param_2[-1];
      param_2[-1] = 0;
      *param_1 = lVar7;
      plVar5 = (long *)param_2[-1];
      param_2[-1] = 0;
      if (plVar5 != (long *)0x0) {
        plVar8 = plVar5 + 10;
        do {
          iVar10 = (int)*plVar8 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *(int *)plVar8 = iVar10;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      param_2[-1] = lVar11;
      return true;
    }
    break;
  case 3:
    FUN_028a28b0(param_1,param_1 + 1,param_2 + -1);
    return true;
  case 4:
    FUN_028a2ac0(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    return true;
  case 5:
    FUN_028a2c40(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_028a28b0(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      iVar10 = 0;
      plVar5 = param_1 + 3;
      plVar8 = param_1 + 2;
      do {
        plVar6 = plVar5;
        lVar11 = *plVar6;
        if (*(uint *)(lVar11 + 0x178) < *(uint *)(*plVar8 + 0x178)) {
          *plVar6 = 0;
          *plVar6 = 0;
          plVar5 = plVar6;
          while( true ) {
            plVar9 = plVar8;
            lVar7 = *plVar9;
            *plVar9 = 0;
            *plVar5 = lVar7;
            if (plVar9 == param_1) break;
            plVar8 = plVar9 + -1;
            if (*(uint *)(*plVar8 + 0x178) <= *(uint *)(lVar11 + 0x178)) goto LAB_028a2fb8;
            plVar4 = (long *)*plVar9;
            *plVar9 = 0;
            plVar5 = plVar9;
            if (plVar4 != (long *)0x0) {
              plVar9 = plVar4 + 10;
              do {
                iVar3 = (int)*plVar9 + -1;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar2) {
                  *(int *)plVar9 = iVar3;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (iVar3 == 0) {
                (**(code **)(*plVar4 + 0x10))();
              }
            }
          }
          plVar9 = param_1;
LAB_028a2fb8:
          plVar5 = (long *)*plVar9;
          *plVar9 = 0;
          if (plVar5 != (long *)0x0) {
            plVar8 = plVar5 + 10;
            do {
              iVar3 = (int)*plVar8 + -1;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar2) {
                *(int *)plVar8 = iVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
          iVar10 = iVar10 + 1;
          *plVar9 = lVar11;
          if (iVar10 == 8) {
            return plVar6 + 1 == param_2;
          }
        }
        plVar5 = plVar6 + 1;
        plVar8 = plVar6;
      } while (plVar6 + 1 != param_2);
    }
  }
  return true;
}


