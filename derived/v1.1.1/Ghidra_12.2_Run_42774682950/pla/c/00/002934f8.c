/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002934f8; name: FUN_002934f8
 */


void FUN_002934f8(long *param_1,long *param_2)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  lVar6 = *param_2;
  *param_1 = lVar6;
  lVar7 = param_2[1];
  param_1[1] = lVar7;
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = *param_1;
  }
  plVar8 = *(long **)(lVar6 + 400);
  plVar4 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x80,8);
  plVar4[2] = 0;
  plVar9 = plVar4 + 1;
  *plVar9 = 0;
  puVar1 = PTR_DAT_04373148;
  plVar4[3] = (long)plVar8;
  plVar8 = plVar4 + 4;
  *plVar4 = (long)(puVar1 + 0x10);
  FUN_00782ef8(plVar8);
  plVar4[4] = (long)(PTR_DAT_04373150 + 0x10);
  nn::os::InitializeEvent(plVar4 + 6,0,0);
  plVar4[4] = (long)(PTR_DAT_04373158 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar4 + 0xb),false,0);
  *(undefined1 *)((long)plVar4 + 0x79) = 0;
  param_1[2] = (long)plVar8;
  param_1[3] = (long)plVar4;
  if (plVar4 == (long *)0x0) {
    lVar7 = 0;
    lVar6 = 0x20;
  }
  else {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = param_1[2];
    lVar7 = param_1[3];
  }
  param_1[6] = (long)plVar8;
  param_1[7] = (long)plVar4;
  param_1[4] = 0;
  param_1[5] = 0;
  plVar4 = *(long **)(*param_1 + 400);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  plVar9 = *(long **)(*param_1 + 400);
  lVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,0x30,0x10);
  *(undefined8 *)(lVar5 + 0x20) = 0;
  plVar8 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x30,8);
  puVar1 = PTR_DAT_04373160 + 0x10;
  plVar8[2] = lVar6;
  plVar8[3] = lVar7;
  plVar8[4] = 0;
  plVar8[5] = 0;
  *plVar8 = (long)puVar1;
  plVar8[1] = (long)plVar4;
  *(long **)(lVar5 + 0x20) = plVar8;
  param_1[8] = lVar5;
  param_1[9] = (long)plVar9;
  return;
}


