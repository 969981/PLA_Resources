/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d9854; name: FUN_005d9854
 */


void FUN_005d9854(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0418dc30;
  if (param_1[8] != 0) {
                    /* try { // try from 005d9874 to 005d98a7 has its CatchHandler @ 005d98c0 */
    FUN_00308320();
  }
  if (param_1[9] != 0) {
    FUN_00305020();
    free((void *)param_1[9]);
  }
  FUN_00305020(param_1 + 0xc);
  FUN_00579a60(param_1 + 0x43);
  FUN_00579a70(param_1 + 0x249);
                    /* try { // try from 005d98ac to 005d98af has its CatchHandler @ 005d98bc */
  FUN_002ef710(param_1 + 3);
  return;
}


