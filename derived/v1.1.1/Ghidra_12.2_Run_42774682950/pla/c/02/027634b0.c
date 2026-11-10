/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027634b0; name: FUN_027634b0
 */


void FUN_027634b0(long param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    FUN_02763740(param_1,param_2);
    return;
  }
  *puVar1 = &PTR_FUN_0426b998;
  FUN_02762fb0(puVar1 + 1,param_2 + 8);
  FUN_02762fb0(puVar1 + 5,param_2 + 0x28);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x48;
  return;
}


