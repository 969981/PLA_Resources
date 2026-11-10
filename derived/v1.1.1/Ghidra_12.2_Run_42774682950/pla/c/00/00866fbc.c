/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00866fbc; name: FUN_00866fbc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00866fbc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  ulong local_100;
  undefined *puStack_f8;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined *local_d8;
  undefined1 local_d0;
  undefined2 local_cf;
  undefined1 local_cd [117];
  undefined8 local_58;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  puVar2 = PTR_DAT_043780f8;
  lVar4 = thunk_FUN_007f3f6c(*(undefined8 *)PTR_DAT_043780f8);
  nn::os::LockMutex((MutexType *)(lVar4 + 0x250));
  lVar5 = thunk_FUN_007f3f6c(*(undefined8 *)puVar2);
  nn::os::LockMutex((MutexType *)(lVar5 + 0x1378));
  lVar6 = thunk_FUN_007f3f6c(*(undefined8 *)puVar2);
  plVar12 = *(long **)(lVar6 + 0x270);
  lVar6 = thunk_FUN_007f3f6c(*(undefined8 *)puVar2);
  lVar11 = *(long *)(lVar6 + 0x1308);
  lVar6 = thunk_FUN_007f3f6c(*(undefined8 *)puVar2);
  if ((*(int *)(lVar6 + 0x288) != 1) &&
     (iVar3 = FUN_0086644c(param_1), *(int *)(param_1 + 0x40) == iVar3)) {
    uVar7 = thunk_FUN_007f3f6c(*(undefined8 *)puVar2);
    FUN_007f59c0(uVar7,1);
  }
  iVar3 = FUN_00675e10(param_2);
  if (iVar3 == *(int *)(param_1 + 0x3c)) {
    FUN_00802694(plVar12,3);
  }
  uVar8 = FUN_00675e18(param_2);
  local_f0 = &local_d0;
  local_108 = (undefined1  [8])(PTR_DAT_043782c0 + 0x10);
  uStack_e8 = 0x70;
  local_d8 = PTR_DAT_043782c8 + 0x68;
  puStack_f8 = PTR_DAT_043782c8 + 0x10;
  lVar6 = 0;
  puVar10 = (undefined8 *)local_108;
  do {
    *(undefined2 *)((long)puVar10 + 0x39) = 0;
    lVar1 = lVar6 + 4;
    *(undefined1 *)((long)puVar10 + 0x3b) = 0;
    puVar10 = (undefined8 *)((long)local_108 + lVar1);
    local_cd[lVar6 + 1] = 0;
    lVar6 = lVar1;
  } while (lVar1 != 0x70);
  uVar8 = uVar8 & 0xffffffff;
  local_58 = 0;
  local_d0 = 0;
  lVar6 = 0;
  puVar10 = (undefined8 *)local_108;
  do {
    *(undefined2 *)((long)puVar10 + 0x39) = 0;
    lVar1 = lVar6 + 4;
    *(undefined1 *)((long)puVar10 + 0x3b) = 0;
    puVar10 = (undefined8 *)((long)local_108 + lVar1);
    local_cd[lVar6 + 1] = 0;
    lVar6 = lVar1;
  } while (lVar1 != 0x70);
  local_e4 = 0;
  uStack_e0 = 0;
  local_100 = uVar8;
  plVar9 = (long *)thunk_FUN_007f3f6c(*(undefined8 *)puVar2);
  (**(code **)(*plVar9 + 0x3c0))(auStack_128,plVar9,local_108);
  uVar7 = thunk_FUN_007f3f6c(*(undefined8 *)puVar2);
  FUN_0085c5b0(auStack_128,uVar7,uVar8);
  (**(code **)(*plVar12 + 0x78))(plVar12,auStack_128);
  FUN_0085e6c8(lVar11,uVar8);
  *(undefined1 *)(lVar11 + 0x10) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x1378));
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x250));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return;
}


