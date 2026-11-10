/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba57e0; name: FUN_02ba57e0
 */


uint FUN_02ba57e0(uint param_1,long *param_2,long *param_3,char *param_4,char *param_5,int *param_6,
                 int *param_7,long *param_8,undefined8 *param_9,char *param_10,char *param_11,
                 int *param_12,int *param_13,int *param_14,int *param_15)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  plVar5 = (long *)*param_2;
  param_3 = (long *)*param_3;
  if (plVar5 != param_3) {
    if (param_3 != (long *)0x0) {
      plVar5 = param_3 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)*param_2;
    }
    *param_2 = (long)param_3;
    if (plVar5 != (long *)0x0) {
      plVar7 = plVar5 + 10;
      do {
        lVar4 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    param_1 = 1;
  }
  uVar13 = param_1;
  if ((*param_4 == '\0') || (*param_5 == '\0')) {
    if (*param_5 != '\0' || *param_4 != '\0') goto LAB_02ba589c;
  }
  else if (*(long *)(param_4 + 8) != *(long *)(param_5 + 8)) {
LAB_02ba589c:
    uVar1 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)param_4 = *(undefined8 *)param_5;
    *(undefined8 *)(param_4 + 8) = uVar1;
    uVar13 = 1;
  }
  if ((((*param_6 != *param_7) || (param_6[1] != param_7[1])) || (param_6[2] != param_7[2])) ||
     (((param_6[3] != param_7[3] || (param_6[4] != param_7[4])) ||
      (uVar12 = uVar13, param_6[5] != param_7[5])))) {
    uVar1 = *(undefined8 *)param_7;
    uVar12 = 1;
    uVar10 = *(undefined8 *)(param_7 + 4);
    *(undefined8 *)(param_6 + 2) = *(undefined8 *)(param_7 + 2);
    *(undefined8 *)(param_6 + 4) = uVar10;
    *(undefined8 *)param_6 = uVar1;
  }
  plVar5 = (long *)*param_8;
  plVar7 = (long *)*param_9;
  uVar6 = uVar12;
  if (plVar5 != plVar7) {
    if (plVar7 != (long *)0x0) {
      plVar5 = plVar7 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)*param_8;
    }
    *param_8 = (long)plVar7;
    if (plVar5 != (long *)0x0) {
      plVar7 = plVar5 + 10;
      do {
        lVar4 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    uVar6 = 1;
  }
  uVar9 = uVar6;
  if ((*param_10 == '\0') || (*param_11 == '\0')) {
    if (*param_11 == '\0' && *param_10 == '\0') goto LAB_02ba59c4;
  }
  else if (*(long *)(param_10 + 8) == *(long *)(param_11 + 8)) goto LAB_02ba59c4;
  uVar1 = *(undefined8 *)(param_11 + 8);
  *(undefined8 *)param_10 = *(undefined8 *)param_11;
  *(undefined8 *)(param_10 + 8) = uVar1;
  uVar9 = 1;
LAB_02ba59c4:
  if (((((*param_12 != *param_13) || (param_12[1] != param_13[1])) || (param_12[2] != param_13[2]))
      || ((param_12[3] != param_13[3] || (param_12[4] != param_13[4])))) ||
     (uVar11 = uVar9, param_12[5] != param_13[5])) {
    uVar1 = *(undefined8 *)(param_13 + 2);
    uVar10 = *(undefined8 *)(param_13 + 4);
    *(undefined8 *)param_12 = *(undefined8 *)param_13;
    uVar11 = 1;
    *(undefined8 *)(param_12 + 2) = uVar1;
    *(undefined8 *)(param_12 + 4) = uVar10;
  }
  uVar8 = uVar11;
  if (*param_14 != *param_15) {
    uVar8 = 1;
    *param_14 = *param_15;
  }
  return (param_1 | uVar13 | uVar12 | uVar6 | uVar9 | uVar11 | uVar8) & 1;
}


