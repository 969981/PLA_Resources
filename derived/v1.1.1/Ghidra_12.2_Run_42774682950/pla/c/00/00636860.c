/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00636860; name: FUN_00636860
 */


undefined8 FUN_00636860(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  byte *__s2;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  pbVar11 = (byte *)*param_1;
  pbVar12 = (byte *)*param_2;
  bVar4 = *pbVar11;
  bVar5 = *pbVar12;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar11 + 8);
  }
  uVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(pbVar12 + 8);
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 == 0) {
LAB_006368e4:
    iVar6 = 0;
    if (uVar2 < uVar1) {
      iVar6 = -1;
    }
  }
  else {
    pbVar9 = *(byte **)(pbVar12 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar9 = pbVar12 + 1;
    }
    pbVar10 = *(byte **)(pbVar11 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar10 = pbVar11 + 1;
    }
    iVar6 = memcmp(pbVar9,pbVar10,sVar3);
    if (iVar6 == 0) goto LAB_006368e4;
  }
  pbVar9 = (byte *)*param_3;
  bVar4 = *pbVar9;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar9 + 8);
  }
  sVar3 = uVar2;
  if (uVar1 <= uVar2) {
    sVar3 = uVar1;
  }
  if (sVar3 == 0) {
LAB_00636948:
    iVar7 = 0;
    if (uVar1 < uVar2) {
      iVar7 = -1;
    }
    if (-1 < iVar6) goto LAB_0063693c;
LAB_0063695c:
    if (iVar7 < 0) {
      *param_1 = pbVar9;
      uVar8 = 1;
      goto LAB_00636a50;
    }
    *param_1 = pbVar12;
    *param_2 = pbVar11;
    bVar4 = *pbVar11;
    pbVar12 = (byte *)*param_3;
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar11 + 8);
    }
    bVar5 = *pbVar12;
    uVar2 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pbVar12 + 8);
    }
    sVar3 = uVar1;
    if (uVar2 <= uVar1) {
      sVar3 = uVar2;
    }
    if (sVar3 == 0) {
LAB_00636a40:
      if (uVar2 < uVar1) {
LAB_00636a48:
        uVar8 = 2;
        *param_2 = pbVar12;
LAB_00636a50:
        *param_3 = pbVar11;
        return uVar8;
      }
    }
    else {
      pbVar9 = *(byte **)(pbVar12 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar9 = pbVar12 + 1;
      }
      pbVar10 = *(byte **)(pbVar11 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar10 = pbVar11 + 1;
      }
      iVar6 = memcmp(pbVar9,pbVar10,sVar3);
      if (iVar6 == 0) goto LAB_00636a40;
      if (iVar6 < 0) goto LAB_00636a48;
    }
LAB_00636a70:
    uVar8 = 1;
  }
  else {
    pbVar10 = *(byte **)(pbVar9 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar10 = pbVar9 + 1;
    }
    __s2 = *(byte **)(pbVar12 + 0x10);
    if ((bVar5 & 1) == 0) {
      __s2 = pbVar12 + 1;
    }
    iVar7 = memcmp(pbVar10,__s2,sVar3);
    if (iVar7 == 0) goto LAB_00636948;
    if (iVar6 < 0) goto LAB_0063695c;
LAB_0063693c:
    if (-1 < iVar7) {
      return 0;
    }
    *param_2 = pbVar9;
    *param_3 = pbVar12;
    pbVar11 = (byte *)*param_1;
    bVar4 = *pbVar11;
    pbVar12 = (byte *)*param_2;
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar11 + 8);
    }
    bVar5 = *pbVar12;
    uVar2 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pbVar12 + 8);
    }
    sVar3 = uVar1;
    if (uVar2 <= uVar1) {
      sVar3 = uVar2;
    }
    if (sVar3 == 0) {
LAB_00636a58:
      if (uVar1 <= uVar2) goto LAB_00636a70;
    }
    else {
      pbVar9 = *(byte **)(pbVar12 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar9 = pbVar12 + 1;
      }
      pbVar10 = *(byte **)(pbVar11 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar10 = pbVar11 + 1;
      }
      iVar6 = memcmp(pbVar9,pbVar10,sVar3);
      if (iVar6 == 0) goto LAB_00636a58;
      if (-1 < iVar6) goto LAB_00636a70;
    }
    *param_1 = pbVar12;
    uVar8 = 2;
    *param_2 = pbVar11;
  }
  return uVar8;
}


