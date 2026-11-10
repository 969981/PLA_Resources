/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14040; name: FUN_02a14040
 */


void FUN_02a14040(long param_1,byte param_2,uint param_3)

{
  long lVar1;
  
  if ((param_2 < 0x1e) && ((param_3 & 0xff) < 5)) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x128) + (ulong)param_2 * 4;
    *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) | 1 << (ulong)(param_3 & 0x1f);
  }
  return;
}


