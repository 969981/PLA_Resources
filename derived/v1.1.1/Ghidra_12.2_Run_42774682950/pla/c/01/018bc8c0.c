/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018bc8c0; name: FUN_018bc8c0
 */


void FUN_018bc8c0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 local_88;
  char *local_80;
  undefined8 uStack_78;
  long *local_70 [4];
  long *local_50;
  undefined1 local_3c [4];
  long local_38;
  
  local_88 = 0xa9dd65d3b72d71e3;
  local_80 = "bin/field/param/placement/common/npc_model_set.bin";
  uStack_78 = 0x32;
  FUN_00da317c(local_70,&local_88);
  local_3c[0] = 1;
  puVar1 = param_2 + 4;
  local_38 = param_1 + 0x68;
  (*(code *)*param_2)(puVar1,&local_38,local_70,local_3c);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  local_88 = 0xb33301eb08e18c19;
  local_80 = "bin/field/param/placement/common/pokemon_model_set.bin";
  uStack_78 = 0x36;
  FUN_00da317c(local_70,&local_88);
  local_3c[0] = 1;
  local_38 = param_1 + 0x98;
  (*(code *)*param_2)(puVar1,&local_38,local_70,local_3c);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  local_88 = 0xb3de5d7e8a81c756;
  local_80 = "bin/field/param/placement/common/bg_parts_model_set.bin";
  uStack_78 = 0x37;
  FUN_00da317c(local_70,&local_88);
  local_3c[0] = 1;
  local_38 = param_1 + 200;
  (*(code *)*param_2)(puVar1,&local_38,local_70,local_3c);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  local_88 = 0xa1545654392fbb7c;
  local_80 = "bin/field/param/placement/common/emitter_set.bin";
  uStack_78 = 0x30;
  FUN_00da317c(local_70,&local_88);
  local_3c[0] = 1;
  local_38 = param_1 + 0xf8;
  (*(code *)*param_2)(puVar1,&local_38,local_70,local_3c);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  local_88 = 0xa09597854bcf8f1f;
  local_80 = "bin/chara/table/item_model_table.bin";
  uStack_78 = 0x24;
  FUN_00da317c(local_70,&local_88);
  local_3c[0] = 1;
  local_38 = param_1 + 0x128;
  (*(code *)*param_2)(puVar1,&local_38,local_70,local_3c);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  local_88 = 0x6cd3970d8dc5070e;
  local_80 = "bin/field/param/placement/common/landmark_item_model_set.bin";
  uStack_78 = 0x3c;
  FUN_00da317c(local_70,&local_88);
  local_3c[0] = 1;
  local_38 = param_1 + 0x158;
  (*(code *)*param_2)(puVar1,&local_38,local_70,local_3c);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  local_88 = 0xe31fbfd125473a0b;
  local_80 = "bin/field/terrain/tree_collision_info.bin";
  uStack_78 = 0x29;
  FUN_00da317c(local_70,&local_88);
  local_3c[0] = 0;
  local_38 = param_1 + 0x188;
  (*(code *)*param_2)(puVar1,&local_38,local_70,local_3c);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  return;
}


