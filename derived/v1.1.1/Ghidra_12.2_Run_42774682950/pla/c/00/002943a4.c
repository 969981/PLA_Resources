/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002943a4; name: FUN_002943a4
 */


void FUN_002943a4(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  long *plStack_40;
  long *local_38;
  
  local_48 = param_4;
  plStack_40 = param_3;
  plVar6 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x80,8);
  puVar1 = PTR_DAT_04373148 + 0x10;
  plVar2 = plVar6 + 4;
  plVar6[2] = 0;
  plVar6[3] = (long)param_3;
  *plVar6 = (long)puVar1;
  plVar6[1] = 0;
  FUN_00782ef8(plVar2);
  plVar6[4] = (long)(PTR_DAT_04373150 + 0x10);
  nn::os::InitializeEvent(plVar6 + 6,0,0);
  plVar6[4] = (long)(PTR_DAT_04373158 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
  *(undefined1 *)((long)plVar6 + 0x79) = 0;
  *param_1 = plVar2;
  param_1[1] = plVar6;
  if (plVar6 != (long *)0x0) {
    plVar3 = plVar6 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_78 = 0;
                    /* try { // try from 0029446c to 0029448b has its CatchHandler @ 002944ec */
  local_70 = plVar2;
  local_68 = plVar6;
  local_38 = param_3;
  FUN_002944f0(&local_60,&local_38,&local_70,&local_78,&plStack_40,&local_48,param_2);
  param_1[3] = uStack_58;
  param_1[2] = local_60;
  local_60 = 0;
  uStack_58 = 0;
  if (local_68 != (long *)0x0) {
    plVar2 = local_68 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}


