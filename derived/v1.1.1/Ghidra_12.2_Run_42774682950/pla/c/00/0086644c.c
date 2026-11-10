/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086644c; name: FUN_0086644c
 */


uint FUN_0086644c(long param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *local_50;
  long local_48 [3];
  
  uVar1 = *(uint *)(param_1 + 0x40);
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  (**(code **)(**(long **)(param_1 + 8) + 0x48))(&local_50);
  plVar5 = local_50;
  while (plVar5 != local_48) {
    uVar4 = FUN_00675dec(plVar5 + 8);
    uVar3 = uVar1;
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_00675e18(plVar5 + 8);
      if (uVar1 <= uVar3) {
        uVar3 = uVar1;
      }
    }
    plVar6 = (long *)plVar5[1];
    uVar1 = uVar3;
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar6 = plVar5 + 2;
      bVar2 = *(long **)*plVar6 != plVar5;
      plVar5 = (long *)*plVar6;
      if (bVar2) {
        do {
          lVar7 = *plVar6;
          plVar6 = (long *)(lVar7 + 0x10);
          plVar5 = (long *)*plVar6;
        } while (*(long *)*plVar6 != lVar7);
      }
    }
    else {
      do {
        plVar5 = plVar6;
        plVar6 = (long *)*plVar5;
      } while (plVar6 != (long *)0x0);
    }
  }
  FUN_0066e7b0(&local_50,local_48[0]);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return uVar1;
}


