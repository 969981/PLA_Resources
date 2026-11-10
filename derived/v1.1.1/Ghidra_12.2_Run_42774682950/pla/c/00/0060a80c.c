/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060a80c; name: FUN_0060a80c
 */


void FUN_0060a80c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_04375318 + 0x10);
                    /* try { // try from 0060a828 to 0060a82b has its CatchHandler @ 0060a8b4 */
  FUN_0060a8b8();
  if (((param_1[1] & 1U) == 0) ||
     (plVar2 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar2 != 0 || plVar2 == (long *)0x0)) {
    return;
  }
  plVar3 = plVar2 + 1;
  lVar1 = *plVar3;
  if (lVar1 != plVar2[2]) {
                    /* try { // try from 0060a868 to 0060a86f has its CatchHandler @ 0060a8a0 */
    FUN_0030cac0(plVar3);
    lVar1 = *plVar3;
  }
  if (lVar1 != 0) {
    plVar2[2] = lVar1;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  FUN_002e2ea0(PTR_LAB_04373088,plVar2);
  return;
}


