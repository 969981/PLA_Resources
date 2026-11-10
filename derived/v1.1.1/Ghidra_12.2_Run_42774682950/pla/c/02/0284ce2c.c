/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284ce2c; name: FUN_0284ce2c
 */


bool FUN_0284ce2c(long param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  
  *param_3 = (uint)*(ushort *)(*(long *)(param_1 + 0xc0) + (ulong)param_2 * 4);
  uVar1 = (uint)*(ushort *)(*(long *)(param_1 + 0xc0) + (ulong)param_2 * 4 + 2);
  *param_4 = uVar1;
  return uVar1 != 0xffff && *param_3 != 0xffff;
}


