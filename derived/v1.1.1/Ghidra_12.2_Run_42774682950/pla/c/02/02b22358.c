/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b22358; name: FUN_02b22358
 */


undefined1  [16] FUN_02b22358(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
  return *(undefined1 (*) [16])
          (*(long *)(*(long *)(*(long *)(param_1 + 0x68) + (uVar1 / 0x12) * 8) +
                    (uVar1 % 0x12) * 0xd8) + (long)*(int *)(param_2 + 4) * 0x1b0 + 0x50);
}


