/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f799f8; name: FUN_02f799f8
 */


long FUN_02f799f8(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
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
    puVar6 = (undefined8 *)(param_3 + 8);
    puVar8 = (undefined8 *)(lVar4 + 8);
    uVar10 = (ulong)param_4;
    do {
      puVar8[-1] = puVar6[-1];
      uVar10 = uVar10 - 1;
      *puVar8 = *puVar6;
      *puVar6 = 0;
      puVar6 = puVar6 + 2;
      puVar8 = puVar8 + 2;
    } while (uVar10 != 0);
    uVar10 = 0;
    do {
      plVar5 = *(long **)(param_3 + uVar10 * 0x10 + 8);
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_4);
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


