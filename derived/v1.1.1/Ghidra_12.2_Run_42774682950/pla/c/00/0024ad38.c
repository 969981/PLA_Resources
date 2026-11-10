/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024ad38; name: FUN_0024ad38
 */


void FUN_0024ad38(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_94;
  
  if ((*(byte *)(param_3 + 4) >> 3 & 1) == 0) {
    *(undefined8 *)(param_2 + 0xc0) = 0xbf800000bf800000;
    *(undefined8 *)(param_2 + 200) = 0xbf800000bf800000;
  }
  else {
    lVar1 = param_2 + 0xc0;
    iVar4 = -1;
    lVar6 = -0x40;
    lVar5 = 0;
    *(uint *)(param_2 + 0x5c) = (uint)*(byte *)(param_3 + 9);
    fVar7 = 0.0;
    do {
      while( true ) {
        local_94 = *(float *)(param_3 + 0x7c + lVar5 * 4);
        FUN_00251400(0,0x3f800000,&local_94);
        if (-1 < iVar4) break;
        if (fVar7 <= local_94) {
          fVar7 = local_94;
        }
        *(float *)(lVar1 + lVar5 * 4) = fVar7;
        lVar2 = param_3 + 0x7c + lVar6;
        lVar3 = lVar1 + lVar6;
        *(float *)(lVar3 + 0x50) = *(float *)(lVar2 + 0x50) / 255.0;
        *(float *)(lVar3 + 0x54) = *(float *)(lVar2 + 0x54) / 255.0;
        *(float *)(lVar3 + 0x58) = *(float *)(lVar2 + 0x58) / 255.0;
        *(float *)(lVar3 + 0x5c) = *(float *)(lVar2 + 0x5c) / 255.0;
        if (1.0 <= local_94) {
          iVar4 = (int)lVar5;
        }
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 0x10;
        fVar7 = local_94;
        if (lVar5 == 4) goto LAB_0024ae94;
      }
      lVar2 = param_3 + (long)iVar4 * 0x10;
      *(undefined4 *)(lVar1 + lVar5 * 4) = 0x3f800000;
      lVar3 = lVar1 + lVar6;
      *(float *)(lVar3 + 0x50) = *(float *)(lVar2 + 0x8c) / 255.0;
      *(float *)(lVar3 + 0x54) = *(float *)(lVar2 + 0x90) / 255.0;
      *(float *)(lVar3 + 0x58) = *(float *)(lVar2 + 0x94) / 255.0;
      *(float *)(lVar3 + 0x5c) = *(float *)(lVar2 + 0x98) / 255.0;
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar5 != 4);
LAB_0024ae94:
    fVar7 = *(float *)(param_3 + 0xcc);
    fVar8 = ABS((fVar7 - (float)(int)(fVar7 / 90.0) * 90.0) / 90.0 + -0.5);
    fVar12 = 1.0 - (fVar8 + fVar8);
    fVar13 = fVar12 * 0.41421357 + 1.0;
    fVar11 = *(float *)(param_1 + 0x50) / *(float *)(param_1 + 0x54);
    fVar8 = *(float *)(param_1 + 0x54) / *(float *)(param_1 + 0x50);
    if (fVar8 <= 1.0) {
      fVar8 = 1.0;
    }
    fVar9 = *(float *)PTR_FloatPi_04372cf0;
    fVar10 = *(float *)PTR_FloatDegree180_04372ce0;
    if (fVar11 <= 1.0) {
      fVar11 = 1.0;
    }
    fVar7 = cosf(fVar7 * (fVar9 / fVar10));
    *(float *)(param_2 + 0x110) = fVar7 / (fVar13 / ((fVar11 + -1.0) * fVar12 + 1.0));
    fVar7 = sinf((fVar9 / fVar10) * *(float *)(param_3 + 0xcc));
    *(float *)(param_2 + 0x114) = -fVar7 / (fVar13 / ((fVar8 + -1.0) * fVar12 + 1.0));
  }
  return;
}


