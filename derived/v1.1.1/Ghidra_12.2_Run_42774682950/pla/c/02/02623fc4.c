/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02623fc4; name: FUN_02623fc4
 */


void FUN_02623fc4(long *param_1,long *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = *param_2;
  do {
    if (*param_1 != lVar3) {
      ClearExclusiveLocal();
      *param_2 = *param_1;
      return;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = param_3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}


