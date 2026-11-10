/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033271b0; name: FUN_033271b0
 */


void FUN_033271b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [64];
  
  lVar4 = FUN_032c680c(param_2);
  if (*(int *)(lVar4 + 8) != 0) {
    *(undefined4 *)(lVar4 + 8) = 0;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_90 = (long *)0x0;
  local_88 = 0;
  local_90 = (long *)FUN_03322000(lVar4,PTR_PTR_0434a090);
  if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
    plVar1 = local_90 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  FUN_03322078(auStack_70,&local_90);
  if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
    plVar1 = local_90 + 2;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_90 + 0x18))();
    }
  }
  FUN_03327810(param_1,auStack_70,param_3,param_4 & 1);
  FUN_03322120(auStack_70);
  return;
}


