/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a81f0; name: FUN_007a81f0
 */


void FUN_007a81f0(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_043770a0 + 0x10);
                    /* try { // try from 007a820c to 007a820f has its CatchHandler @ 007a8274 */
  FUN_007a8288();
  if (((param_1[1] & 1U) == 0) ||
     (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 != 0 || plVar1 == (long *)0x0)) {
    FUN_007a5528(param_1 + 2);
    return;
  }
  if ((*(byte *)(plVar1 + 1) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,plVar1[3]);
  }
  FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  FUN_007a5528(param_1 + 2);
  return;
}


