/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fe890; name: FUN_007fe890
 */


undefined8 FUN_007fe890(long param_1)

{
  int local_30 [4];
  undefined *local_20;
  undefined1 local_17;
  ushort local_16;
  undefined4 local_14;
  
  if (*(uint *)(param_1 + 0x10) < 4) {
    return 0;
  }
  local_20 = PTR_DAT_043775f8 + 0x10;
  FUN_007fd5b4(local_30,&local_20,*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x14) = local_17;
  *(uint *)(param_1 + 0x1c) = (uint)local_16;
  if ((*(int *)(param_1 + 0x18) + (uint)local_16 <= *(uint *)(param_1 + 0x10)) &&
     (7 < *(uint *)(param_1 + 0x10))) {
    local_20 = PTR_DAT_04377648 + 0x10;
    FUN_007fe958(local_30,&local_20,*(undefined8 *)(param_1 + 8));
    if (local_30[0] == 0) {
      *(undefined4 *)(param_1 + 0x24) = local_14;
      return 1;
    }
  }
  return 0;
}


