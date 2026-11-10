/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071dbd8; name: FUN_0071dbd8
 */


void FUN_0071dbd8(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_043766a8 + 0x10);
                    /* try { // try from 0071dbf0 to 0071dbf3 has its CatchHandler @ 0071dc44 */
  FUN_0071dc48();
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


