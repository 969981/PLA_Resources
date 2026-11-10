/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd6850; name: FUN_01cd6850
 */


bool FUN_01cd6850(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  float fVar13;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    fVar13 = *(float *)(param_1 + 1);
    if (fVar13 < *(float *)(param_2 + -1)) {
      lVar9 = *param_1;
      *param_1 = 0;
      lVar12 = param_2[-2];
      param_2[-2] = 0;
      *param_1 = lVar12;
      *(int *)(param_1 + 1) = (int)param_2[-1];
      plVar7 = (long *)param_2[-2];
      param_2[-2] = 0;
      if (plVar7 != (long *)0x0) {
        lVar12 = plVar7[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))();
        }
      }
      param_2[-2] = lVar9;
      *(float *)(param_2 + -1) = fVar13;
      return true;
    }
    break;
  case 3:
    FUN_01cd60a0(param_1,param_1 + 2,param_2 + -2);
    break;
  case 4:
    FUN_01cd6310(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
    break;
  case 5:
    FUN_01cd64c0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    break;
  default:
    FUN_01cd60a0(param_1,param_1 + 2,param_1 + 4);
    if (param_1 + 6 != param_2) {
      iVar11 = 0;
      plVar7 = param_1 + 6;
      plVar6 = param_1 + 4;
      do {
        plVar8 = plVar7;
        fVar13 = *(float *)(plVar8 + 1);
        if (*(float *)(plVar6 + 1) < fVar13) {
          lVar12 = *plVar8;
          *plVar8 = 0;
          *plVar8 = 0;
          plVar7 = plVar8;
          while( true ) {
            plVar10 = plVar6;
            lVar9 = *plVar10;
            *plVar10 = 0;
            *plVar7 = lVar9;
            *(int *)(plVar7 + 1) = (int)plVar10[1];
            if (plVar10 == param_1) break;
            plVar7 = plVar10;
            if (fVar13 <= *(float *)(plVar10 + -1)) goto LAB_01cd69ac;
            plVar6 = plVar10 + -2;
            plVar5 = (long *)*plVar10;
            *plVar10 = 0;
            if (plVar5 != (long *)0x0) {
              lVar9 = plVar5[0xb];
              piVar1 = (int *)(lVar9 + 0xc);
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
                *(undefined8 *)(lVar9 + 0x18) = 0;
                (**(code **)(*plVar5 + 0x20))();
              }
            }
          }
          plVar7 = param_1;
LAB_01cd69ac:
          plVar6 = (long *)*plVar7;
          *plVar7 = 0;
          if (plVar6 != (long *)0x0) {
            lVar9 = plVar6[0xb];
            piVar1 = (int *)(lVar9 + 0xc);
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
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*plVar6 + 0x20))();
            }
          }
          iVar11 = iVar11 + 1;
          *plVar7 = lVar12;
          *(float *)(plVar10 + 1) = fVar13;
          if (iVar11 == 8) {
            return plVar8 + 2 == param_2;
          }
        }
        plVar7 = plVar8 + 2;
        plVar6 = plVar8;
        if (plVar8 + 2 == param_2) {
          return true;
        }
      } while( true );
    }
  }
  return true;
}


