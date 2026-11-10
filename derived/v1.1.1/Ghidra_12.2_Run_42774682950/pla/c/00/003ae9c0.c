/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ae9c0; name: FUN_003ae9c0
 */


void FUN_003ae9c0(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_04373f20 + 0x10);
  param_1[1] = param_2;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = param_2;
  puVar1 = PTR_DAT_04373f28;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (*(int *)puVar1 != 0) {
                    /* try { // try from 003aea34 to 003aea3f has its CatchHandler @ 003aea44 */
    FUN_0032d2b0(PTR_DAT_04373f28);
  }
  param_1[0xc] = (long)PTR_DAT_043730c0;
  param_1[0xd] = 0;
  return;
}


