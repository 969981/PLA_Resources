/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02701fd0; name: _INIT_368
 */


void _INIT_368(void)

{
  undefined8 local_220;
  char *pcStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  char *pcStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  char *pcStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  char *pcStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  char *pcStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  char *pcStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  char *pcStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  char *pcStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  char *pcStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_60 = 0x274c4f80867fc667;
  pcStack_58 = "waza_hit_collison_odoshishi_offset";
  local_80 = 0x96b17417d62e542c;
  pcStack_78 = "waza_hit_collison_odoshishi_hight";
  local_50 = 0x22;
  local_48 = (long *)0x0;
  local_70 = 0x21;
  local_68 = (long *)0x0;
  local_90 = 0x22;
  local_88 = (long *)0x0;
  local_a0 = 0x79503db3d83d56c2;
  pcStack_98 = "waza_hit_collison_odoshishi_radius";
  FUN_026d379c(&DAT_043e9e08,&local_60,&local_80,&local_a0);
  local_c0 = 0x2f2c6c9cd4d144b3;
  pcStack_b8 = "waza_hit_collison_nyuura_offset";
  local_e0 = 0xf9c3c4b65a6e61b8;
  pcStack_d8 = "waza_hit_collison_nyuura_hight";
  local_d0 = 0x1e;
  local_c8 = (long *)0x0;
  local_b0 = 0x1f;
  local_a8 = (long *)0x0;
  local_100 = 0x546715c483dc4616;
  pcStack_f8 = "waza_hit_collison_nyuura_radius";
  local_f0 = 0x1f;
  uStack_e8 = 0;
  FUN_026d379c(&DAT_043e9e68,&local_c0,&local_e0,&local_100);
  local_120 = 0x146ff865161ef800;
  pcStack_118 = "waza_hit_collison_basurao_offset";
  local_130 = 0x1f;
  uStack_128 = 0;
  local_140 = 0x7858f4f389cc0951;
  pcStack_138 = "waza_hit_collison_basurao_hight";
  local_110 = 0x20;
  uStack_108 = 0;
  local_160 = 0xab5286e2e71ba841;
  pcStack_158 = "waza_hit_collison_basurao_radius";
  local_150 = 0x20;
  uStack_148 = 0;
  FUN_026d379c(&DAT_043e9ec8,&local_120,&local_140,&local_160);
  local_180 = 0x3b20b22bdbe7732d;
  pcStack_178 = "waza_hit_collison_whooguru_offset";
  local_170 = 0x21;
  uStack_168 = 0;
  local_1a0 = 0x1b72dd90640170c2;
  pcStack_198 = "waza_hit_collison_whooguru_hight";
  local_190 = 0x20;
  uStack_188 = 0;
  local_1c0 = 0xf7913b6e2a98a458;
  pcStack_1b8 = "waza_hit_collison_whooguru_radius";
  local_1b0 = 0x21;
  uStack_1a8 = 0;
  FUN_026d379c(&DAT_043e9f28,&local_180,&local_1a0,&local_1c0);
  local_1e0 = 0x2cc7125d813b2c9e;
  pcStack_1d8 = "waza_hit_collison_ringuma_offset";
  local_1d0 = 0x20;
  uStack_1c8 = 0;
  local_200 = 0x6c9875033603c44f;
  pcStack_1f8 = "waza_hit_collison_ringuma_hight";
  local_1f0 = 0x1f;
  uStack_1e8 = 0;
  local_220 = 0x354de4fb7b6c4a1f;
  pcStack_218 = "waza_hit_collison_ringuma_radius";
  local_210 = 0x20;
  uStack_208 = 0;
  FUN_026d379c(&DAT_043e9f88,&local_1e0,&local_200,&local_220);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_00100250(&LAB_026d386c,&DAT_043e9e08,&PTR_LOOP_0411a000);
  return;
}


