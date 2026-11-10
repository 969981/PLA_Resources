/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b1310; name: FUN_003b1310
 */


void FUN_003b1310(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_04373f30;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  if (*(int *)PTR_DAT_04373f38 != 0) {
                    /* try { // try from 003b1368 to 003b1373 has its CatchHandler @ 003b1378 */
    FUN_0032d2b0(PTR_DAT_04373f38);
  }
  param_1[6] = (long)PTR_DAT_043730c0;
  param_1[7] = 0;
  return;
}


