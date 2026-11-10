/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e778d0; name: FUN_02e778d0
 */


void FUN_02e778d0(char *param_1,undefined8 param_2)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  char acStack_249 [261];
  byte local_144 [260];
  
  sVar2 = strlen(param_1);
  sVar3 = 0x103;
  if (sVar2 + 1 < 0x103) {
    sVar3 = sVar2 + 1;
  }
  strncpy(acStack_249 + 1,param_1,sVar3);
  acStack_249[sVar3 + 1] = '\0';
  sVar3 = strlen(acStack_249 + 1);
  lVar1 = (long)(int)sVar3;
  do {
    lVar6 = lVar1;
    if (lVar6 < 1) goto LAB_02e7794c;
    lVar1 = lVar6 + -1;
  } while (acStack_249[lVar6] != '.');
  acStack_249[lVar6] = '\0';
LAB_02e7794c:
  sVar2 = strlen(acStack_249 + 1);
  sVar3 = 0x103;
  if (sVar2 + 1 < 0x103) {
    sVar3 = sVar2 + 1;
  }
  strncpy((char *)local_144,acStack_249 + 1,sVar3);
  local_144[sVar3] = 0;
  sVar3 = strlen(acStack_249 + 1);
  if (sVar3 != 0) {
    pbVar5 = local_144;
    sVar2 = sVar3;
    do {
      if (*pbVar5 - 0x41 < 0x1a) {
        *pbVar5 = *pbVar5 + 0x20;
      }
      sVar2 = sVar2 - 1;
      pbVar5 = pbVar5 + 1;
    } while (sVar2 != 0);
  }
  uVar4 = 0x811c9dc5;
  if ((int)sVar3 != 0) {
    pbVar5 = local_144;
    do {
      pbVar7 = pbVar5 + 1;
      uVar4 = uVar4 * 0x1000193 ^ (uint)*pbVar5;
      pbVar5 = pbVar7;
    } while (pbVar7 < local_144 + (sVar3 & 0xffffffff));
  }
  FUN_02e77820(uVar4,param_2);
  return;
}


