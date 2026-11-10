/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00805df4; name: FUN_00805df4
 */


void FUN_00805df4(long param_1,uint param_2,int param_3)

{
  if (*(int *)(param_1 + 0x58) == param_3) {
    *(uint *)(param_1 + 0x80) =
         *(uint *)(param_1 + 0x80) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  }
  return;
}


