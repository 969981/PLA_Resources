/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006fd4c0; name: FUN_006fd4c0
 */


void FUN_006fd4c0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 local_70;
  long *local_68;
  long *plStack_60;
  undefined8 local_58;
  
  uVar4 = std::chrono::steady_clock::now();
  *(undefined8 *)PTR_DAT_04376400 = uVar4;
  local_70 = 0x14;
  plVar7 = (long *)(param_2 + 0x38);
  plVar8 = *(long **)(*plVar7 + 400);
  plVar5 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
  plVar5[2] = 0;
  plVar10 = plVar5 + 1;
  *plVar10 = 0;
  *plVar5 = (long)(PTR_DAT_04376230 + 0x10);
  puVar1 = PTR_DAT_04376238;
  plVar5[3] = (long)plVar8;
  plVar5[4] = (long)(puVar1 + 0x10);
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar9 = *(long **)(*plVar7 + 400);
  plVar8 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x78,8);
  puVar1 = PTR_DAT_04376240 + 0x10;
  plVar8[2] = 0;
  plVar8[3] = (long)plVar9;
  *plVar8 = (long)puVar1;
  plVar8[1] = 0;
  FUN_006f7270(plVar8 + 4,param_2,plVar7);
  plVar7 = (long *)plVar5[6];
  plVar5[5] = (long)(plVar8 + 4);
  plVar5[6] = (long)plVar8;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar5[4] = (long)(PTR_DAT_04376248 + 0x10);
  local_58 = local_70;
  local_68 = plVar5 + 4;
  plStack_60 = plVar5;
  FUN_006fcd64(param_1,&local_70);
  if (plVar5 != (long *)0x0) {
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


