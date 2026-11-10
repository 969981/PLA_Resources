/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0255b140; name: FUN_0255b140
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0255b140(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  bVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
  bVar6 = (**(code **)(*(long *)*param_1 + 0x28))();
  fVar12 = (float)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,*param_4);
  fVar13 = (float)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,*param_4);
  bVar7 = (**(code **)(*(long *)*param_3 + 0x28))();
  bVar8 = (**(code **)(*(long *)*param_2 + 0x28))();
  fVar14 = (float)(**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3,*param_4);
  fVar15 = (float)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,*param_4);
  if (bVar5 <= bVar6 && (bVar5 < bVar6 || fVar12 <= fVar13)) {
    if (bVar8 >= bVar7 && (bVar8 > bVar7 || fVar15 >= fVar14)) {
      return 0;
    }
    lVar11 = *param_2;
    *param_2 = 0;
    lVar10 = *param_3;
    *param_3 = 0;
    *param_2 = lVar10;
    plVar9 = (long *)*param_3;
    *param_3 = 0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
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
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *param_3 = lVar11;
    bVar5 = (**(code **)(*(long *)*param_2 + 0x28))();
    bVar6 = (**(code **)(*(long *)*param_1 + 0x28))();
    fVar12 = (float)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,*param_4);
    fVar13 = (float)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,*param_4);
    if (bVar5 <= bVar6) {
      if (bVar5 < bVar6) {
        return 1;
      }
      if (fVar12 <= fVar13) {
        return 1;
      }
    }
    lVar11 = *param_1;
    *param_1 = 0;
    lVar10 = *param_2;
    *param_2 = 0;
    *param_1 = lVar10;
    plVar9 = (long *)*param_2;
    *param_2 = 0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
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
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *param_2 = lVar11;
  }
  else {
    lVar10 = *param_1;
    *param_1 = 0;
    if (bVar8 < bVar7 || bVar8 <= bVar7 && fVar15 < fVar14) {
      lVar11 = *param_3;
      *param_3 = 0;
      *param_1 = lVar11;
      plVar9 = (long *)*param_3;
      *param_3 = 0;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 10;
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
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      *param_3 = lVar10;
      return 1;
    }
    lVar11 = *param_2;
    *param_2 = 0;
    *param_1 = lVar11;
    plVar9 = (long *)*param_2;
    *param_2 = 0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
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
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *param_2 = lVar10;
    bVar5 = (**(code **)(*(long *)*param_3 + 0x28))();
    bVar6 = (**(code **)(*(long *)*param_2 + 0x28))();
    fVar12 = (float)(**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3,*param_4);
    fVar13 = (float)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,*param_4);
    if (bVar5 <= bVar6) {
      if (bVar5 < bVar6) {
        return 1;
      }
      if (fVar12 <= fVar13) {
        return 1;
      }
    }
    lVar11 = *param_2;
    *param_2 = 0;
    lVar10 = *param_3;
    *param_3 = 0;
    *param_2 = lVar10;
    plVar9 = (long *)*param_3;
    *param_3 = 0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
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
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *param_3 = lVar11;
  }
  return 2;
}


