/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cf7a8; name: FUN_032cf7a8
 */


ulong FUN_032cf7a8(long *param_1,long param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2 + param_3 + 0x10,0);
  uVar2 = lVar1 + (param_3 + -1) + 0x10U & (long)-param_3;
  *(long **)(uVar2 - 0x10) = param_1;
  *(int *)(uVar2 - 8) = (int)(param_2 + param_3);
  *(int *)(uVar2 - 4) = (int)uVar2 - (int)lVar1;
  return uVar2;
}


