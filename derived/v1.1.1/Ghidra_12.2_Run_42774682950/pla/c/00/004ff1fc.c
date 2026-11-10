/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ff1fc; name: FUN_004ff1fc
 */


void FUN_004ff1fc(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 004ff21c to 004ff21f has its CatchHandler @ 004ff26c */
    (**(code **)*puVar1)();
  }
  if (param_1[6] != 0) {
                    /* try { // try from 004ff22c to 004ff22f has its CatchHandler @ 004ff258 */
    FUN_00305020(param_1 + 2);
  }
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 004ff244 to 004ff247 has its CatchHandler @ 004ff254 */
    (**(code **)*puVar1)();
  }
  return;
}


