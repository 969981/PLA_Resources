/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332802c; name: FUN_0332802c
 */


long FUN_0332802c(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong local_48;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar7 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar7) {
    uVar7 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar7) {
    param_2 = uVar7;
  }
  FUN_032bd100(param_2,0x10,*param_5,&local_48);
  uVar7 = *param_5;
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    uVar6 = 0;
    do {
      lVar8 = uVar6 * 0x10;
      lVar9 = *(long *)(param_3 + lVar8);
      *(long *)(lVar4 + lVar8) = lVar9;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
        plVar5 = (long *)(lVar9 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar6 = uVar6 + 1;
      *(undefined1 *)(lVar4 + lVar8 + 8) = *(undefined1 *)(param_3 + lVar8 + 8);
    } while (uVar6 != param_4);
    uVar6 = 0;
    do {
      plVar5 = *(long **)(param_3 + uVar6 * 0x10);
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_4);
  }
  if (-1 < (int)uVar7) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar7 & 0x3fffffff) << 4);
  }
  if (local_48 < 0x3fffffff0) {
    uVar7 = (uint)(local_48 >> 4);
  }
  else {
    uVar7 = 0x3fffffff;
  }
  *param_5 = uVar7;
  return lVar4;
}


