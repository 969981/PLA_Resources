/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0c484; name: FUN_02e0c484
 */


void FUN_02e0c484(long param_1)

{
  byte bVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  lVar2 = *(long *)(param_1 + 0x158);
  if (((*(char *)(lVar2 + 0x98) != '\0') && (*(int *)(lVar2 + 0x90) != 0)) &&
     ((*(int *)(lVar2 + 0x90) != 1 || (*(char *)(param_1 + 0x138) != '\0')))) {
    uVar5 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
    lVar4 = *(long *)(param_1 + 0x148);
    bVar1 = *(byte *)(param_1 + 0x137);
    FUN_02e1d610(uVar5,*(undefined4 *)(lVar2 + 0x34),*(undefined4 *)(lVar2 + 0x30),
                 *(undefined4 *)(lVar2 + 0x38),&fStack_44,&local_48,&fStack_4c,&local_50,&local_54,
                 *(undefined4 *)(lVar2 + 0x94));
    fVar8 = local_48 - local_50 * fStack_44;
    pfVar3 = (float *)(lVar4 + (ulong)bVar1 * 0xa0);
    fVar7 = -local_54;
    *pfVar3 = fStack_44;
    pfVar3[1] = fStack_44;
    pfVar3[2] = fStack_44;
    pfVar3[3] = fStack_44;
    pfVar3[4] = 0.0;
    pfVar3[5] = 0.0;
    pfVar3[6] = 0.0;
    pfVar3[0x1c] = fVar7;
    pfVar3[7] = fVar8;
    pfVar3[10] = fVar8;
    fVar10 = (fStack_4c - local_54 * fStack_44) - local_50 * fVar8;
    pfVar3[0xd] = fVar8;
    fVar9 = local_54 * local_50;
    fVar11 = local_48 * fVar7;
    pfVar3[0xf] = (fVar11 + fStack_44 * fVar9) - local_50 * fVar10;
    fVar8 = fStack_4c - local_50 * local_48;
    pfVar3[0x11] = fVar8;
    fVar8 = fVar11 - local_50 * fVar8;
    pfVar3[0x10] = local_48;
    fVar7 = fStack_4c * fVar7;
    pfVar3[0xb] = fVar10;
    pfVar3[0xe] = fVar10;
    pfVar3[0xc] = 0.0;
    pfVar3[0x12] = fVar8;
    fVar6 = -local_50;
    pfVar3[0x14] = fStack_4c;
    pfVar3[8] = 0.0;
    pfVar3[9] = 0.0;
    pfVar3[0x18] = fVar6;
    pfVar3[0x1d] = fVar9;
    pfVar3[0x15] = fStack_4c * fVar6;
    fVar10 = fStack_4c * fVar6 * fVar6;
    pfVar3[0x13] = fVar7 - local_50 * (fVar8 + fVar11);
    fVar8 = local_50 * local_50;
    pfVar3[0x17] = (fVar7 * -2.0 - fVar10) * local_50;
    pfVar3[0x19] = fVar8 - local_54;
    pfVar3[0x16] = fVar10 + fVar7;
    pfVar3[0x1a] = fVar8 * fVar6 + local_50 * (local_54 + local_54);
    pfVar3[0x1e] = fVar9 * fVar6 + local_54 * local_54;
    pfVar3[0x1b] = (local_54 * local_54 + fVar8 * local_54 * -3.0) - local_50 * fVar8 * fVar6;
    pfVar3[0x1f] = (local_54 * -2.0 * local_54 - fVar9 * fVar6) * local_50;
    *(undefined4 *)(*(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x137) * 0xa0 + 0x90) =
         *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x90);
    lVar2 = *(long *)(param_1 + 0x158);
    if ((*(int *)(lVar2 + 0x90) == 1) && (*(char *)(param_1 + 0x138) == '\x02')) {
      uVar5 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
      lVar4 = *(long *)(param_1 + 0x148);
      bVar1 = *(byte *)(param_1 + 0x137);
      FUN_02e1d610(uVar5,*(undefined4 *)(lVar2 + 0x34),*(undefined4 *)(lVar2 + 0x30),
                   *(undefined4 *)(lVar2 + 0x38),&fStack_44,&local_48,&fStack_4c,&local_50,&local_54
                   ,*(undefined4 *)(lVar2 + 0x94));
      lVar4 = lVar4 + (ulong)bVar1 * 0xa0;
      fVar9 = local_48 - local_50 * fStack_44;
      fVar7 = fStack_4c - local_50 * local_48;
      fVar10 = -local_54;
      fVar6 = local_48 * fVar10;
      fVar11 = local_54 * local_50;
      *(float *)(lVar4 + 0xa8) = fStack_44;
      *(float *)(lVar4 + 0xac) = fStack_44;
      *(undefined8 *)(lVar4 + 0xb0) = 0;
      *(undefined4 *)(lVar4 + 0xb8) = 0;
      *(undefined8 *)(lVar4 + 0xc0) = 0;
      *(undefined4 *)(lVar4 + 0xd0) = 0;
      *(float *)(lVar4 + 0x110) = fVar10;
      *(float *)(lVar4 + 0xbc) = fVar9;
      fVar8 = (fStack_4c - local_54 * fStack_44) - local_50 * fVar9;
      fVar12 = fVar6 - local_50 * fVar7;
      *(float *)(lVar4 + 200) = fVar9;
      *(float *)(lVar4 + 0xcc) = fVar8;
      *(float *)(lVar4 + 0xd4) = fVar9;
      *(float *)(lVar4 + 0xd8) = fVar8;
      fVar10 = fStack_4c * fVar10;
      *(float *)(lVar4 + 0xe4) = fVar7;
      *(float *)(lVar4 + 0xe8) = fVar12;
      fVar7 = -local_50;
      fVar9 = fStack_4c * fVar7 * fVar7;
      *(float *)(lVar4 + 0xdc) = (fVar6 + fStack_44 * fVar11) - local_50 * fVar8;
      *(float *)(lVar4 + 0xe0) = local_48;
      *(float *)(lVar4 + 0xec) = fVar10 - local_50 * (fVar12 + fVar6);
      *(float *)(lVar4 + 0xf0) = fStack_4c;
      *(float *)(lVar4 + 0xa0) = fStack_44;
      *(float *)(lVar4 + 0xa4) = fStack_44;
      *(float *)(lVar4 + 0xf4) = fStack_4c * fVar7;
      *(float *)(lVar4 + 0xf8) = fVar9 + fVar10;
      *(float *)(lVar4 + 0xfc) = (fVar10 * -2.0 - fVar9) * local_50;
      *(float *)(lVar4 + 0x100) = fVar7;
      fVar8 = local_50 * local_50;
      *(float *)(lVar4 + 0x104) = fVar8 - local_54;
      *(float *)(lVar4 + 0x108) = fVar8 * fVar7 + local_50 * (local_54 + local_54);
      *(float *)(lVar4 + 0x118) = fVar11 * fVar7 + local_54 * local_54;
      *(float *)(lVar4 + 0x10c) =
           (local_54 * local_54 + fVar8 * local_54 * -3.0) - local_50 * fVar8 * fVar7;
      *(float *)(lVar4 + 0x114) = fVar11;
      *(float *)(lVar4 + 0x11c) = (local_54 * -2.0 * local_54 - fVar11 * fVar7) * local_50;
      *(undefined4 *)(*(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x137) * 0xa0 + 0x130)
           = *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x90);
    }
  }
  return;
}


