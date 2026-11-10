/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025c330; name: FUN_0025c330
 */


void FUN_0025c330(long param_1,long *param_2,int *param_3)

{
  float *pfVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_60 [8];
  
  fVar10 = *(float *)(param_1 + 0x30) * 0.5;
  fVar12 = *(float *)(param_1 + 0x34) * 0.5;
  if (*(float *)(param_1 + 0x38) <= fVar10) {
    fVar10 = *(float *)(param_1 + 0x38);
  }
  if (fVar10 <= fVar12) {
    fVar12 = fVar10;
  }
  puVar9 = (undefined8 *)*param_2;
  fVar10 = acosf(-2.0 / fVar12 + 1.0);
  puVar3 = PTR_SinCosSampleTable_04372ce8;
  if (fVar10 <= 0.0) {
    uVar5 = 1;
  }
  else {
    uVar5 = (int)(*(float *)PTR_FloatPi_04372db0 / fVar10) + 1;
  }
  fVar10 = *(float *)PTR_FloatPi_04372db0 * 0.5;
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
  fVar15 = *(float *)PTR_FloatPi_04372cf0;
  fVar13 = fVar10 / (float)uVar5;
  uVar6 = 0;
  uVar2 = uVar5 + 1;
  do {
    local_60[0] = 1.0;
    local_60[1] = -1.0;
    local_60[2] = -1.0;
    local_60[3] = -1.0;
    local_60[4] = -1.0;
    local_60[5] = 1.0;
    local_60[6] = 1.0;
    local_60[7] = 1.0;
    fVar21 = *(float *)(param_1 + 0x38);
    fVar16 = *(float *)(param_1 + 0x34) * 0.5;
    fVar18 = *(float *)(param_1 + 0x30) * 0.5;
    fVar17 = fVar18;
    if (fVar21 <= fVar18) {
      fVar17 = fVar21;
    }
    fVar19 = fVar16;
    if (fVar17 <= fVar16) {
      fVar19 = fVar17;
    }
    if ((uVar6 & 1) == 0) {
      if (fVar21 + fVar21 <= *(float *)(param_1 + 0x30)) goto LAB_0025c46c;
LAB_0025c480:
      bVar7 = false;
    }
    else {
      if (*(float *)(param_1 + 0x34) < fVar21 + fVar21) goto LAB_0025c480;
LAB_0025c46c:
      bVar7 = true;
    }
    if (uVar2 != 0) {
      fVar17 = fVar10 * (float)(int)uVar6;
      fVar18 = *(float *)(param_1 + 0x28) + local_60[uVar6 * 2] * (fVar18 - fVar19);
      fVar16 = *(float *)(param_1 + 0x2c) + local_60[uVar6 * 2 + 1] * (fVar16 - fVar19);
      if (bVar7) {
        uVar8 = uVar2;
        do {
          fVar21 = fVar17 * (fVar14 / fVar15);
          fVar17 = fVar13 + fVar17;
          uVar4 = (ulong)fVar21;
          pfVar1 = (float *)(puVar3 + (uVar4 >> 0x18 & 0xff) * 0x10);
          fVar20 = pfVar1[1];
          fVar21 = (float)((uint)uVar4 & 0xffffff) * 5.9604645e-08;
          fVar19 = pfVar1[3];
          *(float *)*param_2 = fVar18 + fVar12 * (*pfVar1 + fVar21 * pfVar1[2]);
          *(float *)(*param_2 + 4) = fVar16 - fVar12 * (fVar20 + fVar21 * fVar19);
          *param_2 = *param_2 + 8;
          uVar8 = uVar8 - 1;
          *param_3 = *param_3 + 1;
        } while (uVar8 != 0);
      }
      else {
        uVar8 = 0;
        if (uVar5 != 0) goto LAB_0025c554;
        while (uVar8 = uVar8 + 1, uVar2 != uVar8) {
          while (fVar17 = fVar13 + fVar17, uVar8 < uVar5) {
LAB_0025c554:
            uVar4 = (ulong)(fVar17 * (fVar14 / fVar15));
            pfVar1 = (float *)(puVar3 + (uVar4 >> 0x18 & 0xff) * 0x10);
            fVar20 = pfVar1[1];
            fVar21 = (float)((uint)uVar4 & 0xffffff) * 5.9604645e-08;
            fVar19 = pfVar1[3];
            *(float *)*param_2 = fVar18 + fVar12 * (*pfVar1 + fVar21 * pfVar1[2]);
            *(float *)(*param_2 + 4) = fVar16 - fVar12 * (fVar20 + fVar21 * fVar19);
            *param_2 = *param_2 + 8;
            *param_3 = *param_3 + 1;
            uVar8 = uVar8 + 1;
            if (uVar2 == uVar8) goto LAB_0025c41c;
          }
        }
      }
    }
LAB_0025c41c:
    uVar6 = uVar6 + 1;
    if (uVar6 == 4) {
      uVar11 = *puVar9;
      *(int *)*param_2 = (int)uVar11;
      *(int *)(*param_2 + 4) = (int)((ulong)uVar11 >> 0x20);
      *param_2 = *param_2 + 8;
      *param_3 = *param_3 + 1;
      return;
    }
  } while( true );
}


