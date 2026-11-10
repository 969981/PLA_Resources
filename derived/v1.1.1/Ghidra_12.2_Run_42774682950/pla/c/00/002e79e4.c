/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e79e4; name: FUN_002e79e4
 */


uint FUN_002e79e4(undefined8 param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  
  if ((param_2 & 0xff) != 0x14) {
    uVar1 = FUN_002e7a30(param_1,param_2,param_3);
    return uVar1 & 1;
  }
  uVar1 = (uint)param_1;
  if (0x7ffffffe < uVar1) {
    uVar1 = 0x7fffffff;
  }
  *param_4 = uVar1;
  return 1;
}


