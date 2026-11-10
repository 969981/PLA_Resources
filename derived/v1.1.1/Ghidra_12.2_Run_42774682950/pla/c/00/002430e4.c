/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002430e4; name: FUN_002430e4
 */


bool FUN_002430e4(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) == 0) {
    return false;
  }
  lVar3 = *(long *)(param_1 + 0xa8) + 0xc;
  uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
  lVar3 = *(long *)(lVar3 + (ulong)(*(int *)(lVar3 + (ulong)uVar1 + 4 +
                                                     (long)*(char *)(lVar3 + (ulong)(*(int *)(lVar3 
                                                  + (ulong)uVar1 + 4) + uVar1) + 0xc) * 4) + uVar1)
                   + 8);
  if (*(long *)(lVar3 + 0x58) == 0) {
LAB_00243144:
    lVar4 = *(long *)(lVar3 + 8);
  }
  else {
    if ((*(byte *)(lVar3 + 0x228) >> 2 & 1) == 0) {
      if ((*(byte *)(*(long *)(lVar3 + 0x58) + 8) >> 5 & 1) != 0) {
        bVar2 = *(char *)(lVar3 + 0x98) == '\0';
        lVar4 = *(long *)(lVar3 + 8);
        goto joined_r0x00243178;
      }
      goto LAB_00243144;
    }
    lVar4 = *(long *)(lVar3 + 8);
  }
  bVar2 = false;
joined_r0x00243178:
  if (((lVar4 == 0) || ((*(byte *)(lVar3 + 0x228) >> 2 & 1) != 0)) ||
     ((*(byte *)(lVar4 + 4) >> 1 & 1) == 0)) {
    return bVar2;
  }
  return (bool)(bVar2 | *(char *)(lVar3 + 0x54) == '\0');
}


