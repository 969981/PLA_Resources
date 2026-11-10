/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb0c88; name: FUN_02bb0c88
 */


void FUN_02bb0c88(long param_1,int param_2,int param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  undefined1 local_50 [20];
  int local_3c;
  int aiStack_38 [2];
  
  local_3c = param_3;
  aiStack_38[0] = param_2;
  if (*param_4 != 0) {
    FUN_02ba48cc(param_1 + 0x230,*(undefined4 *)(*param_4 + 0xa0));
  }
  local_50[0] = 0;
  piVar6 = *(int **)(param_1 + 0xe8);
joined_r0x02bb0cd8:
  if (piVar6 == *(int **)(param_1 + 0xf0)) {
    FUN_02bb199c((undefined8 *)(param_1 + 0xe8),aiStack_38,&local_3c,param_4,local_50);
LAB_02bb0d74:
    lVar8 = *(long *)(param_1 + 0x240);
    for (lVar7 = *(long *)(param_1 + 0x238); lVar7 != lVar8; lVar7 = lVar7 + 0x18) {
      *(undefined1 *)(lVar7 + 0x10) = 1;
    }
  }
  else {
    if ((*piVar6 != param_2) || (piVar6[1] != param_3)) goto LAB_02bb0ce0;
    param_4 = (long *)*param_4;
    plVar5 = *(long **)(piVar6 + 2);
    if (plVar5 != param_4) {
      if (param_4 != (long *)0x0) {
        plVar5 = param_4 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *(int *)plVar5 = (int)*plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar5 = *(long **)(piVar6 + 2);
      }
      *(long **)(piVar6 + 2) = param_4;
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 10;
        do {
          iVar4 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      goto LAB_02bb0d74;
    }
  }
  return;
LAB_02bb0ce0:
  piVar6 = piVar6 + 8;
  goto joined_r0x02bb0cd8;
}


