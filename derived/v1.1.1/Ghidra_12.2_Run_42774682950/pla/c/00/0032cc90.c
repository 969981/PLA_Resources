/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032cc90; name: FUN_0032cc90
 */


/* WARNING: Removing unreachable block (ram,0x0032cd3c) */

long FUN_0032cc90(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  for (lVar5 = *param_1; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
    if (*(long *)(lVar5 + 8) == param_2) goto LAB_0032cd74;
  }
  uVar6 = param_1[5];
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  puVar4 = (undefined8 *)(*(code *)param_1[9])(uVar6);
  *puVar4 = 0;
  puVar4[1] = 0x18;
  plVar1 = param_1 + 2;
  puVar4[2] = uVar6;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + uVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar5 = FUN_0032c348(puVar4,param_2,param_1);
  lVar8 = *param_1;
  *(long *)(lVar5 + 0x20) = lVar8;
  lVar7 = *param_1;
  if (lVar7 == lVar8) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
LAB_0032cd74:
      lVar7 = tpidr_el0;
      *(long *)(lVar7 + 0x10) = param_1[4];
      *(long *)(lVar7 + 0x18) = lVar5;
      param_1[1] = lVar5;
      return lVar5;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    *(long *)(lVar5 + 0x20) = lVar7;
    lVar8 = *param_1;
    if (lVar8 == lVar7) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_0032cd74;
    }
    else {
      ClearExclusiveLocal();
    }
    lVar7 = lVar8;
  } while( true );
}


