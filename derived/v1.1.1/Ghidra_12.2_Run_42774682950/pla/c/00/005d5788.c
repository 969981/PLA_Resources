/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d5788; name: FUN_005d5788
 */


void FUN_005d5788(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 005d57a4 to 005d57a7 has its CatchHandler @ 005d57b0 */
    (**(code **)*puVar1)();
  }
  return;
}


