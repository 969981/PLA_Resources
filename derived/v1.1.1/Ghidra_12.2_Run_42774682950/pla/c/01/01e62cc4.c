/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e62cc4; name: FUN_01e62cc4
 */


void FUN_01e62cc4(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  char *local_110;
  undefined8 uStack_108;
  long *local_100 [4];
  long *local_e0;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [108];
  undefined1 local_44 [4];
  long local_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,auStack_b0);
    local_d0 = *param_2;
    local_c8 = (code *)param_2[1];
    local_c0 = param_2[2];
    uStack_b8 = param_2[3];
  }
  FUN_018bc8c0(uVar2,&local_d0);
  pcVar1 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar1)(auStack_b0);
  }
  FUN_00b1df44(*(undefined8 *)(param_1 + 0x78));
  FUN_00b1ea58(*(undefined8 *)(param_1 + 0x80));
  FUN_00b1f4ec(*(undefined8 *)(param_1 + 0x88));
  FUN_00b20f98(*(undefined8 *)(param_1 + 0x90));
  local_118 = 0x6fd9e6a1fae764af;
  local_110 = "bin/field/resident/CollisionMatrix.bin";
  uStack_108 = 0x26;
  FUN_00da317c(local_100,&local_118);
  local_44[0] = 1;
  puVar3 = param_2 + 4;
  local_38 = param_1 + 0x98;
  (*(code *)*param_2)(puVar3,&local_38,local_100,local_44);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100[0] != (long *)0x0) {
    (**(code **)(*local_100[0] + 0x20))();
  }
  local_118 = 0x4fba6be661af6fc6;
  local_110 = "bin/field/resident/SpringBoneCollisionMatrix.bin";
  uStack_108 = 0x30;
  FUN_00da317c(local_100,&local_118);
  local_44[0] = 1;
  local_38 = param_1 + 200;
  (*(code *)*param_2)(puVar3,&local_38,local_100,local_44);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100[0] != (long *)0x0) {
    (**(code **)(*local_100[0] + 0x20))();
  }
  local_118 = 0x3cd26b1ba0c837a5;
  local_110 = "bin/field/camera/camera_table.bin";
  uStack_108 = 0x21;
  FUN_00da317c(local_100,&local_118);
  local_44[0] = 0;
  local_38 = param_1 + 0xf8;
  (*(code *)*param_2)(puVar3,&local_38,local_100,local_44);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100[0] != (long *)0x0) {
    (**(code **)(*local_100[0] + 0x20))();
  }
  local_118 = 0xc0565b614e22ddc9;
  local_110 = "bin/field/search_item/search_item_set.bin";
  uStack_108 = 0x29;
  FUN_00da317c(local_100,&local_118);
  local_44[0] = 0;
  local_38 = param_1 + 0x128;
  (*(code *)*param_2)(puVar3,&local_38,local_100,local_44);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100[0] != (long *)0x0) {
    (**(code **)(*local_100[0] + 0x20))();
  }
  local_118 = 0xee043c4c826a7933;
  local_110 = "bin/field/character/character_animation_tag_table.bin";
  uStack_108 = 0x35;
  FUN_00da317c(local_100,&local_118);
  local_44[0] = 0;
  local_38 = param_1 + 0x1b8;
  (*(code *)*param_2)(puVar3,&local_38,local_100,local_44);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100[0] != (long *)0x0) {
    (**(code **)(*local_100[0] + 0x20))();
  }
  local_118 = 0x9b82c31d4a0362b7;
  local_110 = "bin/field/encount/huge_outbreak.bin";
  uStack_108 = 0x23;
  FUN_00da317c(local_100,&local_118);
  local_44[0] = 0;
  local_38 = param_1 + 0x1e8;
  (*(code *)*param_2)(puVar3,&local_38,local_100,local_44);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100[0] != (long *)0x0) {
    (**(code **)(*local_100[0] + 0x20))();
  }
  local_118 = 0x31f53c7d429304cb;
  local_110 = "bin/field/resident/BgPartsExtendParams.bin";
  uStack_108 = 0x2a;
  FUN_00da317c(local_100,&local_118);
  local_44[0] = 1;
  local_38 = param_1 + 0x218;
  (*(code *)*param_2)(puVar3,&local_38,local_100,local_44);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100[0] != (long *)0x0) {
    (**(code **)(*local_100[0] + 0x20))();
  }
  local_118 = 0x4e68e03474b5ccfd;
  local_110 = "bin/field/weather/weather_table.bin";
  uStack_108 = 0x23;
  FUN_00da317c(local_100,&local_118);
  local_44[0] = 1;
  local_38 = param_1 + 0x248;
  (*(code *)*param_2)(puVar3,&local_38,local_100,local_44);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100[0] != (long *)0x0) {
    (**(code **)(*local_100[0] + 0x20))();
  }
  local_118 = 0x448daf7d48118db6;
  local_110 = "bin/field/encount/new_huge_outbreak_group.bin";
  uStack_108 = 0x2d;
  FUN_00da317c(local_100,&local_118);
  local_44[0] = 0;
  local_38 = param_1 + 0x518;
  (*(code *)*param_2)(puVar3,&local_38,local_100,local_44);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100[0] != (long *)0x0) {
    (**(code **)(*local_100[0] + 0x20))();
  }
  local_118 = 0xf70a9d03d3076040;
  local_110 = "bin/field/encount/new_huge_outbreak_group_lottery.bin";
  uStack_108 = 0x35;
  FUN_00da317c(local_100,&local_118);
  local_44[0] = 0;
  local_38 = param_1 + 0x548;
  (*(code *)*param_2)(puVar3,&local_38,local_100,local_44);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100[0] != (long *)0x0) {
    (**(code **)(*local_100[0] + 0x20))();
  }
  local_118 = 0xbe80d1328789a7d4;
  local_110 = "bin/field/encount/new_huge_outbreak_lottery.bin";
  uStack_108 = 0x2f;
  FUN_00da317c(local_100,&local_118);
  local_44[0] = 0;
  local_38 = param_1 + 0x578;
  (*(code *)*param_2)(puVar3,&local_38,local_100,local_44);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100[0] != (long *)0x0) {
    (**(code **)(*local_100[0] + 0x20))();
  }
  local_118 = 0x919ef20b554c47ac;
  local_110 = "bin/field/encount/new_huge_outbreak_time_limit.bin";
  uStack_108 = 0x32;
  FUN_00da317c(local_100,&local_118);
  local_44[0] = 0;
  local_38 = param_1 + 0x5a8;
  (*(code *)*param_2)(puVar3,&local_38,local_100,local_44);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100[0] != (long *)0x0) {
    (**(code **)(*local_100[0] + 0x20))();
  }
  return;
}


