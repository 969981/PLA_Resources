/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cdb80; name: FUN_031cdb80
 */


long * FUN_031cdb80(long *param_1,uint param_2,long *param_3,uint param_4,uint *param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  ulong local_48;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar6 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar6) {
    uVar6 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar6) {
    param_2 = uVar6;
  }
  FUN_032bd100(param_2,8,*param_5,&local_48);
  uVar6 = *param_5;
  plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    *plVar3 = *param_3;
    *param_3 = 0;
    if (param_4 != 1) {
      lVar5 = (ulong)param_4 - 1;
      plVar4 = param_3;
      plVar7 = plVar3;
      do {
        plVar7 = plVar7 + 1;
        plVar4 = plVar4 + 1;
        lVar5 = lVar5 + -1;
        *plVar7 = *plVar4;
        *plVar4 = 0;
      } while (lVar5 != 0);
    }
    plVar4 = (long *)*param_3;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar7 = plVar4 + 2;
      do {
        lVar5 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
    if (param_4 != 1) {
      uVar8 = 1;
      do {
        plVar4 = (long *)param_3[uVar8];
        if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
          plVar7 = plVar4 + 2;
          do {
            lVar5 = *plVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar5 + -1 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != param_4);
    }
  }
  if (-1 < (int)uVar6) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar6 & 0x3fffffff) << 3);
  }
  if (local_48 < 0x1fffffff8) {
    uVar6 = (uint)(local_48 >> 3);
  }
  else {
    uVar6 = 0x3fffffff;
  }
  *param_5 = uVar6;
  return plVar3;
}


