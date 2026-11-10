/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0255bb40; name: FUN_0255bb40
 */


bool FUN_0255bb40(long *param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  int local_64;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    bVar4 = (**(code **)(*(long *)param_2[-1] + 0x28))();
    bVar5 = (**(code **)(*(long *)*param_1 + 0x28))();
    fVar14 = (float)(**(code **)(*(long *)param_2[-1] + 0x30))((long *)param_2[-1],*param_3);
    fVar15 = (float)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,*param_3);
    if (bVar4 <= bVar5) {
      bVar3 = false;
      if ((bVar5 <= bVar4) && (bVar3 = false, !NAN(fVar15) && !NAN(fVar14))) {
        bVar3 = fVar15 < fVar14;
      }
      if (!bVar3) {
        return true;
      }
    }
    lVar10 = *param_1;
    *param_1 = 0;
    lVar9 = param_2[-1];
    param_2[-1] = 0;
    *param_1 = lVar9;
    plVar7 = (long *)param_2[-1];
    param_2[-1] = 0;
    if (plVar7 != (long *)0x0) {
      plVar11 = plVar7 + 10;
      do {
        iVar2 = (int)*plVar11 + -1;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    param_2[-1] = lVar10;
    break;
  case 3:
    FUN_0255b140(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_0255b510(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_0255b7c0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_0255b140(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      local_64 = 0;
      plVar7 = param_1 + 3;
      plVar11 = param_1 + 2;
      do {
        plVar8 = plVar7;
        bVar4 = (**(code **)(*(long *)*plVar8 + 0x28))();
        bVar5 = (**(code **)(*(long *)*plVar11 + 0x28))();
        fVar14 = (float)(**(code **)(*(long *)*plVar8 + 0x30))((long *)*plVar8,*param_3);
        fVar15 = (float)(**(code **)(*(long *)*plVar11 + 0x30))((long *)*plVar11,*param_3);
        if (bVar5 < bVar4) {
LAB_0255bcc0:
          plVar13 = (long *)*plVar8;
          *plVar8 = 0;
          *plVar8 = 0;
          plVar7 = plVar8;
          while( true ) {
            plVar12 = plVar11;
            lVar9 = *plVar12;
            *plVar12 = 0;
            *plVar7 = lVar9;
            if (plVar12 == param_1) break;
            bVar4 = (**(code **)(*plVar13 + 0x28))(plVar13);
            plVar11 = plVar12 + -1;
            bVar5 = (**(code **)(*(long *)*plVar11 + 0x28))();
            fVar14 = (float)(**(code **)(*plVar13 + 0x30))(plVar13,*param_3);
            fVar15 = (float)(**(code **)(*(long *)*plVar11 + 0x30))((long *)*plVar11,*param_3);
            if ((bVar4 <= bVar5) && ((bVar4 < bVar5 || (fVar14 <= fVar15)))) goto LAB_0255bd98;
            plVar6 = (long *)*plVar12;
            *plVar12 = 0;
            plVar7 = plVar12;
            if (plVar6 != (long *)0x0) {
              plVar12 = plVar6 + 10;
              do {
                iVar2 = (int)*plVar12 + -1;
                cVar1 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar3) {
                  *(int *)plVar12 = iVar2;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (iVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))();
              }
            }
          }
          plVar12 = param_1;
LAB_0255bd98:
          plVar7 = (long *)*plVar12;
          *plVar12 = 0;
          if (plVar7 != (long *)0x0) {
            plVar11 = plVar7 + 10;
            do {
              iVar2 = (int)*plVar11 + -1;
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *(int *)plVar11 = iVar2;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
          }
          local_64 = local_64 + 1;
          *plVar12 = (long)plVar13;
          if (local_64 == 8) {
            return plVar8 + 1 == param_2;
          }
        }
        else {
          bVar3 = false;
          if ((bVar5 <= bVar4) && (bVar3 = false, !NAN(fVar15) && !NAN(fVar14))) {
            bVar3 = fVar15 < fVar14;
          }
          if (bVar3) goto LAB_0255bcc0;
        }
        plVar7 = plVar8 + 1;
        plVar11 = plVar8;
        if (plVar8 + 1 == param_2) {
          return true;
        }
      } while( true );
    }
  }
  return true;
}


