/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e9c40; name: FUN_005e9c40
 */


void FUN_005e9c40(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_005e9c40(param_1,*param_2);
  FUN_005e9c40(param_1,param_2[1]);
  puVar1 = (undefined8 *)param_2[7];
  param_2[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 005e9c7c to 005e9c7f has its CatchHandler @ 005e9cbc */
    (**(code **)*puVar1)();
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_2[6]);
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_2);
  return;
}


