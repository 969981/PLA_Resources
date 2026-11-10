/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00247b64; name: FUN_00247b64
 */


int FUN_00247b64(long *param_1,long param_2,int param_3,long param_4)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_e0 [32];
  float local_58;
  float fStack_54;
  
  pfVar1 = (float *)(*(long *)(*(long *)(param_2 + 200) + 0x38) + (long)param_3);
  pfVar1[0x34] = 0.0;
  pfVar1[0x35] = 0.0;
  pfVar1[0x36] = 0.0;
  pfVar1[0x37] = 0.0;
  pfVar1[0x30] = 0.0;
  pfVar1[0x31] = 0.0;
  pfVar1[0x32] = 0.0;
  pfVar1[0x33] = 0.0;
  pfVar1[0x2c] = 0.0;
  pfVar1[0x2d] = 0.0;
  pfVar1[0x2e] = 0.0;
  pfVar1[0x2f] = 0.0;
  pfVar1[0x28] = 0.0;
  pfVar1[0x29] = 0.0;
  pfVar1[0x2a] = 0.0;
  pfVar1[0x2b] = 0.0;
  pfVar1[0x24] = 0.0;
  pfVar1[0x25] = 0.0;
  pfVar1[0x26] = 0.0;
  pfVar1[0x27] = 0.0;
  pfVar1[0x20] = 0.0;
  pfVar1[0x21] = 0.0;
  pfVar1[0x22] = 0.0;
  pfVar1[0x23] = 0.0;
  pfVar1[0x1c] = 0.0;
  pfVar1[0x1d] = 0.0;
  pfVar1[0x1e] = 0.0;
  pfVar1[0x1f] = 0.0;
  pfVar1[0x18] = 0.0;
  pfVar1[0x19] = 0.0;
  pfVar1[0x1a] = 0.0;
  pfVar1[0x1b] = 0.0;
  pfVar1[0x14] = 0.0;
  pfVar1[0x15] = 0.0;
  pfVar1[0x16] = 0.0;
  pfVar1[0x17] = 0.0;
  pfVar1[0x10] = 0.0;
  pfVar1[0x11] = 0.0;
  pfVar1[0x12] = 0.0;
  pfVar1[0x13] = 0.0;
  pfVar1[0xc] = 0.0;
  pfVar1[0xd] = 0.0;
  pfVar1[0xe] = 0.0;
  pfVar1[0xf] = 0.0;
  pfVar1[8] = 0.0;
  pfVar1[9] = 0.0;
  pfVar1[10] = 0.0;
  pfVar1[0xb] = 0.0;
  pfVar1[4] = 0.0;
  pfVar1[5] = 0.0;
  pfVar1[6] = 0.0;
  pfVar1[7] = 0.0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  pfVar1[2] = 0.0;
  pfVar1[3] = 0.0;
  fVar9 = *(float *)(param_4 + 0x18) / -100.0 + 1.0;
  if (fVar9 <= 0.0039) {
    fVar9 = 0.0039;
  }
  pfVar1[4] = 1.0 / fVar9;
  *pfVar1 = *(float *)(param_4 + 8) / 255.0;
  pfVar1[1] = *(float *)(param_4 + 0xc) / 255.0;
  pfVar1[2] = *(float *)(param_4 + 0x10) / 255.0;
  pfVar1[3] = *(float *)(param_4 + 0x14) / 255.0;
  fVar9 = *(float *)(param_4 + 0x1c);
  if (fVar9 == 0.0) {
    pfVar1[0x34] = 0.0;
    pfVar1[0x35] = 0.0;
    pfVar1[0x36] = 0.0;
    pfVar1[0x37] = 0.0;
    pfVar1[5] = 1.0;
    pfVar1[0x30] = 0.0;
    pfVar1[0x31] = 0.0;
    pfVar1[0x32] = 0.0;
    pfVar1[0x33] = 0.0;
    pfVar1[0x2c] = 0.0;
    pfVar1[0x2d] = 0.0;
    pfVar1[0x2e] = 0.0;
    pfVar1[0x2f] = 0.0;
    pfVar1[0x28] = 0.0;
    pfVar1[0x29] = 0.0;
    pfVar1[0x2a] = 0.0;
    pfVar1[0x2b] = 0.0;
LAB_00247eac:
    bVar2 = *(byte *)(*param_1 + 0x5a);
    pfVar1[6] = 1.0;
    pfVar1[7] = 1.0;
    if ((bVar2 != 0) &&
       (((param_1[0xb] == 0 || ((*(byte *)(param_1 + 0x45) >> 2 & 1) != 0)) ||
        ((*(byte *)(param_1[0xb] + 8) >> 5 & 1) == 0)))) {
      fVar9 = (float)bVar2;
      pfVar1[6] = fVar9 / 255.0;
      pfVar1[7] = 255.0 / fVar9;
    }
    iVar3 = 0;
    lVar8 = 0x28;
    do {
      pfVar5 = pfVar1 + lVar8;
      uVar7 = lVar8 - 0x27;
      lVar8 = lVar8 + 1;
      iVar3 = iVar3 + (uint)(6.1035156e-05 <= *pfVar5);
    } while (6.1035156e-05 <= *pfVar5 && uVar7 < 0x10);
    return iVar3;
  }
  fVar11 = 0.0;
  lVar8 = 0;
  local_e0[0x1c] = 0.0;
  local_e0[0x1d] = 0.0;
  local_e0[0x1e] = 0.0;
  local_e0[0x1f] = 0.0;
  local_e0[0x18] = 0.0;
  local_e0[0x19] = 0.0;
  local_e0[0x1a] = 0.0;
  local_e0[0x1b] = 0.0;
  local_e0[0x14] = 0.0;
  local_e0[0x15] = 0.0;
  local_e0[0x16] = 0.0;
  local_e0[0x17] = 0.0;
  local_e0[0x10] = 0.0;
  local_e0[0x11] = 0.0;
  local_e0[0x12] = 0.0;
  local_e0[0x13] = 0.0;
  local_e0[0xc] = 0.0;
  local_e0[0xd] = 0.0;
  local_e0[0xe] = 0.0;
  local_e0[0xf] = 0.0;
  local_e0[8] = 0.0;
  local_e0[9] = 0.0;
  local_e0[10] = 0.0;
  local_e0[0xb] = 0.0;
  local_e0[4] = 0.0;
  local_e0[5] = 0.0;
  local_e0[6] = 0.0;
  local_e0[7] = 0.0;
  local_e0[0] = 0.0;
  local_e0[1] = 0.0;
  local_e0[2] = 0.0;
  local_e0[3] = 0.0;
  while( true ) {
    fVar9 = ((float)(int)lVar8 / fVar9) * 2.8;
    fVar9 = expf(fVar9 * fVar9 * -0.5);
    local_e0[lVar8] = fVar9;
    if (lVar8 != 0) {
      fVar9 = fVar9 + fVar9;
    }
    fVar11 = fVar11 + fVar9;
    if (lVar8 == 0x1f) break;
    fVar9 = *(float *)(param_4 + 0x1c);
    lVar8 = lVar8 + 1;
  }
  local_e0[1] = local_e0[1] / fVar11;
  local_e0[0] = local_e0[0] / fVar11;
  local_e0[3] = local_e0[3] / fVar11;
  local_e0[2] = local_e0[2] / fVar11;
  local_e0[5] = local_e0[5] / fVar11;
  local_e0[4] = local_e0[4] / fVar11;
  local_e0[7] = local_e0[7] / fVar11;
  local_e0[6] = local_e0[6] / fVar11;
  local_e0[9] = local_e0[9] / fVar11;
  local_e0[8] = local_e0[8] / fVar11;
  local_e0[0xb] = local_e0[0xb] / fVar11;
  local_e0[10] = local_e0[10] / fVar11;
  local_e0[0xd] = local_e0[0xd] / fVar11;
  local_e0[0xc] = local_e0[0xc] / fVar11;
  local_e0[0xf] = local_e0[0xf] / fVar11;
  local_e0[0xe] = local_e0[0xe] / fVar11;
  local_e0[0x11] = local_e0[0x11] / fVar11;
  local_e0[0x10] = local_e0[0x10] / fVar11;
  local_e0[0x13] = local_e0[0x13] / fVar11;
  local_e0[0x12] = local_e0[0x12] / fVar11;
  local_e0[0x15] = local_e0[0x15] / fVar11;
  local_e0[0x14] = local_e0[0x14] / fVar11;
  local_e0[0x17] = local_e0[0x17] / fVar11;
  local_e0[0x16] = local_e0[0x16] / fVar11;
  local_e0[0x19] = local_e0[0x19] / fVar11;
  local_e0[0x18] = local_e0[0x18] / fVar11;
  local_e0[0x1b] = local_e0[0x1b] / fVar11;
  local_e0[0x1a] = local_e0[0x1a] / fVar11;
  local_e0[0x1d] = local_e0[0x1d] / fVar11;
  local_e0[0x1c] = local_e0[0x1c] / fVar11;
  local_e0[0x1f] = local_e0[0x1f] / fVar11;
  local_e0[0x1e] = local_e0[0x1e] / fVar11;
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_58);
  lVar8 = 4;
  uVar7 = 2;
  bVar2 = *(byte *)(param_1[0xb] + 0xc);
  pfVar1[5] = local_e0[0];
  pfVar5 = pfVar1 + 0x28;
  fVar9 = 1.0 / (fStack_54 + (float)((uint)bVar2 << 1));
  do {
    fVar11 = 0.0;
    fVar10 = *(float *)((long)local_e0 + lVar8) + local_e0[uVar7];
    if (0.0 < fVar10) {
      fVar11 = local_e0[uVar7] / fVar10 + (float)((int)uVar7 + -1);
    }
    pfVar5[-0x20] = (1.0 / local_58) * fVar11;
    pfVar5[-0x10] = fVar9 * fVar11;
    *pfVar5 = fVar10;
    pfVar4 = pfVar5;
    lVar6 = lVar8;
    while( true ) {
      uVar7 = uVar7 + 2;
      lVar8 = lVar6 + 8;
      pfVar5 = pfVar4 + 1;
      if (uVar7 == 0x22) goto LAB_00247eac;
      if (uVar7 < 0x20) break;
      fVar11 = (float)((int)uVar7 + -1);
      pfVar4[-0x1f] = (1.0 / local_58) * fVar11;
      pfVar4[-0xf] = fVar9 * fVar11;
      *pfVar5 = *(float *)((long)local_e0 + lVar6 + 8);
      pfVar4 = pfVar5;
      lVar6 = lVar8;
    }
  } while( true );
}


