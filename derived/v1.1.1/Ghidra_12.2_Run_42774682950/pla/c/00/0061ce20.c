/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061ce20; name: FUN_0061ce20
 */


void FUN_0061ce20(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 2),false,0);
  lVar6 = *param_2;
  plVar7 = *(long **)(*param_3 + 400);
  plVar4 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x38,8);
  *plVar4 = (long)(PTR_DAT_043754a8 + 0x10);
  plVar4[1] = 0;
  puVar1 = PTR_DAT_043754b0;
  plVar4[2] = 0;
  plVar4[3] = (long)plVar7;
  plVar4[4] = (long)(puVar1 + 0x10);
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar8 = *(long **)(*param_3 + 400);
  plVar7 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x78,8);
  puVar1 = PTR_DAT_043754b8 + 0x10;
  plVar7[2] = 0;
  plVar7[3] = (long)plVar8;
  *plVar7 = (long)puVar1;
  plVar7[1] = 0;
  FUN_0061f9d8(plVar7 + 4,lVar6 + 0x10,param_3);
  plVar8 = (long *)plVar4[6];
  plVar4[5] = (long)(plVar7 + 4);
  plVar4[6] = (long)plVar7;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar8 + 1;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  param_1[6] = plVar4 + 4;
  param_1[7] = plVar4;
  FUN_00783f38(param_1 + 8,*(undefined8 *)(*param_3 + 400));
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xe),false,0);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar5 = FUN_00612290();
  param_1[0x15] = uVar5;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x16),false,0);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar5 = FUN_00612290();
  param_1[0x1d] = uVar5;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return;
}


