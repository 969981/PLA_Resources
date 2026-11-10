/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ff270; name: FUN_004ff270
 */


void FUN_004ff270(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 004ff28c to 004ff28f has its CatchHandler @ 004ff2ac */
    (**(code **)*puVar1)();
  }
  if (param_1[6] == 0) {
    return;
  }
  FUN_00305020(param_1 + 2);
  return;
}


