/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03322000; name: FUN_03322000
 */


undefined8 * FUN_03322000(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_032cf5b0(0x30);
  *puVar1 = &PTR_LAB_0434ff18;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 1;
  puVar1[3] = param_1;
  puVar1[4] = param_2;
  puVar1[5] = 0;
  FUN_032d65d0(puVar1,0);
  return puVar1;
}


