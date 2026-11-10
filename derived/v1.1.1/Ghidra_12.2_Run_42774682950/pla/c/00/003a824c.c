/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a824c; name: FUN_003a824c
 */


void FUN_003a824c(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_04373f08 + 0x10);
  param_1[1] = param_2;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x18] = param_2;
  param_1[0x12] = param_2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puVar1 = PTR_DAT_04373f10;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)puVar1 != 0) {
                    /* try { // try from 003a830c to 003a8317 has its CatchHandler @ 003a831c */
    FUN_0032d2b0(PTR_DAT_04373f10);
  }
  param_1[0x1b] = (long)PTR_DAT_043730c0;
  param_1[0x1c] = 0;
  return;
}


