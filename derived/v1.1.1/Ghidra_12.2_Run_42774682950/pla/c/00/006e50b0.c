/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e50b0; name: FUN_006e50b0
 */


void FUN_006e50b0(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_043761c8 + 0x10);
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  if (*(int *)PTR_DAT_043761d0 != 0) {
                    /* try { // try from 006e510c to 006e5117 has its CatchHandler @ 006e511c */
    FUN_0032d2b0(PTR_DAT_043761d0);
  }
  param_1[5] = (long)PTR_DAT_043730c0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}


