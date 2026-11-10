/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c431f0; name: _INIT_329
 */


void _INIT_329(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_0437a0e0;
  DAT_043d3138 = 0x924ef6314ba5537c;
  DAT_043d3140 = "bin/effect/field/particle/pokemon/wild_appear_hide/ef_wild_appear_water.ptcl";
  DAT_043d3148 = 0x4c;
  DAT_043d3150 = 0;
  FUN_00100250(PTR_FUN_0437a0e0,&DAT_043d3138,&PTR_LOOP_0411a000);
  DAT_043d3158 = 0xce73aecccf1c2622;
  DAT_043d3160 = "bin/effect/field/particle/pokemon/water/ef_water_jump_001.ptcl";
  DAT_043d3168 = 0x3e;
  DAT_043d3170 = 0;
  FUN_00100250(puVar1,&DAT_043d3158,&PTR_LOOP_0411a000);
  DAT_043d3178 = 0xbd623a10cd7b1eea;
  DAT_043d3180 = "PLAY_PM_458_WATER_JUMP";
  DAT_043d3188 = 0x16;
  DAT_043d3190 = 0;
  FUN_00100250(puVar1,&DAT_043d3178,&PTR_LOOP_0411a000);
  DAT_043d31a8 = 0x16;
  DAT_043d31b0 = 0;
  DAT_043d3198 = 0xd02a144270bd7c1b;
  DAT_043d31a0 = "PLAY_PM_458_WATER_LAND";
  FUN_00100250(puVar1,&DAT_043d3198,&PTR_LOOP_0411a000);
  DAT_043d31c8 = 0x16;
  DAT_043d31d0 = 0;
  DAT_043d31b8 = 0x201fa61183292ee7;
  DAT_043d31c0 = "PLAY_PM_226_WATER_JUMP";
  FUN_00100250(puVar1,&DAT_043d31b8,&PTR_LOOP_0411a000);
  DAT_043d31e8 = 0x16;
  DAT_043d31f0 = 0;
  DAT_043d31d8 = 0xf498b441507b3ea6;
  DAT_043d31e0 = "PLAY_PM_226_WATER_LAND";
  FUN_00100250(puVar1,&DAT_043d31d8,&PTR_LOOP_0411a000);
  return;
}


