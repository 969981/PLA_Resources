/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e76cc; name: FUN_002e76cc
 */


uint FUN_002e76cc(undefined8 param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if ((param_2 & 0xff) == 0x14) {
    *param_4 = (int)param_1;
    return 1;
  }
  uVar1 = FUN_002e7700(param_1,param_2,param_3);
  return uVar1 & 1;
}


