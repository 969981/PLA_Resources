/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03326dfc; name: FUN_03326dfc
 */


void FUN_03326dfc(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ThreadType *pTVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 *local_f8;
  undefined8 *puStack_f0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  ulong local_c0;
  ulong uStack_b8;
  long local_b0 [2];
  undefined8 local_a0 [2];
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined2 local_86;
  undefined4 local_84;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_60;
  undefined8 uStack_58;
  
  if (*(int *)(param_1 + 7) != 0) {
    lVar9 = (long)*(int *)(param_1 + 7) << 3;
    puVar10 = (undefined8 *)param_1[6];
    do {
      if ((long *)*puVar10 == param_2) {
        return;
      }
      lVar9 = lVar9 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar9 != 0);
  }
  if (param_1[3] != 0) {
    FUN_03326dfc(param_1[3],param_2,param_3);
  }
  local_90 = *param_1;
  local_a0[0] = 0;
  local_88 = (undefined1)param_3;
  local_86 = 0;
  local_84 = 0;
  pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
  local_80 = nn::os::GetThreadId(pTVar4);
  local_78 = 0;
  local_87 = 1;
  local_70 = 0;
  uStack_58 = 0;
  local_68 = param_1[4];
  local_60 = (ulong)*(uint *)(param_1 + 5);
  FUN_032e2dd4(&local_c0,param_1[2],0);
  iVar11 = 0;
LAB_03326eb4:
  if (local_c0 + 8 < uStack_b8) {
    local_c0 = local_c0 + 8;
    uVar3 = FUN_032e3f8c();
  }
  else {
    uVar5 = FUN_032e2de0(&local_c0);
    if ((uVar5 & 1) == 0) goto LAB_03326ef4;
    uVar3 = FUN_032e3f8c(local_c0);
  }
  if ((uVar3 >> 5 & 1) != 0) {
    iVar11 = iVar11 + 1;
  }
  goto LAB_03326eb4;
LAB_03326ef4:
  FUN_0332711c(&local_c0,iVar11 + -1);
  local_d8 = (undefined8 *)param_1[1];
  uStack_d0 = param_1[2];
  uVar12 = *local_d8;
  local_c8 = 0;
  FUN_032e2dd4(&local_f8,uStack_d0,0);
  do {
    while (puStack_f0 <= local_f8 + 1) {
      uVar5 = FUN_032e2de0(&local_f8);
      if (((uVar5 & 1) == 0) || (uVar3 = FUN_032e3f8c(local_f8), (uVar3 >> 5 & 1) != 0))
      goto LAB_03326f54;
    }
    local_f8 = local_f8 + 1;
    uVar3 = FUN_032e3f8c();
  } while ((uVar3 >> 5 & 1) == 0);
LAB_03326f54:
  uVar5 = local_c0;
  lVar13 = 0;
  lVar9 = local_c0 + 0x10;
LAB_03326f68:
  do {
    if (puStack_f0 <= local_f8 + 1) goto LAB_03326fb8;
    local_f8 = local_f8 + 1;
    uVar3 = FUN_032e3f8c();
  } while ((uVar3 >> 5 & 1) == 0);
  goto LAB_03326f84;
LAB_03326fb8:
  uVar6 = FUN_032e2de0(&local_f8);
  if ((uVar6 & 1) == 0) {
    FUN_03326168(local_a0,uVar12,uVar5);
    if ((local_c8 & 1) != 0) {
      FUN_032e0c40(local_c8 & 0xfffffffffffffffe);
    }
    FUN_03327cf0(local_b0);
    FUN_03327df0(&local_c0);
    (**(code **)(*param_2 + 0x20))(param_2,local_a0);
    iVar8 = *(int *)(param_1 + 7);
    lVar9 = param_1[6];
    iVar11 = iVar8 + 1;
    if ((int)(*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) <= iVar8) {
      lVar9 = FUN_033288d4(PTR_PTR_0434a080,iVar11);
      iVar8 = *(int *)(param_1 + 7);
      param_1[6] = lVar9;
    }
    uVar5 = local_78;
    *(long **)(lVar9 + (long)iVar8 * 8) = param_2;
    if (param_2[1] != 0) {
      param_2 = param_2 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar2) {
          *param_2 = *param_2 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(int *)(param_1 + 7) = iVar11;
    if ((local_78 & 1) != 0) {
      lVar9 = tpidr_el0;
      lVar13 = *(long *)(lVar9 + 0x38d490);
      if (lVar13 == 0) {
        lVar13 = FUN_0333d16c(0,1);
        *(long *)(lVar9 + 0x38d490) = lVar13;
      }
      plVar7 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
      puVar10 = (undefined8 *)(uVar5 - 0x11);
      *puVar10 = 0;
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar10,(long)*(int *)(uVar5 - 9) + 0x10);
    }
    return;
  }
  uVar3 = FUN_032e3f8c(local_f8);
  if ((uVar3 >> 5 & 1) != 0) {
LAB_03326f84:
    FUN_032e4868(&local_110,&local_d8,*local_f8);
    *(undefined8 *)(lVar9 + lVar13 * 8) = local_110;
    *(undefined8 *)(local_b0[0] + 8 + lVar13 * 8) = uStack_108;
    if ((local_100 & 1) != 0) {
      FUN_032e0c40(local_100 & 0xfffffffffffffffe);
    }
    lVar13 = lVar13 + 1;
  }
  goto LAB_03326f68;
}


