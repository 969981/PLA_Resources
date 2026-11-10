/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fe390; name: FUN_007fe390
 */


void FUN_007fe390(long param_1)

{
  undefined *local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined2 local_56;
  undefined4 local_54;
  undefined8 local_50;
  undefined2 local_48;
  undefined2 local_46;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_28 [20];
  undefined1 auStack_14 [4];
  
  local_60 = PTR_DAT_043775f8 + 0x10;
  local_58 = 1;
  local_57 = *(undefined1 *)(param_1 + 0x14);
  local_56 = (undefined2)*(undefined4 *)(param_1 + 0x1c);
  FUN_007fd488(auStack_28,&local_60,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  local_60 = PTR_DAT_04377638 + 0x10;
  local_54 = *(undefined4 *)(param_1 + 0x24);
  local_50 = *(undefined8 *)(param_1 + 0x28);
  local_48 = *(undefined2 *)(param_1 + 0x30);
  local_46 = *(undefined2 *)(param_1 + 0x32);
  local_38 = *(undefined1 *)(param_1 + 0x40);
  local_40 = *(undefined8 *)(param_1 + 0x38);
  local_37 = *(undefined1 *)(param_1 + 0x41);
  local_34 = *(undefined4 *)(param_1 + 0x44);
  local_30 = *(undefined4 *)(param_1 + 0x48);
  FUN_007fe458(auStack_28,&local_60,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  return;
}


