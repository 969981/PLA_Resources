/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00530284; name: FUN_00530284
 */


void FUN_00530284(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
                    /* try { // try from 00530298 to 0053029b has its CatchHandler @ 005302a4 */
    free(__ptr);
  }
  return;
}


