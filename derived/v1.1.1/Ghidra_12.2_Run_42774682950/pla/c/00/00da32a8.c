/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da32a8; name: FUN_00da32a8
 */


undefined8
FUN_00da32a8(undefined4 param_1,long param_2,long param_3,undefined4 param_4,undefined8 *param_5,
            undefined4 param_6)

{
  int *piVar1;
  VibrationNode *pVVar2;
  MutexType *pMVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  VibrationModulation *pVVar10;
  long lVar11;
  undefined8 uVar12;
  long *local_70;
  undefined8 *local_68 [2];
  long *local_58;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_4c = param_4;
  FUN_02bc9018(local_68,*(undefined8 *)(param_2 + 0x60),&local_4c);
  if (local_68[0] == (undefined8 *)0x0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_00da57a0(&local_58);
    puVar6 = local_68[0];
    if (local_68[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_68[0] + 1);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_68[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar6;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
  }
  if ((*(uint *)(param_2 + 0x108) & *(uint *)(param_3 + 8)) != 0) {
LAB_00da34d4:
    uVar12 = 0;
    goto joined_r0x00da34dc;
  }
  if (local_58 == (long *)0x0) {
    FUN_02bc9184(local_68,*(undefined8 *)(param_2 + 0x60),&local_4c,param_6);
    if (local_68[0] == (undefined8 *)0x0) {
      local_70 = (long *)0x0;
    }
    else {
      FUN_00da57a0(&local_70);
    }
    plVar7 = local_58;
    local_58 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar11 = plVar7[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    local_58 = local_70;
    local_70 = (long *)0x0;
    if (local_68[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_68[0] + 1);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_68[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *local_68[0];
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
    if (local_58 == (long *)0x0) goto LAB_00da34d4;
    uVar9 = nn::hid::VibrationPlayer::IsPlayable();
    if ((uVar9 & 1) == 0) {
      nn::hid::VibrationPlayer::SetVibrationFileAddress
                (local_58 + 0x11,*(ulong *)(*(long *)(param_3 + 0x48) + 0x250));
    }
  }
  plVar7 = local_58;
  uVar12 = param_5[1];
  *(undefined8 *)((long)local_58 + 0x74) = *param_5;
  *(undefined8 *)((long)local_58 + 0x7c) = uVar12;
  if (*(int *)((long)local_58 + 0x84) == 2) {
LAB_00da3434:
    pVVar10 = (VibrationModulation *)nn::hid::VibrationNodeConnection::GetDestination();
    nn::hid::VibrationNode::SetModulationTo((VibrationNode *)(plVar7 + 0x11),pVVar10);
  }
  else {
    pVVar2 = (VibrationNode *)(local_58 + 0x11);
    pVVar10 = (VibrationModulation *)nn::hid::VibrationNodeConnection::GetDestination();
    nn::hid::VibrationNode::SetModulationTo(pVVar2,pVVar10);
    if (*(int *)((long)plVar7 + 0x84) != 1) goto LAB_00da3434;
  }
  plVar7 = local_58;
  pMVar3 = (MutexType *)(local_58 + 0x2b);
  *(undefined4 *)((long)local_58 + 0x6c) = param_1;
  nn::os::LockMutex(pMVar3);
  *(undefined4 *)(plVar7 + 0x2f) = param_1;
  nn::os::UnlockMutex(pMVar3);
  nn::hid::VibrationPlayer::SetCurrentPosition((int)local_58 + 0x88);
  nn::hid::VibrationPlayer::Play();
  uVar12 = 1;
joined_r0x00da34dc:
  if (local_58 != (long *)0x0) {
    lVar11 = local_58[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return uVar12;
}


