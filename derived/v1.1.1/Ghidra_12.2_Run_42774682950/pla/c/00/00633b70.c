/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00633b70; name: FUN_00633b70
 */


void FUN_00633b70(long *param_1)

{
  long lVar1;
  
                    /* try { // try from 00633b78 to 00633b7b has its CatchHandler @ 00633bcc */
  FUN_00633bd0();
  if ((*param_1 != 0) || (lVar1 = param_1[2], lVar1 == 0)) {
    return;
  }
  if (*(long *)(lVar1 + 0x20) != 0) {
                    /* try { // try from 00633b9c to 00633ba3 has its CatchHandler @ 00633bc8 */
    FUN_00634784(lVar1);
    if (*(long *)(lVar1 + 0x28) == 0) {
      FUN_002ee710(*(undefined8 *)(lVar1 + 0x20));
    }
  }
  FUN_002e2ea0(PTR_LAB_04373088,lVar1);
  return;
}


