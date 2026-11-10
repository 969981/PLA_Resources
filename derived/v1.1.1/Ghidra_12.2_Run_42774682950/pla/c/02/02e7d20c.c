/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7d20c; name: FUN_02e7d20c
 */


void FUN_02e7d20c(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1c0));
  if (*(int *)(param_1 + 0x1e8) == 0) {
LAB_02e7d2cc:
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c0));
    return;
  }
  plVar2 = (long *)**(undefined8 **)(param_1 + 0x1e0);
  if (plVar2 == (long *)0x0) {
    uVar4 = 0;
    do {
      if (*(int *)(param_1 + 0x1e8) - 1 == uVar4) goto LAB_02e7d2cc;
      uVar4 = uVar4 + 1;
      plVar2 = (long *)(*(undefined8 **)(param_1 + 0x1e0))[uVar4 & 0xffffffff];
    } while (plVar2 == (long *)0x0);
  }
  else {
    uVar4 = 0;
  }
  plVar1 = (long *)plVar2[1];
  do {
    plVar5 = plVar1;
    if (plVar5 == (long *)0x0) {
      uVar3 = (uint)uVar4;
      do {
        uVar3 = uVar3 + 1;
        uVar4 = (ulong)uVar3;
        if (*(uint *)(param_1 + 0x1e8) <= uVar3) {
          plVar5 = (long *)0x0;
          break;
        }
        plVar5 = *(long **)(*(long *)(param_1 + 0x1e0) + uVar4 * 8);
      } while (plVar5 == (long *)0x0);
    }
    FUN_02eddb40(DAT_0440a170,*(undefined4 *)((long)plVar2 + 0x6c));
    (**(code **)(*plVar2 + 0x18))(plVar2);
    if (plVar5 == (long *)0x0) goto LAB_02e7d2cc;
    plVar1 = (long *)plVar5[1];
    plVar2 = plVar5;
  } while( true );
}


