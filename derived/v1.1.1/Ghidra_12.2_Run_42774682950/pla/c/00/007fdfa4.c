/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fdfa4; name: FUN_007fdfa4
 */


void FUN_007fdfa4(long param_1)

{
  undefined *local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined2 local_46;
  undefined8 local_40;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 auStack_28 [20];
  undefined1 auStack_14 [4];
  
  local_50 = PTR_DAT_043775f8 + 0x10;
  local_48 = 1;
  local_47 = *(undefined1 *)(param_1 + 0x14);
  local_46 = (undefined2)*(undefined4 *)(param_1 + 0x1c);
  FUN_007fd488(auStack_28,&local_50,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  local_50 = PTR_DAT_04377628 + 0x10;
  local_40 = *(undefined8 *)(param_1 + 0x28);
  local_38 = *(undefined8 *)(param_1 + 0x30);
  local_30 = *(undefined2 *)(param_1 + 0x38);
  FUN_007fe03c(auStack_28,&local_50,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  return;
}


