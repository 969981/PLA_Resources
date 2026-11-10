/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016f4bec; name: FUN_016f4bec
 */


long FUN_016f4bec(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  size_t __n;
  byte *__s2;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  
  if ((*param_1 & 1) == 0) {
    pbVar7 = param_1 + 1;
    uVar6 = (ulong)(*param_1 >> 1);
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8);
    pbVar7 = *(byte **)(param_1 + 0x10);
  }
  __n = *(size_t *)(param_2 + 8);
  __s2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s2 = param_2 + 1;
    __n = (ulong)(*param_2 >> 1);
  }
  if (__n == 0) {
    lVar5 = 0;
  }
  else {
    pbVar1 = pbVar7 + uVar6;
    if ((long)__n <= (long)uVar6) {
      bVar2 = *__s2;
      pbVar4 = pbVar7;
      do {
        if ((0xfffffffffffffffe < uVar6 - __n) ||
           (pbVar4 = memchr(pbVar4,(uint)bVar2,(uVar6 - __n) + 1), pbVar4 == (byte *)0x0)) break;
        iVar3 = memcmp(pbVar4,__s2,__n);
        if (iVar3 == 0) goto LAB_016f4c58;
        pbVar4 = pbVar4 + 1;
        uVar6 = (long)pbVar1 - (long)pbVar4;
      } while ((long)__n <= (long)uVar6);
    }
    pbVar4 = pbVar1;
LAB_016f4c58:
    lVar5 = -1;
    if (pbVar4 != pbVar1) {
      lVar5 = (long)pbVar4 - (long)pbVar7;
    }
  }
  return lVar5;
}


