/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023af8b4; name: FUN_023af8b4
 */


undefined8 FUN_023af8b4(byte *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  
  pbVar6 = (byte *)FUN_023a6e90();
  bVar3 = *param_1;
  uVar8 = (ulong)(bVar3 >> 1);
  bVar4 = *pbVar6;
  sVar1 = uVar8;
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(pbVar6 + 8);
  }
  if (sVar1 == sVar2) {
    pbVar7 = *(byte **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar7 = param_1 + 1;
    }
    pbVar9 = *(byte **)(pbVar6 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar9 = pbVar6 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pbVar6 = param_1;
        do {
          pbVar6 = pbVar6 + 1;
          if (*pbVar6 != *pbVar9) goto LAB_023af970;
          uVar8 = uVar8 - 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar8 != 0);
      }
      return 1;
    }
    if (sVar1 == 0) {
      return 1;
    }
    iVar5 = memcmp(pbVar7,pbVar9,sVar1);
    if (iVar5 == 0) {
      return 1;
    }
  }
LAB_023af970:
  pbVar6 = (byte *)FUN_020bd79c();
  bVar3 = *param_1;
  uVar8 = (ulong)(bVar3 >> 1);
  bVar4 = *pbVar6;
  sVar1 = uVar8;
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(pbVar6 + 8);
  }
  if (sVar1 == sVar2) {
    pbVar7 = *(byte **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar7 = param_1 + 1;
    }
    pbVar9 = *(byte **)(pbVar6 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar9 = pbVar6 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 == 0) {
        return 1;
      }
      while (param_1 = param_1 + 1, *param_1 == *pbVar9) {
        uVar8 = uVar8 - 1;
        pbVar9 = pbVar9 + 1;
        if (uVar8 == 0) {
          return 1;
        }
      }
    }
    else {
      if (sVar1 == 0) {
        return 1;
      }
      iVar5 = memcmp(pbVar7,pbVar9,sVar1);
      if (iVar5 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


