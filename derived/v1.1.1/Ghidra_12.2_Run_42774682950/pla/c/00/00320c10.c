/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00320c10; name: FUN_00320c10
 */


void FUN_00320c10(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  byte *pbVar6;
  byte *__s;
  
  pcVar4 = strchr((char *)param_1,0x2e);
  if (pcVar4 == (char *)0x0) {
    bVar2 = *param_1;
    pbVar6 = param_1 + 2;
    if (9 < bVar2 - 0x30) goto LAB_00320c60;
    do {
      do {
        pbVar1 = pbVar6 + 1;
        bVar2 = pbVar6[-1];
        pbVar6 = pbVar1;
      } while (bVar2 - 0x30 < 10);
LAB_00320c60:
      uVar3 = bVar2 - 0x2b;
    } while (uVar3 < 0x3b && (1L << ((ulong)uVar3 & 0x3f) & 0x400000004000005U) != 0);
    if (bVar2 != 0) {
      bVar2 = pbVar6[-1];
      pbVar6[-2] = 0x2e;
      if ((9 < bVar2 - 0x30) &&
         (((uVar3 = bVar2 - 0x2b, 0x3a < uVar3 ||
           ((1L << ((ulong)uVar3 & 0x3f) & 0x400000004000005U) == 0)) &&
          (pbVar1 = pbVar6, bVar2 != 0)))) {
        do {
          __s = pbVar1;
          bVar2 = *__s;
          if (bVar2 - 0x30 < 10) break;
          uVar3 = bVar2 - 0x2b;
          pbVar1 = __s + 1;
        } while ((0x3a < uVar3 || (1L << ((ulong)uVar3 & 0x3f) & 0x400000004000005U) == 0) &&
                 bVar2 != 0);
        sVar5 = strlen((char *)__s);
        memmove(pbVar6 + -1,__s,sVar5 + 1);
        return;
      }
    }
  }
  return;
}


