/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03374b4c; name: FUN_03374b4c
 */


void FUN_03374b4c(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_04367df0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = param_4;
  if (param_4 != 0) {
    FUN_032d645c(param_4);
  }
  *param_1 = &PTR_LAB_043661e0;
  param_1[4] = 0;
  param_1[5] = param_2;
  if (param_2 != 0) {
    FUN_032d645c(param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  puVar1 = (undefined8 *)FUN_032cf5b0(0x40);
  *(undefined4 *)(puVar1 + 7) = 0xffffffff;
  *puVar1 = &PTR_LAB_04367e40;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 1;
  puVar1[3] = 0;
  puVar1[6] = 0x8000000000000000;
  puVar1[4] = 0x8000000000000000;
  puVar1[5] = 0;
  puVar2 = (undefined8 *)param_1[4];
  if ((puVar2 == puVar1) || (param_1[4] = puVar1, puVar2 == (undefined8 *)0x0)) {
    return;
  }
  FUN_032d647c(puVar2);
  return;
}


