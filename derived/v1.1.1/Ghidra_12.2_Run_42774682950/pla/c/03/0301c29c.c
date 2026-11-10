/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301c29c; name: FUN_0301c29c
 */


undefined8 FUN_0301c29c(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x22);
  puVar5 = (uint *)(param_1 + 0x22);
  uVar4 = (ulong)uVar1 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar6 = *puVar5;
  if (uVar6 == uVar1) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar3) {
      *puVar5 = uVar1 + 0x200 & 0xfffffe00 | puVar5[uVar4 + 1];
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      puVar5 = puVar5 + uVar4 + 1;
      goto LAB_0301c344;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    uVar4 = (ulong)(uVar6 & 0x1ff);
    DataMemoryBarrier(2,3);
    uVar1 = *puVar5;
    if (uVar1 == uVar6) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar3) {
        *puVar5 = uVar6 + 0x200 & 0xfffffe00 | *(uint *)((long)param_1 + uVar4 * 4 + 0x114);
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') break;
    }
    else {
      ClearExclusiveLocal();
    }
    uVar6 = uVar1;
  } while( true );
  puVar5 = (uint *)((long)param_1 + uVar4 * 4 + 0x114);
LAB_0301c344:
  *puVar5 = 0x1ff;
  DataMemoryBarrier(2,3);
  return *(undefined8 *)(*param_1 + uVar4 * 8);
}


