/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032080e4; name: FUN_032080e4
 */


void FUN_032080e4(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = &PTR_LAB_042f1da0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[4] = &PTR_LAB_042f1de0;
  param_1[0xe] = param_1 + 0x10;
  param_1[0xf] = 0x8000001100000000;
  param_1[0x98] = param_1 + 0x9a;
  param_1[0x99] = 0x8000001100000000;
  *(undefined4 *)(param_1 + 0x122) = param_2;
  FUN_0332bcc0(param_1 + 6,param_2,param_3,1);
  return;
}


