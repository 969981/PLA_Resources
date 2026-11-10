/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e1978; name: FUN_013e1978
 */


void FUN_013e1978(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 0x1c5;
  do {
    *param_1 = 0x38900000389;
    param_1[1] = 0x38900000389;
    param_1[2] = 0x38900000389;
    param_1 = param_1 + 3;
  } while (param_1 != puVar1);
  return;
}


