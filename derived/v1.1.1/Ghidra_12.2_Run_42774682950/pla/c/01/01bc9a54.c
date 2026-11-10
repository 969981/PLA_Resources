/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bc9a54; name: FUN_01bc9a54
 */


void FUN_01bc9a54(long param_1)

{
  long lVar1;
  
  do {
    lVar1 = param_1;
    param_1 = lVar1;
    if (*(long *)(lVar1 + 0x1d0) != 0) {
      param_1 = *(long *)(lVar1 + 0x1d0);
    }
  } while (param_1 != lVar1);
  if ((*(byte *)(lVar1 + 0x1e0) >> 4 & 1) == 0) {
    return;
  }
  FUN_01bcad68(lVar1 + 0x218);
  return;
}


