/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d27cc4; name: FUN_00d27cc4
 */


undefined8 FUN_00d27cc4(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined **local_60 [6];
  
  uVar1 = *(uint *)(param_1 + 0x590);
  if (uVar1 != 0) {
    bVar2 = false;
    if (*(long *)(param_1 + 0x98) != 0) {
      bVar2 = *(char *)(*(long *)(param_1 + 0x98) + 0x1e1) != '\0';
    }
    if (uVar1 != 1) {
      lVar4 = (ulong)uVar1 - 1;
      plVar5 = (long *)(param_1 + 0x148);
      do {
        bVar3 = false;
        if (*plVar5 != 0) {
          bVar3 = *(char *)(*plVar5 + 0x1e1) != '\0';
        }
        bVar2 = (bool)(bVar2 & bVar3);
        lVar4 = lVar4 + -1;
        plVar5 = plVar5 + 0x16;
      } while (lVar4 != 0);
    }
    if (!bVar2) {
      return 0;
    }
  }
  FUN_00d28224(local_60,param_1 + 0x90);
  local_60[0] = &PTR_LAB_041ea950;
  FUN_00d28104(local_60);
  FUN_00d28840(local_60);
  FUN_00d28224(local_60,param_1 + 0x140);
  local_60[0] = &PTR_LAB_041ea950;
  FUN_00d28104(local_60);
  FUN_00d28840(local_60);
  FUN_00d28224(local_60,param_1 + 0x1f0);
  local_60[0] = &PTR_LAB_041ea950;
  FUN_00d28104(local_60);
  FUN_00d28840(local_60);
  FUN_00d28224(local_60,param_1 + 0x2a0);
  local_60[0] = &PTR_LAB_041ea950;
  FUN_00d28104(local_60);
  FUN_00d28840(local_60);
  FUN_00d28224(local_60,param_1 + 0x350);
  local_60[0] = &PTR_LAB_041ea950;
  FUN_00d28104(local_60);
  FUN_00d28840(local_60);
  FUN_00d28224(local_60,param_1 + 0x400);
  local_60[0] = &PTR_LAB_041ea950;
  FUN_00d28104(local_60);
  FUN_00d28840(local_60);
  FUN_00d28224(local_60,param_1 + 0x4b0);
  local_60[0] = &PTR_LAB_041ea950;
  FUN_00d28104(local_60);
  FUN_00d28840(local_60);
  FUN_00d28224(local_60,param_1 + 0x560);
  local_60[0] = &PTR_LAB_041ea950;
  FUN_00d28104(local_60);
  FUN_00d28840(local_60);
  *(undefined4 *)(param_1 + 0x590) = 0;
  return 1;
}


