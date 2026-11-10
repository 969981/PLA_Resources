/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e76aa0; name: FUN_02e76aa0
 */


undefined8 FUN_02e76aa0(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  ulong __n;
  byte local_154 [260];
  
  uVar6 = 0x811c9dc5;
  uVar7 = 0;
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    sVar2 = 0x103;
    if (sVar1 + 1 < 0x103) {
      sVar2 = sVar1 + 1;
    }
    strncpy((char *)local_154,param_1,sVar2);
    local_154[sVar2] = 0;
    sVar2 = strlen(param_1);
    if (sVar2 != 0) {
      pbVar4 = local_154;
      sVar1 = sVar2;
      do {
        if (*pbVar4 - 0x41 < 0x1a) {
          *pbVar4 = *pbVar4 + 0x20;
        }
        sVar1 = sVar1 - 1;
        pbVar4 = pbVar4 + 1;
      } while (sVar1 != 0);
    }
    uVar7 = 0x811c9dc5;
    if ((int)sVar2 != 0) {
      uVar7 = 0x811c9dc5;
      pbVar4 = local_154;
      do {
        pbVar5 = pbVar4 + 1;
        uVar7 = uVar7 * 0x1000193 ^ (uint)*pbVar4;
        pbVar4 = pbVar5;
      } while (pbVar5 < local_154 + (sVar2 & 0xffffffff));
    }
  }
  if (param_2 == (char *)0x0) {
    uVar3 = 0xf;
  }
  else {
    sVar2 = strlen(param_2);
    __n = sVar2 + 1;
    if (0x102 < __n) {
      __n = 0x103;
    }
    strncpy((char *)local_154,param_2,__n);
    local_154[__n] = 0;
    sVar2 = strlen(param_2);
    if (sVar2 != 0) {
      pbVar4 = local_154;
      sVar1 = sVar2;
      do {
        if (*pbVar4 - 0x41 < 0x1a) {
          *pbVar4 = *pbVar4 + 0x20;
        }
        sVar1 = sVar1 - 1;
        pbVar4 = pbVar4 + 1;
      } while (sVar1 != 0);
    }
    if ((int)sVar2 != 0) {
      pbVar4 = local_154;
      do {
        pbVar5 = pbVar4 + 1;
        uVar6 = uVar6 * 0x1000193 ^ (uint)*pbVar4;
        pbVar4 = pbVar5;
      } while (pbVar5 < local_154 + (sVar2 & 0xffffffff));
    }
    uVar3 = 0xf;
    if ((uVar7 != 0) && (uVar6 != 0)) {
      FUN_02e76a20(uVar7,uVar6,0,0);
      uVar3 = 1;
    }
  }
  return uVar3;
}


