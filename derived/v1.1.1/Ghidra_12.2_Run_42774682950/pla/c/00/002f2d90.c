/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f2d90; name: FUN_002f2d90
 */


void FUN_002f2d90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    puVar1[3] = PTR_LAB_04373898;
    puVar1[4] = puVar1;
    *puVar1 = puVar1 + 5;
    puVar1[2] = puVar1;
    puVar1[6] = 1;
    puVar1[7] = param_2;
    puVar1[8] = param_3;
    puVar1[9] = param_4;
  }
  param_1[1] = param_3;
  param_1[2] = param_2;
  *param_1 = puVar1;
  return;
}


