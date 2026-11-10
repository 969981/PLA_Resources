/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290b54c; name: FUN_0290b54c
 */


void FUN_0290b54c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x330));
  if (*(char *)(param_1 + 0x32b) == '\0') {
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    lVar7 = *(long *)PTR_DAT_04379c30;
    *(long *)PTR_DAT_04379c38 = lVar7;
    uVar6 = *(undefined8 *)(param_1 + 0x430);
    FUN_009c69bc(&local_38,param_1);
    plVar5 = *(long **)(*(long *)(lVar7 + 0x158) + 0x60);
    iVar4 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar6,local_38[0x47]);
    *(bool *)(param_1 + 0x32b) = iVar4 == 1;
    if (local_38 != (long *)0x0) {
      lVar7 = local_38[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x330));
  return;
}


