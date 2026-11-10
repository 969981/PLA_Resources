/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0011d8a0; name: FUN_0011d8a0
 */


uint * FUN_0011d8a0(uint *param_1,long param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (ulong)(param_3 & 0x1f);
  if (param_2 < (long)((-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3) + 0x1f &
                      0xfffffffffffffff0)) {
    return (uint *)0x0;
  }
  *param_1 = uVar1;
  param_1[1] = param_3;
  *(ulong *)(param_1 + 2) = (long)param_1 + 0x1fU & 0xfffffffffffffff0;
  return param_1;
}


