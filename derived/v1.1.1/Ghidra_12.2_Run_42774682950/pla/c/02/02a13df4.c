/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a13df4; name: FUN_02a13df4
 */


void FUN_02a13df4(long param_1,byte param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120) +
          (ulong)(param_3 >> 3 & 0xff);
  *(byte *)(lVar1 + 0x387) = *(byte *)(lVar1 + 0x387) & ((byte)(1 << (ulong)(param_3 & 7)) ^ 0xff);
  return;
}


