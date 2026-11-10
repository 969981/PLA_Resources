/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a7b8f8; name: FUN_02a7b8f8
 */


void FUN_02a7b8f8(undefined8 *param_1,long param_2,Uid *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined8 local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  long *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_54;
  undefined8 local_48;
  
  if ((*(long *)(param_2 + 0x1d0) == 0) && (*(int *)(param_2 + 0x19c) < *(int *)(param_2 + 0x1a0)))
  {
    local_b0 = 0;
    FUN_02a8ef1c(param_1,0xffffffff,0,&local_b0,&DAT_03a81358);
  }
  else {
    lVar6 = nn::os::GetCurrentThread();
    plVar1 = (long *)(param_2 + 0x1f0);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x1e4));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_02a7b9a8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_02a7b9a8:
    if (*(long *)(param_2 + 0x1d0) == 0) {
      iVar8 = *(int *)(param_2 + 0x1a0);
      *(int *)(param_2 + 0x1a0) = iVar8 + 1;
    }
    else {
      lVar6 = *(long *)(param_2 + 0x1d0) + -1;
      iVar8 = *(int *)(param_2 + lVar6 * 4 + 0x1a8);
      *(long *)(param_2 + 0x1d0) = lVar6;
    }
    *(ulong *)(param_2 + 0x1d8) =
         1L << ((long)iVar8 - (long)*(int *)(param_2 + 0x198) & 0x3fU) | *(ulong *)(param_2 + 0x1d8)
    ;
    *(int *)(param_2 + 0x1a4) = *(int *)(param_2 + 0x1a4) + 1;
    *(undefined8 *)(param_2 + 0x1f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x1e4));
    local_48 = 0;
    local_54 = iVar8;
    FUN_02a8ef1c(&local_b0,iVar8,param_2 + 0x16c,&local_48,param_3);
    uVar7 = nn::fs::IsSaveDataExisting(param_3);
    plVar1 = local_78;
    pcVar4 = local_88;
    if ((uVar7 & 1) == 0) {
      *(undefined4 *)(param_2 + (long)iVar8 * 4 + 0x16c) = 3;
      *(undefined4 *)(param_1 + 3) = local_98;
      param_1[1] = CONCAT44(uStack_a4,local_a8);
      param_1[2] = local_a0;
      *param_1 = local_b0;
      param_1[4] = local_90;
      param_1[5] = local_88;
    }
    else {
      if (local_78 == (long *)0x0) {
        iVar5 = nn::fs::MountSaveData(local_88,param_3);
      }
      else {
        (**(code **)(*local_78 + 0x18))(local_78);
        iVar5 = nn::fs::MountSaveData(pcVar4,param_3);
        (**(code **)(*plVar1 + 0x20))(plVar1);
      }
      if (iVar5 != 0) {
        FUN_02a7bbb0(param_2 + 0x198,&local_54);
        local_48 = 0;
        FUN_02a8ef1c(param_1,0xffffffff,0,&local_48,&DAT_03a81358);
        *(undefined4 *)param_1 = 7;
        *(undefined1 *)((long)param_1 + 4) = 1;
        *(int *)(param_1 + 1) = iVar5;
        *(undefined1 *)((long)param_1 + 7) = local_b2;
        *(undefined2 *)((long)param_1 + 5) = local_b4;
        if (local_78 == (long *)0x0) {
          return;
        }
        (**(code **)(*local_78 + 0x20))();
        return;
      }
      local_b0 = CONCAT17(local_b2,CONCAT25(local_b4,0x100000007));
      *(undefined4 *)(param_2 + (long)iVar8 * 4 + 0x16c) = 2;
      *(undefined4 *)(param_1 + 3) = local_98;
      *param_1 = local_b0;
      param_1[1] = (ulong)uStack_a4 << 0x20;
      param_1[2] = local_a0;
      param_1[4] = local_90;
      param_1[5] = local_88;
    }
    param_1[6] = local_80;
    param_1[7] = local_78;
    param_1[8] = uStack_70;
    param_1[9] = local_68;
    param_1[10] = uStack_60;
  }
  return;
}


