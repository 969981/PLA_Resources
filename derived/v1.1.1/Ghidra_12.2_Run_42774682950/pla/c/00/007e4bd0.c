/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e4bd0; name: FUN_007e4bd0
 */


void FUN_007e4bd0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    *param_1 = 0;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    param_1[1] = 0;
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    param_1[2] = 0;
  }
  FUN_007e34a4(param_1 + 0xb1);
  FUN_007e6214(param_1 + 0x17);
  FUN_007e5808(param_1 + 4);
  return;
}


