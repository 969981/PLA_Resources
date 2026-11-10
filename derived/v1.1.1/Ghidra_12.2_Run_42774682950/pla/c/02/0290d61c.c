/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290d61c; name: FUN_0290d61c
 */


void FUN_0290d61c(long param_1,int param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if (param_2 != 1) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f0));
  plVar4 = *(long **)(param_1 + 0x210);
  plVar7 = *(long **)(param_1 + 0x218);
  if (plVar4 != plVar7) {
    iVar1 = (int)plVar4[1];
    while (iVar1 != *(int *)(param_3 + 0x10)) {
      if (plVar7 == plVar4 + 2) goto LAB_0290d7d8;
      iVar1 = (int)plVar4[3];
      plVar4 = plVar4 + 2;
    }
  }
  if ((plVar4 == plVar7) || (plVar3 = plVar4 + 2, plVar3 == plVar7)) {
    lVar5 = (long)plVar7 - (long)plVar4;
  }
  else {
    do {
      if ((int)plVar3[1] != *(int *)(param_3 + 0x10)) {
        plVar2 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
        }
        lVar5 = *plVar3;
        *plVar3 = 0;
        *plVar4 = lVar5;
        *(int *)(plVar4 + 1) = (int)plVar3[1];
        plVar4 = plVar4 + 2;
      }
      plVar3 = plVar3 + 2;
    } while (plVar7 != plVar3);
    plVar7 = *(long **)(param_1 + 0x218);
    lVar5 = (long)plVar7 - (long)plVar4;
  }
  if (lVar5 != 0) {
    plVar3 = plVar7;
    if ((long *)((long)plVar4 + lVar5) != plVar7) {
      do {
        plVar3 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x20))();
        }
        plVar3 = plVar4 + (lVar5 >> 4) * 2;
        lVar6 = *plVar3;
        *plVar3 = 0;
        *plVar4 = lVar6;
        *(int *)(plVar4 + 1) = (int)plVar3[1];
        plVar4 = plVar4 + 2;
      } while (plVar7 + (lVar5 >> 4) * -2 != plVar4);
      plVar3 = *(long **)(param_1 + 0x218);
    }
    while (plVar7 = plVar4, plVar3 != plVar7) {
      plVar3 = plVar3 + -2;
      plVar4 = plVar7;
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 0x20))();
      }
    }
    *(long **)(param_1 + 0x218) = plVar7;
  }
LAB_0290d7d8:
  if (((*(char *)(param_1 + 0x32a) != '\0') && (plVar7 == *(long **)(param_1 + 0x210))) &&
     (*(char *)(param_1 + 0x32b) != '\0')) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x330));
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    lVar5 = *(long *)PTR_DAT_04379c30;
    *(long *)PTR_DAT_04379c38 = lVar5;
    plVar4 = *(long **)(*(long *)(lVar5 + 0x158) + 0x60);
    (**(code **)(*plVar4 + 0x58))(plVar4,*(undefined8 *)(param_1 + 0x430));
    *(undefined1 *)(param_1 + 0x32b) = 0;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x330));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f0));
  return;
}


