/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f2c90; name: FUN_002f2c90
 */


void FUN_002f2c90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x48);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    puVar2[4] = puVar2;
    puVar1 = PTR_LAB_04373890;
    *puVar2 = puVar2 + 5;
    puVar2[8] = param_5;
    puVar2[2] = puVar2;
    puVar2[3] = puVar1;
    puVar2[6] = 1;
    puVar2[7] = param_4;
  }
  param_1[1] = param_3;
  param_1[2] = param_2;
  *param_1 = puVar2;
  return;
}


