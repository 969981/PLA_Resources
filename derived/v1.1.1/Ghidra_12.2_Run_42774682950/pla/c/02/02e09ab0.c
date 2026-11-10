/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e09ab0; name: FUN_02e09ab0
 */


void FUN_02e09ab0(float param_1,float param_2,float param_3,float param_4,float param_5,long param_6
                 )

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar3 = -param_4;
  fVar8 = param_2 + param_1 * fVar3;
  fVar7 = param_3 + param_2 * fVar3;
  fVar6 = fVar3 * param_3;
  fVar5 = param_5 * param_4;
  pfVar1 = *(float **)(param_6 + 0x10);
  uVar2 = *(uint *)(param_6 + 0x1c);
  fVar4 = -param_5;
  if (((uVar2 & 1) != 0) || (*(char *)(param_6 + 0x20) != '\0')) {
    fVar9 = fVar4 * param_3;
    *pfVar1 = param_1;
    pfVar1[1] = param_1;
    fVar13 = param_4 * param_4;
    pfVar1[0x19] = fVar13 - param_5;
    pfVar1[0x16] = fVar6 * fVar3 + fVar9;
    fVar10 = fVar4 * param_2;
    fVar11 = param_3 + param_1 * fVar4 + fVar3 * fVar8;
    pfVar1[0xb] = fVar11;
    pfVar1[0xe] = fVar11;
    pfVar1[2] = param_1;
    pfVar1[3] = param_1;
    pfVar1[4] = 0.0;
    pfVar1[5] = 0.0;
    pfVar1[6] = 0.0;
    pfVar1[0x14] = param_3;
    pfVar1[0x15] = fVar6;
    pfVar1[0x18] = fVar3;
    pfVar1[7] = fVar8;
    pfVar1[0x17] = (fVar6 * fVar3 + fVar9 * 2.0) * fVar3;
    fVar12 = fVar10 + fVar3 * fVar7;
    pfVar1[0x12] = fVar12;
    pfVar1[8] = 0.0;
    pfVar1[9] = 0.0;
    pfVar1[10] = fVar8;
    pfVar1[0xc] = 0.0;
    pfVar1[0x10] = param_2;
    pfVar1[0x11] = fVar7;
    pfVar1[0xf] = fVar10 + param_1 * fVar5 + fVar3 * fVar11;
    pfVar1[0x13] = fVar9 + fVar3 * (fVar12 + fVar10);
    pfVar1[0x1a] = fVar13 * fVar3 + fVar3 * param_5 * -2.0;
    pfVar1[0x1b] = param_5 * param_5 + fVar13 * param_5 * -3.0 + fVar3 * fVar13 * fVar3;
    pfVar1[0x1e] = fVar5 * fVar3 + param_5 * param_5;
    pfVar1[0xd] = fVar8;
    pfVar1[0x1c] = fVar4;
    pfVar1[0x1d] = fVar5;
    pfVar1[0x1f] = (fVar5 * fVar3 + fVar4 * param_5 * -2.0) * fVar3;
    if (*(char *)(param_6 + 0x20) != '\0') {
      return;
    }
    uVar2 = *(uint *)(param_6 + 0x1c);
    pfVar1 = pfVar1 + 0x20;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_5 = param_4 * param_4 - param_5;
    *pfVar1 = 0.0;
    pfVar1[1] = param_1;
    pfVar1[2] = 0.0;
    pfVar1[3] = param_1;
    pfVar1[4] = param_1;
    pfVar1[5] = fVar8;
    pfVar1[6] = param_1;
    pfVar1[7] = fVar8;
    pfVar1[8] = param_2;
    pfVar1[9] = fVar7;
    pfVar1[10] = param_2;
    pfVar1[0xb] = fVar7;
    pfVar1[0xc] = param_3;
    pfVar1[0xd] = fVar6;
    pfVar1[0xe] = param_3;
    pfVar1[0xf] = fVar6;
    pfVar1[0x10] = fVar3;
    pfVar1[0x12] = fVar3;
    pfVar1[0x14] = fVar4;
    pfVar1[0x15] = fVar5;
    pfVar1[0x16] = fVar4;
    pfVar1[0x17] = fVar5;
    pfVar1[0x11] = param_5;
    pfVar1[0x13] = param_5;
    uVar2 = *(uint *)(param_6 + 0x1c);
    pfVar1 = pfVar1 + 0x18;
  }
  if (uVar2 < 4) {
    return;
  }
  *pfVar1 = param_1;
  pfVar1[1] = param_2;
  pfVar1[2] = param_3;
  pfVar1[3] = fVar3;
  pfVar1[4] = fVar4;
  return;
}


