/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0144f07c; name: FUN_0144f07c
 */


void FUN_0144f07c(undefined8 *param_1,undefined8 param_2,uint param_3,byte param_4)

{
  FUN_00d40044(param_1,param_2,param_3 & 1);
  *param_1 = &PTR_LAB_04210ea0;
  param_1[9] = &PTR_LAB_04210fa8;
  param_1[10] = &PTR_LAB_04210ff0;
  FUN_0144f0cc(param_1 + 0xae);
  DAT_043c3314 = param_4 & 1;
  return;
}


