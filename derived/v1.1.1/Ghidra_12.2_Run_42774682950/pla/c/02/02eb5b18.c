/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb5b18; name: FUN_02eb5b18
 */


undefined8 * FUN_02eb5b18(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_02f59e30(2,0x40);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_02eb2758(puVar1,param_1);
    puVar1[7] = 0;
    *puVar1 = &PTR_FUN_042a9ac0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    FUN_02eb6414(DAT_0440a120 + 0x118,puVar1);
  }
  return puVar1;
}


