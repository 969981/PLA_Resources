/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00396134; name: FUN_00396134
 */


void FUN_00396134(long *param_1)

{
  long lVar1;
  
                    /* try { // try from 0039613c to 0039613f has its CatchHandler @ 00396190 */
  FUN_00396054();
  if ((*param_1 != 0) || (lVar1 = param_1[2], lVar1 == 0)) {
    return;
  }
  if (*(long *)(lVar1 + 0x20) != 0) {
                    /* try { // try from 00396160 to 00396167 has its CatchHandler @ 0039618c */
    FUN_003991c8(lVar1);
    if (*(long *)(lVar1 + 0x28) == 0) {
      FUN_002ee710(*(undefined8 *)(lVar1 + 0x20));
    }
  }
  FUN_002e2ea0(PTR_LAB_04373088,lVar1);
  return;
}


