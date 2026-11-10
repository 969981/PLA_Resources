/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0255d7e0; name: FUN_0255d7e0
 */


bool FUN_0255d7e0(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar11 = *param_3;
    local_68 = (**(code **)(*(long *)param_2[-1] + 0x38))();
    local_70 = (**(code **)(*(long *)*param_1 + 0x38))();
    lVar6 = FUN_0255db80(lVar11 + 0x1d0,&local_68);
    bVar3 = *(byte *)(lVar6 + 4);
    iVar2 = *(int *)(lVar6 + 8);
    lVar6 = FUN_0255db80(lVar11 + 0x1d0,&local_70);
    bVar3 = bVar3 & 1;
    bVar1 = *(byte *)(lVar6 + 4) & 1;
    if (bVar3 <= bVar1) {
      if (bVar3 < bVar1) {
        return true;
      }
      if (iVar2 <= *(int *)(lVar6 + 8)) {
        return true;
      }
    }
    lVar11 = *param_1;
    *param_1 = 0;
    lVar6 = param_2[-1];
    param_2[-1] = 0;
    *param_1 = lVar6;
    plVar8 = (long *)param_2[-1];
    param_2[-1] = 0;
    if (plVar8 != (long *)0x0) {
      plVar10 = plVar8 + 10;
      do {
        iVar2 = (int)*plVar10 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = iVar2;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    param_2[-1] = lVar11;
    break;
  case 3:
    FUN_0255cb60(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_0255cf50(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_0255d220(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_0255cb60(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      local_74 = 0;
      plVar8 = param_1 + 3;
      plVar10 = param_1 + 2;
      do {
        plVar9 = plVar8;
        lVar11 = *param_3;
        local_68 = (**(code **)(*(long *)*plVar9 + 0x38))();
        local_70 = (**(code **)(*(long *)*plVar10 + 0x38))();
        lVar6 = FUN_0255db80(lVar11 + 0x1d0,&local_68);
        bVar3 = *(byte *)(lVar6 + 4);
        iVar2 = *(int *)(lVar6 + 8);
        lVar6 = FUN_0255db80(lVar11 + 0x1d0,&local_70);
        bVar3 = bVar3 & 1;
        bVar1 = *(byte *)(lVar6 + 4) & 1;
        if ((bVar1 < bVar3) || ((bVar1 <= bVar3 && (*(int *)(lVar6 + 8) < iVar2)))) {
          plVar12 = (long *)*plVar9;
          *plVar9 = 0;
          *plVar9 = 0;
          plVar8 = plVar9;
          while( true ) {
            plVar13 = plVar10;
            lVar6 = *plVar13;
            *plVar13 = 0;
            *plVar8 = lVar6;
            if (plVar13 == param_1) break;
            lVar11 = *param_3;
            local_68 = (**(code **)(*plVar12 + 0x38))(plVar12);
            plVar10 = plVar13 + -1;
            local_70 = (**(code **)(*(long *)*plVar10 + 0x38))();
            lVar6 = FUN_0255db80(lVar11 + 0x1d0,&local_68);
            bVar3 = *(byte *)(lVar6 + 4);
            iVar2 = *(int *)(lVar6 + 8);
            lVar6 = FUN_0255db80(lVar11 + 0x1d0,&local_70);
            bVar3 = bVar3 & 1;
            bVar1 = *(byte *)(lVar6 + 4) & 1;
            if ((bVar3 <= bVar1) && ((bVar3 < bVar1 || (iVar2 <= *(int *)(lVar6 + 8)))))
            goto LAB_0255dabc;
            plVar7 = (long *)*plVar13;
            *plVar13 = 0;
            plVar8 = plVar13;
            if (plVar7 != (long *)0x0) {
              plVar13 = plVar7 + 10;
              do {
                iVar2 = (int)*plVar13 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar5) {
                  *(int *)plVar13 = iVar2;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar2 == 0) {
                (**(code **)(*plVar7 + 0x10))();
              }
            }
          }
          plVar13 = param_1;
LAB_0255dabc:
          plVar8 = (long *)*plVar13;
          *plVar13 = 0;
          if (plVar8 != (long *)0x0) {
            plVar10 = plVar8 + 10;
            do {
              iVar2 = (int)*plVar10 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *(int *)plVar10 = iVar2;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
          local_74 = local_74 + 1;
          *plVar13 = (long)plVar12;
          if (local_74 == 8) {
            return plVar9 + 1 == param_2;
          }
        }
        plVar8 = plVar9 + 1;
        plVar10 = plVar9;
        if (plVar9 + 1 == param_2) {
          return true;
        }
      } while( true );
    }
  }
  return true;
}


