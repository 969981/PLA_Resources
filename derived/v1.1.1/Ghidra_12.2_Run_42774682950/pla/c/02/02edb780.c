/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edb780; name: FUN_02edb780
 */


void FUN_02edb780(undefined4 *param_1)

{
  uint uVar1;
  float *pfVar2;
  ushort uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  plVar5 = *(long **)(param_1 + 6);
  uVar3 = *(ushort *)(param_1 + 9);
  uVar6 = (ulong)uVar3;
  if ((int)(uint)uVar3 < (int)plVar5[1]) {
    lVar7 = *plVar5;
    uVar1 = uVar3 + 1;
    *(short *)(param_1 + 9) = (short)uVar1;
    pfVar2 = (float *)(lVar7 + uVar6 * 0x10);
    fVar9 = *pfVar2;
    param_1[0x17] = fVar9;
    fVar10 = pfVar2[1];
    param_1[0x18] = fVar10;
    fVar11 = pfVar2[2];
    param_1[0x19] = fVar11;
    lVar8 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
    lVar7 = lVar8 * 0x5851f42d4c957f2d + 1;
    DAT_0440a190 = lVar7 * 0x5851f42d4c957f2d + 1;
    param_1[0x17] =
         fVar9 + *(float *)((long)plVar5 + 0xc) *
                 ((float)(uint)((ulong)lVar8 >> 0x21) * 9.313226e-10 + -1.0);
    param_1[0x19] =
         fVar11 + *(float *)(plVar5 + 2) *
                  ((float)(uint)((ulong)lVar7 >> 0x21) * 9.313226e-10 + -1.0);
    param_1[0x18] =
         fVar10 + *(float *)((long)plVar5 + 0x14) *
                  ((float)(uint)((ulong)DAT_0440a190 >> 0x21) * 9.313226e-10 + -1.0);
    iVar4 = 0;
    if (DAT_042ab25c != 0) {
      iVar4 = ((int)pfVar2[3] + DAT_042ab25c + -1) / DAT_042ab25c;
    }
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    param_1[0x13] = iVar4;
    uVar6 = (ulong)uVar1;
    if ((int)(uVar1 & 0xffff) < (int)plVar5[1]) goto LAB_02edb8ac;
  }
  else if ((int)(uint)uVar3 < (int)plVar5[1]) goto LAB_02edb8ac;
  iVar4 = FUN_02edb988(param_1);
  if (iVar4 != 1) {
    *param_1 = 0;
    return;
  }
  plVar5 = *(long **)(param_1 + 6);
  uVar6 = (ulong)*(ushort *)(param_1 + 9);
LAB_02edb8ac:
  pfVar2 = (float *)(*plVar5 + (uVar6 & 0xffff) * 0x10);
  fVar10 = pfVar2[2];
  fVar9 = pfVar2[1];
  lVar7 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
  lVar8 = lVar7 * 0x5851f42d4c957f2d + 1;
  fVar11 = *(float *)(plVar5 + 2);
  DAT_0440a190 = lVar8 * 0x5851f42d4c957f2d + 1;
  uVar6 = (ulong)DAT_0440a190 >> 0x21;
  fVar12 = *(float *)((long)plVar5 + 0x14);
  param_1[0x1a] =
       (*pfVar2 - (float)param_1[0x17]) +
       *(float *)((long)plVar5 + 0xc) * ((float)(uint)((ulong)lVar7 >> 0x21) * 9.313226e-10 + -1.0);
  param_1[0x1b] =
       (fVar9 - (float)param_1[0x18]) + fVar12 * ((float)(uint)uVar6 * 9.313226e-10 + -1.0);
  uVar1 = param_1[0x12];
  param_1[0x11] = uVar1;
  param_1[0x12] = param_1[0x13] + uVar1;
  param_1[0x1c] =
       (fVar10 - (float)param_1[0x19]) +
       fVar11 * ((float)(uint)((ulong)lVar8 >> 0x21) * 9.313226e-10 + -1.0);
  fVar9 = 1.0 / (float)(uint)param_1[0x13];
  param_1[0x14] = fVar9;
  param_1[0x15] = -(fVar9 * (float)uVar1);
  return;
}


