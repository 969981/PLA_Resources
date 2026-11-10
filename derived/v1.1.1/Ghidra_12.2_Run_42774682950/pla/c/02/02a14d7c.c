/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14d7c; name: FUN_02a14d7c
 */


bool FUN_02a14d7c(long param_1,byte param_2,char param_3)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120);
  bVar2 = *(byte *)(lVar1 + 0x36b);
  if (param_3 == '\0') {
    return bVar2 != 0;
  }
  if (2 < bVar2) {
    return false;
  }
  bVar2 = bVar2 + param_3;
  if (2 < bVar2) {
    bVar2 = 3;
  }
  *(byte *)(lVar1 + 0x36b) = bVar2;
  return true;
}


