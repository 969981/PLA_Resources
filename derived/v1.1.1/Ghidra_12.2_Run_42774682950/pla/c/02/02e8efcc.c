/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8efcc; name: FUN_02e8efcc
 */


void FUN_02e8efcc(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *local_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  
  FUN_02e94e64();
  FUN_02e950d0(param_1);
  uVar5 = local_68._4_4_;
  iVar7 = *(int *)(param_1 + 0xb0);
  if (iVar7 == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0xa8);
  local_68 = (ulong)local_68._4_4_ << 0x20;
  local_60 = *(long *)*plVar1;
  local_58 = 0;
  local_70 = plVar1;
  if (local_60 == 0) {
    if (iVar7 - 1U != 0) {
      uVar8 = 0;
      do {
        local_60 = ((long *)*plVar1)[uVar8 + 1];
        if (local_60 != 0) goto LAB_02e8f0f4;
        uVar8 = uVar8 + 1;
      } while (iVar7 - 1U != uVar8);
      local_60 = 0;
LAB_02e8f0f4:
      iVar7 = (int)uVar8 + 1;
    }
    local_68 = CONCAT44(uVar5,iVar7);
    goto joined_r0x02e8f0fc;
  }
joined_r0x02e8f01c:
  if (local_60 == 0) {
    return;
  }
  do {
    lVar6 = local_60;
    FUN_02e94434(&local_90,plVar1,&local_70);
    local_70 = local_90;
    local_68 = lStack_88;
    local_60 = local_80;
    local_58 = uStack_78;
    FUN_02e8ec28(lVar6);
    nn::os::LockMutex((MutexType *)&DAT_0440a350);
    piVar2 = (int *)(lVar6 + 0x60);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 < 1) {
      if (*(long *)(lVar6 + 0x18) != 0) {
        (*DAT_0442d158)(((*(byte *)(lVar6 + 0x68) & 8) >> 3) << 0x1f | 3);
        *(undefined8 *)(lVar6 + 0x18) = 0;
      }
      FUN_02e8e6dc(DAT_0440a148,lVar6);
      iVar7 = *(int *)(lVar6 + 100);
      nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
      if (iVar7 < 1) break;
    }
    else {
      nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
    }
joined_r0x02e8f0fc:
    if (local_60 == 0) {
      return;
    }
  } while( true );
  if ((*(byte *)(lVar6 + 0x68) >> 1 & 1) != 0) {
    (*DAT_0442d150)(0,*(undefined8 *)(lVar6 + 0x20));
    *(byte *)(lVar6 + 0x68) = *(byte *)(lVar6 + 0x68) & 0xfd;
  }
  *(undefined8 *)(lVar6 + 0x20) = 0;
  (*DAT_0442d150)(0,lVar6);
  goto joined_r0x02e8f01c;
}


