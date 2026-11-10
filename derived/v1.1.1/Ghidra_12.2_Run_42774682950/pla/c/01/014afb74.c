/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014afb74; name: FUN_014afb74
 */


void FUN_014afb74(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_00d39e50();
  *param_1 = &PTR_LAB_04214510;
  param_1[9] = &PTR_LAB_04214560;
  param_1[10] = &PTR_LAB_042145a8;
  FUN_014afbdc(param_1 + 0xd);
  puVar1 = PTR_DAT_0437a508;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = param_1[1];
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((long)param_1 + 0xdd) = 0;
  param_1[0x12] = puVar1 + 0x10;
  param_1[0x13] = 0;
  return;
}


