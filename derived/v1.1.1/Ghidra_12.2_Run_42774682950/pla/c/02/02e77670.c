/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e77670; name: FUN_02e77670
 */


undefined8 FUN_02e77670(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  char *__src;
  long lVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  char *local_270;
  undefined1 local_268;
  char acStack_25d [261];
  byte local_158 [4];
  uint local_154;
  char *local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  
  local_270 = (char *)0x0;
  local_268 = 0;
  iVar2 = FUN_02e8e48c(&local_270,param_1,&DAT_039b7b72);
  __src = local_270;
  if (iVar2 == 1) {
    sVar3 = strlen(local_270);
    sVar4 = 0x103;
    if (sVar3 + 1 < 0x103) {
      sVar4 = sVar3 + 1;
    }
    strncpy(acStack_25d + 1,__src,sVar4);
    acStack_25d[sVar4 + 1] = '\0';
    sVar4 = strlen(acStack_25d + 1);
    lVar1 = (long)(int)sVar4;
    do {
      lVar7 = lVar1;
      if (lVar7 < 1) goto LAB_02e77720;
      lVar1 = lVar7 + -1;
    } while (acStack_25d[lVar7] != '.');
    acStack_25d[lVar7] = '\0';
LAB_02e77720:
    sVar3 = strlen(acStack_25d + 1);
    sVar4 = 0x103;
    if (sVar3 + 1 < 0x103) {
      sVar4 = sVar3 + 1;
    }
    strncpy((char *)local_158,acStack_25d + 1,sVar4);
    local_158[sVar4] = 0;
    sVar4 = strlen(acStack_25d + 1);
    if (sVar4 != 0) {
      pbVar6 = local_158;
      sVar3 = sVar4;
      do {
        if (*pbVar6 - 0x41 < 0x1a) {
          *pbVar6 = *pbVar6 + 0x20;
        }
        sVar3 = sVar3 - 1;
        pbVar6 = pbVar6 + 1;
      } while (sVar3 != 0);
    }
    local_154 = 0x811c9dc5;
    if ((int)sVar4 != 0) {
      pbVar6 = local_158;
      do {
        pbVar8 = pbVar6 + 1;
        local_154 = local_154 * 0x1000193 ^ (uint)*pbVar6;
        pbVar6 = pbVar8;
      } while (pbVar8 < local_158 + (sVar4 & 0xffffffff));
    }
    *param_4 = local_154;
    local_158[0] = 0;
    local_158[1] = 0;
    local_158[2] = 0;
    local_158[3] = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    local_150 = local_270;
    local_148 = local_268;
    local_140 = param_2;
    uStack_138 = param_3;
    uVar5 = (**(code **)(*DAT_0440a148 + 0x20))(DAT_0440a148,local_158);
  }
  else {
    uVar5 = 0x34;
  }
  return uVar5;
}


