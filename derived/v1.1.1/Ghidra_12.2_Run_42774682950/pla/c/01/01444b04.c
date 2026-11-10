/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01444b04; name: FUN_01444b04
 */


void FUN_01444b04(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x5ab) != '\0') {
    plVar5 = *(long **)(param_1 + 0x2c8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_40 = 0x994cd76cf26dfc40;
    pcStack_38 = "anime_wake";
    local_30 = 10;
    uStack_28 = 0;
    FUN_0283b430(plVar5,&local_40);
    local_40 = 0x4a0f571a28d293b4;
    pcStack_38 = "anime_close";
    local_30 = 0xb;
    uStack_28 = 0;
    FUN_0283b1e8(plVar5,&local_40);
    *(undefined1 *)(param_1 + 0x5ab) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x01444be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}


