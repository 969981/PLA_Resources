/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02875b3c; name: FUN_02875b3c
 */


void FUN_02875b3c(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  FUN_00d37d1c(param_1,param_2,param_3 & 1,0);
  *param_1 = &PTR_FUN_0426cf00;
  param_1[9] = &PTR_LAB_0426d000;
  param_1[10] = &PTR_LAB_0426d048;
  FUN_02875c20(param_1 + 0x9b);
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8(param_1 + 0xd4);
}


