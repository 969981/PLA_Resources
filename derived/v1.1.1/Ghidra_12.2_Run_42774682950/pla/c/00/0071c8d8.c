/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071c8d8; name: FUN_0071c8d8
 */


void FUN_0071c8d8(undefined *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  lVar9 = (long)*(int *)(param_1 + 0x18);
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar3 = 0;
    iVar5 = 0;
    pbVar7 = *(byte **)(param_1 + 0x28);
    uVar6 = (ulong)*pbVar7;
    if ((*pbVar7 & 1) != 0) goto LAB_0071c95c;
LAB_0071c940:
    uVar8 = uVar6 >> 1;
    iVar3 = iVar5;
  }
  else {
    lVar11 = lVar9 << 3;
    do {
      lVar4 = FUN_00718554(*puVar10);
      lVar9 = lVar4 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      iVar5 = (int)lVar9;
      lVar11 = lVar11 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
    pbVar7 = *(byte **)(param_1 + 0x28);
    uVar6 = (ulong)*pbVar7;
    iVar3 = iVar5;
    if ((*pbVar7 & 1) == 0) goto LAB_0071c940;
LAB_0071c95c:
    uVar8 = *(ulong *)(pbVar7 + 8);
  }
  if (uVar8 != 0) {
    uVar2 = (uint)(uVar6 >> 1);
    if ((uVar6 & 1) != 0) {
      uVar2 = (uint)*(undefined8 *)(pbVar7 + 8);
    }
    iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  pbVar7 = *(byte **)(param_1 + 0x30);
  bVar1 = *pbVar7;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_0071c9b8:
      uVar2 = (uint)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar2 = (uint)*(undefined8 *)(pbVar7 + 8);
      }
      iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar7 + 8) != 0) goto LAB_0071c9b8;
  pbVar7 = *(byte **)(param_1 + 0x38);
  bVar1 = *pbVar7;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_0071ca40;
  }
  else if (*(long *)(pbVar7 + 8) == 0) goto LAB_0071ca40;
  uVar2 = (uint)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar2 = (uint)*(undefined8 *)(pbVar7 + 8);
  }
  iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_0071ca40:
  if (param_1 != PTR_DAT_04376270) {
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar2 = FUN_00602744();
      iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar2 = FUN_002e1558();
      iVar3 = iVar3 + uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x50);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar5 = 0xb;
    }
    else {
      iVar5 = (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    iVar3 = iVar5 + iVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x54);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar5 = 0xb;
    }
    else {
      iVar5 = (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    iVar3 = iVar5 + iVar3;
  }
  if (param_1[0x58] != '\0') {
    iVar3 = iVar3 + 2;
  }
  if (param_1[0x59] != '\0') {
    iVar3 = iVar3 + 2;
  }
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar5 = 0xb;
    }
    else {
      iVar5 = (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    iVar3 = iVar5 + iVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      iVar5 = 0xb;
    }
    else {
      iVar5 = (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    iVar3 = iVar5 + iVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar6 + 8);
    if ((bVar1 & 1) == 0) {
      uVar2 = (uint)(bVar1 >> 1);
    }
    else {
      uVar2 = (uint)*(undefined8 *)(uVar6 + 0x10);
    }
    iVar3 = uVar2 + iVar3;
  }
  *(int *)(param_1 + 100) = iVar3;
  return;
}


