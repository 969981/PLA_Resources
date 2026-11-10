/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052b970; name: FUN_0052b970
 */


long FUN_0052b970(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *local_18;
  
  do {
    uVar6 = *param_1;
    uVar1 = uVar6 + 0x140;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[1] < uVar1) {
    lVar5 = FUN_003f5a34(param_1,0x140);
  }
  else {
    lVar5 = (long)param_1 + uVar6 + 0x20;
  }
  local_18 = (undefined8 *)*param_2;
  *param_2 = 0;
                    /* try { // try from 0052b9bc to 0052b9c7 has its CatchHandler @ 0052b9f4 */
  FUN_004ff174(lVar5,&local_18);
  puVar4 = local_18;
  local_18 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 0052b9dc to 0052b9df has its CatchHandler @ 0052b9f0 */
    (**(code **)*puVar4)();
  }
  return lVar5;
}


