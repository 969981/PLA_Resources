/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fe558; name: FUN_007fe558
 */


undefined8 FUN_007fe558(long param_1)

{
  undefined *local_58;
  undefined1 local_4f;
  ushort local_4e;
  undefined4 local_4c;
  undefined8 local_48;
  undefined2 local_40;
  undefined2 local_3e;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  int local_20 [4];
  
  if (*(uint *)(param_1 + 0x10) < 4) {
    return 0;
  }
  local_58 = PTR_DAT_043775f8 + 0x10;
  FUN_007fd5b4(local_20,&local_58,*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x14) = local_4f;
  *(uint *)(param_1 + 0x1c) = (uint)local_4e;
  if ((*(int *)(param_1 + 0x18) + (uint)local_4e <= *(uint *)(param_1 + 0x10)) &&
     (0x25 < *(uint *)(param_1 + 0x10))) {
    local_58 = PTR_DAT_04377638 + 0x10;
    FUN_007fe660(local_20,&local_58,*(undefined8 *)(param_1 + 8));
    if (local_20[0] == 0) {
      *(undefined4 *)(param_1 + 0x24) = local_4c;
      *(undefined8 *)(param_1 + 0x28) = local_48;
      *(undefined2 *)(param_1 + 0x30) = local_40;
      *(undefined2 *)(param_1 + 0x32) = local_3e;
      *(undefined8 *)(param_1 + 0x38) = local_38;
      *(undefined1 *)(param_1 + 0x41) = local_2f;
      *(undefined1 *)(param_1 + 0x40) = local_30;
      *(undefined4 *)(param_1 + 0x44) = local_2c;
      *(undefined4 *)(param_1 + 0x48) = local_28;
      return 1;
    }
  }
  return 0;
}


