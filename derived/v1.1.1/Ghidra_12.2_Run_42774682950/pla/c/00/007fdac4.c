/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fdac4; name: FUN_007fdac4
 */


undefined8 FUN_007fdac4(long param_1)

{
  undefined *local_50;
  undefined1 local_47;
  ushort local_46;
  undefined4 local_44;
  undefined2 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined2 local_26;
  undefined1 local_24;
  int local_20 [4];
  
  if (*(uint *)(param_1 + 0x10) < 4) {
    return 0;
  }
  local_50 = PTR_DAT_043775f8 + 0x10;
  FUN_007fd5b4(local_20,&local_50,*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x14) = local_47;
  *(uint *)(param_1 + 0x1c) = (uint)local_46;
  if ((*(int *)(param_1 + 0x18) + (uint)local_46 <= *(uint *)(param_1 + 0x10)) &&
     (0x1d < *(uint *)(param_1 + 0x10))) {
    local_50 = PTR_DAT_04377608 + 0x10;
    FUN_007fdbbc(local_20,&local_50,*(undefined8 *)(param_1 + 8));
    if (local_20[0] == 0) {
      *(undefined4 *)(param_1 + 0x24) = local_44;
      *(undefined2 *)(param_1 + 0x28) = local_40;
      *(undefined8 *)(param_1 + 0x30) = local_38;
      *(undefined8 *)(param_1 + 0x38) = local_30;
      *(undefined1 *)(param_1 + 0x40) = local_28;
      *(undefined2 *)(param_1 + 0x42) = local_26;
      *(undefined1 *)(param_1 + 0x44) = local_24;
      return 1;
    }
  }
  return 0;
}


