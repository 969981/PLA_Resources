/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00715c8c; name: FUN_00715c8c
 */


void FUN_00715c8c(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_043765b0 + 0x10);
                    /* try { // try from 00715ca4 to 00715ca7 has its CatchHandler @ 00715cf8 */
  FUN_00715cfc();
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


