/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7c3ac; name: FUN_02e7c3ac
 */


void FUN_02e7c3ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,byte param_7)

{
  FUN_02e7c070(param_1,param_3,param_4,param_5,param_6);
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_042a7230;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xf8 | (param_7 & 1) << 1;
  return;
}


