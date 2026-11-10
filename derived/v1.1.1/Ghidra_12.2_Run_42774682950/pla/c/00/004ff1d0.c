/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ff1d0; name: FUN_004ff1d0
 */


void FUN_004ff1d0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 004ff1ec to 004ff1ef has its CatchHandler @ 004ff1f8 */
    (**(code **)*puVar1)();
  }
  return;
}


