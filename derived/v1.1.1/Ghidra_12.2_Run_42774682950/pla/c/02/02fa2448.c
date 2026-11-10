/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa2448; name: FUN_02fa2448
 */


void FUN_02fa2448(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  if (param_2 != param_1) {
    plVar5 = param_1 + 6;
    lVar6 = *plVar5;
    uVar8 = param_2[1];
    uVar7 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    uVar11 = param_2[4];
    plVar4 = param_2 + 6;
    uVar13 = param_2[7];
    lVar12 = *plVar4;
    param_1[5] = param_2[5];
    param_1[4] = uVar11;
    param_1[7] = uVar13;
    param_1[6] = lVar12;
    param_1[1] = uVar8;
    *param_1 = uVar7;
    param_1[3] = uVar10;
    param_1[2] = uVar9;
    plVar1 = (long *)0x0;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + (long)plVar5);
    }
    lVar6 = 0;
    if (*plVar4 != 0) {
      lVar6 = (long)plVar4 + (*plVar4 - (long)plVar5);
    }
    *plVar5 = lVar6;
    if (((lVar6 != 0) && (lVar6 = lVar6 + (long)plVar5, lVar6 != 0)) && (*(long *)(lVar6 + 8) != 0))
    {
      plVar4 = (long *)(lVar6 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if ((plVar1 != (long *)0x0) && (plVar1[1] != 0)) {
      plVar4 = plVar1 + 2;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02fa24ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x18))();
        return;
      }
    }
  }
  return;
}


