/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070d7b8; name: FUN_0070d7b8
 */


void FUN_0070d7b8(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    lVar7 = *(long *)(param_1 + 0x38);
    if (lVar7 == lVar5) {
      lVar7 = lVar5;
    }
    else {
      do {
        if ((*(byte *)(lVar7 + -0x20) & 1) == 0) {
          bVar2 = *(byte *)(lVar7 + -0x48);
        }
        else {
          (**(code **)(**(long **)(lVar7 + -8) + 0x18))
                    (*(long **)(lVar7 + -8),*(undefined8 *)(lVar7 + -0x10),
                     *(ulong *)(lVar7 + -0x20) & 0xfffffffffffffffe,1);
          bVar2 = *(byte *)(lVar7 + -0x48);
        }
        if ((bVar2 & 1) != 0) {
          (**(code **)(**(long **)(lVar7 + -0x30) + 0x18))
                    (*(long **)(lVar7 + -0x30),*(undefined8 *)(lVar7 + -0x38),
                     *(ulong *)(lVar7 + -0x48) & 0xfffffffffffffffe,1);
        }
        lVar7 = lVar7 + -0x48;
      } while (lVar5 != lVar7);
      lVar7 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x38) = lVar5;
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
              (*(long **)(param_1 + 0x48),lVar7,*(long *)(param_1 + 0x40) - lVar7,8);
  }
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 == (long *)0x0) {
LAB_0070d890:
    plVar6 = *(long **)(param_1 + 0x18);
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 != 0) goto LAB_0070d890;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = *(long **)(param_1 + 0x18);
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      plVar6 = *(long **)(param_1 + 8);
      goto joined_r0x0070d8cc;
    }
  }
  plVar6 = *(long **)(param_1 + 8);
joined_r0x0070d8cc:
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


