/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e74568; name: FUN_02e74568
 */


float FUN_02e74568(float param_1,long *param_2,uint *param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar6 = *param_2;
  uVar3 = *param_3;
  uVar2 = (ulong)uVar3;
  pfVar4 = (float *)(lVar6 + uVar2 * 0xc);
  pfVar5 = pfVar4 + 3;
  if ((param_1 < *pfVar4) || (*pfVar5 <= param_1)) {
    if (param_1 < *pfVar4) {
      if (uVar3 != 0) {
        pfVar5 = (float *)(lVar6 + uVar2 * 0xc);
        do {
          uVar3 = uVar3 - 1;
          pfVar4 = pfVar5 + -3;
          *param_3 = uVar3;
          if (uVar3 == 0) {
            uVar2 = 0;
            goto LAB_02e745a4;
          }
          pfVar5 = pfVar4;
        } while (param_1 < *pfVar4);
        uVar2 = (ulong)uVar3;
      }
      pfVar5 = pfVar4 + 3;
    }
    else if (*pfVar5 <= param_1) {
      uVar3 = uVar3 + 1;
      if (uVar3 < *(uint *)(param_2 + 1)) {
        pfVar4 = (float *)(lVar6 + uVar2 * 0xc + 0x18);
        do {
          pfVar5 = pfVar4;
          *param_3 = uVar3;
          uVar2 = (ulong)uVar3;
          uVar3 = uVar3 + 1;
          if (*(uint *)(param_2 + 1) <= uVar3) break;
          pfVar4 = pfVar5 + 3;
        } while (*pfVar5 <= param_1);
      }
      pfVar4 = pfVar5 + -3;
    }
  }
LAB_02e745a4:
  lVar6 = *param_2 + (ulong)*(uint *)(param_2 + 1) * 0xc;
  fVar8 = *(float *)(lVar6 + uVar2 * 8);
  if ((1 << (ulong)((uint)pfVar4[2] & 0x1f) & 0x210U) == 0) {
    fVar8 = (float)FUN_02e74870(fVar8 * (param_1 - *pfVar4),pfVar4[1],pfVar5[1],
                                *(undefined4 *)(lVar6 + uVar2 * 8 + 4));
  }
  else {
    fVar8 = pfVar4[1] + (param_1 - *pfVar4) * fVar8;
  }
  iVar1 = *(int *)((long)param_2 + 0xc);
  if (iVar1 == 2) {
    fVar7 = (float)NEON_fminnm(fVar8,0x3f800000);
    if (fVar7 <= -1.0) {
      fVar7 = -1.0;
    }
    fVar10 = 1.0;
    if (0.0 <= fVar8) {
      fVar10 = -1.0;
    }
    fVar7 = fVar10 * fVar7 + 1.0;
    fVar8 = (float)((uint)fVar7 & 0x7fffff | 0x3f800000);
    fVar9 = fVar8 + 1.0;
    fVar7 = fVar10 * 20.0 *
            ((float)((uint)fVar7 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
            (fVar8 * fVar8 * fVar8 * 1.1581186 + -1.1581186) / (fVar9 * fVar9 * fVar9));
  }
  else {
    uVar3 = (uint)(fVar8 * 27866352.0 + 1.0653532e+09);
    fVar10 = (float)(uVar3 & 0x7fffff | 0x3f800000);
    fVar7 = 0.0;
    if (-37.0 <= fVar8) {
      fVar7 = (fVar10 * (fVar10 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar3 & 0xff800000);
    }
    uVar3 = (uint)(fVar8 * 1393317.6 + 1.0653532e+09);
    fVar10 = (float)(uVar3 & 0x7fffff | 0x3f800000);
    fVar9 = 0.0;
    if (-37.0 <= fVar8 * 0.05) {
      fVar9 = (fVar10 * (fVar10 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar3 & 0xff800000);
    }
    if (iVar1 != 4) {
      fVar9 = fVar8;
    }
    if (iVar1 != 3) {
      fVar7 = fVar9;
    }
  }
  return fVar7;
}


