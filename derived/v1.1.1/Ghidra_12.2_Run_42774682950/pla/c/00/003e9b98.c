/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e9b98; name: FUN_003e9b98
 */


void FUN_003e9b98(long *param_1)

{
  undefined8 uVar1;
  long *__s;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_043740e8 + 0x10);
  FUN_003ea2bc(param_1 + 0x29,param_1[0x2a]);
  FUN_003ea2bc(param_1 + 0x26,param_1[0x27]);
                    /* try { // try from 003e9bd0 to 003e9bd3 has its CatchHandler @ 003e9c88 */
  FUN_002ef710(param_1 + 0x22);
  FUN_003ed42c(param_1 + 0x15);
  if ((param_1[0xb] & 1U) == 0) {
    __s = param_1 + 0xc;
LAB_003e9bf4:
    memset(__s,0xab,(param_1[0xb] & 0x7fffffffffffffeU) << 5);
    if ((*(byte *)(param_1 + 0xb) & 1) == 0) goto LAB_003e9c24;
    lVar2 = param_1[0xc];
  }
  else {
    __s = (long *)param_1[0xc];
    lVar2 = 0;
    if (__s != (long *)0x0) goto LAB_003e9bf4;
  }
  FUN_002e2ea0(PTR_LAB_04373088,lVar2);
LAB_003e9c24:
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[10]);
  }
  lVar2 = param_1[4];
  *param_1 = (long)(PTR_DAT_043740e0 + 0x10);
                    /* try { // try from 003e9c50 to 003e9c5b has its CatchHandler @ 003e9c8c */
  uVar1 = FUN_003eed6c();
  FUN_003eeec8(uVar1,lVar2);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_1[7]);
  return;
}


