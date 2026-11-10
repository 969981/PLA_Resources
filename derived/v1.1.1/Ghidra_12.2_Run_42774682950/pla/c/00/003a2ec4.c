/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a2ec4; name: FUN_003a2ec4
 */


void FUN_003a2ec4(ulong *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (((*param_1 & 1) == 0) ||
     (plVar2 = (long *)(*param_1 & 0xfffffffffffffffe), *plVar2 != 0 || plVar2 == (long *)0x0)) {
    return;
  }
  plVar3 = plVar2 + 1;
  lVar1 = *plVar3;
  if (lVar1 != plVar2[2]) {
                    /* try { // try from 003a2f08 to 003a2f0f has its CatchHandler @ 003a2f40 */
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


