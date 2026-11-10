/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dfb70; name: FUN_006dfb70
 */


void FUN_006dfb70(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  if ((*(byte *)(param_1 + 0xd8) & 1) == 0) {
    if ((*(byte *)(param_1 + 0xb8) & 1) != 0) goto LAB_006dfbc4;
LAB_006dfb8c:
    if ((*(byte *)(param_1 + 0x98) & 1) != 0) goto LAB_006dfbe8;
LAB_006dfb94:
    plVar6 = *(long **)(param_1 + 0x90);
    if (plVar6 == (long *)0x0) goto LAB_006dfc24;
LAB_006dfc0c:
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 != 0) goto LAB_006dfc24;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x78);
    if (plVar6 != (long *)0x0) goto LAB_006dfc2c;
LAB_006dfc88:
    plVar6 = *(long **)(param_1 + 0x68);
    if (plVar6 == (long *)0x0) goto LAB_006dfca8;
LAB_006dfc90:
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 != 0) goto LAB_006dfca8;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x58);
    if (plVar6 != (long *)0x0) goto LAB_006dfcb0;
LAB_006dfd0c:
    plVar6 = *(long **)(param_1 + 0x40);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x18))
              (*(long **)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xe8),
               *(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0xb8) & 1) == 0) goto LAB_006dfb8c;
LAB_006dfbc4:
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))
              (*(long **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 200),
               *(ulong *)(param_1 + 0xb8) & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0x98) & 1) == 0) goto LAB_006dfb94;
LAB_006dfbe8:
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))
              (*(long **)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa8),
               *(ulong *)(param_1 + 0x98) & 0xfffffffffffffffe,1);
    plVar6 = *(long **)(param_1 + 0x90);
    if (plVar6 != (long *)0x0) goto LAB_006dfc0c;
LAB_006dfc24:
    plVar6 = *(long **)(param_1 + 0x78);
    if (plVar6 == (long *)0x0) goto LAB_006dfc88;
LAB_006dfc2c:
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 != 0) goto LAB_006dfc88;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x68);
    if (plVar6 != (long *)0x0) goto LAB_006dfc90;
LAB_006dfca8:
    plVar6 = *(long **)(param_1 + 0x58);
    if (plVar6 == (long *)0x0) goto LAB_006dfd0c;
LAB_006dfcb0:
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 != 0) goto LAB_006dfd0c;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x40);
  }
  if (plVar6 != (long *)0x0) {
    if (plVar6 == (long *)(param_1 + 0x20)) {
      pcVar4 = *(code **)(*plVar6 + 0x10);
    }
    else {
      pcVar4 = *(code **)(*plVar6 + 0x18);
    }
    (*pcVar4)();
  }
  plVar6 = *(long **)(param_1 + 0x18);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      plVar6 = *(long **)(param_1 + 8);
      goto joined_r0x006dfdb0;
    }
  }
  plVar6 = *(long **)(param_1 + 8);
joined_r0x006dfdb0:
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


