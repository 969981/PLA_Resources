/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318da78; name: FUN_0318da78
 */


void FUN_0318da78(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  MutexType *pMVar11;
  undefined8 local_70;
  undefined *puStack_68;
  undefined4 *local_60;
  undefined4 *puStack_58;
  undefined4 local_48;
  undefined4 uStack_44;
  
  *param_1 = (long)&PTR_LAB_0430b308;
  plVar7 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  lVar10 = (long)DAT_0444b53c;
  lVar9 = tpidr_el0;
  lVar8 = *(long *)(lVar9 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar8;
  }
  if (*(long *)(lVar8 + lVar10 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  puVar6 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0xe],*(int *)((long)param_1 + 0x7c) << 2);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0x10],*(int *)((long)param_1 + 0x8c) << 2);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0x12],*(int *)((long)param_1 + 0x9c) << 2);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < *(int *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0x14],*(int *)((long)param_1 + 0xac) << 2);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  lVar10 = (long)DAT_0444b53c;
  lVar8 = *(long *)(lVar9 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar8;
  }
  if (*(long *)(lVar8 + lVar10 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x16],((ulong)*(uint *)((long)param_1 + 0xbc) & 0x3fffffff) << 4);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x18],((ulong)*(uint *)((long)param_1 + 0xcc) & 0x3fffffff) * 0x14);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xdc)) && (param_1[0x1a] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x1a],((ulong)*(uint *)((long)param_1 + 0xdc) & 0x3fffffff) << 4);
  }
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xec)) && (param_1[0x1c] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x1c],((ulong)*(uint *)((long)param_1 + 0xec) & 0x3fffffff) * 0x14);
  }
  param_1[0x1c] = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0x80000000;
  lVar10 = (long)DAT_0444b53c;
  lVar8 = *(long *)(lVar9 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar8;
  }
  if (*(long *)(lVar8 + lVar10 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x1e],((ulong)*(uint *)((long)param_1 + 0xfc) & 0x3fffffff) << 4);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x10c)) && (param_1[0x20] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x20],*(uint *)((long)param_1 + 0x10c) & 0x3fffffff);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x11c)) && (param_1[0x22] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x22],(*(uint *)((long)param_1 + 0x11c) & 0x3fffffff) << 1);
  }
  param_1[0x22] = 0;
  *(undefined4 *)((long)param_1 + 0x11c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < *(int *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0x24],*(int *)((long)param_1 + 300) << 2);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  lVar10 = (long)DAT_0444b53c;
  lVar8 = *(long *)(lVar9 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar8;
  }
  if (*(long *)(lVar8 + lVar10 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0x26],*(int *)((long)param_1 + 0x13c) << 2)
    ;
  }
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x14c)) && (param_1[0x28] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0x28],*(int *)((long)param_1 + 0x14c) << 2)
    ;
  }
  param_1[0x28] = 0;
  *(undefined4 *)((long)param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x15c)) && (param_1[0x2a] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0x2a],*(int *)((long)param_1 + 0x15c) << 2)
    ;
  }
  param_1[0x2a] = 0;
  *(undefined4 *)((long)param_1 + 0x15c) = 0x80000000;
  lVar10 = (long)DAT_0444b53c;
  lVar8 = *(long *)(lVar9 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar8;
  }
  if (*(long *)(lVar8 + lVar10 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  FUN_0318e6a8(param_1 + 0x31);
  pMVar11 = (MutexType *)param_1[0x35];
  if (pMVar11 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar11);
    lVar8 = *(long *)(lVar9 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar8;
    }
    plVar7 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,pMVar11,0x20);
  }
  lVar10 = (long)DAT_0444b53c;
  lVar8 = *(long *)(lVar9 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar8;
  }
  if (*(long *)(lVar8 + lVar10 * 8 + 0x18) == 0) {
    lVar8 = param_1[0x33];
  }
  else {
    FUN_0332a954();
    lVar8 = param_1[0x33];
  }
  if ((lVar8 == 0) || (*(int *)(lVar8 + 4) == -2)) {
    iVar5 = (int)param_1[0x32];
  }
  else {
    uVar2 = (long)(int)param_1[0x34] + 1;
    lVar10 = *(long *)(lVar9 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    local_48 = (undefined4)uVar2;
    uStack_44 = 8;
    if ((uVar2 & 0x1ffffffff0000000) != 0) {
      local_70 = 2;
      puStack_68 = &DAT_0411b3a0;
      local_60 = &uStack_44;
      puStack_58 = &local_48;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_70);
    }
    (**(code **)(*plVar7 + 0x18))
              (plVar7,lVar8,-(uVar2 >> 0x1c & 1) & 0xffffffff00000000 | uVar2 * 8 & 0xfffffff8);
    param_1[0x33] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 0x34) = 0;
    iVar5 = (int)param_1[0x32];
  }
  if (iVar5 != 0) {
    lVar9 = (long)iVar5 * 0x38;
    lVar8 = param_1[0x31];
    do {
      lVar10 = lVar8 + lVar9;
      *(undefined4 *)(lVar10 + -8) = 0;
      if ((-1 < *(int *)(lVar10 + -4)) && (*(long *)(lVar10 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x18))
                  (puVar6,*(long *)(lVar10 + -0x10),*(int *)(lVar10 + -4) << 2);
      }
      *(undefined8 *)(lVar10 + -0x10) = 0;
      *(undefined4 *)(lVar10 + -4) = 0x80000000;
      *(undefined4 *)(lVar10 + -0x18) = 0;
      if ((-1 < *(int *)(lVar10 + -0x14)) && (*(long *)(lVar10 + -0x20) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x18))
                  (puVar6,*(long *)(lVar10 + -0x20),*(int *)(lVar10 + -0x14) << 2);
      }
      *(undefined8 *)(lVar10 + -0x20) = 0;
      *(undefined4 *)(lVar10 + -0x14) = 0x80000000;
      *(undefined4 *)(lVar10 + -0x28) = 0;
      if ((-1 < (int)*(uint *)(lVar10 + -0x24)) && (*(long *)(lVar10 + -0x30) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x18))
                  (puVar6,*(long *)(lVar10 + -0x30),
                   ((ulong)*(uint *)(lVar10 + -0x24) & 0x3fffffff) * 0x14);
      }
      lVar9 = lVar9 + -0x38;
      *(undefined8 *)(lVar10 + -0x30) = 0;
      *(undefined4 *)(lVar10 + -0x24) = 0x80000000;
    } while (lVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x194)) && (lVar9 = param_1[0x31], lVar9 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,lVar9,((ulong)*(uint *)((long)param_1 + 0x194) & 0x3fffffff) * 0x38);
  }
  param_1[0x31] = 0;
  *(undefined4 *)((long)param_1 + 0x194) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x174)) && (param_1[0x2d] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0x2d],*(int *)((long)param_1 + 0x174) << 2)
    ;
  }
  param_1[0x2d] = 0;
  *(undefined4 *)((long)param_1 + 0x174) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x15c)) && (param_1[0x2a] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0x2a],*(int *)((long)param_1 + 0x15c) << 2)
    ;
  }
  param_1[0x2a] = 0;
  *(undefined4 *)((long)param_1 + 0x15c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x14c)) && (param_1[0x28] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0x28],*(int *)((long)param_1 + 0x14c) << 2)
    ;
  }
  param_1[0x28] = 0;
  *(undefined4 *)((long)param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0x26],*(int *)((long)param_1 + 0x13c) << 2)
    ;
  }
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < *(int *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0x24],*(int *)((long)param_1 + 300) << 2);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x11c)) && (param_1[0x22] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x22],(*(uint *)((long)param_1 + 0x11c) & 0x3fffffff) << 1);
  }
  param_1[0x22] = 0;
  *(undefined4 *)((long)param_1 + 0x11c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x10c)) && (param_1[0x20] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x20],*(uint *)((long)param_1 + 0x10c) & 0x3fffffff);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x1e],((ulong)*(uint *)((long)param_1 + 0xfc) & 0x3fffffff) << 4);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xec)) && (param_1[0x1c] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x1c],((ulong)*(uint *)((long)param_1 + 0xec) & 0x3fffffff) * 0x14);
  }
  param_1[0x1c] = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xdc)) && (param_1[0x1a] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x1a],((ulong)*(uint *)((long)param_1 + 0xdc) & 0x3fffffff) << 4);
  }
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x18],((ulong)*(uint *)((long)param_1 + 0xcc) & 0x3fffffff) * 0x14);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x16],((ulong)*(uint *)((long)param_1 + 0xbc) & 0x3fffffff) << 4);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < *(int *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0x14],*(int *)((long)param_1 + 0xac) << 2);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0x12],*(int *)((long)param_1 + 0x9c) << 2);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0x10],*(int *)((long)param_1 + 0x8c) << 2);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[0xe],*(int *)((long)param_1 + 0x7c) << 2);
  }
  plVar7 = (long *)param_1[0xd];
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


