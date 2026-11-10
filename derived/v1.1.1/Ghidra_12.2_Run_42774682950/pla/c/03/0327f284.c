/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327f284; name: FUN_0327f284
 */


long * FUN_0327f284(long *param_1,uint param_2,long *param_3,uint param_4,uint *param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong local_48;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar5 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar5) {
    uVar5 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar5) {
    param_2 = uVar5;
  }
  FUN_032bd100(param_2,8,*param_5,&local_48);
  uVar5 = *param_5;
  plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    *plVar3 = *param_3;
    *param_3 = 0;
    if (param_4 != 1) {
      plVar3[1] = param_3[1];
      param_3[1] = 0;
      if (param_4 != 2) {
        plVar3[2] = param_3[2];
        param_3[2] = 0;
        if (param_4 != 3) {
          plVar3[3] = param_3[3];
          param_3[3] = 0;
          if (param_4 != 4) {
            lVar6 = (ulong)param_4 - 4;
            plVar4 = param_3 + 4;
            plVar7 = plVar3 + 4;
            do {
              lVar6 = lVar6 + -1;
              *plVar7 = *plVar4;
              *plVar4 = 0;
              plVar4 = plVar4 + 1;
              plVar7 = plVar7 + 1;
            } while (lVar6 != 0);
          }
        }
      }
    }
    plVar4 = (long *)*param_3;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar7 = plVar4 + 2;
      do {
        lVar6 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
    if (param_4 != 1) {
      plVar4 = (long *)param_3[1];
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar7 = plVar4 + 2;
        do {
          lVar6 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      if (param_4 != 2) {
        plVar4 = (long *)param_3[2];
        if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
          plVar7 = plVar4 + 2;
          do {
            lVar6 = *plVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = lVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar6 + -1 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
        if (param_4 != 3) {
          plVar4 = (long *)param_3[3];
          if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
            plVar7 = plVar4 + 2;
            do {
              lVar6 = *plVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *plVar7 = lVar6 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar6 + -1 == 0) {
              (**(code **)(*plVar4 + 0x18))();
            }
          }
          if (param_4 != 4) {
            uVar8 = 4;
            plVar4 = (long *)param_3[4];
            while( true ) {
              if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
                plVar7 = plVar4 + 2;
                do {
                  lVar6 = *plVar7;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar2) {
                    *plVar7 = lVar6 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar6 + -1 == 0) {
                  (**(code **)(*plVar4 + 0x18))();
                }
              }
              uVar8 = uVar8 + 1;
              if (uVar8 == param_4) break;
              plVar4 = (long *)param_3[uVar8];
            }
          }
        }
      }
    }
  }
  if (-1 < (int)uVar5) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar5 & 0x3fffffff) << 3);
  }
  if (local_48 < 0x1fffffff8) {
    uVar5 = (uint)(local_48 >> 3);
  }
  else {
    uVar5 = 0x3fffffff;
  }
  *param_5 = uVar5;
  return plVar3;
}


