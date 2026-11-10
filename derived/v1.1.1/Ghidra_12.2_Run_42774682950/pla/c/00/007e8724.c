/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e8724; name: FUN_007e8724
 */


void FUN_007e8724(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long local_48;
  long local_40;
  ulong local_38;
  
  local_38 = 0;
  FUN_007ecf14(&local_38);
  FUN_007ecfa4();
  local_38 = 0;
  FUN_007ecf14(&local_38);
  param_1[6] = local_38;
  *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  if (param_2 == 0) {
    uVar6 = *(ulong *)PTR_DAT_043774a8;
  }
  else {
    plVar3 = (long *)FUN_007ecfa4();
    uVar6 = param_1[6] + *plVar3 * (ulong)param_2;
  }
  local_38 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0xd));
  iVar2 = (int)param_1[2];
  while (iVar2 != 0) {
    FUN_007ecf14(&local_38);
    if (uVar6 < local_38) {
      if (((int)param_1[2] == 0) || (param_1[1] == 0)) {
        lVar5 = 0;
        lVar4 = FUN_007e9050(param_1 + 3);
      }
      else {
        lVar5 = param_1[1] - (long)*(int *)((long)param_1 + 0x14);
        lVar4 = FUN_007e9050(param_1 + 3);
      }
      if (lVar4 == 0) goto LAB_007e895c;
      lVar4 = lVar4 - *(int *)((long)param_1 + 0x2c);
      goto joined_r0x007e88bc;
    }
    lVar5 = *param_1 - (long)*(int *)((long)param_1 + 0x14);
    if (local_38 < *(ulong *)(lVar5 + 0x10)) break;
    FUN_007e9088(param_1);
    FUN_007e5f78(lVar5,0);
    iVar2 = (int)param_1[2];
  }
  if ((int)param_1[5] != 0) {
    lVar5 = FUN_007e9050(param_1 + 3);
    if (lVar5 == 0) goto LAB_007e8840;
    do {
      lVar5 = lVar5 - *(int *)((long)param_1 + 0x2c);
      while( true ) {
        FUN_007e8fa0(param_1,param_1,*(int *)((long)param_1 + 0x14) + lVar5);
        if ((int)param_1[5] == 0) goto LAB_007e8848;
        lVar5 = FUN_007e9050(param_1 + 3);
        if (lVar5 != 0) break;
LAB_007e8840:
        lVar5 = 0;
      }
    } while( true );
  }
LAB_007e8848:
  local_40 = 0;
  FUN_007ecf14(&local_40);
  param_1[9] = local_40 - param_1[6];
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_007e54e0(param_1 + 9);
  goto LAB_007e89a4;
joined_r0x007e88bc:
  if (lVar4 != 0) {
    if (lVar5 == 0) {
      FUN_007e8fa0(param_1,param_1,*(int *)((long)param_1 + 0x14) + lVar4);
      lVar4 = FUN_007e9050(param_1 + 3);
      if (lVar4 == 0) goto LAB_007e895c;
      lVar5 = 0;
      lVar4 = lVar4 - *(int *)((long)param_1 + 0x2c);
    }
    else {
      iVar2 = *(int *)((long)param_1 + 0x14);
      lVar1 = iVar2 + lVar5;
      if (*(ulong *)(lVar4 + 0x10) < *(ulong *)(lVar5 + 0x10)) {
        plVar3 = *(long **)(lVar1 + 8);
        if (plVar3 == param_1) {
          lVar5 = 0;
        }
        else {
          lVar5 = (long)plVar3 + (long)-iVar2;
        }
      }
      else {
        FUN_007e8fa0(param_1,lVar1,iVar2 + lVar4);
        lVar4 = FUN_007e9050(param_1 + 3);
        if (lVar4 == 0) goto LAB_007e895c;
        lVar4 = lVar4 - *(int *)((long)param_1 + 0x2c);
      }
    }
    goto joined_r0x007e88bc;
  }
LAB_007e895c:
  local_48 = 0;
  FUN_007ecf14(&local_48);
  local_40 = local_48 - param_1[6];
  FUN_007e54e0(&local_40);
  local_40 = 0;
  FUN_007ecf14(&local_40);
  param_1[9] = local_40 - param_1[6];
  *(undefined1 *)(param_1 + 10) = 1;
LAB_007e89a4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd));
  FUN_007ecf14(param_1 + 8);
  return;
}


