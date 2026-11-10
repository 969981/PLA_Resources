/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03214d58; name: FUN_03214d58
 */


void FUN_03214d58(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  FUN_03215294(param_1,*(undefined4 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x38));
  *param_1 = &PTR_LAB_042f2b60;
  param_1[4] = &PTR_LAB_042f2ba8;
  param_1[0x123] = param_2;
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
  }
  return;
}


