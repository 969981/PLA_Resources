/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef891c; name: FUN_02ef891c
 */


undefined8 FUN_02ef891c(float param_1,uint param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = 3.1415927 / (float)(param_2 & 0x7fffffff);
  uVar3 = (uint)(param_1 * fVar8 + 1.01);
  if ((int)param_2 < 0) {
    uVar3 = (uVar3 & 1) + uVar3;
    uVar2 = FUN_02ef8c40(param_3,uVar3 * 8);
    if ((uVar2 & 1) == 0) {
      return 2;
    }
    fVar8 = cosf(fVar8);
    if (uVar3 != 0) {
      fVar6 = (1.0 - fVar8) / (float)uVar3;
      fVar8 = fVar8 + fVar6 * 0.5;
      pfVar4 = (float *)*param_3;
      do {
        fVar9 = SQRT(1.0 - fVar8 * fVar8);
        fVar7 = fVar9 * 0.70710677;
        pfVar4[4] = fVar7;
        pfVar4[5] = fVar7;
        pfVar4[8] = fVar9 * -4.371139e-08;
        pfVar4[9] = fVar9;
        pfVar4[0x19] = -fVar9;
        pfVar4[0x1a] = fVar8;
        pfVar4[0xc] = fVar9 * -0.70710677;
        pfVar4[0xd] = fVar7;
        pfVar4[0x10] = -fVar9;
        pfVar4[0x11] = fVar9 * -8.742278e-08;
        *pfVar4 = fVar9;
        pfVar4[2] = fVar8;
        pfVar4[6] = fVar8;
        pfVar4[10] = fVar8;
        pfVar4[0xe] = fVar8;
        pfVar4[0x12] = fVar8;
        pfVar4[0x15] = fVar9 * -0.7071069;
        pfVar4[0x16] = fVar8;
        pfVar4[1] = 0.0;
        pfVar4[3] = 0.0;
        pfVar4[7] = 0.0;
        pfVar4[0xb] = 0.0;
        pfVar4[0xf] = 0.0;
        pfVar4[0x13] = 0.0;
        pfVar4[0x17] = 0.0;
        pfVar4[0x1b] = 0.0;
        pfVar4[0x18] = fVar9 * 1.1924881e-08;
        pfVar4[0x1d] = fVar9 * -0.7071069;
        pfVar4[0x1e] = fVar8;
        fVar8 = fVar8 + fVar6;
        pfVar4[0x1f] = 0.0;
        uVar3 = uVar3 - 1;
        pfVar4[0x14] = fVar9 * -0.70710665;
        pfVar4[0x1c] = fVar9 * 0.70710665;
        pfVar4 = pfVar4 + 0x20;
      } while (uVar3 != 0);
      return 1;
    }
  }
  else {
    iVar1 = 0;
    if ((uVar3 & 3) != 0) {
      iVar1 = 4 - (uVar3 & 3);
    }
    uVar3 = iVar1 + uVar3;
    uVar2 = FUN_02ef8c40(param_3,uVar3);
    if ((uVar2 & 1) == 0) {
      return 2;
    }
    fVar8 = fVar8 / (float)uVar3;
    fVar9 = fVar8 * (float)(uVar3 - 1);
    pfVar4 = (float *)*param_3;
    fVar6 = sinf(fVar9);
    *pfVar4 = -fVar6;
    pfVar4[1] = 0.0;
    fVar6 = cosf(fVar9);
    pfVar4[2] = fVar6;
    pfVar4[3] = 0.0;
    if (1 < uVar3) {
      fVar8 = fVar8 + fVar8;
      fVar9 = fVar9 - fVar8;
      fVar6 = sinf(fVar9);
      pfVar4[4] = -fVar6;
      pfVar4[5] = 0.0;
      fVar6 = cosf(fVar9);
      pfVar4[6] = fVar6;
      pfVar4[7] = 0.0;
      if (2 < uVar3) {
        fVar9 = fVar9 - fVar8;
        fVar6 = sinf(fVar9);
        pfVar4[8] = -fVar6;
        pfVar4[9] = 0.0;
        fVar6 = cosf(fVar9);
        pfVar4[10] = fVar6;
        pfVar4[0xb] = 0.0;
        if (3 < uVar3) {
          fVar9 = fVar9 - fVar8;
          fVar6 = sinf(fVar9);
          pfVar4[0xc] = -fVar6;
          pfVar4[0xd] = 0.0;
          fVar6 = cosf(fVar9);
          pfVar4[0xe] = fVar6;
          pfVar4[0xf] = 0.0;
          if (4 < uVar3) {
            fVar9 = fVar9 - fVar8;
            fVar6 = sinf(fVar9);
            pfVar4[0x10] = -fVar6;
            pfVar4[0x11] = 0.0;
            fVar6 = cosf(fVar9);
            pfVar4[0x12] = fVar6;
            pfVar4[0x13] = 0.0;
            if (5 < uVar3) {
              pfVar4 = pfVar4 + 0x14;
              uVar5 = 5;
              do {
                fVar9 = fVar9 - fVar8;
                fVar6 = sinf(fVar9);
                *pfVar4 = -fVar6;
                pfVar4[1] = 0.0;
                fVar6 = cosf(fVar9);
                uVar5 = uVar5 + 1;
                pfVar4[2] = fVar6;
                pfVar4[3] = 0.0;
                pfVar4 = pfVar4 + 4;
              } while (uVar5 < uVar3);
            }
          }
        }
      }
    }
  }
  return 1;
}


