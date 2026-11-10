/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0255b510; name: FUN_0255b510
 */


int FUN_0255b510(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  iVar6 = FUN_0255b140();
  bVar4 = (**(code **)(*(long *)*param_4 + 0x28))();
  bVar5 = (**(code **)(*(long *)*param_3 + 0x28))();
  fVar11 = (float)(**(code **)(*(long *)*param_4 + 0x30))((long *)*param_4,*param_5);
  fVar12 = (float)(**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3,*param_5);
  if (bVar4 <= bVar5) {
    bVar3 = false;
    if ((bVar5 <= bVar4) && (bVar3 = false, !NAN(fVar12) && !NAN(fVar11))) {
      bVar3 = fVar12 < fVar11;
    }
    if (!bVar3) {
      return iVar6;
    }
  }
  lVar10 = *param_3;
  *param_3 = 0;
  lVar9 = *param_4;
  *param_4 = 0;
  *param_3 = lVar9;
  plVar8 = (long *)*param_4;
  *param_4 = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  *param_4 = lVar10;
  bVar4 = (**(code **)(*(long *)*param_3 + 0x28))();
  bVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  fVar11 = (float)(**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3,*param_5);
  fVar12 = (float)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,*param_5);
  if ((bVar5 < bVar4) || ((iVar7 = iVar6 + 1, bVar5 <= bVar4 && (fVar12 < fVar11)))) {
    lVar10 = *param_2;
    *param_2 = 0;
    lVar9 = *param_3;
    *param_3 = 0;
    *param_2 = lVar9;
    plVar8 = (long *)*param_3;
    *param_3 = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *param_3 = lVar10;
    bVar4 = (**(code **)(*(long *)*param_2 + 0x28))();
    bVar5 = (**(code **)(*(long *)*param_1 + 0x28))();
    fVar11 = (float)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,*param_5);
    fVar12 = (float)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,*param_5);
    if ((bVar5 < bVar4) || ((iVar7 = iVar6 + 2, bVar5 <= bVar4 && (fVar12 < fVar11)))) {
      lVar10 = *param_1;
      *param_1 = 0;
      lVar9 = *param_2;
      *param_2 = 0;
      *param_1 = lVar9;
      plVar8 = (long *)*param_2;
      *param_2 = 0;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 10;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      iVar7 = iVar6 + 3;
      *param_2 = lVar10;
    }
  }
  return iVar7;
}


