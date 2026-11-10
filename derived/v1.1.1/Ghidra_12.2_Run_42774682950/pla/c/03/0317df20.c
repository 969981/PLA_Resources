/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317df20; name: FUN_0317df20
 */


undefined4 * FUN_0317df20(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  *param_1 = *param_2;
  plVar3 = *(long **)(param_1 + 2);
  plVar4 = *(long **)(param_2 + 2);
  if (plVar3 != plVar4) {
    uVar5 = 0;
    if (plVar4 != (long *)0x0) {
      FUN_032d645c(plVar4);
      plVar3 = *(long **)(param_1 + 2);
      uVar5 = *(undefined8 *)(param_2 + 2);
    }
    *(undefined8 *)(param_1 + 2) = uVar5;
    if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
      plVar4 = plVar3 + 2;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))();
      }
    }
  }
  return param_1;
}


