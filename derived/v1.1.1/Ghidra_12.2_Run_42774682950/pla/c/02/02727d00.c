/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02727d00; name: FUN_02727d00
 */


void FUN_02727d00(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  FUN_02727e98();
  *param_1 = &PTR_LAB_0426b580;
  plVar7 = param_1 + 0xb;
  param_1[9] = &PTR_LAB_0426b5b0;
  param_1[10] = param_2;
  memset(plVar7,0,0x810);
  lVar5 = FUN_00a24804(&local_60,param_2);
  if (lVar5 != 0) {
    FUN_02a439f4(*(undefined8 *)(lVar5 + 0x58));
  }
  plVar8 = (long *)*plVar7;
  *plVar7 = 0;
  if ((plVar8 != (long *)0x0) && (uVar6 = FUN_02a43a5c(plVar8[0xb]), (uVar6 & 1) != 0)) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  *plVar7 = lVar5;
  local_60 = 0xe53ef49db8ab667e;
  pcStack_58 = "common/message_error.dat";
  local_50 = 0x18;
  local_48 = (long *)0x0;
  FUN_010bc6b4(lVar5,&local_60,0,1);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  uVar6 = FUN_010bcff0(*plVar7);
  while ((uVar6 & 1) == 0) {
    nn::os::SleepThread(16000000);
    uVar6 = FUN_010bcff0(*plVar7);
  }
  FUN_010bcf48(*plVar7);
  local_60 = 0x800;
  lVar5 = FUN_02728630(param_2,&local_60);
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  param_1[0xc] = lVar5;
  return;
}


