/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00867878; name: FUN_00867878
 */


void FUN_00867878(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *local_60;
  long local_58 [3];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  puVar4 = PTR_DAT_043780f8;
  lVar6 = thunk_FUN_007f3f6c(*(undefined8 *)PTR_DAT_043780f8);
  FUN_007f0d58(lVar6 + 0xb8);
  lVar6 = thunk_FUN_007f3f6c(*(undefined8 *)puVar4);
  FUN_007f0d58(lVar6 + 0x98);
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x48))(&local_60);
    while (local_60 != local_58) {
      FUN_00866fbc(param_1,local_60 + 8);
      plVar9 = (long *)local_60[1];
      if ((long *)local_60[1] == (long *)0x0) {
        plVar9 = local_60 + 2;
        bVar5 = *(long **)*plVar9 != local_60;
        local_60 = (long *)*plVar9;
        if (bVar5) {
          do {
            lVar6 = *plVar9;
            plVar9 = (long *)(lVar6 + 0x10);
            local_60 = (long *)*plVar9;
          } while (*(long *)*plVar9 != lVar6);
        }
      }
      else {
        do {
          local_60 = plVar9;
          plVar9 = (long *)*local_60;
        } while (plVar9 != (long *)0x0);
      }
    }
    FUN_0066e7b0(&local_60,local_58[0]);
    lVar6 = thunk_FUN_007f3f6c(*(undefined8 *)puVar4);
    *(undefined1 *)(lVar6 + 0x24b) = 1;
    plVar9 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  lVar7 = thunk_FUN_007f3f6c(*(undefined8 *)puVar4);
  nn::os::LockMutex((MutexType *)(lVar7 + 0x250));
  lVar8 = thunk_FUN_007f3f6c(*(undefined8 *)puVar4);
  nn::os::LockMutex((MutexType *)(lVar8 + 0x1378));
  lVar6 = thunk_FUN_007f3f6c(*(undefined8 *)puVar4);
  plVar9 = *(long **)(lVar6 + 0x270);
  lVar6 = thunk_FUN_007f3f6c(*(undefined8 *)puVar4);
  uVar11 = *(undefined8 *)(lVar6 + 0x1308);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  FUN_0085e4c8(uVar11);
  lVar10 = *(long *)(param_1 + 0x690);
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  for (lVar6 = *(long *)(param_1 + 0x698); lVar6 != lVar10; lVar6 = lVar6 + -0x48) {
    if ((*(byte *)(lVar6 + -0x28) & 1) == 0) {
      bVar2 = *(byte *)(lVar6 + -0x48);
    }
    else {
      (**(code **)(**(long **)(lVar6 + -0x10) + 0x18))
                (*(long **)(lVar6 + -0x10),*(undefined8 *)(lVar6 + -0x18),
                 *(ulong *)(lVar6 + -0x28) & 0xfffffffffffffffe,1);
      bVar2 = *(byte *)(lVar6 + -0x48);
    }
    if ((bVar2 & 1) != 0) {
      (**(code **)(**(long **)(lVar6 + -0x30) + 0x18))
                (*(long **)(lVar6 + -0x30),*(undefined8 *)(lVar6 + -0x38),
                 *(ulong *)(lVar6 + -0x48) & 0xfffffffffffffffe,1);
    }
  }
  *(long *)(param_1 + 0x698) = lVar10;
  nn::os::UnlockMutex((MutexType *)(lVar8 + 0x1378));
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x250));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return;
}


