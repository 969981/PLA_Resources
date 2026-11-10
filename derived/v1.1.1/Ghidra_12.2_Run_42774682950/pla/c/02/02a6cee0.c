/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6cee0; name: FUN_02a6cee0
 */


void FUN_02a6cee0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  
  FUN_02a48e80(param_1,param_4);
  *param_1 = &PTR_FUN_0427e8b0;
  param_1[9] = &PTR_LAB_0427e920;
  param_1[10] = &DAT_0427e968;
  FUN_02a6cd24(param_1 + 0x82);
  FUN_02a6cd24(param_1 + 0x90);
  FUN_02a6cd24(param_1 + 0x9e);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xac),false,0);
  nn::os::InitializeLightEvent((long)param_1 + 0x584,0,1);
  param_1[0xb2] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xb3),false,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0xb7));
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xbb] = param_3;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)((long)param_1 + 0x5e4) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0x1f) = param_2;
  *(undefined4 *)((long)param_1 + 0x5d4) = param_2;
  local_3c = 0;
  lVar6 = FUN_02a6df6c(auStack_38,param_5,&local_3c);
  if (lVar6 != 0) {
    lVar9 = *(long *)(lVar6 + 0x58);
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
  plVar2 = param_1 + 0xb8;
  plVar8 = (long *)*plVar2;
  *plVar2 = 0;
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
  *plVar2 = lVar6;
  return;
}


