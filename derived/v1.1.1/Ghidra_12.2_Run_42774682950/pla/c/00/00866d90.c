/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00866d90; name: FUN_00866d90
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00866d90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,uint param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined *puStack_1b8;
  undefined1 *local_1b0;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined *local_198;
  undefined1 local_190;
  undefined2 local_18f;
  undefined1 local_18d [117];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined *local_110;
  undefined1 *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined *local_f0;
  undefined1 auStack_e8 [120];
  undefined1 auStack_70 [16];
  
  puVar2 = PTR_DAT_043780f8;
  lVar4 = thunk_FUN_007f3f6c(*(undefined8 *)PTR_DAT_043780f8);
  nn::os::LockMutex((MutexType *)(lVar4 + 0x250));
  lVar5 = thunk_FUN_007f3f6c(*(undefined8 *)puVar2);
  nn::os::LockMutex((MutexType *)(lVar5 + 0x1378));
  lVar6 = thunk_FUN_007f3f6c(*(undefined8 *)puVar2);
  plVar10 = *(long **)(lVar6 + 0x270);
  lVar6 = thunk_FUN_007f3f6c(*(undefined8 *)puVar2);
  local_1b0 = &local_190;
  uVar11 = *(undefined8 *)(lVar6 + 0x1308);
  uStack_1a8 = 0x70;
  local_1c8 = (undefined1  [8])(PTR_DAT_043782c0 + 0x10);
  local_198 = PTR_DAT_043782c8 + 0x68;
  puStack_1b8 = PTR_DAT_043782c8 + 0x10;
  lVar6 = 0;
  puVar9 = (undefined8 *)local_1c8;
  do {
    *(undefined2 *)((long)puVar9 + 0x39) = 0;
    lVar1 = lVar6 + 4;
    *(undefined1 *)((long)puVar9 + 0x3b) = 0;
    puVar9 = (undefined8 *)((long)local_1c8 + lVar1);
    local_18d[lVar6 + 1] = 0;
    lVar6 = lVar1;
  } while (lVar1 != 0x70);
  local_190 = 0;
  lVar6 = 0;
  puVar9 = (undefined8 *)local_1c8;
  do {
    *(undefined2 *)((long)puVar9 + 0x39) = 0;
    lVar1 = lVar6 + 4;
    *(undefined1 *)((long)puVar9 + 0x3b) = 0;
    puVar9 = (undefined8 *)((long)local_1c8 + lVar1);
    local_18d[lVar6 + 1] = 0;
    lVar6 = lVar1;
  } while (lVar1 != 0x70);
  _local_118 = CONCAT44(param_4,param_3);
  local_110 = PTR_DAT_043782c8 + 0x10;
  local_f0 = PTR_DAT_043782c8 + 0x68;
  local_108 = auStack_e8;
  local_1a4 = 0;
  uStack_1a0 = 0;
  local_f8 = 0;
  uStack_100 = 0x70;
  local_1c0 = param_2;
  uVar3 = FUN_007ec9d0(&local_110,param_7,1);
  FUN_00868714(auStack_70,&local_110,param_7,uVar3,1);
  FUN_007ec6ec(auStack_70,&puStack_1b8,&local_110);
  plVar7 = (long *)thunk_FUN_007f3f6c(*(undefined8 *)puVar2);
  (**(code **)(*plVar7 + 0x3b8))(&local_110,plVar7,local_1c8);
  uVar8 = thunk_FUN_007f3f6c(*(undefined8 *)puVar2);
  FUN_0085c5b0(&local_110,uVar8,param_2);
  (**(code **)(*plVar10 + 0x70))(plVar10,&local_110,param_5 & 1,param_6 & 1);
  FUN_0085e668(uVar11,param_2);
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x1378));
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x250));
  return;
}


