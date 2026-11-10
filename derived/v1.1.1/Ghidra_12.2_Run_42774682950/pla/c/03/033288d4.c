/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033288d4; name: FUN_033288d4
 */


long FUN_033288d4(long *param_1,uint param_2,long *param_3,ulong param_4,uint *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
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
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      plVar5 = param_3 + 1;
      do {
        plVar1 = (long *)(lVar4 + lVar7 * 8);
        lVar7 = lVar7 + 2;
        *plVar1 = plVar5[-1];
        plVar5[-1] = 0;
        plVar1[1] = *plVar5;
        *plVar5 = 0;
        plVar5 = plVar5 + 2;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar7);
    }
    if ((param_4 & 1) != 0) {
      *(long *)(lVar4 + lVar7 * 8) = param_3[lVar7];
      param_3[lVar7] = 0;
    }
    uVar8 = 0;
    plVar5 = (long *)*param_3;
    while( true ) {
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      uVar8 = uVar8 + 1;
      if (uVar8 == (param_4 & 0xffffffff)) break;
      plVar5 = (long *)param_3[uVar8];
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
  return lVar4;
}


