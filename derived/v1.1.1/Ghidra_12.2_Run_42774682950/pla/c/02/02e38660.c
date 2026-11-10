/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e38660; name: FUN_02e38660
 */


void FUN_02e38660(float param_1,float param_2,long *param_3)

{
  if ((*(uint *)(param_3 + 1) >> 0xf & 1) == 0) {
    return;
  }
  if (param_2 == param_1) {
    FUN_02e386a0();
    return;
  }
  FUN_02e38770(*param_3 +
               (ulong)((*(uint *)(param_3 + 1) & 0xff) - 1) * (ulong)*(ushort *)(param_3 + 2) * 4,
               *(undefined2 *)((long)param_3 + 0x12));
  return;
}


