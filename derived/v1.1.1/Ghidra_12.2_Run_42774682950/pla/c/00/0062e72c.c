/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0062e72c; name: FUN_0062e72c
 */


void FUN_0062e72c(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_043755f0 + 0x10);
                    /* try { // try from 0062e748 to 0062e74b has its CatchHandler @ 0062e7b0 */
  FUN_0062e7c4();
  if (((param_1[1] & 1U) == 0) ||
     (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 != 0 || plVar1 == (long *)0x0)) {
    FUN_0062d1bc(param_1 + 2);
    return;
  }
  if ((*(byte *)(plVar1 + 1) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,plVar1[3]);
  }
  FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  FUN_0062d1bc(param_1 + 2);
  return;
}


