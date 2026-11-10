/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003723f0; name: FUN_003723f0
 */


void FUN_003723f0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  param_1[5] = 0;
  param_1[4] = param_1 + 5;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[7] = param_1 + 8;
  plVar1 = (long *)FUN_002e2e80(PTR_FUN_04373078,8);
  if (plVar1 != (long *)0x0) {
    *plVar1 = (long)(PTR_DAT_04373c48 + 0x10);
  }
  puVar2 = (undefined8 *)param_1[3];
  param_1[3] = plVar1;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar2)(puVar2);
  FUN_002e2ea0(PTR_LAB_04373088,puVar2);
  return;
}


