/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a8034; name: FUN_007a8034
 */


void FUN_007a8034(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_043770a0 + 0x10);
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)PTR_DAT_043770a8 != 0) {
                    /* try { // try from 007a8084 to 007a808f has its CatchHandler @ 007a8094 */
    FUN_0032d2b0(PTR_DAT_043770a8);
  }
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  return;
}


