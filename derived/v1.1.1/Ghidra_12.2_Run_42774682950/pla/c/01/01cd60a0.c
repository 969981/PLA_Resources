/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd60a0; name: FUN_01cd60a0
 */


undefined8 FUN_01cd60a0(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = *(float *)(param_2 + 1);
  fVar10 = *(float *)(param_1 + 1);
  fVar9 = *(float *)(param_3 + 1);
  if (fVar10 < fVar11) {
    lVar7 = *param_1;
    *param_1 = 0;
    if (fVar11 < fVar9) {
      lVar8 = *param_3;
      *param_3 = 0;
      *param_1 = lVar8;
      *(int *)(param_1 + 1) = (int)param_3[1];
      plVar5 = (long *)*param_3;
      *param_3 = 0;
      if (plVar5 != (long *)0x0) {
        lVar8 = plVar5[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
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
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      *param_3 = lVar7;
      uVar6 = 1;
    }
    else {
      lVar8 = *param_2;
      *param_2 = 0;
      *param_1 = lVar8;
      *(int *)(param_1 + 1) = (int)param_2[1];
      plVar5 = (long *)*param_2;
      *param_2 = 0;
      if (plVar5 != (long *)0x0) {
        lVar8 = plVar5[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
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
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      *param_2 = lVar7;
      *(float *)(param_2 + 1) = fVar10;
      if (*(float *)(param_3 + 1) <= fVar10) goto LAB_01cd6138;
      *param_2 = 0;
      lVar8 = *param_3;
      *param_3 = 0;
      *param_2 = lVar8;
      *(int *)(param_2 + 1) = (int)param_3[1];
      plVar5 = (long *)*param_3;
      *param_3 = 0;
      if (plVar5 != (long *)0x0) {
        lVar8 = plVar5[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
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
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      uVar6 = 2;
      *param_3 = lVar7;
    }
    *(float *)(param_3 + 1) = fVar10;
  }
  else {
    if (fVar9 <= fVar11) {
      return 0;
    }
    lVar8 = *param_2;
    *param_2 = 0;
    lVar7 = *param_3;
    *param_3 = 0;
    *param_2 = lVar7;
    *(int *)(param_2 + 1) = (int)param_3[1];
    plVar5 = (long *)*param_3;
    *param_3 = 0;
    if (plVar5 != (long *)0x0) {
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    *param_3 = lVar8;
    *(float *)(param_3 + 1) = fVar11;
    fVar9 = *(float *)(param_1 + 1);
    if (fVar9 < *(float *)(param_2 + 1)) {
      lVar8 = *param_1;
      *param_1 = 0;
      lVar7 = *param_2;
      *param_2 = 0;
      *param_1 = lVar7;
      *(int *)(param_1 + 1) = (int)param_2[1];
      plVar5 = (long *)*param_2;
      *param_2 = 0;
      if (plVar5 != (long *)0x0) {
        lVar7 = plVar5[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
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
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      *param_2 = lVar8;
      *(float *)(param_2 + 1) = fVar9;
      return 2;
    }
LAB_01cd6138:
    uVar6 = 1;
  }
  return uVar6;
}


