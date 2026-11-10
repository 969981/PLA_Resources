/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a6528; name: FUN_007a6528
 */


void FUN_007a6528(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_04377070 + 0x10);
                    /* try { // try from 007a6544 to 007a6547 has its CatchHandler @ 007a65ac */
  FUN_007a65c0();
  if (((param_1[1] & 1U) == 0) ||
     (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 != 0 || plVar1 == (long *)0x0)) {
    FUN_007b1184(param_1 + 2);
    return;
  }
  if ((*(byte *)(plVar1 + 1) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,plVar1[3]);
  }
  FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  FUN_007b1184(param_1 + 2);
  return;
}


