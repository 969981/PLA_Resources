/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecdab8; name: FUN_02ecdab8
 */


void FUN_02ecdab8(long param_1,uint param_2,uint param_3)

{
  if (((param_3 & 0xffffffef) != 0) && (*(long *)(param_1 + 0x238) != 0)) {
    FUN_02f2d58c(*(long *)(param_1 + 0x238),param_2,param_3);
  }
  if ((param_3 >> 4 & 1) != 0) {
    *(ushort *)(param_1 + 0x104) = (ushort)(param_2 >> 4) & 1;
  }
  return;
}


