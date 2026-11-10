/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9a088; name: FUN_02e9a088
 */


undefined8 * FUN_02e9a088(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_02f59e30(2,0x188);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_02e9ed88(puVar1,param_1);
    *puVar1 = &PTR_LAB_042a8498;
    puVar1[3] = &PTR_LAB_042a8738;
    puVar1[6] = &PTR_LAB_042a87d0;
    FUN_02e9a03c(puVar1);
  }
  return puVar1;
}


