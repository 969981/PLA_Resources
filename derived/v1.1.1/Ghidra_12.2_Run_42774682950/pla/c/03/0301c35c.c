/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301c35c; name: FUN_0301c35c
 */


void FUN_0301c35c(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  
  uVar3 = *param_2;
  puVar1 = (uint *)(param_1 + 0x110);
  uVar2 = *(uint *)(param_1 + 0x110);
  DataMemoryBarrier(2,3);
  puVar1[(long)(int)uVar3 + 1] = uVar2 & 0x1ff;
  uVar6 = *puVar1;
  if (uVar6 == uVar2) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar2 & 0xfffffe00 | uVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    DataMemoryBarrier(2,3);
    puVar1[(long)(int)uVar3 + 1] = uVar6 & 0x1ff;
    uVar2 = *puVar1;
    if (uVar2 == uVar6) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar6 & 0xfffffe00 | uVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    uVar6 = uVar2;
  } while( true );
}


