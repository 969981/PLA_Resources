/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e0ddc; name: FUN_002e0ddc
 */


void FUN_002e0ddc(long *param_1,long param_2)

{
  *param_1 = (long)(PTR_DAT_043737a0 + 0x10);
  param_1[1] = param_2;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
                    /* try { // try from 002e0e04 to 002e0e0b has its CatchHandler @ 002e0e54 */
  FUN_00634a20(param_1 + 2);
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)PTR_DAT_04373770 != 0) {
                    /* try { // try from 002e0e30 to 002e0e3b has its CatchHandler @ 002e0e40 */
    FUN_0032d2b0(PTR_DAT_04373770);
  }
  return;
}


