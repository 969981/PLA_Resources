/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2d58c; name: FUN_02f2d58c
 */


void FUN_02f2d58c(long param_1,uint param_2,uint param_3)

{
  if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0xf0) != 0)) {
    *(ushort *)(*(long *)(param_1 + 0xf0) + 0x8a) = (ushort)param_2 & 1;
  }
  if (((param_3 >> 1 & 1) != 0) && (*(long *)(param_1 + 0xf8) != 0)) {
    *(ushort *)(*(long *)(param_1 + 0xf8) + 0x8a) = (ushort)(param_2 >> 1) & 1;
  }
  if (((param_3 >> 2 & 1) != 0) && (*(long *)(param_1 + 0x100) != 0)) {
    *(ushort *)(*(long *)(param_1 + 0x100) + 0x8a) = (ushort)(param_2 >> 2) & 1;
  }
  if (((param_3 >> 3 & 1) != 0) && (*(long *)(param_1 + 0x108) != 0)) {
    *(ushort *)(*(long *)(param_1 + 0x108) + 0x8a) = (ushort)(param_2 >> 3) & 1;
  }
  return;
}


