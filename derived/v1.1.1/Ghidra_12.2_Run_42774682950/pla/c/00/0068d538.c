/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068d538; name: FUN_0068d538
 */


void FUN_0068d538(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_04375ca8 + 0x10);
                    /* try { // try from 0068d550 to 0068d553 has its CatchHandler @ 0068d5a4 */
  FUN_0068d5a8();
  if (((param_1[1] & 1U) == 0) ||
     (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 != 0 || plVar1 == (long *)0x0)) {
    return;
  }
  if ((*(byte *)(plVar1 + 1) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,plVar1[3]);
  }
  FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  return;
}


