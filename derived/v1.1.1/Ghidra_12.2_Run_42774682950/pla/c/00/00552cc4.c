/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00552cc4; name: FUN_00552cc4
 */


void FUN_00552cc4(long param_1)

{
  long lVar1;
  
                    /* try { // try from 00552cd4 to 00552ce3 has its CatchHandler @ 00552d40 */
  FUN_00559d78(param_1,*(undefined8 *)(param_1 + 0x90));
  FUN_00559d78(param_1,*(undefined8 *)(param_1 + 0x88));
  lVar1 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (lVar1 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  lVar1 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar1 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  lVar1 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


