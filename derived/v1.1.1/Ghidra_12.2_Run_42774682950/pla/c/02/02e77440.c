/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e77440; name: FUN_02e77440
 */


undefined8 FUN_02e77440(char *param_1,uint *param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  char *local_260;
  undefined1 local_258;
  char acStack_251 [265];
  byte local_148 [4];
  uint local_144;
  char *local_140;
  undefined1 local_138;
  undefined8 local_130;
  char *pcStack_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  
  local_258 = 0;
  local_260 = (char *)0x0;
  sVar4 = strlen(param_1);
  if ((((sVar4 < 5) || (param_1[sVar4 - 4] != '.')) || (param_1[sVar4 - 3] != 'b')) ||
     ((param_1[sVar4 - 2] != 'n' || (param_1[sVar4 - 1] != 'k')))) {
    iVar3 = FUN_02e8e48c(&local_260,param_1,&DAT_039b7b72);
    if (iVar3 != 1) {
      return 0x34;
    }
  }
  else {
    local_258 = 0;
    local_260 = param_1;
  }
  sVar5 = strlen(param_1);
  sVar4 = 0x103;
  if (sVar5 + 1 < 0x103) {
    sVar4 = sVar5 + 1;
  }
  strncpy(acStack_251 + 1,param_1,sVar4);
  acStack_251[sVar4 + 1] = '\0';
  sVar4 = strlen(acStack_251 + 1);
  lVar1 = (long)(int)sVar4;
  do {
    lVar9 = lVar1;
    if (lVar9 < 1) goto LAB_02e77510;
    lVar1 = lVar9 + -1;
  } while (acStack_251[lVar9] != '.');
  acStack_251[lVar9] = '\0';
LAB_02e77510:
  sVar5 = strlen(acStack_251 + 1);
  sVar4 = 0x103;
  if (sVar5 + 1 < 0x103) {
    sVar4 = sVar5 + 1;
  }
  strncpy((char *)local_148,acStack_251 + 1,sVar4);
  local_148[sVar4] = 0;
  sVar4 = strlen(acStack_251 + 1);
  if (sVar4 != 0) {
    pbVar8 = local_148;
    sVar5 = sVar4;
    do {
      if (*pbVar8 - 0x41 < 0x1a) {
        *pbVar8 = *pbVar8 + 0x20;
      }
      sVar5 = sVar5 - 1;
      pbVar8 = pbVar8 + 1;
    } while (sVar5 != 0);
  }
  uVar7 = 0x811c9dc5;
  if ((int)sVar4 != 0) {
    pbVar8 = local_148;
    do {
      pbVar10 = pbVar8 + 1;
      uVar7 = uVar7 * 0x1000193 ^ (uint)*pbVar8;
      pbVar8 = pbVar10;
    } while (pbVar10 < local_148 + (sVar4 & 0xffffffff));
  }
  *param_2 = uVar7;
  uVar6 = (**(code **)(*DAT_0440a148 + 0x28))(DAT_0440a148,acStack_251 + 1);
  if ((int)uVar6 == 1) {
    local_144 = *param_2;
    local_148[0] = 0;
    local_148[1] = 0;
    local_148[2] = 0;
    local_148[3] = 0;
    local_140 = local_260;
    local_138 = local_258;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_130 = DAT_0440a2f8;
    pcStack_128 = acStack_251 + 1;
    uVar2 = (**(code **)(*DAT_0440a148 + 0x20))(DAT_0440a148,local_148);
    uVar6 = (**(code **)(*DAT_0440a148 + 0x30))(DAT_0440a148,acStack_251 + 1,uVar2);
  }
  return uVar6;
}


