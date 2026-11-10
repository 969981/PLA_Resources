/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290a5c0; name: FUN_0290a5c0
 */


void FUN_0290a5c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x248));
  plVar6 = *(long **)(param_1 + 0x268);
  plVar7 = *(long **)(param_1 + 0x270);
  while (plVar7 != plVar6) {
    plVar7 = plVar7 + -1;
    if ((long *)*plVar7 != (long *)0x0) {
      (**(code **)(*(long *)*plVar7 + 0x20))();
    }
  }
  *(long **)(param_1 + 0x270) = plVar6;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x248));
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f0));
  puVar1 = PTR_DAT_04379c28;
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  puVar3 = PTR_DAT_04379c38;
  puVar2 = PTR_DAT_04379c30;
  lVar8 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar8;
  plVar7 = *(long **)(param_1 + 0x210);
  plVar6 = *(long **)(param_1 + 0x218);
  if (plVar7 != plVar6) {
    do {
      FUN_02916f80(*(undefined8 *)(lVar8 + 0x178),(int)plVar7[1]);
      if ((int)plVar7[1] != 0) {
        plVar5 = *(long **)(*(long *)(lVar8 + 0x158) + 0x60);
        (**(code **)(*plVar5 + 200))(plVar5,(int)plVar7[1],0,4);
      }
      plVar7 = plVar7 + 2;
    } while (plVar6 != plVar7);
    plVar7 = *(long **)(param_1 + 0x210);
    plVar6 = *(long **)(param_1 + 0x218);
    while (plVar6 != plVar7) {
      plVar6 = plVar6 + -2;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x20))();
      }
    }
  }
  *(long **)(param_1 + 0x218) = plVar7;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f0));
  if ((*(char *)(param_1 + 0x32a) == '\0') || (*(char *)(param_1 + 0x32b) == '\0')) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x330));
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar8 = *(long *)puVar2;
  *(long *)puVar3 = lVar8;
  plVar7 = *(long **)(*(long *)(lVar8 + 0x158) + 0x60);
  (**(code **)(*plVar7 + 0x58))(plVar7,*(undefined8 *)(param_1 + 0x430));
  *(undefined1 *)(param_1 + 0x32b) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x330));
  return;
}


