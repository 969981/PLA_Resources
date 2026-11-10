/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03014d04; name: FUN_03014d04
 */


void FUN_03014d04(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  MutexType *pMVar4;
  long lVar5;
  
  pMVar4 = *(MutexType **)(param_1 + 0x340);
  if (pMVar4 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar4);
    lVar5 = tpidr_el0;
    lVar3 = *(long *)(lVar5 + 0x38d490);
    if (lVar3 == 0) {
      lVar3 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar3;
    }
    plVar2 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
    (**(code **)(*plVar2 + 0x18))(plVar2,pMVar4,0x20);
  }
  puVar1 = PTR_PTR_0434a080;
  lVar5 = 0x300;
  do {
    lVar3 = param_1 + lVar5;
    *(undefined4 *)(lVar3 + 0x30) = 0;
    if ((-1 < *(int *)(lVar3 + 0x34)) && (*(long *)(lVar3 + 0x28) != 0)) {
      (**(code **)(*(long *)puVar1 + 0x18))
                (puVar1,*(long *)(lVar3 + 0x28),*(int *)(lVar3 + 0x34) << 2);
    }
    lVar5 = lVar5 + -0x18;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined4 *)(lVar3 + 0x34) = 0x80000000;
  } while (lVar5 != 0);
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 0x20),(long)*(int *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1c)) && (*(long *)(param_1 + 0x10) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 0x10),((ulong)*(uint *)(param_1 + 0x1c) & 0x3fffffff) << 7
              );
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  return;
}


