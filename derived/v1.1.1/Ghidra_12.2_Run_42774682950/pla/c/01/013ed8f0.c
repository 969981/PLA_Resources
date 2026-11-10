/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ed8f0; name: FUN_013ed8f0
 */


ulong FUN_013ed8f0(long param_1,int param_2)

{
  ulong uVar1;
  
  if (*(char *)(*(long *)(param_1 + 0xa0) + 8) == '\0') {
    uVar1 = FUN_013e19d0(param_2);
    return uVar1;
  }
  return (ulong)(param_2 == 1);
}


