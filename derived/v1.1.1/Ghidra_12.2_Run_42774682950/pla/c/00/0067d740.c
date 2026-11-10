/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067d740; name: FUN_0067d740
 */


void FUN_0067d740(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  *param_1 = *param_2;
  lVar5 = param_2[1];
  param_1[1] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar4 = FUN_00612290();
  param_1[5] = uVar4;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar4 = FUN_00612290();
  param_1[9] = uVar4;
  return;
}


