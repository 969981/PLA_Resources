/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339a600; name: FUN_0339a600
 */


void FUN_0339a600(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  
  *param_1 = &PTR_LAB_0436f288;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  puVar1 = PTR_PTR_0434a080;
  param_1[7] = param_2;
  puVar2 = (undefined1 *)FUN_032bd1d4(puVar1,1,1,0,0,(long)param_1 + 0x34);
  param_1[5] = puVar2;
  if (*(int *)(param_1 + 6) != 1) {
    *(undefined4 *)(param_1 + 6) = 1;
  }
  *puVar2 = 0;
  if (*(int *)(param_1 + 6) != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  param_1[3] = 0;
  param_1[4] = param_1[5];
  param_1[8] = 0;
  return;
}


