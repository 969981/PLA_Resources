/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289ba28; name: FUN_0289ba28
 */


void FUN_0289ba28(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(*(long *)(param_1 + 0x170) + 0x100) != 0) {
    FUN_0327edf0(*param_2);
  }
  FUN_0289c41c(*(long *)(param_1 + 0x70) + 600,param_1,&LAB_0289bdf8,0);
  FUN_0289c4dc(*(long *)(param_1 + 0x70) + 0x260,param_1,&LAB_0289bf20,0);
  FUN_0289c59c(*(long *)(param_1 + 0x70) + 0x268,param_1,&LAB_0289c050,0);
  FUN_0289c65c(*(long *)(param_1 + 0x70) + 0x270,param_1,&LAB_0289c180,0);
  FUN_0289c71c(*(long *)(param_1 + 0x70) + 0x278,param_1,&LAB_0289c258,0);
  FUN_0289c7dc(*(long *)(param_1 + 0x70) + 0x280,param_1,&LAB_0289c330,0);
  FUN_0289c89c(*(long *)(param_1 + 0x70) + 0x288,param_1,&LAB_0289c408,0);
  plVar4 = *(long **)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  plVar4 = *(long **)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  plVar4 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x68) = 4;
  return;
}


