/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065be44; name: FUN_0065be44
 */


int FUN_0065be44(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  MutexType *pMVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  byte local_e0;
  undefined7 uStack_df;
  ulong local_d0;
  long *plStack_c8;
  byte local_c0;
  undefined7 uStack_bf;
  ulong local_b0;
  long *plStack_a8;
  long lStack_a0;
  ulong local_98;
  long local_88;
  undefined8 local_80;
  long alStack_70 [4];
  long *local_50;
  int local_34;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f0));
  local_34 = *(int *)(param_1 + 0x210) + 1;
  *(int *)(param_1 + 0x210) = local_34;
  if (&lStack_a0 != param_3) {
    plVar3 = (long *)param_3[4];
    if (plVar3 == (long *)0x0) {
      local_80 = (long *)0x0;
    }
    else if (plVar3 == param_3) {
      local_80 = &lStack_a0;
      (**(code **)(*plVar3 + 0x28))(plVar3,&lStack_a0);
    }
    else {
      param_3[4] = 0;
      local_80 = plVar3;
    }
  }
  if (alStack_70 != param_4) {
    local_50 = alStack_70;
    plVar3 = (long *)param_4[4];
    if (plVar3 == (long *)0x0) {
      local_50 = (long *)0x0;
    }
    else if (plVar3 == param_4) {
      (**(code **)(*plVar3 + 0x28))(plVar3,local_50);
    }
    else {
      param_4[4] = 0;
      local_50 = plVar3;
    }
  }
  plVar3 = alStack_70;
                    /* try { // try from 0065bf2c to 0065bf3b has its CatchHandler @ 0065c458 */
  FUN_006641c8(param_1 + 0x1d0,&local_34,&local_34,&lStack_a0);
  if (local_50 != (long *)0x0) {
    if (local_50 == plVar3) {
      pcVar7 = *(code **)(*local_50 + 0x10);
    }
    else {
      pcVar7 = *(code **)(*local_50 + 0x18);
      plVar3 = local_50;
    }
    (*pcVar7)(plVar3);
  }
  if (local_80 != (long *)0x0) {
    if (local_80 == &lStack_a0) {
      pcVar7 = *(code **)(*local_80 + 0x10);
      plVar3 = &lStack_a0;
    }
    else {
      pcVar7 = *(code **)(*local_80 + 0x18);
      plVar3 = local_80;
    }
    (*pcVar7)(plVar3);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f0));
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a8));
                    /* try { // try from 0065bfa4 to 0065bfaf has its CatchHandler @ 0065c444 */
  FUN_006885cc(&lStack_a0,0);
  uVar8 = *(undefined8 *)PTR_PTR_04375850;
                    /* try { // try from 0065bfbc to 0065bfcb has its CatchHandler @ 0065c440 */
  FUN_00682760(&local_c0,uVar8);
  uVar4 = (ulong)&local_c0 | 1;
  if ((local_c0 & 1) != 0) {
    uVar4 = local_b0;
  }
                    /* try { // try from 0065bfe0 to 0065bfe7 has its CatchHandler @ 0065c414 */
  FUN_0065c500(&lStack_a0,uVar4);
  if ((local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))
              (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
  }
  uVar4 = FUN_0067d670(param_2);
  if ((uVar4 & 1) == 0) {
    if (local_80._4_4_ != 3) {
                    /* try { // try from 0065c114 to 0065c187 has its CatchHandler @ 0065c4e4 */
      FUN_006884d0(&lStack_a0);
      local_80 = (long *)CONCAT44(3,(undefined4)local_80);
      puVar6 = (ulong *)(local_98 & 0xfffffffffffffffe);
      if ((local_98 & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      local_88 = FUN_0068bd20(puVar6);
      lVar9 = *(long *)(local_88 + 0x10);
      if (lVar9 == 0) goto LAB_0065c144;
LAB_0065c054:
      if (*(int *)(lVar9 + 0x24) == 3) goto LAB_0065c060;
LAB_0065c168:
      FUN_0068efd0(lVar9);
      *(undefined4 *)(lVar9 + 0x24) = 3;
      puVar6 = (ulong *)(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar9 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      uVar10 = FUN_0069d6c0(puVar6);
      *(undefined8 *)(lVar9 + 0x18) = uVar10;
    }
    else {
      lVar9 = *(long *)(local_88 + 0x10);
      if (lVar9 != 0) goto LAB_0065c054;
LAB_0065c144:
      lVar5 = local_88;
      puVar6 = (ulong *)(*(ulong *)(local_88 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(local_88 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      lVar9 = FUN_0069cad4(puVar6);
      *(long *)(lVar5 + 0x10) = lVar9;
      if (*(int *)(lVar9 + 0x24) != 3) goto LAB_0065c168;
LAB_0065c060:
      uVar10 = *(undefined8 *)(lVar9 + 0x18);
    }
                    /* try { // try from 0065c190 to 0065c19f has its CatchHandler @ 0065c3b0 */
    FUN_00682930(&local_c0,param_2);
    uVar4 = (ulong)&local_c0 | 1;
    if ((local_c0 & 1) != 0) {
      uVar4 = local_b0;
    }
                    /* try { // try from 0065c1b4 to 0065c1bb has its CatchHandler @ 0065c3a0 */
    FUN_0065c824(uVar10,uVar4);
    goto LAB_0065c1bc;
  }
  if (local_80._4_4_ != 3) {
                    /* try { // try from 0065c068 to 0065c0db has its CatchHandler @ 0065c4e4 */
    FUN_006884d0(&lStack_a0);
    local_80 = (long *)CONCAT44(3,(undefined4)local_80);
    puVar6 = (ulong *)(local_98 & 0xfffffffffffffffe);
    if ((local_98 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    local_88 = FUN_0068bd20(puVar6);
    lVar9 = *(long *)(local_88 + 0x10);
    if (lVar9 == 0) goto LAB_0065c098;
LAB_0065c030:
    if (*(int *)(lVar9 + 0x24) == 2) goto LAB_0065c03c;
LAB_0065c0bc:
    FUN_0068efd0(lVar9);
    *(undefined4 *)(lVar9 + 0x24) = 2;
    puVar6 = (ulong *)(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar9 + 8) & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    uVar10 = FUN_0069d5b4(puVar6);
    *(undefined8 *)(lVar9 + 0x18) = uVar10;
  }
  else {
    lVar9 = *(long *)(local_88 + 0x10);
    if (lVar9 != 0) goto LAB_0065c030;
LAB_0065c098:
    lVar5 = local_88;
    puVar6 = (ulong *)(*(ulong *)(local_88 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(local_88 + 8) & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    lVar9 = FUN_0069cad4(puVar6);
    *(long *)(lVar5 + 0x10) = lVar9;
    if (*(int *)(lVar9 + 0x24) != 2) goto LAB_0065c0bc;
LAB_0065c03c:
    uVar10 = *(undefined8 *)(lVar9 + 0x18);
  }
                    /* try { // try from 0065c0e4 to 0065c0f3 has its CatchHandler @ 0065c3c4 */
  FUN_00682930(&local_c0,param_2);
  uVar4 = (ulong)&local_c0 | 1;
  if ((local_c0 & 1) != 0) {
    uVar4 = local_b0;
  }
                    /* try { // try from 0065c108 to 0065c10f has its CatchHandler @ 0065c3b4 */
  FUN_0065c6a4(uVar10,uVar4);
LAB_0065c1bc:
  if ((local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))
              (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
  }
  if (local_80._4_4_ == 3) {
    lVar9 = *(long *)(local_88 + 0x10);
    lVar5 = local_88;
  }
  else {
                    /* try { // try from 0065c1fc to 0065c23b has its CatchHandler @ 0065c4e4 */
    FUN_006884d0(&lStack_a0);
    local_80 = (long *)CONCAT44(3,(undefined4)local_80);
    puVar6 = (ulong *)(local_98 & 0xfffffffffffffffe);
    if ((local_98 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    lVar5 = FUN_0068bd20(puVar6);
    lVar9 = *(long *)(lVar5 + 0x10);
  }
  local_88 = lVar5;
  if (lVar9 == 0) {
    puVar6 = (ulong *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    lVar9 = FUN_0069cad4(puVar6);
    *(long *)(lVar5 + 0x10) = lVar9;
  }
  FUN_0061c880(&local_e0,local_34);
  uVar4 = (ulong)&local_e0 | 1;
  if ((local_e0 & 1) != 0) {
    uVar4 = local_d0;
  }
                    /* try { // try from 0065c268 to 0065c277 has its CatchHandler @ 0065c3fc */
  FUN_00682e10(&local_c0,uVar8,uVar4);
  uVar4 = (ulong)&local_c0 | 1;
  if ((local_c0 & 1) != 0) {
    uVar4 = local_b0;
  }
                    /* try { // try from 0065c28c to 0065c293 has its CatchHandler @ 0065c3c8 */
  FUN_0065c9c8(lVar9,uVar4);
  if ((local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))
              (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
  }
  if ((local_e0 & 1) != 0) {
    (**(code **)(*plStack_c8 + 0x18))
              (plStack_c8,local_d0,CONCAT71(uStack_df,local_e0) & 0xfffffffffffffffe,1);
  }
                    /* try { // try from 0065c2e0 to 0065c2e7 has its CatchHandler @ 0065c4e4 */
  FUN_0065cb6c(param_1 + 0x218,&lStack_a0);
  *(undefined1 *)(param_1 + 0x1c8) = 1;
  nn::os::LockMutex((MutexType *)(param_1 + 0x180));
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    lVar9 = *(long *)(param_1 + 0x150);
    pMVar1 = (MutexType *)(lVar9 + 0x38);
    nn::os::LockMutex(pMVar1);
    nn::os::SignalEvent((EventType *)(lVar9 + 0x10));
    nn::os::UnlockMutex(pMVar1);
    *(undefined1 *)(param_1 + 0x1a0) = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x180));
  iVar2 = local_34;
  FUN_006888c8(&lStack_a0);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a8));
  return iVar2;
}


