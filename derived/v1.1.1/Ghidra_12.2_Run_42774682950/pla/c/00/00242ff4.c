/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00242ff4; name: FUN_00242ff4
 */


bool FUN_00242ff4(long param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    bVar3 = false;
    bVar2 = *(byte *)(param_1 + 0x62);
  }
  else {
    bVar3 = *(char *)(param_1 + 0x5a) != '\0';
    bVar2 = *(byte *)(param_1 + 0x62);
  }
  if ((bVar2 >> 1 & 1) == 0) {
    return bVar3;
  }
  lVar5 = *(long *)(param_1 + 0xa8) + 0xc;
  uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
  lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + (ulong)uVar1 + 4 +
                                                     (long)*(char *)(lVar5 + (ulong)(*(int *)(lVar5 
                                                  + (ulong)uVar1 + 4) + uVar1) + 0xc) * 4) + uVar1)
                   + 8);
  if (*(long *)(lVar5 + 0x58) == 0) {
LAB_00243058:
    lVar6 = *(long *)(lVar5 + 8);
  }
  else {
    if ((*(byte *)(lVar5 + 0x228) >> 2 & 1) == 0) {
      if ((*(byte *)(*(long *)(lVar5 + 0x58) + 8) >> 5 & 1) != 0) {
        bVar4 = *(char *)(lVar5 + 0x98) == '\0';
        lVar6 = *(long *)(lVar5 + 8);
        goto joined_r0x002430b8;
      }
      goto LAB_00243058;
    }
    lVar6 = *(long *)(lVar5 + 8);
  }
  bVar4 = false;
joined_r0x002430b8:
  if (((lVar6 == 0) || ((*(byte *)(lVar5 + 0x228) >> 2 & 1) != 0)) ||
     ((*(byte *)(lVar6 + 4) >> 1 & 1) == 0)) {
    return (bool)(bVar3 | bVar4);
  }
  return (bool)(bVar3 | bVar4 | *(char *)(lVar5 + 0x54) == '\0');
}


