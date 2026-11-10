/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ffa7c; name: FUN_005ffa7c
 */


void FUN_005ffa7c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_005ffa7c(param_1,*param_2);
  FUN_005ffa7c(param_1,param_2[1]);
  puVar1 = (undefined8 *)param_2[7];
  param_2[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 005ffab8 to 005ffabb has its CatchHandler @ 005ffaf8 */
    (**(code **)*puVar1)();
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_2[6]);
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return;
}


