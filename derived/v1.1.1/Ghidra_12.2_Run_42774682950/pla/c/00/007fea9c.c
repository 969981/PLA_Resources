/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fea9c; name: FUN_007fea9c
 */


void FUN_007fea9c(long param_1)

{
  undefined *local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined2 local_46;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 auStack_41 [17];
  undefined1 auStack_30 [16];
  undefined1 auStack_14 [4];
  
  local_50 = PTR_DAT_043775f8 + 0x10;
  local_48 = 1;
  local_47 = *(undefined1 *)(param_1 + 0x14);
  local_46 = (undefined2)*(undefined4 *)(param_1 + 0x1c);
  FUN_007fd488(auStack_30,&local_50,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  local_50 = PTR_DAT_04377658 + 0x10;
  local_44 = *(undefined1 *)(param_1 + 0x24);
  local_43 = *(undefined1 *)(param_1 + 0x25);
  local_42 = *(undefined1 *)(param_1 + 0x26);
  memcpy(auStack_41,(void *)(param_1 + 0x27),0x10);
  FUN_007feb50(auStack_30,&local_50,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  return;
}


