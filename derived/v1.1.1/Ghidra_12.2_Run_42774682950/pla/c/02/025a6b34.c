/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025a6b34; name: FUN_025a6b34
 */


void FUN_025a6b34(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *local_28;
  
  if ((*(undefined1 **)(param_1 + 0x80) != &DAT_cbf29ce484222645) &&
     (lVar6 = FUN_025a8238(param_1 + 0x90), lVar6 != 0)) {
    if (*(long *)(lVar6 + 0x18) == 0) {
      local_28 = (long *)0x0;
    }
    else {
      FUN_025a8344(&local_28);
      plVar5 = local_28;
      if (local_28 != (long *)0x0) {
        FUN_01c61750(local_28,0);
        lVar6 = plVar5[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
      }
    }
  }
  FUN_025a00b4(param_1);
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}


