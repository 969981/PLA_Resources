/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b75d4; name: FUN_031b75d4
 */


void FUN_031b75d4(long param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  long lVar8;
  short sVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((*(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x28)) &&
     (*(int *)(param_1 + 0x78) < *(int *)(param_1 + 0x7c))) {
    puVar6 = (undefined4 *)FUN_031b3624(param_1 + 0x10,param_2);
    *puVar6 = 0;
    fVar14 = (float)FUN_031b81b8(param_1 + 0x80,param_2);
    puVar6[1] = fVar14;
    *(ushort *)((long)puVar6 + 0xe) = *(ushort *)((long)puVar6 + 0xe) | 5;
    if (fVar14 < *(float *)(param_1 + 0x44)) {
      *(float *)(param_1 + 0x44) = fVar14;
      *(int *)(param_1 + 0x40) = param_2;
    }
    sVar9 = *(short *)(*(long *)(param_1 + 0x20) +
                      (ulong)((uint)(param_2 * -0x61c8864f) >> 0x18) * 2);
    if (-1 < sVar9) {
      do {
        if (*(int *)(*(long *)(param_1 + 0x10) + (long)sVar9 * 0x10 + 8) == param_2) {
          pfVar7 = (float *)(*(long *)(param_1 + 0x10) + (long)sVar9 * 0x10);
          goto LAB_031b7698;
        }
        sVar9 = *(short *)(*(long *)(param_1 + 0x18) + (long)sVar9 * 2);
      } while (-1 < sVar9);
    }
    pfVar7 = (float *)(param_1 + 0x30);
LAB_031b7698:
    fVar14 = *(float *)(param_1 + 0x4c);
    fVar15 = *pfVar7;
    fVar16 = pfVar7[1];
    uVar11 = *(uint *)(param_1 + 0x78);
    uVar12 = (ulong)uVar11;
    uVar10 = -(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3;
    piVar1 = (int *)(*(long *)(param_1 + 0x70) + uVar10);
    *(uint *)(param_1 + 0x78) = uVar11 + 1;
    *piVar1 = param_2;
    piVar1[1] = (int)(fVar15 + fVar14 * fVar16);
    lVar8 = *(long *)(param_1 + 0x70);
    puVar6 = (undefined4 *)(lVar8 + uVar10);
    uVar3 = *puVar6;
    iVar4 = puVar6[1];
    if ((int)uVar11 < 1) {
LAB_031b771c:
      lVar13 = (long)(int)uVar11;
    }
    else {
      do {
        uVar11 = (uint)uVar12;
        uVar5 = uVar11 - 1;
        uVar2 = uVar11;
        if (-1 < (int)uVar5) {
          uVar2 = uVar5;
        }
        if (*(int *)(lVar8 + (long)((int)uVar2 >> 1) * 8 + 4) <= iVar4) goto LAB_031b771c;
        lVar13 = (long)((ulong)uVar2 << 0x20) >> 0x21;
        *(undefined8 *)(lVar8 + (long)(int)uVar11 * 8) = *(undefined8 *)(lVar8 + lVar13 * 8);
        lVar8 = *(long *)(param_1 + 0x70);
        uVar12 = (ulong)(uint)((int)uVar2 >> 1);
      } while (1 < (int)uVar5);
    }
    *(undefined4 *)(lVar8 + lVar13 * 8) = uVar3;
    *(int *)(*(long *)(param_1 + 0x70) + lVar13 * 8 + 4) = iVar4;
  }
  return;
}


