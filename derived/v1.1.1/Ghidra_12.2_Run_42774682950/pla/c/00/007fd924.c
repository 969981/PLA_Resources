/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fd924; name: FUN_007fd924
 */


void FUN_007fd924(long param_1)

{
  undefined *local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined2 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined2 local_2e;
  undefined1 local_2c;
  undefined1 auStack_28 [20];
  undefined1 auStack_14 [4];
  
  local_58 = PTR_DAT_043775f8 + 0x10;
  local_50 = 1;
  local_4f = *(undefined1 *)(param_1 + 0x14);
  local_4e = (undefined2)*(undefined4 *)(param_1 + 0x1c);
  FUN_007fd488(auStack_28,&local_58,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  local_58 = PTR_DAT_04377608 + 0x10;
  local_4c = *(undefined4 *)(param_1 + 0x24);
  local_48 = *(undefined2 *)(param_1 + 0x28);
  local_40 = *(undefined8 *)(param_1 + 0x30);
  local_38 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined1 *)(param_1 + 0x40);
  local_2e = *(undefined2 *)(param_1 + 0x42);
  local_2c = *(undefined1 *)(param_1 + 0x44);
  FUN_007fd9dc(auStack_28,&local_58,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  return;
}


