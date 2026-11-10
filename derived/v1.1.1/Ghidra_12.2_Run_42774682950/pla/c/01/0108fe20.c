/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108fe20; name: FUN_0108fe20
 */


uint FUN_0108fe20(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 == 0) && (param_3 < 0)) {
    return 0xffffffff;
  }
  if ((param_1 == 0xfc) && (0 < param_3)) {
    return 0xffffffff;
  }
  if (((0 < param_3) && (0xfb < param_1)) && (param_4 == 0)) {
    return 0xffffffff;
  }
  if ((0x1fd < param_2 + param_1) && (0 < param_3)) {
    return 0xffffffff;
  }
  param_1 = param_3 + param_1;
  uVar1 = 0xfc;
  if ((param_1 < 0xfd || param_3 < 1) || param_4 != 0) {
    uVar1 = param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU);
  }
  uVar2 = 0x1fe - param_2;
  if (uVar1 + param_2 < 0x1ff) {
    uVar2 = uVar1;
  }
  return uVar2;
}


