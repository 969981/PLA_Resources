/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e030f0; name: FUN_02e030f0
 */


void FUN_02e030f0(long *param_1,uint param_2,float *param_3,float *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  
  memset(param_4,0,(ulong)(param_2 << 2) & 0x3fc);
  fVar6 = param_3[2];
  if (fVar6 == 0.0) {
    if ((param_2 >> 0xd & 1) == 0) {
      lVar4 = 0;
    }
    else {
      param_4[1] = param_3[1];
      if ((param_2 >> 0xe & 1) == 0) {
        lVar4 = 2;
      }
      else {
        lVar4 = 3;
        param_4[2] = param_3[1] * 0.5;
      }
    }
    uVar1 = param_2 >> 0xc & 0x210;
    if (uVar1 != 0) {
      param_4[lVar4] = 0.0;
      iVar2 = (int)lVar4;
      param_4[iVar2 + 1] = param_3[1];
      if (uVar1 == 0x210) {
        param_4[iVar2 + 2] = 0.0;
        param_4[iVar2 + 3] = param_3[1];
      }
    }
    goto joined_r0x02e03338;
  }
  if (fVar6 == 1.4013e-45) {
    uVar1 = param_2 >> 0xc & 0x210;
    if (uVar1 == 0) goto joined_r0x02e03338;
    uVar3 = 2;
    if ((param_2 & 0x4000) != 0) {
      uVar3 = 3;
    }
    param_4[uVar3] = param_3[1];
    param_4[uVar3 + 1] = param_3[1];
    if (uVar1 != 0x210) goto joined_r0x02e03338;
    param_4[uVar3 + 2] = param_3[1] * 0.5;
    fVar6 = param_3[1] * 0.5;
  }
  else {
    if (fVar6 != 2.8026e-45) {
      if ((fVar6 == 4.2039e-45) && (uVar1 = param_2 - (param_2 >> 0xf & 1) & 0xff, 1 < uVar1)) {
        lVar4 = (ulong)uVar1 - 1;
        pfVar5 = param_4;
        do {
          pfVar5 = pfVar5 + 1;
          iVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
          lVar4 = lVar4 + -1;
          *pfVar5 = (float)iVar2 * param_3[1] * 4.656613e-10;
        } while (lVar4 != 0);
      }
      goto joined_r0x02e03338;
    }
    uVar1 = param_2 >> 0xc & 0x210;
    if (uVar1 == 0) {
      if (((param_2 & 0x3000) != 0) && (param_4[1] = param_3[1], (param_2 >> 0xe & 1) != 0)) {
        param_4[2] = param_3[1] * 0.5;
      }
      goto joined_r0x02e03338;
    }
    param_4[1] = param_3[1] * 0.5;
    if ((param_2 >> 0xe & 1) == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 3;
      param_4[2] = param_3[1] * 0.25;
    }
    param_4[uVar3] = param_3[1] * 0.5;
    param_4[uVar3 + 1] = param_3[1];
    if (uVar1 != 0x210) goto joined_r0x02e03338;
    param_4[uVar3 + 2] = param_3[1] * 0.25;
    fVar6 = param_3[1] * 0.75;
  }
  param_4[uVar3 + 3] = fVar6;
joined_r0x02e03338:
  if ((param_2 & 0xff) != 0) {
    param_2 = param_2 & 0xff;
    *param_4 = *param_4 + *param_3;
    if ((param_2 != 1) && (param_4[1] = param_4[1] + *param_3, param_2 != 2)) {
      lVar4 = (ulong)param_2 - 2;
      pfVar5 = param_4 + 2;
      do {
        lVar4 = lVar4 + -1;
        *pfVar5 = *pfVar5 + *param_3;
        pfVar5 = pfVar5 + 1;
      } while (lVar4 != 0);
    }
  }
  return;
}


