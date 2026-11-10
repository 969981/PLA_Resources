/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025183c; name: FUN_0025183c
 */


/* WARNING: Type propagation algorithm not settling */

float * FUN_0025183c(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pfVar3 = (float *)FUN_0028edf0();
  fVar9 = *(float *)(param_1 + 0x40);
  fVar14 = *(float *)(param_1 + 0x44);
  iVar8 = *(int *)(param_1 + 0x48);
  if (1.0 < fVar14) {
    fVar14 = 1.0;
  }
  if (1.0 < fVar9) {
    fVar9 = 1.0;
  }
  uVar4 = FUN_0028ee34(param_1);
  puVar1 = PTR_FloatPi_04372db0;
  fVar19 = 1.0 - fVar9;
  fVar10 = 1.0 - fVar14;
  fVar11 = -fVar10;
  fVar17 = -fVar19;
  iVar7 = iVar8 + 1;
  if (iVar8 == -1) {
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_0028ee34(param_1);
      pfVar5 = pfVar3;
      if ((uVar2 >> 2 & 1) == 0) goto LAB_002518bc;
LAB_00251d10:
      pfVar5 = pfVar3 + 2;
      *pfVar3 = fVar19 * 0.5 + 0.5;
      pfVar3[1] = 1.0 - (fVar10 * 0.5 + 0.5);
      uVar4 = FUN_0028ee34(param_1);
      if ((uVar4 & 1) != 0) goto LAB_00251d38;
LAB_002518c8:
      uVar2 = FUN_0028ee34(param_1);
      pfVar6 = pfVar5;
      if ((uVar2 >> 2 & 1) == 0) goto LAB_002518d4;
LAB_00251d54:
      pfVar6 = pfVar5 + 2;
      *pfVar5 = fVar19 * -0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar10 * 0.5 + 0.5);
      uVar4 = FUN_0028ee34(param_1);
      if ((uVar4 & 1) != 0) goto LAB_00251d80;
LAB_002518e0:
      uVar2 = FUN_0028ee34(param_1);
      pfVar3 = pfVar6;
      if ((uVar2 >> 2 & 1) == 0) goto LAB_002518ec;
LAB_00251d9c:
      pfVar3 = pfVar6 + 2;
      *pfVar6 = fVar19 * -0.5 + 0.5;
      pfVar6[1] = 1.0 - (fVar10 * -0.5 + 0.5);
      uVar4 = FUN_0028ee34(param_1);
      if ((uVar4 & 1) != 0) goto LAB_00251dc8;
LAB_002518f8:
      uVar2 = FUN_0028ee34(param_1);
    }
    else {
      *pfVar3 = fVar19;
      pfVar3[1] = fVar10;
      pfVar3[2] = 0.0;
      pfVar3 = pfVar3 + 3;
      uVar2 = FUN_0028ee34(param_1);
      pfVar5 = pfVar3;
      if ((uVar2 >> 2 & 1) != 0) goto LAB_00251d10;
LAB_002518bc:
      uVar4 = FUN_0028ee34(param_1);
      if ((uVar4 & 1) == 0) goto LAB_002518c8;
LAB_00251d38:
      *pfVar5 = fVar17;
      pfVar5[1] = fVar10;
      pfVar5[2] = 0.0;
      pfVar5 = pfVar5 + 3;
      uVar2 = FUN_0028ee34(param_1);
      pfVar6 = pfVar5;
      if ((uVar2 >> 2 & 1) != 0) goto LAB_00251d54;
LAB_002518d4:
      uVar4 = FUN_0028ee34(param_1);
      if ((uVar4 & 1) == 0) goto LAB_002518e0;
LAB_00251d80:
      *pfVar6 = fVar17;
      pfVar6[1] = fVar11;
      pfVar6[2] = 0.0;
      pfVar6 = pfVar6 + 3;
      uVar2 = FUN_0028ee34(param_1);
      pfVar3 = pfVar6;
      if ((uVar2 >> 2 & 1) != 0) goto LAB_00251d9c;
LAB_002518ec:
      uVar4 = FUN_0028ee34(param_1);
      if ((uVar4 & 1) == 0) goto LAB_002518f8;
LAB_00251dc8:
      *pfVar3 = fVar19;
      pfVar3[1] = fVar11;
      pfVar3[2] = 0.0;
      pfVar3 = pfVar3 + 3;
      uVar2 = FUN_0028ee34(param_1);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      *pfVar3 = fVar19 * 0.5 + 0.5;
      pfVar3[1] = 1.0 - (fVar10 * -0.5 + 0.5);
      pfVar3 = pfVar3 + 2;
    }
  }
  else {
    if ((uVar4 & 1) != 0) {
      *pfVar3 = fVar19;
      pfVar3[1] = fVar10;
      pfVar3[2] = 0.0;
      pfVar3 = pfVar3 + 3;
    }
    fVar15 = *(float *)puVar1;
    uVar2 = FUN_0028ee34(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) != 0) {
      pfVar5 = pfVar3 + 2;
      *pfVar3 = fVar19 * 0.5 + 0.5;
      pfVar3[1] = 1.0 - (fVar10 * 0.5 + 0.5);
    }
    fVar15 = fVar15 * 0.5;
    fVar16 = 0.0;
    iVar8 = iVar7;
    do {
      fVar12 = cosf(fVar16);
      fVar13 = sinf(fVar16);
      fVar18 = fVar19 + fVar9 * fVar12;
      fVar12 = fVar10 + fVar14 * fVar13;
      uVar4 = FUN_0028ee34(param_1);
      if ((uVar4 & 1) != 0) {
        *pfVar5 = fVar18;
        pfVar5[1] = fVar12;
        pfVar5[2] = 0.0;
        pfVar5 = pfVar5 + 3;
      }
      uVar2 = FUN_0028ee34(param_1);
      if ((uVar2 >> 2 & 1) != 0) {
        *pfVar5 = fVar18 * 0.5 + 0.5;
        pfVar5[1] = 1.0 - (fVar12 * 0.5 + 0.5);
        pfVar5 = pfVar5 + 2;
      }
      iVar8 = iVar8 + -1;
      fVar12 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
      fVar16 = fVar16 + fVar15 * (1.0 / fVar12);
    } while (iVar8 != 0);
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) != 0) {
      *pfVar5 = fVar17;
      pfVar5[1] = fVar10;
      pfVar5[2] = 0.0;
      pfVar5 = pfVar5 + 3;
    }
    uVar2 = FUN_0028ee34(param_1);
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) {
      pfVar3 = pfVar5 + 2;
      *pfVar5 = fVar19 * -0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar10 * 0.5 + 0.5);
    }
    fVar16 = 0.0;
    iVar8 = iVar7;
    do {
      fVar12 = cosf(fVar16);
      fVar13 = sinf(fVar16);
      fVar18 = fVar19 + fVar9 * fVar12;
      fVar12 = fVar10 + fVar14 * fVar13;
      uVar4 = FUN_0028ee34(param_1);
      if ((uVar4 & 1) != 0) {
        *pfVar3 = -fVar18;
        pfVar3[1] = fVar12;
        pfVar3[2] = 0.0;
        pfVar3 = pfVar3 + 3;
      }
      uVar2 = FUN_0028ee34(param_1);
      if ((uVar2 >> 2 & 1) != 0) {
        *pfVar3 = fVar18 * -0.5 + 0.5;
        pfVar3[1] = 1.0 - (fVar12 * 0.5 + 0.5);
        pfVar3 = pfVar3 + 2;
      }
      iVar8 = iVar8 + -1;
      fVar12 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
      fVar16 = fVar16 + fVar15 * (1.0 / fVar12);
    } while (iVar8 != 0);
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) != 0) {
      *pfVar3 = fVar17;
      pfVar3[1] = fVar11;
      pfVar3[2] = 0.0;
      pfVar3 = pfVar3 + 3;
    }
    uVar2 = FUN_0028ee34(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) != 0) {
      pfVar5 = pfVar3 + 2;
      *pfVar3 = fVar19 * -0.5 + 0.5;
      pfVar3[1] = 1.0 - (fVar10 * -0.5 + 0.5);
    }
    fVar16 = 0.0;
    iVar8 = iVar7;
    do {
      fVar12 = cosf(fVar16);
      fVar13 = sinf(fVar16);
      fVar18 = fVar19 + fVar9 * fVar12;
      fVar12 = fVar10 + fVar14 * fVar13;
      uVar4 = FUN_0028ee34(param_1);
      if ((uVar4 & 1) != 0) {
        *pfVar5 = -fVar18;
        pfVar5[1] = -fVar12;
        pfVar5[2] = 0.0;
        pfVar5 = pfVar5 + 3;
      }
      uVar2 = FUN_0028ee34(param_1);
      if ((uVar2 >> 2 & 1) != 0) {
        *pfVar5 = fVar18 * -0.5 + 0.5;
        pfVar5[1] = 1.0 - (fVar12 * -0.5 + 0.5);
        pfVar5 = pfVar5 + 2;
      }
      iVar8 = iVar8 + -1;
      fVar12 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
      fVar16 = fVar16 + fVar15 * (1.0 / fVar12);
    } while (iVar8 != 0);
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) != 0) {
      *pfVar5 = fVar19;
      pfVar5[1] = fVar11;
      pfVar5[2] = 0.0;
      pfVar5 = pfVar5 + 3;
    }
    uVar2 = FUN_0028ee34(param_1);
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) {
      pfVar3 = pfVar5 + 2;
      *pfVar5 = fVar19 * 0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar10 * -0.5 + 0.5);
    }
    fVar16 = 0.0;
    do {
      fVar12 = cosf(fVar16);
      fVar13 = sinf(fVar16);
      fVar18 = fVar19 + fVar9 * fVar12;
      fVar12 = fVar10 + fVar14 * fVar13;
      uVar4 = FUN_0028ee34(param_1);
      if ((uVar4 & 1) != 0) {
        *pfVar3 = fVar18;
        pfVar3[1] = -fVar12;
        pfVar3[2] = 0.0;
        pfVar3 = pfVar3 + 3;
      }
      uVar2 = FUN_0028ee34(param_1);
      if ((uVar2 >> 2 & 1) != 0) {
        *pfVar3 = fVar18 * 0.5 + 0.5;
        pfVar3[1] = 1.0 - (fVar12 * -0.5 + 0.5);
        pfVar3 = pfVar3 + 2;
      }
      iVar7 = iVar7 + -1;
      fVar12 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
      fVar16 = fVar16 + fVar15 * (1.0 / fVar12);
    } while (iVar7 != 0);
  }
  if (2.0 <= fVar9 + fVar9) goto joined_r0x00252164;
  uVar4 = FUN_0028ee34(param_1);
  if ((uVar4 & 1) != 0) {
    *pfVar3 = fVar19;
    pfVar3[1] = 1.0;
    pfVar3[2] = 0.0;
    pfVar3 = pfVar3 + 3;
  }
  uVar2 = FUN_0028ee34(param_1);
  if ((uVar2 >> 2 & 1) == 0) {
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) == 0) goto LAB_00251e50;
LAB_00251f90:
    *pfVar3 = fVar19;
    pfVar3[1] = fVar10;
    pfVar3[2] = 0.0;
    pfVar3 = pfVar3 + 3;
    uVar2 = FUN_0028ee34(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_00251fac;
LAB_00251e5c:
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) == 0) goto LAB_00251e68;
LAB_00251fd4:
    *pfVar5 = fVar17;
    pfVar5[1] = 1.0;
    pfVar5[2] = 0.0;
    pfVar5 = pfVar5 + 3;
    uVar2 = FUN_0028ee34(param_1);
    if ((uVar2 >> 2 & 1) != 0) goto LAB_00251ff0;
LAB_00251e74:
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) == 0) goto LAB_00251e80;
LAB_00252014:
    *pfVar5 = fVar17;
    pfVar5[1] = fVar10;
    pfVar5[2] = 0.0;
    pfVar5 = pfVar5 + 3;
    uVar2 = FUN_0028ee34(param_1);
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_00252030;
LAB_00251e8c:
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) == 0) goto LAB_00251e98;
LAB_0025205c:
    *pfVar3 = fVar17;
    pfVar3[1] = -1.0;
    pfVar3[2] = 0.0;
    pfVar3 = pfVar3 + 3;
    uVar2 = FUN_0028ee34(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_00252078;
LAB_00251ea4:
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) == 0) goto LAB_00251eb0;
LAB_0025209c:
    *pfVar5 = fVar17;
    pfVar5[1] = fVar11;
    pfVar5[2] = 0.0;
    pfVar5 = pfVar5 + 3;
    uVar2 = FUN_0028ee34(param_1);
    pfVar6 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_002520b8;
LAB_00251ebc:
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) == 0) goto LAB_00251ec8;
LAB_002520e4:
    *pfVar6 = fVar19;
    pfVar6[1] = -1.0;
    pfVar6[2] = 0.0;
    pfVar6 = pfVar6 + 3;
    uVar2 = FUN_0028ee34(param_1);
    pfVar3 = pfVar6;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_00252100;
LAB_00251ed4:
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) == 0) goto LAB_00251ee0;
LAB_00252120:
    *pfVar3 = fVar19;
    pfVar3[1] = fVar11;
    pfVar3[2] = 0.0;
    pfVar3 = pfVar3 + 3;
    uVar2 = FUN_0028ee34(param_1);
  }
  else {
    *pfVar3 = fVar19 * 0.5 + 0.5;
    pfVar3[1] = 0.0;
    pfVar3 = pfVar3 + 2;
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) != 0) goto LAB_00251f90;
LAB_00251e50:
    uVar2 = FUN_0028ee34(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_00251e5c;
LAB_00251fac:
    pfVar5 = pfVar3 + 2;
    *pfVar3 = fVar19 * 0.5 + 0.5;
    pfVar3[1] = 1.0 - (fVar10 * 0.5 + 0.5);
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) != 0) goto LAB_00251fd4;
LAB_00251e68:
    uVar2 = FUN_0028ee34(param_1);
    if ((uVar2 >> 2 & 1) == 0) goto LAB_00251e74;
LAB_00251ff0:
    *pfVar5 = fVar19 * -0.5 + 0.5;
    pfVar5[1] = 0.0;
    pfVar5 = pfVar5 + 2;
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) != 0) goto LAB_00252014;
LAB_00251e80:
    uVar2 = FUN_0028ee34(param_1);
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_00251e8c;
LAB_00252030:
    pfVar3 = pfVar5 + 2;
    *pfVar5 = fVar19 * -0.5 + 0.5;
    pfVar5[1] = 1.0 - (fVar10 * 0.5 + 0.5);
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) != 0) goto LAB_0025205c;
LAB_00251e98:
    uVar2 = FUN_0028ee34(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_00251ea4;
LAB_00252078:
    pfVar3[1] = 1.0;
    pfVar5 = pfVar3 + 2;
    *pfVar3 = fVar19 * -0.5 + 0.5;
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) != 0) goto LAB_0025209c;
LAB_00251eb0:
    uVar2 = FUN_0028ee34(param_1);
    pfVar6 = pfVar5;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_00251ebc;
LAB_002520b8:
    pfVar6 = pfVar5 + 2;
    *pfVar5 = fVar19 * -0.5 + 0.5;
    pfVar5[1] = 1.0 - (fVar10 * -0.5 + 0.5);
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) != 0) goto LAB_002520e4;
LAB_00251ec8:
    uVar2 = FUN_0028ee34(param_1);
    pfVar3 = pfVar6;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_00251ed4;
LAB_00252100:
    pfVar6[1] = 1.0;
    pfVar3 = pfVar6 + 2;
    *pfVar6 = fVar19 * 0.5 + 0.5;
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) != 0) goto LAB_00252120;
LAB_00251ee0:
    uVar2 = FUN_0028ee34(param_1);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    *pfVar3 = fVar19 * 0.5 + 0.5;
    pfVar3[1] = 1.0 - (fVar10 * -0.5 + 0.5);
    pfVar3 = pfVar3 + 2;
  }
joined_r0x00252164:
  if (fVar14 + fVar14 < 2.0) {
    uVar4 = FUN_0028ee34(param_1);
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_0028ee34(param_1);
    }
    else {
      *pfVar3 = 1.0;
      pfVar3[2] = 0.0;
      pfVar3[1] = fVar10;
      pfVar3 = pfVar3 + 3;
      uVar2 = FUN_0028ee34(param_1);
    }
    if ((uVar2 >> 2 & 1) == 0) {
      uVar4 = FUN_0028ee34(param_1);
    }
    else {
      *pfVar3 = 1.0;
      *(float *)((long)pfVar3 + 4) = 1.0 - (fVar10 * 0.5 + 0.5);
      pfVar3 = (float *)((long)pfVar3 + 8);
      uVar4 = FUN_0028ee34(param_1);
    }
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_0028ee34(param_1);
    }
    else {
      *pfVar3 = -1.0;
      *(float *)((long)pfVar3 + 8) = 0.0;
      *(float *)((long)pfVar3 + 4) = fVar10;
      pfVar3 = (float *)((long)pfVar3 + 0xc);
      uVar2 = FUN_0028ee34(param_1);
    }
    if ((uVar2 >> 2 & 1) == 0) {
      uVar4 = FUN_0028ee34(param_1);
    }
    else {
      *pfVar3 = 0.0;
      *(float *)((long)pfVar3 + 4) = 1.0 - (fVar10 * 0.5 + 0.5);
      pfVar3 = (float *)((long)pfVar3 + 8);
      uVar4 = FUN_0028ee34(param_1);
    }
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_0028ee34(param_1);
    }
    else {
      *pfVar3 = -1.0;
      *(float *)((long)pfVar3 + 8) = 0.0;
      *(float *)((long)pfVar3 + 4) = fVar11;
      pfVar3 = (float *)((long)pfVar3 + 0xc);
      uVar2 = FUN_0028ee34(param_1);
    }
    if ((uVar2 >> 2 & 1) == 0) {
      uVar4 = FUN_0028ee34(param_1);
    }
    else {
      *pfVar3 = 0.0;
      *(float *)((long)pfVar3 + 4) = 1.0 - (fVar10 * -0.5 + 0.5);
      pfVar3 = (float *)((long)pfVar3 + 8);
      uVar4 = FUN_0028ee34(param_1);
    }
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_0028ee34(param_1);
    }
    else {
      *pfVar3 = 1.0;
      pfVar3[2] = 0.0;
      pfVar3[1] = fVar11;
      pfVar3 = pfVar3 + 3;
      uVar2 = FUN_0028ee34(param_1);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      *pfVar3 = 1.0;
      pfVar3[1] = 1.0 - (fVar10 * -0.5 + 0.5);
      pfVar3 = pfVar3 + 2;
    }
    return pfVar3;
  }
  return pfVar3;
}


