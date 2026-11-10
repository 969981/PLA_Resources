/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e4ba4; name: FUN_003e4ba4
 */


void FUN_003e4ba4(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1[4];
  *param_1 = (long)(PTR_DAT_043740e0 + 0x10);
                    /* try { // try from 003e4bc4 to 003e4bcf has its CatchHandler @ 003e4bfc */
  uVar1 = FUN_003eed6c();
  FUN_003eeec8(uVar1,lVar2);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_1[7]);
  return;
}


