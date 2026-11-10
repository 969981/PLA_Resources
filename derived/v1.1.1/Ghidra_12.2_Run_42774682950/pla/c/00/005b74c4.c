/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b74c4; name: FUN_005b74c4
 */


ulong * FUN_005b74c4(ulong *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_2;
  if (*param_1 >> 1 <= uVar1) {
    return (ulong *)0x0;
  }
  if ((*param_1 & 1) == 0) {
    return param_1 + uVar1 * 3 + 1;
  }
  return (ulong *)(param_1[1] + uVar1 * 0x18);
}


