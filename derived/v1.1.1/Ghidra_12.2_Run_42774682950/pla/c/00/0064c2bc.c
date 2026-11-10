/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064c2bc; name: FUN_0064c2bc
 */


void FUN_0064c2bc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x40);
  *param_1 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x38);
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}


