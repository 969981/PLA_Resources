/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03326168; name: FUN_03326168
 */


long * FUN_03326168(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong *puVar4;
  long **local_f8;
  undefined4 **local_f0;
  long *local_e8;
  undefined1 **ppuStack_e0;
  undefined4 local_68;
  undefined1 *local_60;
  long local_58;
  undefined4 *local_50;
  long *local_48;
  
  local_f8 = &local_48;
  local_f0 = &local_50;
  local_e8 = &local_58;
  ppuStack_e0 = &local_60;
  iVar1 = FUN_03341190(param_3,&DAT_043506c8,&local_f8);
  if (-1 < iVar1) {
    if (local_48 != (long *)0x0) {
      param_1[7] = *local_48;
      *(int *)(param_1 + 8) = (int)local_48[1];
      *(undefined4 *)((long)param_1 + 0x44) = 0xffffffff;
    }
    if (local_50 != (undefined4 *)0x0) {
      *(undefined4 *)((long)param_1 + 0x1c) = *local_50;
    }
    if (local_58 != 0) {
      *(ushort *)((long)param_1 + 0x1a) = *(ushort *)((long)param_1 + 0x1a) | 1;
    }
    if (local_60 != (undefined1 *)0x0) {
      *(undefined1 *)(param_1 + 3) = *local_60;
    }
  }
  if (*param_1 == 0) {
    FUN_032c4d3c(&local_f8);
    puVar4 = (ulong *)(param_1 + 5);
    uVar3 = *puVar4;
    uVar2 = FUN_032c7fc0(puVar4);
    FUN_032c5d4c(&local_f8,uVar3 & 0xfffffffffffffffe,uVar2);
    FUN_032c69c4(&local_f8,param_2,param_3);
    FUN_032c7d58(puVar4,&local_f8);
  }
  else {
    FUN_032c4dfc(&local_f8,(ulong)*(uint *)(param_1 + 1) + *param_1,*(uint *)(param_1 + 1) + 1,
                 *(undefined4 *)((long)param_1 + 0xc));
    local_68 = 0;
    FUN_032c68cc(&local_f8,param_2,param_3);
    *(int *)(param_1 + 1) = (int)local_f0 + -1;
  }
  FUN_032c4ce8(&local_f8);
  return param_1;
}


