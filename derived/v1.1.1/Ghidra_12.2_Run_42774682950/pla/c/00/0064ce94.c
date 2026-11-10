/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064ce94; name: FUN_0064ce94
 */


void FUN_0064ce94(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long local_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_04375800 + 0x10;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)puVar1;
  plVar6 = *(long **)(*param_3 + 400);
  plVar4 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x78,8);
  puVar1 = PTR_DAT_04375808 + 0x10;
  plVar4[2] = 0;
  plVar4[3] = (long)plVar6;
  *plVar4 = (long)puVar1;
  plVar4[1] = 0;
  FUN_0064d260(plVar4 + 4,param_2,param_3);
  plVar6 = (long *)param_1[2];
  param_1[1] = (long)(plVar4 + 4);
  param_1[2] = (long)plVar4;
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar6 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar1 = PTR_DAT_04375810;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00612290();
  FUN_00784290(&local_40);
  param_1[7] = local_40;
  param_1[8] = lStack_38;
  if (local_40 != 0) {
    *(undefined1 *)(local_40 + 8) = 1;
  }
  return;
}


