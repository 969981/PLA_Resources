/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e52e0; name: FUN_006e52e0
 */


void FUN_006e52e0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_043761c8 + 0x10);
                    /* try { // try from 006e52fc to 006e52ff has its CatchHandler @ 006e5394 */
  FUN_006e53a8();
  if (((param_1[1] & 1U) == 0) ||
     (plVar2 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar2 != 0 || plVar2 == (long *)0x0)) {
    FUN_006e5130(param_1 + 2);
    return;
  }
  plVar3 = plVar2 + 1;
  lVar1 = *plVar3;
  if (lVar1 != plVar2[2]) {
                    /* try { // try from 006e5340 to 006e5347 has its CatchHandler @ 006e5380 */
    FUN_0030cac0(plVar3);
    lVar1 = *plVar3;
  }
  if (lVar1 != 0) {
    plVar2[2] = lVar1;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  FUN_002e2ea0(PTR_LAB_04373088,plVar2);
  FUN_006e5130(param_1 + 2);
  return;
}


