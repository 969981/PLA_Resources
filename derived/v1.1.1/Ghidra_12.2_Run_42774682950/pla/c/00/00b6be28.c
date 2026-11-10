/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b6be28; name: FUN_00b6be28
 */


void FUN_00b6be28(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    lVar6 = *(long *)(*(long *)(param_1 + 0x360) + 0x100);
    *(undefined1 *)(lVar6 + 0x58) = 1;
    lVar6 = *(long *)(lVar6 + 0x18);
    plVar5 = *(long **)(lVar6 + 0x10);
    *(undefined8 *)(lVar6 + 0x10) = 0;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b6be74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))();
        return;
      }
    }
  }
  return;
}


