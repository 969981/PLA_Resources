/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f6f5c; name: FUN_002f6f5c
 */


void FUN_002f6f5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04153188;
  if (*(char *)(param_1 + 0x3a) != '\0') {
    nn::os::DestroyThread((ThreadType *)(param_1 + 1));
                    /* try { // try from 002f6f84 to 002f6f87 has its CatchHandler @ 002f6f90 */
    free((void *)param_1[0x39]);
  }
  return;
}


