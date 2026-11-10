/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e77a10; name: FUN_02e77a10
 */


void FUN_02e77a10(char *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  char acStack_25d [261];
  byte local_158 [4];
  uint local_154;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  int local_130;
  long local_128;
  undefined4 local_120;
  
  sVar2 = strlen(param_1);
  sVar3 = 0x103;
  if (sVar2 + 1 < 0x103) {
    sVar3 = sVar2 + 1;
  }
  strncpy(acStack_25d + 1,param_1,sVar3);
  acStack_25d[sVar3 + 1] = '\0';
  sVar3 = strlen(acStack_25d + 1);
  lVar1 = (long)(int)sVar3;
  do {
    lVar5 = lVar1;
    if (lVar5 < 1) goto LAB_02e77a9c;
    lVar1 = lVar5 + -1;
  } while (acStack_25d[lVar5] != '.');
  acStack_25d[lVar5] = '\0';
LAB_02e77a9c:
  sVar2 = strlen(acStack_25d + 1);
  sVar3 = 0x103;
  if (sVar2 + 1 < 0x103) {
    sVar3 = sVar2 + 1;
  }
  strncpy((char *)local_158,acStack_25d + 1,sVar3);
  local_158[sVar3] = 0;
  sVar3 = strlen(acStack_25d + 1);
  if (sVar3 != 0) {
    pbVar4 = local_158;
    sVar2 = sVar3;
    do {
      if (*pbVar4 - 0x41 < 0x1a) {
        *pbVar4 = *pbVar4 + 0x20;
      }
      sVar2 = sVar2 - 1;
      pbVar4 = pbVar4 + 1;
    } while (sVar2 != 0);
  }
  local_154 = 0x811c9dc5;
  if ((int)sVar3 != 0) {
    pbVar4 = local_158;
    do {
      pbVar6 = pbVar4 + 1;
      local_154 = local_154 * 0x1000193 ^ (uint)*pbVar4;
      pbVar4 = pbVar6;
    } while (pbVar6 < local_158 + (sVar3 & 0xffffffff));
  }
  local_130 = (uint)(param_2 != 0) << 1;
  local_158[0] = 1;
  local_158[1] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_150 = 0;
  local_148 = 0;
  local_120 = 0;
  local_140 = param_3;
  uStack_138 = param_4;
  local_128 = param_2;
  (**(code **)(*DAT_0440a148 + 0x20))(DAT_0440a148,local_158);
  return;
}


