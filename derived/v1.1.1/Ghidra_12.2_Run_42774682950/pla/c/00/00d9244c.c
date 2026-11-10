/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d9244c; name: FUN_00d9244c
 */


void FUN_00d9244c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x1d0);
  while( true ) {
    lVar1 = param_1;
    if (lVar2 != 0) {
      lVar1 = lVar2;
    }
    if (lVar1 == param_1) break;
    lVar2 = *(long *)(lVar1 + 0x1d0);
    param_1 = lVar1;
  }
  if ((*(byte *)(param_1 + 0x1e0) >> 4 & 1) == 0) {
    return;
  }
  FUN_00d93200(param_1 + 0x218);
  return;
}


