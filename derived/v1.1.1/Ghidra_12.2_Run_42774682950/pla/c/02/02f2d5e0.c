/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2d5e0; name: FUN_02f2d5e0
 */


void FUN_02f2d5e0(long param_1,uint param_2,short param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0xf0);
  if (lVar1 != 0) {
    *(short *)(lVar1 + 0x8a) = *(short *)(lVar1 + 0x8a) + param_3;
  }
  return;
}


