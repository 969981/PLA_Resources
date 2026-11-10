/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d4808; name: FUN_003d4808
 */


void FUN_003d4808(long *param_1,long param_2,undefined8 *param_3)

{
  MutexType *pMVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_64 [4];
  
  puVar4 = PTR_DAT_04374078;
  if (PTR_DAT_04374078[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/work_serializer.cc",0x40,1,
                 "WorkSerializer::Run() %p Scheduling callback [%s:%d]",param_1,*param_3,
                 *(undefined4 *)(param_3 + 1));
  }
  plVar6 = param_1 + 1;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 1) {
    if (puVar4[0x10] == '\0') {
      plVar6 = *(long **)(param_2 + 0x20);
    }
    else {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/work_serializer.cc",0x4a,1,
                   "  Executing immediately");
      plVar6 = *(long **)(param_2 + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x30))();
      puVar4 = PTR_DAT_04374078;
      plVar6 = param_1 + 1;
      pMVar1 = (MutexType *)(param_1 + 0xc);
      do {
        if (puVar4[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/work_serializer.cc",0x76,1,
                       "WorkSerializer::DrainQueue() %p",param_1);
        }
        do {
          lVar8 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          if (puVar4[0x10] != '\0') {
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/work_serializer.cc",0x7e,
                         1,"  Queue Drained. Destroying");
          }
          if (param_1 != (long *)0x0) {
            (**(code **)(*param_1 + 8))(param_1);
            FUN_002e2ea0(PTR_LAB_04373088,param_1);
          }
          return;
        }
        if (lVar8 == 2) {
          if (puVar4[0x10] == '\0') {
            return;
          }
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/work_serializer.cc",0x85,1,
                       "  Queue Drained");
          return;
        }
        if (lVar8 == 0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/work_serializer.cc",0x79,2,
                       "assertion failed: %s","prev_size >= 1");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        nn::os::LockMutex(pMVar1);
        lVar8 = FUN_0030bcfc(param_1 + 2,auStack_64);
        if (lVar8 == 0) {
          do {
            if (puVar4[0x10] != '\0') {
              FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/work_serializer.cc",
                           0x95,1,"  Queue returned nullptr, trying again");
            }
            nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x10),pMVar1);
            lVar8 = FUN_0030bcfc(param_1 + 2,auStack_64);
          } while (lVar8 == 0);
          nn::os::UnlockMutex(pMVar1);
          if (puVar4[0x10] == '\0') goto LAB_003d4a20;
LAB_003d4ac4:
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/work_serializer.cc",0xa6,1,
                       "  Running item %p : callback scheduled at [%s:%d]",lVar8,
                       *(undefined8 *)(lVar8 + 0x40),*(undefined4 *)(lVar8 + 0x48));
          plVar7 = *(long **)(lVar8 + 0x30);
        }
        else {
          nn::os::UnlockMutex(pMVar1);
          if (puVar4[0x10] != '\0') goto LAB_003d4ac4;
LAB_003d4a20:
          plVar7 = *(long **)(lVar8 + 0x30);
        }
        if (plVar7 == (long *)0x0) {
          plVar6 = (long *)FUN_003d4f70();
          puVar4 = PTR_DAT_04374078;
          if (PTR_DAT_04374078[0x10] != '\0') {
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/work_serializer.cc",100,1
                         ,"WorkSerializer::Orphan() %p",plVar6);
          }
          plVar7 = plVar6 + 1;
          do {
            lVar8 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 + -1 == 0) {
            if (puVar4[0x10] != '\0') {
              FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/work_serializer.cc",
                           0x69,1,"  Destroying");
            }
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 8))(plVar6);
              FUN_002e2ea0(PTR_LAB_04373088,plVar6);
              return;
            }
          }
          return;
        }
        (**(code **)(*plVar7 + 0x30))();
        plVar7 = *(long **)(lVar8 + 0x30);
        if ((long *)(lVar8 + 0x10) == plVar7) {
          pcVar9 = *(code **)(*plVar7 + 0x20);
LAB_003d4a5c:
          (*pcVar9)();
        }
        else if (plVar7 != (long *)0x0) {
          pcVar9 = *(code **)(*plVar7 + 0x28);
          goto LAB_003d4a5c;
        }
        FUN_002e2ea0(PTR_LAB_04373088,lVar8);
      } while( true );
    }
    FUN_003d4f70();
  }
  else if (lVar8 != 0) {
    uVar5 = FUN_003d4fa0(param_2,param_3);
    if (puVar4[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/work_serializer.cc",0x55,1,
                   "  Scheduling on queue : item %p",uVar5);
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0xc));
    FUN_0030bc68(param_1 + 2,uVar5);
    nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x10));
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xc));
    return;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/work_serializer.cc",0x45,2,
               "assertion failed: %s","prev_size > 0");
                    /* WARNING: Subroutine does not return */
  abort();
}


