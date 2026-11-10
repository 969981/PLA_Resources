/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02764050; name: FUN_02764050
 */


void FUN_02764050(long param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    FUN_02764868(param_1,param_2);
    return;
  }
  *puVar1 = &PTR_FUN_0426b9d8;
  FUN_02762fb0(puVar1 + 1,param_2 + 8);
  FUN_027644dc(puVar1 + 5,param_2 + 0x28);
  FUN_02762fb0(puVar1 + 9,param_2 + 0x48);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x68;
  return;
}


