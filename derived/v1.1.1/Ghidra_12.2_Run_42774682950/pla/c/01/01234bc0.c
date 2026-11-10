/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01234bc0; name: FUN_01234bc0
 */


bool FUN_01234bc0(long param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  
  if (param_2 < 7) {
    lVar2 = param_1 + (long)*(int *)(&DAT_03a7a230 + (ulong)param_2 * 8) * 0x58 + 0x10;
  }
  else {
    lVar2 = 0;
  }
  bVar1 = false;
  if ((param_2 < 7) && (lVar2 != 0)) {
    bVar1 = *(int *)(lVar2 + 0x50) !=
            *(int *)(param_1 + (long)*(int *)(&DAT_03a7a230 + (ulong)param_2 * 8) * 0x58 + 0x480);
  }
  return bVar1;
}


