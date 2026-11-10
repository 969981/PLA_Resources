/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f50c0; name: FUN_003f50c0
 */


void FUN_003f50c0(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  do {
    uVar4 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar4 + 0x20;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (param_1[1] < uVar4 + 0x20) {
    puVar3 = (undefined8 *)FUN_003f5a34(param_1,0x20);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    return;
  }
  *(undefined8 *)((long)param_1 + uVar4 + 0x20) = 0;
  *(undefined8 *)((long)param_1 + uVar4 + 0x28) = 0;
  *(undefined8 *)((long)param_1 + uVar4 + 0x30) = 0;
  return;
}


