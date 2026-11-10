/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02951524; name: FUN_02951524
 */


undefined4 FUN_02951524(long param_1,ulong param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  
  param_2 = param_2 & 0xff;
  lVar3 = param_1 + param_2 * 0x1c;
  bVar1 = *(char *)(lVar3 + 0x304) + param_3;
  bVar2 = *(byte *)(lVar3 + 0x305);
  if (bVar1 <= *(byte *)(lVar3 + 0x305)) {
    bVar2 = bVar1;
  }
  *(byte *)(lVar3 + 0x304) = bVar2;
  if (*(char *)(lVar3 + 0x30c) != '\0') {
    *(byte *)(param_1 + param_2 * 0x1c + 0x2f8) = bVar2;
  }
  return *(undefined4 *)(param_1 + param_2 * 0x1c + 0x300);
}


