/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e0254; name: FUN_005e0254
 */


void FUN_005e0254(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_0418df30;
  FUN_005df9b4(param_1 + 4);
  puVar1 = (undefined8 *)param_1[3];
  param_1[3] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_002e2ea0(PTR_LAB_04373088,puVar1);
  }
  FUN_005dd5a0(param_1[2]);
  return;
}


