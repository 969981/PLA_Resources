/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00445130; name: FUN_00445130
 */


void FUN_00445130(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((*(byte *)(param_1 + 4) >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x38))(param_1,param_1[2]);
  }
  FUN_004078c0(param_1[1],&LAB_004451a0);
  FUN_00400e80(0xb,param_1,param_1 + 3);
  FUN_00400180(param_1[5]);
  FUN_00400420(param_1,"external/openssl/crypto/ui/ui_lib.c",0x53);
  return;
}


