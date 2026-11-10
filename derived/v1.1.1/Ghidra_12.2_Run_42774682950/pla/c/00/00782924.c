/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00782924; name: FUN_00782924
 */


void FUN_00782924(int *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  if ((*param_1 != -1) && ((char)param_1[0x36] == '\0')) {
    iVar4 = nn::socket::Shutdown(*param_1,2);
    if (iVar4 < 0) {
      nn::socket::GetLastErrno();
    }
    if (*param_1 != -1) {
      nn::socket::Close(*param_1);
      *(undefined1 *)(param_1 + 0x36) = 1;
    }
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))();
  }
  plVar6 = *(long **)(param_1 + 0x3a);
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
      FUN_00617798(param_1 + 4);
      return;
    }
  }
  FUN_00617798(param_1 + 4);
  return;
}


