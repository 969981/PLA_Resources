/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014621d8; name: FUN_014621d8
 */


void FUN_014621d8(float param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  
  uVar9 = (uint)param_1;
  dVar12 = log10((double)uVar9);
  uVar3 = (uint)(dVar12 + 1.0);
  *(undefined8 *)(param_2 + 0x1a0) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x1a8) = 0xffffffffffffffff;
  if (uVar3 < 5) {
    if (uVar9 != 0) {
      *(uint *)(param_2 + (ulong)(uVar3 - 1) * 4 + 0x1a0) = uVar9 % 10;
      if ((9 < uVar9) &&
         (*(uint *)(param_2 + (ulong)(uVar3 - 2) * 4 + 0x1a0) = uVar9 / 10 + (uVar9 / 100) * -10,
         99 < uVar9)) {
        uVar8 = uVar3 - 3;
        uVar7 = (ulong)uVar9 / 100;
        do {
          uVar9 = (uint)uVar7;
          uVar1 = (ulong)uVar8;
          uVar8 = uVar8 - 1;
          *(uint *)(param_2 + uVar1 * 4 + 0x1a0) = uVar9 + (int)(uVar7 / 10) * -10;
          uVar7 = uVar7 / 10;
        } while (9 < uVar9);
      }
      if (uVar3 < 4) {
        memset((void *)(param_2 + (ulong)uVar3 * 4 + 0x1a0),0xff,(ulong)(3 - uVar3) * 4 + 4);
      }
      goto LAB_01462290;
    }
    *(undefined8 *)(param_2 + 0x1a4) = 0xffffffffffffffff;
    *(undefined4 *)(param_2 + 0x1ac) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x1a0) = 0;
    pbVar4 = (byte *)(*(long *)(param_2 + 0xe0) + 0x58);
    bVar6 = *pbVar4;
  }
  else {
    *(undefined8 *)(param_2 + 0x1a0) = 0x900000009;
    *(undefined8 *)(param_2 + 0x1a8) = 0x900000009;
LAB_01462290:
    pbVar4 = (byte *)(*(long *)(param_2 + 0xe0) + 0x58);
    bVar6 = *pbVar4;
    if (*(int *)(param_2 + 0x1a0) < 0) {
      *pbVar4 = bVar6 & 0xfe;
      goto LAB_01462358;
    }
  }
  *pbVar4 = bVar6 | 1;
  if (**(char **)(param_2 + 0x108) != '\0') {
    lVar5 = param_2 + 0x100;
    FUN_0283b1e8(*(undefined8 *)(param_2 + 0xa0),lVar5);
    if (**(char **)(param_2 + 0x108) != '\0') {
      iVar10 = *(int *)(param_2 + 0x1a0);
      fVar11 = (float)FUN_0283b914(*(undefined8 *)(param_2 + 0xa0),lVar5);
      if ((float)iVar10 <= fVar11) {
        fVar11 = (float)iVar10;
      }
      FUN_0283b748(fVar11,*(undefined8 *)(param_2 + 0xa0),lVar5);
    }
  }
LAB_01462358:
  lVar5 = *(long *)(param_2 + 0xe8);
  if (*(int *)(param_2 + 0x1a4) < 0) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
    if (**(char **)(param_2 + 0x128) != '\0') {
      lVar5 = param_2 + 0x120;
      FUN_0283b1e8(*(undefined8 *)(param_2 + 0xa0),lVar5);
      if (**(char **)(param_2 + 0x128) != '\0') {
        iVar10 = *(int *)(param_2 + 0x1a4);
        fVar11 = (float)FUN_0283b914(*(undefined8 *)(param_2 + 0xa0),lVar5);
        if ((float)iVar10 <= fVar11) {
          fVar11 = (float)iVar10;
        }
        FUN_0283b748(fVar11,*(undefined8 *)(param_2 + 0xa0),lVar5);
      }
    }
  }
  lVar5 = *(long *)(param_2 + 0xf0);
  if (*(int *)(param_2 + 0x1a8) < 0) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
    if (**(char **)(param_2 + 0x148) != '\0') {
      lVar5 = param_2 + 0x140;
      FUN_0283b1e8(*(undefined8 *)(param_2 + 0xa0),lVar5);
      if (**(char **)(param_2 + 0x148) != '\0') {
        iVar10 = *(int *)(param_2 + 0x1a8);
        fVar11 = (float)FUN_0283b914(*(undefined8 *)(param_2 + 0xa0),lVar5);
        if ((float)iVar10 <= fVar11) {
          fVar11 = (float)iVar10;
        }
        FUN_0283b748(fVar11,*(undefined8 *)(param_2 + 0xa0),lVar5);
      }
    }
  }
  lVar5 = *(long *)(param_2 + 0xf8);
  if (*(int *)(param_2 + 0x1ac) < 0) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
    if (**(char **)(param_2 + 0x168) != '\0') {
      lVar5 = param_2 + 0x160;
      FUN_0283b1e8(*(undefined8 *)(param_2 + 0xa0),lVar5);
      if (**(char **)(param_2 + 0x168) != '\0') {
        iVar10 = *(int *)(param_2 + 0x1ac);
        fVar11 = (float)FUN_0283b914(*(undefined8 *)(param_2 + 0xa0),lVar5);
        if ((float)iVar10 <= fVar11) {
          fVar11 = (float)iVar10;
        }
        FUN_0283b748(fVar11,*(undefined8 *)(param_2 + 0xa0),lVar5);
      }
    }
  }
  FUN_00256608(*(undefined8 *)(param_2 + 0x1b0));
  bVar2 = *(byte *)(*(long *)(param_2 + 0x1b8) + 0x58);
  bVar6 = bVar2 & 0xfe;
  if (3.0 <= param_1) {
    bVar6 = bVar2 | 1;
  }
  *(byte *)(*(long *)(param_2 + 0x1b8) + 0x58) = bVar6;
  return;
}


