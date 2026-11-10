/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0262265c; name: FUN_0262265c
 */


void FUN_0262265c(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  iVar1 = *param_1;
  if (iVar1 == *param_2) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = param_3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  *param_2 = iVar1;
  return;
}


