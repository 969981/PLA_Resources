/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002315dc; name: FUN_002315dc
 */


void FUN_002315dc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  FUN_00242014(param_1,0,0,param_2,param_4);
  *param_1 = (long)(PTR_DAT_04372b60 + 0x10);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfd | *(char *)(param_4 + 0xde) << 1;
  return;
}


