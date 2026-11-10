/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00546d9c; name: FUN_00546d9c
 */


void FUN_00546d9c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
                    /* try { // try from 00546db0 to 00546db3 has its CatchHandler @ 00546dbc */
    free(__ptr);
  }
  return;
}


