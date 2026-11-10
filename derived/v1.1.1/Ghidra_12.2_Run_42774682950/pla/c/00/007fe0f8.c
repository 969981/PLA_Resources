/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fe0f8; name: FUN_007fe0f8
 */


undefined8 FUN_007fe0f8(long param_1)

{
  undefined *local_48;
  undefined1 local_3f;
  ushort local_3e;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  int local_20 [4];
  
  if (*(uint *)(param_1 + 0x10) < 4) {
    return 0;
  }
  local_48 = PTR_DAT_043775f8 + 0x10;
  FUN_007fd5b4(local_20,&local_48,*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x14) = local_3f;
  *(uint *)(param_1 + 0x1c) = (uint)local_3e;
  if ((*(int *)(param_1 + 0x18) + (uint)local_3e <= *(uint *)(param_1 + 0x10)) &&
     (0x15 < *(uint *)(param_1 + 0x10))) {
    local_48 = PTR_DAT_04377628 + 0x10;
    FUN_007fe1d0(local_20,&local_48,*(undefined8 *)(param_1 + 8));
    if (local_20[0] == 0) {
      *(undefined8 *)(param_1 + 0x28) = local_38;
      *(undefined8 *)(param_1 + 0x30) = local_30;
      *(undefined2 *)(param_1 + 0x38) = local_28;
      return 1;
    }
  }
  return 0;
}


