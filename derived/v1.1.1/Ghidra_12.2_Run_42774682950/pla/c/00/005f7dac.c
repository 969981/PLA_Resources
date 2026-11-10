/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f7dac; name: FUN_005f7dac
 */


void FUN_005f7dac(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 005f7dc8 to 005f7dcb has its CatchHandler @ 005f7dd4 */
    (**(code **)*puVar1)();
  }
  return;
}


