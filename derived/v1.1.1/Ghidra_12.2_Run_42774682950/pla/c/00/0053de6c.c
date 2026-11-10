/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053de6c; name: FUN_0053de6c
 */


void FUN_0053de6c(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 0053de88 to 0053de8b has its CatchHandler @ 0053de94 */
    (**(code **)*puVar1)();
  }
  return;
}


