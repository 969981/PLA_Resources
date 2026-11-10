/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01415de0; name: FUN_01415de0
 */


void FUN_01415de0(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  FUN_00d40044(param_1,param_2,param_3 & 1);
  *param_1 = &PTR_LAB_0420d668;
  param_1[9] = &PTR_LAB_0420d770;
  param_1[10] = &PTR_LAB_0420d7b8;
  FUN_01415ea4(param_1 + 0xae);
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8(param_1 + 0xe4);
}


