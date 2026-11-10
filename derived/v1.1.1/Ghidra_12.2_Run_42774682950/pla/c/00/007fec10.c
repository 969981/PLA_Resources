/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fec10; name: FUN_007fec10
 */


undefined8 FUN_007fec10(long param_1)

{
  undefined *local_50;
  undefined1 local_47;
  ushort local_46;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 auStack_41 [17];
  int local_30 [4];
  
  if (*(uint *)(param_1 + 0x10) < 4) {
    return 0;
  }
  local_50 = PTR_DAT_043775f8 + 0x10;
  FUN_007fd5b4(local_30,&local_50,*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x14) = local_47;
  *(uint *)(param_1 + 0x1c) = (uint)local_46;
  if ((*(int *)(param_1 + 0x18) + (uint)local_46 <= *(uint *)(param_1 + 0x10)) &&
     (0x16 < *(uint *)(param_1 + 0x10))) {
    local_50 = PTR_DAT_04377658 + 0x10;
    FUN_007fed0c(local_30,&local_50,*(undefined8 *)(param_1 + 8));
    if (local_30[0] == 0) {
      *(undefined1 *)(param_1 + 0x24) = local_44;
      *(undefined1 *)(param_1 + 0x25) = local_43;
      *(undefined1 *)(param_1 + 0x26) = local_42;
      memcpy((void *)(param_1 + 0x27),auStack_41,0x10);
      return 1;
    }
  }
  return 0;
}


