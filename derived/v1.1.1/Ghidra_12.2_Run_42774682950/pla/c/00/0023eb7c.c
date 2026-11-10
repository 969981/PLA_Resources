/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023eb7c; name: FUN_0023eb7c
 */


void FUN_0023eb7c(long param_1,long param_2)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if ((uVar2 & 0x30000) != 0) {
    if ((uVar2 >> 0x10 & 1) == 0) {
      FUN_002405f0();
      return;
    }
    FUN_0023fff0();
    return;
  }
  pfVar5 = *(float **)(*(long *)(param_2 + 200) + 0x38);
  if (pfVar5 != (float *)0x0) {
    pfVar5 = (float *)((long)pfVar5 + (ulong)*(uint *)(param_1 + 0x34));
  }
  bVar4 = *(byte *)(param_1 + 0x49);
  if ((uVar2 & 3) == 0) {
    if ((bVar4 >> 4 & 1) == 0) {
      fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xd));
      fVar9 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xc));
      fVar9 = fVar9 * 0.003921569;
      fVar10 = fVar10 * 0.003921569;
      fVar12 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xe));
      fVar12 = fVar12 * 0.003921569;
      fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xf));
      fVar11 = fVar11 * 0.003921569;
    }
    else {
      lVar7 = *(long *)(param_1 + 8);
      fVar9 = *(float *)(lVar7 + 0x10);
      fVar10 = *(float *)(lVar7 + 0x14);
      fVar12 = *(float *)(lVar7 + 0x18);
      fVar11 = *(float *)(lVar7 + 0x1c);
    }
    *pfVar5 = fVar9;
    pfVar5[1] = fVar10;
    pfVar5[2] = fVar12;
    pfVar5[3] = fVar11;
    pfVar5[4] = 0.0;
    pfVar5[5] = 0.0;
    pfVar5[6] = 0.0;
    pfVar5[7] = 0.0;
    uVar2 = *(uint *)(param_1 + 0x14);
  }
  else {
    if ((bVar4 >> 4 & 1) == 0) {
      fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xe));
      fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xd));
      fVar10 = fVar10 * 0.003921569;
      fVar11 = fVar11 * 0.003921569;
      fVar9 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xc));
      fVar9 = fVar9 * 0.003921569;
      fVar12 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xf));
      fVar12 = fVar12 * 0.003921569;
      if ((bVar4 >> 3 & 1) == 0) goto LAB_0023ec6c;
LAB_0023ebf4:
      pfVar6 = *(float **)(param_1 + 8);
      fVar14 = *pfVar6;
      fVar15 = pfVar6[1];
      fVar16 = pfVar6[2];
      fVar13 = pfVar6[3];
    }
    else {
      lVar7 = *(long *)(param_1 + 8);
      fVar9 = *(float *)(lVar7 + 0x10);
      fVar10 = *(float *)(lVar7 + 0x14);
      fVar11 = *(float *)(lVar7 + 0x18);
      fVar12 = *(float *)(lVar7 + 0x1c);
      if ((bVar4 >> 3 & 1) != 0) goto LAB_0023ebf4;
LAB_0023ec6c:
      fVar14 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 8));
      fVar14 = fVar14 * 0.003921569;
      fVar15 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 9));
      fVar16 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 10));
      fVar15 = fVar15 * 0.003921569;
      fVar13 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xb));
      fVar16 = fVar16 * 0.003921569;
      fVar13 = fVar13 * 0.003921569;
    }
    *pfVar5 = fVar9 - fVar14;
    pfVar5[1] = fVar10 - fVar15;
    pfVar5[2] = fVar11 - fVar16;
    pfVar5[4] = fVar14;
    pfVar5[5] = fVar15;
    pfVar5[6] = fVar16;
    if ((*(byte *)(param_1 + 0x49) >> 2 & 1) == 0) {
      pfVar5[3] = fVar12 - fVar13;
      pfVar5[7] = fVar13;
      uVar2 = *(uint *)(param_1 + 0x14);
    }
    else {
      fVar9 = 1.0 / ((fVar12 - fVar13) + 0.0001);
      pfVar5[3] = fVar9;
      pfVar5[7] = -(fVar9 * fVar13);
      uVar2 = *(uint *)(param_1 + 0x14);
    }
  }
  if ((uVar2 & 0x1c0) == 0) {
    return;
  }
  if ((uVar2 & 3) < 2) {
    pfVar5[0x20] = (float)(uVar2 & 3);
    return;
  }
  uVar2 = uVar2 >> 6 & 7;
  if (uVar2 == 0) {
    fVar9 = 0.0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x10);
    lVar7 = *(long *)(param_1 + 0x18) +
            ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 2) & 3) * 0x14 +
            ((ulong)(uVar3 >> 0xc) & 1) * 0xc +
            (((ulong)(uVar3 << 4) & 0x30) + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8);
    fVar9 = (float)((uint)(*(char *)(lVar7 + 1) == '\x01') << 7);
    if (uVar2 != 1) {
      fVar12 = (float)((uint)fVar9 | 0x8000);
      if (*(char *)(lVar7 + 5) != '\x01') {
        fVar12 = fVar9;
      }
      fVar9 = fVar12;
      if (uVar2 != 2) {
        fVar10 = (float)((uint)fVar12 | 0x800000);
        if (*(char *)(lVar7 + 9) != '\x01') {
          fVar10 = fVar12;
        }
        fVar9 = fVar10;
        if (uVar2 != 3) {
          fVar9 = (float)((uint)fVar10 | 0x80000000);
          if (*(char *)(lVar7 + 0xd) != '\x01') {
            fVar9 = fVar10;
          }
          if (uVar2 != 4) {
            if (*(char *)(lVar7 + 0x11) == '\x01') {
              fVar9 = -NAN;
            }
            if (uVar2 != 5) {
              if (*(char *)(lVar7 + 0x15) == '\x01') {
                fVar9 = -NAN;
              }
              if (uVar2 != 6) {
                if (*(char *)(lVar7 + 0x19) == '\x01') {
                  fVar9 = -NAN;
                }
                pfVar5[0x20] = fVar9;
                uVar2 = *(uint *)(param_1 + 0x10);
                goto joined_r0x0023ede0;
              }
            }
          }
        }
      }
    }
  }
  pfVar5[0x20] = fVar9;
  uVar2 = *(uint *)(param_1 + 0x10);
joined_r0x0023ede0:
  if ((uVar2 >> 0xc & 1) == 0) {
    return;
  }
  fVar9 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
  pfVar1 = (float *)(*(long *)(param_1 + 0x18) +
                    ((ulong)(uVar2 >> 8) & 0xc) + ((ulong)(uVar2 >> 2) & 3) * 0x14 +
                    (((ulong)(uVar2 << 4) & 0x30) + ((ulong)uVar2 & 0x30) | (ulong)(uVar2 >> 6) & 8)
                    );
  fVar10 = pfVar1[1];
  uVar8 = (ulong)(*pfVar1 * (fVar9 / *(float *)PTR_FloatDegree180_04372ce0));
  pfVar6 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar8 >> 0x18 & 0xff) * 0x10);
  fVar14 = pfVar6[2];
  fVar13 = pfVar6[3];
  fVar9 = (float)((uint)uVar8 & 0xffffff) * 5.9604645e-08;
  fVar11 = *pfVar6;
  fVar12 = pfVar6[1];
  fVar15 = pfVar1[2];
  pfVar5[10] = 0.0;
  pfVar5[0xe] = 0.0;
  fVar12 = fVar12 + fVar13 * fVar9;
  fVar11 = fVar11 + fVar14 * fVar9;
  fVar14 = fVar10 * fVar11;
  fVar10 = fVar10 * fVar12;
  fVar11 = fVar15 * fVar11;
  fVar14 = fVar14 + fVar14;
  fVar9 = fVar15 * fVar12 * -2.0;
  fVar11 = fVar11 + fVar11;
  fVar10 = fVar10 + fVar10;
  pfVar5[9] = fVar9;
  pfVar5[0xb] = fVar9 * -0.5 - fVar14 * 0.5;
  pfVar5[8] = fVar14;
  pfVar5[0xc] = fVar10;
  pfVar5[0xd] = fVar11;
  pfVar5[0xf] = fVar11 * -0.5 - fVar10 * 0.5;
  return;
}


