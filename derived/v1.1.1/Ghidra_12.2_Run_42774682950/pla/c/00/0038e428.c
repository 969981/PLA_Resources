/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038e428; name: FUN_0038e428
 */


ulong FUN_0038e428(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  if ((*(int *)(param_3 + 0x18) == 1) && (*(char *)(**(long **)(param_3 + 0x20) + 0x41) != '\0')) {
    uVar1 = FUN_00386684(param_1,param_2,**(long **)(param_3 + 0x20));
    return uVar1;
  }
  return (ulong)(*(int *)(param_2 +
                         (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                                      (int)((ulong)(param_3 -
                                                   *(long *)(*(long *)(param_3 + 0x10) + 0x30)) >> 4
                                           ) * -0x55555554)) != 0);
}


