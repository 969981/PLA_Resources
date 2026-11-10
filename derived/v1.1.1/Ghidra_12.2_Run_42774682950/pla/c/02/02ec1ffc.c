/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec1ffc; name: FUN_02ec1ffc
 */


void FUN_02ec1ffc(int *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 4);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(lVar1 + 8);
    if (*(long *)(param_1 + 2) == lVar1) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    *param_1 = *param_1 + -1;
    FUN_02ec10a4(lVar1);
    FUN_02eb939c(lVar1);
    lVar1 = *(long *)(param_1 + 4);
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_02ec2080(param_1 + 6);
  FUN_02ec20dc(param_1 + 0xc);
  FUN_02ec2138(param_1 + 0x12);
  return;
}


