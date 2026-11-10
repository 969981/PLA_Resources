/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fe768; name: FUN_007fe768
 */


void FUN_007fe768(long param_1)

{
  undefined1 auStack_38 [20];
  undefined1 auStack_24 [4];
  undefined *local_20;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  undefined4 local_14;
  
  local_20 = PTR_DAT_043775f8 + 0x10;
  local_18 = 1;
  local_17 = *(undefined1 *)(param_1 + 0x14);
  local_16 = (undefined2)*(undefined4 *)(param_1 + 0x1c);
  FUN_007fd488(auStack_38,&local_20,*(undefined8 *)(param_1 + 8),auStack_24,
               *(undefined4 *)(param_1 + 0x10));
  local_20 = PTR_DAT_04377648 + 0x10;
  local_14 = *(undefined4 *)(param_1 + 0x24);
  FUN_007fe7f0(auStack_38,&local_20,*(undefined8 *)(param_1 + 8),auStack_24,
               *(undefined4 *)(param_1 + 0x10));
  return;
}


