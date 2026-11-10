/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e27f0; name: FUN_003e27f0
 */


void FUN_003e27f0(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  if (param_2 <= uVar4) {
    if (uVar4 == param_2) {
      return;
    }
    if (uVar4 == 0) {
      return;
    }
    uVar5 = uVar4 * 0xff + param_2 >> 8;
    param_2 = uVar4 - 1;
    if (uVar5 <= uVar4 - 1) {
      param_2 = uVar5;
    }
  }
  puVar1 = (ulong *)(param_1 + 0x18);
  do {
    if (*puVar1 != uVar4) {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = param_2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


