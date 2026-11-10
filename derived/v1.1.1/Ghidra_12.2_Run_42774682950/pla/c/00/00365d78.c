/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00365d78; name: FUN_00365d78
 */


void FUN_00365d78(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_00365d78(param_1,*param_2);
  FUN_00365d78(param_1,param_2[1]);
  puVar1 = (undefined8 *)param_2[5];
  param_2[5] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_002e2ea0(PTR_LAB_04373088,puVar1);
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return;
}


