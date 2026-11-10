/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0062d384; name: FUN_0062d384
 */


void FUN_0062d384(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_043755c0 + 0x10);
                    /* try { // try from 0062d39c to 0062d39f has its CatchHandler @ 0062d3f0 */
  FUN_0062d3f4();
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


