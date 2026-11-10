/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007145d4; name: FUN_007145d4
 */


void FUN_007145d4(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_043765f0 + 0x10);
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  puVar1 = PTR_DAT_043765f8;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)puVar1 != 0) {
                    /* try { // try from 00714638 to 00714643 has its CatchHandler @ 00714648 */
    FUN_0032d2b0(PTR_DAT_043765f8);
  }
  param_1[8] = (long)PTR_DAT_043730c0;
  return;
}


