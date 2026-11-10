/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029381d4; name: FUN_029381d4
 */


int FUN_029381d4(int *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  byte *pbVar5;
  byte *__dest;
  int iVar6;
  int iVar7;
  byte abStack_c0 [128];
  
  sVar4 = strlen(param_2);
  __dest = abStack_c0 + (0x80 - (sVar4 + 0x10 & 0xfffffffffffffff0));
  if (sVar4 + 1 <= sVar4) {
    sVar4 = sVar4 + 1;
  }
  strncpy((char *)__dest,param_2,sVar4);
  __dest[sVar4] = 0;
  sVar4 = strlen((char *)__dest);
  if (sVar4 != 0) {
    pbVar5 = __dest;
    do {
      if (*pbVar5 - 0x41 < 0x1a) {
        *pbVar5 = *pbVar5 + 0x20;
      }
      sVar4 = sVar4 - 1;
      pbVar5 = pbVar5 + 1;
    } while (sVar4 != 0);
  }
  iVar6 = 0;
  iVar7 = *param_1 + -1;
  while( true ) {
    iVar3 = iVar7 - iVar6;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    uVar1 = iVar6 + (iVar3 >> 1);
    iVar3 = strcmp((char *)((long)param_1 +
                           (ulong)*(uint *)((long)param_1 +
                                           (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 |
                                           (ulong)uVar1 << 3) + 4)),(char *)__dest);
    if (iVar3 == 0) break;
    iVar2 = uVar1 - 1;
    if (iVar3 < 1) {
      iVar6 = uVar1 + 1;
      iVar2 = iVar7;
    }
    iVar7 = iVar2;
    if (iVar7 < iVar6) {
      return 0;
    }
  }
  return param_1[(long)(int)uVar1 * 2 + 2];
}


