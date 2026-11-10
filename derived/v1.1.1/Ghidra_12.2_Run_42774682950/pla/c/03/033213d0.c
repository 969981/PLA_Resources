/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033213d0; name: FUN_033213d0
 */


undefined8 FUN_033213d0(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_28;
  
  FUN_03322848(&local_28,DAT_0444b298,param_1,1);
  plVar4 = local_28;
  local_28 = (long *)0x0;
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0332145c(plVar4);
    if (plVar4[1] != 0) {
      plVar1 = plVar4 + 2;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  return uVar5;
}


