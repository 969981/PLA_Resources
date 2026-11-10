/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005387bc; name: FUN_005387bc
 */


void FUN_005387bc(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
                    /* try { // try from 005387d0 to 005387d3 has its CatchHandler @ 005387dc */
    free(__ptr);
  }
  return;
}


