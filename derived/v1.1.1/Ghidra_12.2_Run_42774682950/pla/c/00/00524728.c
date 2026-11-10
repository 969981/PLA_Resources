/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00524728; name: FUN_00524728
 */


uint FUN_00524728(byte *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte *__s2;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *__s1;
  
  bVar4 = *param_2;
  bVar5 = *param_1;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  uVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 == 0) {
LAB_005247a4:
    if (uVar2 < uVar1) {
      return 1;
    }
    if (sVar3 != 0) {
      __s1 = *(byte **)(param_2 + 0x10);
      pbVar9 = *(byte **)(param_1 + 0x10);
      goto LAB_005247c0;
    }
LAB_00524854:
    if (uVar1 < uVar2) {
      return 0;
    }
  }
  else {
    pbVar9 = *(byte **)(param_1 + 0x10);
    pbVar8 = pbVar9;
    if ((bVar5 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    __s1 = *(byte **)(param_2 + 0x10);
    __s2 = __s1;
    if ((bVar4 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    iVar6 = memcmp(pbVar8,__s2,sVar3);
    if (iVar6 == 0) goto LAB_005247a4;
    if (iVar6 < 0) {
      return 1;
    }
LAB_005247c0:
    if ((bVar4 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    if ((bVar5 & 1) == 0) {
      pbVar9 = param_1 + 1;
    }
    iVar6 = memcmp(__s1,pbVar9,sVar3);
    if (iVar6 == 0) goto LAB_00524854;
    if (iVar6 < 0) {
      return 0;
    }
  }
  bVar4 = param_1[0x18];
  bVar5 = param_2[0x18];
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x20);
  }
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    pbVar8 = *(byte **)(param_1 + 0x28);
    if ((bVar4 & 1) == 0) {
      pbVar8 = param_1 + 0x19;
    }
    pbVar9 = *(byte **)(param_2 + 0x28);
    if ((bVar5 & 1) == 0) {
      pbVar9 = param_2 + 0x19;
    }
    uVar7 = memcmp(pbVar8,pbVar9,sVar3);
    if (uVar7 != 0) goto LAB_0052484c;
  }
  uVar7 = 0;
  if (uVar2 < uVar1) {
    uVar7 = 0xffffffff;
  }
LAB_0052484c:
  return uVar7 >> 0x1f;
}


