/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071f4e4; name: FUN_0071f4e4
 */


void FUN_0071f4e4(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_04376600 + 0x10);
                    /* try { // try from 0071f500 to 0071f503 has its CatchHandler @ 0071f560 */
  FUN_0071f57c();
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


