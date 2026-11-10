/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e7ce4; name: FUN_002e7ce4
 */


uint FUN_002e7ce4(long param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if ((param_2 & 0xff) != 0x14) {
    uVar1 = FUN_002e7d30(param_1,param_2,param_3);
    return uVar1 & 1;
  }
  if (param_1 < -0x7fffffff) {
    param_1 = -0x80000000;
  }
  if (0x7ffffffe < param_1) {
    param_1 = 0x7fffffff;
  }
  *param_4 = (int)param_1;
  return 1;
}


