/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d40a0; name: FUN_003d40a0
 */


void FUN_003d40a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_003d40a0(param_1,*param_2);
  FUN_003d40a0(param_1,param_2[1]);
  puVar1 = (undefined8 *)param_2[5];
  param_2[5] = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 003d40dc to 003d40df has its CatchHandler @ 003d4104 */
    (**(code **)*puVar1)();
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return;
}


