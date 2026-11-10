/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffef1c; name: FUN_02ffef1c
 */


void FUN_02ffef1c(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 != param_2) {
    if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
      plVar1 = (long *)(param_2 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(param_1 + 0x78);
    }
    if (lVar5 != 0) {
      FUN_032d647c(lVar5);
    }
  }
  uVar4 = *(uint *)(param_1 + 0x54) & 0xff7fffff;
  *(long *)(param_1 + 0x78) = param_2;
  if (param_2 != 0) {
    if (((long)*(short *)(param_2 + 0x1a) & 0x80000000U) != 0) {
      uVar4 = *(uint *)(param_1 + 0x54) | 0x800000;
    }
  }
  *(uint *)(param_1 + 0x54) = uVar4;
  return;
}


