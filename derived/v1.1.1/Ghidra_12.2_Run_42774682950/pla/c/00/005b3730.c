/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b3730; name: FUN_005b3730
 */


void FUN_005b3730(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  plVar6 = (long *)(param_2 & 0xfffffffffffffffc);
  if (*plVar6 == 0) {
    uVar5 = (ulong)*(byte *)(plVar6 + 1);
    lVar8 = plVar6[4];
  }
  else {
    uVar5 = plVar6[1];
    lVar8 = plVar6[4];
  }
  if (lVar8 == 0) {
    uVar7 = (ulong)*(byte *)(plVar6 + 5);
  }
  else {
    uVar7 = plVar6[5];
  }
  uVar1 = param_1[2];
  param_1[1] = uVar5 + uVar7 + param_1[1] + 0x20;
  if (uVar1 < 10) {
    param_1[2] = uVar1 + 1;
    puVar4 = param_1 + uVar1 * 4 + 3;
  }
  else {
    puVar4 = (ulong *)*param_1;
    do {
      uVar7 = *puVar4;
      uVar5 = uVar7 + 0x20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *puVar4 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar4[1] < uVar5) {
      puVar4 = (ulong *)FUN_003f5a34(puVar4,0x20);
    }
    else {
      puVar4 = (ulong *)((long)puVar4 + uVar7 + 0x20);
    }
  }
  *puVar4 = param_2;
  FUN_003dea10(param_1 + 0x2b);
  return;
}


