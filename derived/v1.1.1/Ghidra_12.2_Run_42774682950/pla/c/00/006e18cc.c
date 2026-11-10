/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e18cc; name: FUN_006e18cc
 */


void FUN_006e18cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x108) & 1) != 0) goto LAB_006e1928;
LAB_006e18e8:
    if ((*(byte *)(param_1 + 0xe8) & 1) != 0) goto LAB_006e194c;
LAB_006e18f0:
    if ((*(byte *)(param_1 + 200) & 1) != 0) goto LAB_006e1970;
LAB_006e18f8:
    plVar6 = *(long **)(param_1 + 0xc0);
    if (plVar6 != (long *)0x0) goto LAB_006e1994;
LAB_006e19ac:
    plVar6 = *(long **)(param_1 + 0xa8);
    if (plVar6 == (long *)0x0) goto LAB_006e1a10;
LAB_006e19b4:
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
    if (lVar5 != 0) goto LAB_006e1a10;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x98);
    if (plVar6 != (long *)0x0) goto LAB_006e1a18;
LAB_006e1a30:
    plVar6 = *(long **)(param_1 + 0x88);
    if (plVar6 == (long *)0x0) goto LAB_006e1a94;
LAB_006e1a38:
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
    if (lVar5 != 0) goto LAB_006e1a94;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x70);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x140) + 0x18))
              (*(long **)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x138),
               *(ulong *)(param_1 + 0x128) & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0x108) & 1) == 0) goto LAB_006e18e8;
LAB_006e1928:
    (**(code **)(**(long **)(param_1 + 0x120) + 0x18))
              (*(long **)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x118),
               *(ulong *)(param_1 + 0x108) & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 0xe8) & 1) == 0) goto LAB_006e18f0;
LAB_006e194c:
    (**(code **)(**(long **)(param_1 + 0x100) + 0x18))
              (*(long **)(param_1 + 0x100),*(undefined8 *)(param_1 + 0xf8),
               *(ulong *)(param_1 + 0xe8) & 0xfffffffffffffffe,1);
    if ((*(byte *)(param_1 + 200) & 1) == 0) goto LAB_006e18f8;
LAB_006e1970:
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))
              (*(long **)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xd8),
               *(ulong *)(param_1 + 200) & 0xfffffffffffffffe,1);
    plVar6 = *(long **)(param_1 + 0xc0);
    if (plVar6 == (long *)0x0) goto LAB_006e19ac;
LAB_006e1994:
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
    if (lVar5 != 0) goto LAB_006e19ac;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0xa8);
    if (plVar6 != (long *)0x0) goto LAB_006e19b4;
LAB_006e1a10:
    plVar6 = *(long **)(param_1 + 0x98);
    if (plVar6 == (long *)0x0) goto LAB_006e1a30;
LAB_006e1a18:
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
    if (lVar5 != 0) goto LAB_006e1a30;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x88);
    if (plVar6 != (long *)0x0) goto LAB_006e1a38;
LAB_006e1a94:
    plVar6 = *(long **)(param_1 + 0x70);
  }
  if (plVar6 != (long *)0x0) {
    if (plVar6 == (long *)(param_1 + 0x50)) {
      pcVar4 = *(code **)(*plVar6 + 0x10);
    }
    else {
      pcVar4 = *(code **)(*plVar6 + 0x18);
    }
    (*pcVar4)();
  }
  plVar6 = *(long **)(param_1 + 0x40);
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
      goto joined_r0x006e1b60;
    }
  }
  plVar6 = *(long **)(param_1 + 8);
joined_r0x006e1b60:
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


