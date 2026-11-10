/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e766f0; name: FUN_02e766f0
 */


undefined8 FUN_02e766f0(char *param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong __n;
  uint uVar10;
  uint uVar11;
  byte local_154 [260];
  
  uVar11 = 0x811c9dc5;
  if (param_1 == (char *)0x0) {
    uVar10 = 0;
  }
  else {
    sVar4 = strlen(param_1);
    sVar5 = 0x103;
    if (sVar4 + 1 < 0x103) {
      sVar5 = sVar4 + 1;
    }
    strncpy((char *)local_154,param_1,sVar5);
    local_154[sVar5] = 0;
    sVar5 = strlen(param_1);
    if (sVar5 != 0) {
      pbVar8 = local_154;
      sVar4 = sVar5;
      do {
        if (*pbVar8 - 0x41 < 0x1a) {
          *pbVar8 = *pbVar8 + 0x20;
        }
        sVar4 = sVar4 - 1;
        pbVar8 = pbVar8 + 1;
      } while (sVar4 != 0);
    }
    uVar10 = uVar11;
    if ((int)sVar5 != 0) {
      pbVar8 = local_154;
      do {
        pbVar9 = pbVar8 + 1;
        uVar10 = uVar10 * 0x1000193 ^ (uint)*pbVar8;
        pbVar8 = pbVar9;
      } while (pbVar9 < local_154 + (sVar5 & 0xffffffff));
    }
  }
  if (param_2 == (char *)0x0) {
    uVar6 = 0xf;
  }
  else {
    sVar5 = strlen(param_2);
    __n = sVar5 + 1;
    if (0x102 < __n) {
      __n = 0x103;
    }
    strncpy((char *)local_154,param_2,__n);
    local_154[__n] = 0;
    sVar5 = strlen(param_2);
    if (sVar5 != 0) {
      pbVar8 = local_154;
      sVar4 = sVar5;
      do {
        if (*pbVar8 - 0x41 < 0x1a) {
          *pbVar8 = *pbVar8 + 0x20;
        }
        sVar4 = sVar4 - 1;
        pbVar8 = pbVar8 + 1;
      } while (sVar4 != 0);
    }
    if ((int)sVar5 != 0) {
      pbVar8 = local_154;
      do {
        pbVar9 = pbVar8 + 1;
        uVar11 = uVar11 * 0x1000193 ^ (uint)*pbVar8;
        pbVar8 = pbVar9;
      } while (pbVar9 < local_154 + (sVar5 & 0xffffffff));
    }
    uVar6 = 0xf;
    if ((uVar10 != 0) && (uVar11 != 0)) {
      lVar7 = FUN_02e7de5c(DAT_0440a128,8,0x14);
      *(undefined8 *)(lVar7 + 4) = param_3;
      *(uint *)(lVar7 + 0xc) = uVar10;
      *(uint *)(lVar7 + 0x10) = uVar11;
      piVar1 = (int *)(DAT_0440a128 + 0x9c);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar6 = 1;
    }
  }
  return uVar6;
}


