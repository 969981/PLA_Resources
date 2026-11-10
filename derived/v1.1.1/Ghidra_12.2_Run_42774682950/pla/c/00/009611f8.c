/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009611f8; name: FUN_009611f8
 */


void FUN_009611f8(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (0xf < *(ulong *)(param_1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = *param_2;
  *(long *)(param_1 + *(ulong *)(param_1 + 0x80) * 8) = lVar4;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  return;
}


