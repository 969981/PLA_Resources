/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00714664; name: FUN_00714664
 */


void FUN_00714664(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_043765f0 + 0x10);
                    /* try { // try from 00714680 to 00714683 has its CatchHandler @ 007146e0 */
  FUN_007146fc();
  if (((param_1[1] & 1U) != 0) &&
     (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 == 0 && plVar1 != (long *)0x0)) {
    if ((*(byte *)(plVar1 + 1) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,plVar1[3]);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  }
  FUN_0032b6e4(param_1 + 5);
  FUN_0032b6e4(param_1 + 2);
  return;
}


