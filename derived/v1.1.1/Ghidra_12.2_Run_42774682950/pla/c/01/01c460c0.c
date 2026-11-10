/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c460c0; name: _INIT_330
 */


void _INIT_330(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_0437a0e0;
  DAT_043d31f8 = 0x779a3372266817c1;
  DAT_043d3200 = "bin/effect/field/particle/pokemon/water/ef_water_move_001.ptcl";
  DAT_043d3208 = 0x3e;
  DAT_043d3210 = 0;
  FUN_00100250(PTR_FUN_0437a0e0,&DAT_043d31f8,&PTR_LOOP_0411a000);
  DAT_043d3218 = 0x8aba70e46a95c4d4;
  DAT_043d3220 = "bin/effect/field/particle/pokemon/water/ef_water_underwater001.ptcl";
  DAT_043d3228 = 0x43;
  DAT_043d3230 = 0;
  FUN_00100250(puVar1,&DAT_043d3218,&PTR_LOOP_0411a000);
  return;
}


