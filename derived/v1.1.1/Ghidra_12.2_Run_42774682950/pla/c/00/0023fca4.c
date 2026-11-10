/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023fca4; name: FUN_0023fca4
 */


void FUN_0023fca4(long param_1,long param_2,undefined4 *param_3,uint param_4)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  
  lVar5 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  if (lVar5 != 0) {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar8 = -(ulong)(param_4 >> 0x1f) & 0xfffffff000000000 | (ulong)param_4 << 4;
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) +
                     (long)(int)((uVar3 >> 4 & 0x1c) + (uVar3 >> 8 & 0xc) + (uVar3 >> 0xc & 8) +
                                 (uVar3 >> 0xd & 0x60) + (uVar3 >> 0xc & 1) * 0xc +
                                 (uVar3 >> 0x10 & 1) * 0x1c +
                                 (uVar3 >> 0xc & 0x10) * (uVar3 >> 6 & 7) +
                                 (uVar3 >> 0x11 & 1) * 0x74 +
                                 ((uVar3 & 3) * 0x10 + (uVar3 & 0x30) | uVar3 >> 6 & 8) +
                                ((uVar3 >> 0xd & 3) + (uVar3 >> 2 & 3)) * 0x14));
    lVar1 = lVar5 + lVar7;
    puVar2 = (undefined4 *)(lVar1 + uVar8);
    lVar1 = lVar1 + 0x60;
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    puVar2[3] = param_3[3];
    puVar2[0xc] = param_3[4];
    puVar2[0xd] = param_3[5];
    fVar10 = (float)param_3[6];
    fVar9 = *(float *)PTR_FloatPi_04372cf0;
    fVar12 = *(float *)PTR_FloatDegree180_04372ce0;
    puVar2[0xf] = 0;
    puVar2[0x24] = 0x3f800000;
    fVar9 = fVar9 / fVar12;
    puVar2[0xe] = fVar10 * fVar9;
    uVar11 = 0;
    if ((*(byte *)(param_3 + 0x10) & 4) != 0) {
      uVar11 = 0x3f800000;
    }
    lVar5 = lVar7 + uVar8 + lVar5;
    puVar2[0x25] = uVar11;
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(undefined8 *)(lVar5 + 0x68) = 0;
    bVar4 = *(byte *)(param_3 + 0x10);
    if ((bVar4 & 1) != 0) {
      puVar2 = (undefined4 *)(lVar1 + (long)(int)param_4 * 0x10);
      *puVar2 = param_3[0xc];
      puVar2[1] = (float)param_3[0xd] - (float)param_3[0xc];
      bVar4 = *(byte *)(param_3 + 0x10);
    }
    if ((bVar4 >> 1 & 1) != 0) {
      lVar1 = lVar1 + (long)(int)param_4 * 0x10;
      *(float *)(lVar1 + 8) = fVar9 * (float)param_3[0xe];
      *(float *)(lVar1 + 0xc) = fVar9 * ((float)param_3[0xf] - (float)param_3[0xe]);
    }
  }
  if (param_4 == 2) {
    lVar5 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    if (lVar5 != 0) {
      lVar5 = lVar5 + (ulong)*(uint *)(param_1 + 0x30);
    }
    puVar6 = (undefined8 *)(lVar5 + 0x160);
  }
  else if (param_4 == 1) {
    lVar5 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    if (lVar5 != 0) {
      lVar5 = lVar5 + (ulong)*(uint *)(param_1 + 0x30);
    }
    puVar6 = (undefined8 *)(lVar5 + 0x120);
  }
  else {
    if (param_4 != 0) {
      return;
    }
    lVar5 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    if (lVar5 != 0) {
      lVar5 = lVar5 + (ulong)*(uint *)(param_1 + 0x30);
    }
    puVar6 = (undefined8 *)(lVar5 + 0xe0);
  }
  puVar6[2] = 0x3f800000;
  puVar6[3] = 0x3f80000000000000;
  *puVar6 = 0;
  puVar6[1] = 0x3f80000000000000;
  puVar6[4] = 0x3f80000000000000;
  puVar6[5] = 0x3f80000000000000;
  puVar6[6] = 0x3f8000003f800000;
  puVar6[7] = 0x3f80000000000000;
  return;
}


