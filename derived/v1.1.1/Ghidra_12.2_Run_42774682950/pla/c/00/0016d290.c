/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016d290; name: FUN_0016d290
 */


uint FUN_0016d290(long param_1,ulong param_2,uint param_3)

{
  byte *pbVar1;
  ulong uVar2;
  
  uVar2 = param_2 >> 5;
  param_3 = (uint)param_2 ^ param_3;
  if (uVar2 < param_2) {
    do {
      pbVar1 = (byte *)(param_1 + -1 + param_2);
      param_2 = param_2 + ~uVar2;
      param_3 = param_3 * 0x20 + (param_3 >> 2) + (uint)*pbVar1 ^ param_3;
    } while (uVar2 < param_2);
  }
  return param_3;
}


