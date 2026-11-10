/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f1cfc; name: FUN_005f1cfc
 */


void FUN_005f1cfc(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 005f1d18 to 005f1d1b has its CatchHandler @ 005f1d24 */
    (**(code **)*puVar1)();
  }
  return;
}


