/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f3318; name: FUN_002f3318
 */


void FUN_002f3318(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x18) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)param_2;
    return;
  }
  puVar1 = (undefined8 *)FUN_002ebd50(param_2 + 0x38);
  puVar1[5] = 0;
  *puVar1 = puVar1 + 5;
  puVar1[2] = puVar1;
  puVar1[3] = &LAB_002f3f58;
  puVar1[6] = 1;
  *(undefined4 *)(puVar1 + 1) = 3;
  puVar1[4] = puVar1;
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = puVar1 + 7;
  return;
}


