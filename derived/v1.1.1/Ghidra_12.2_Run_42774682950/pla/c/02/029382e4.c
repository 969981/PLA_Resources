/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029382e4; name: FUN_029382e4
 */


uint FUN_029382e4(undefined8 param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  size_t sVar7;
  long lVar8;
  byte *pbVar9;
  char *__dest;
  char acStack_151 [13];
  byte local_144 [260];
  
  sVar3 = strlen(param_2);
  uVar6 = sVar3 + 1 & 0xffffffff;
  __dest = acStack_151 + (1 - (uVar6 + 0xf & 0x1fffffff0));
  sVar7 = uVar6 - 1;
  if (sVar3 + 1 <= sVar7) {
    sVar7 = sVar3 + 1;
  }
  strncpy(__dest,param_2,sVar7);
  __dest[sVar7] = '\0';
  sVar7 = strlen(__dest);
  lVar8 = (long)(int)sVar7;
  do {
    lVar1 = lVar8 + -1;
    if (lVar8 < 1) goto LAB_02938374;
    lVar2 = lVar8 + -1;
    lVar8 = lVar1;
  } while (__dest[lVar2] != '.');
  __dest[lVar1] = '\0';
LAB_02938374:
  sVar3 = strlen(__dest);
  sVar7 = 0x103;
  if (sVar3 + 1 < 0x103) {
    sVar7 = sVar3 + 1;
  }
  strncpy((char *)local_144,__dest,sVar7);
  local_144[sVar7] = 0;
  sVar7 = strlen(__dest);
  if (sVar7 != 0) {
    pbVar5 = local_144;
    sVar3 = sVar7;
    do {
      if (*pbVar5 - 0x41 < 0x1a) {
        *pbVar5 = *pbVar5 + 0x20;
      }
      sVar3 = sVar3 - 1;
      pbVar5 = pbVar5 + 1;
    } while (sVar3 != 0);
  }
  uVar4 = 0x811c9dc5;
  if ((int)sVar7 != 0) {
    pbVar5 = local_144;
    do {
      pbVar9 = pbVar5 + 1;
      uVar4 = uVar4 * 0x1000193 ^ (uint)*pbVar5;
      pbVar5 = pbVar9;
    } while (pbVar9 < local_144 + (sVar7 & 0xffffffff));
  }
  return uVar4;
}


