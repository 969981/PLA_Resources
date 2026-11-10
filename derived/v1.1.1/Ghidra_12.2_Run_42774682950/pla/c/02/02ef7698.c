/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef7698; name: FUN_02ef7698
 */


void FUN_02ef7698(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  undefined1 *local_30;
  ulong local_28;
  undefined1 auStack_14 [4];
  
  local_28 = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  local_30 = (undefined1 *)0x0;
  FUN_02e44d58(auStack_38,param_2,auStack_14);
  if ((*(int *)(param_1 + 0xb0) != 0) && (0.0 < *(float *)(param_1 + 0xb4))) {
    lVar1 = -4;
    if (*(long *)(param_1 + 0xa8) != -1) {
      lVar1 = *(long *)(param_1 + 0xa8);
    }
    FUN_02e44d58(auStack_38,lVar1,auStack_14);
  }
  if ((*(int *)(param_1 + 200) != 0) && (0.0 < *(float *)(param_1 + 0xcc))) {
    lVar1 = -4;
    if (*(long *)(param_1 + 0xc0) != -1) {
      lVar1 = *(long *)(param_1 + 0xc0);
    }
    FUN_02e44d58(auStack_38,lVar1,auStack_14);
  }
  if (*(int *)(*(long *)(param_1 + 8) + 0x40) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(*(long *)(param_1 + 8) + 0x38);
  }
  FUN_02ef0df0(uVar2,param_1 + 0x40,auStack_38);
  if ((local_30 != (undefined1 *)0x0) &&
     (local_28 = local_28 & 0xffffffff00000000, auStack_38 != local_30)) {
    FUN_02f59e70(4);
  }
  return;
}


