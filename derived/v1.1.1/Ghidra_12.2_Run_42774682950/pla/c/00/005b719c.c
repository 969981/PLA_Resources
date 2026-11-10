/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b719c; name: FUN_005b719c
 */


void FUN_005b719c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = (undefined8 *)(param_2 + 0x58);
  do {
    uVar5 = *puVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar2) {
      *puVar8 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  *param_1 = uVar5;
  param_1[1] = uVar3;
  puVar8 = (undefined8 *)(param_2 + 0x68);
  do {
    uVar5 = *puVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar2) {
      *puVar8 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  param_1[2] = uVar5;
  puVar8 = (undefined8 *)(param_2 + 0x70);
  do {
    uVar5 = *puVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar2) {
      *puVar8 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar9 = param_1 + 5;
  *puVar9 = 0;
  puVar8 = param_1 + 4;
  *puVar8 = puVar9;
  param_1[3] = uVar5;
  param_1[6] = 0;
                    /* try { // try from 005b7208 to 005b720f has its CatchHandler @ 005b7268 */
  FUN_002ef750(param_2 + 0x78);
  FUN_0051f7a0(puVar8,param_1[5]);
  param_1[4] = *(undefined8 *)(param_2 + 0x98);
  plVar4 = (long *)(param_2 + 0xa0);
  lVar6 = *plVar4;
  lVar7 = *(long *)(param_2 + 0xa8);
  param_1[5] = lVar6;
  param_1[6] = lVar7;
  if (lVar7 == 0) {
    *puVar8 = puVar9;
  }
  else {
    *(undefined8 **)(lVar6 + 0x10) = puVar9;
    *(long **)(param_2 + 0x98) = plVar4;
    *plVar4 = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
  }
                    /* try { // try from 005b724c to 005b7253 has its CatchHandler @ 005b7264 */
  FUN_002ef790(param_2 + 0x78);
  return;
}


