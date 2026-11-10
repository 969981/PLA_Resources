/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b14b90; name: FUN_02b14b90
 */


void FUN_02b14b90(undefined8 *param_1)

{
  int *piVar1;
  ThreadType *pTVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  FUN_02b14d30();
  *param_1 = &PTR_LAB_04284048;
  param_1[9] = &PTR_LAB_04284078;
  FUN_02b14e64(param_1 + 10);
  FUN_02b14e64(param_1 + 0x11);
  FUN_02b14e64(param_1 + 0x18);
  FUN_02b14e64(param_1 + 0x1f);
  FUN_02b14e64(param_1 + 0x26);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2e),false,0);
  param_1[0x32] = 0;
  nn::os::InitializeSemaphore((SemaphoreType *)(param_1 + 0x33),1,1);
  local_24 = 0x100000;
  pvVar6 = (void *)FUN_02a67ae4(auStack_28,param_1[1],&local_24);
  if (pvVar6 != (void *)0x0) {
    lVar9 = *(long *)((long)pvVar6 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = (long *)param_1[0x32];
  param_1[0x32] = 0;
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  param_1[0x32] = pvVar6;
  *(undefined1 *)((long)pvVar6 + 0x300) = 0;
  pTVar2 = (ThreadType *)((long)pvVar6 + 0x100);
  *(undefined1 *)((long)pvVar6 + 0x301) = 0;
  *(undefined1 *)((long)pvVar6 + 0x302) = 0;
  nn::os::CreateThread
            (pTVar2,(_func_void_void_ptr *)&LAB_02a4971c,pvVar6,*(void **)((long)pvVar6 + 0x2c0),
             *(ulong *)((long)pvVar6 + 0x2f8),0x11);
  nn::os::SetThreadCoreMask(pTVar2,-1,7);
  nn::os::SetThreadName(pTVar2,"GpuObjectContainer");
  nn::os::StartThread(pTVar2);
  return;
}


