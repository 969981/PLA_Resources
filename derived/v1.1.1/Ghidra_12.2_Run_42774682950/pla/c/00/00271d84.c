/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00271d84; name: FUN_00271d84
 */


void FUN_00271d84(float param_1,undefined8 param_2,undefined8 *param_3,long param_4,long param_5,
                 ulong param_6)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  long lVar5;
  float *pfVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar2 = *(int *)(param_5 + 0xc) + -1;
  if (iVar2 != 0) {
    if (*(int *)(param_5 + 0xc) == 0) {
      *(undefined4 *)(param_3 + 1) = 0;
      *param_3 = 0;
      return;
    }
    if (*(int *)(param_5 + 4) == 0) {
      piVar7 = (int *)(*(long *)(param_4 + 0xa0) + 0x8b8);
    }
    else {
      piVar7 = (int *)(param_5 + 0x10);
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_5 + 8));
      param_1 = fmodf(*(float *)(*(long *)(param_4 + 0x1f0) +
                                (-(param_6 >> 0x1f & 1) & 0xfffffff000000000 |
                                (param_6 & 0xffffffff) << 4)) * fVar9 * (float)*piVar7 + param_1,
                      (float)*piVar7);
    }
    param_1 = param_1 / (float)*piVar7;
    if (*(float *)(param_5 + (long)iVar2 * 0x10 + 0x20) <= param_1) {
      param_5 = param_5 + (long)iVar2 * 0x10;
      *(undefined4 *)param_3 = *(undefined4 *)(param_5 + 0x14);
      *(undefined4 *)((long)param_3 + 4) = *(undefined4 *)(param_5 + 0x18);
      uVar4 = *(undefined4 *)(param_5 + 0x1c);
      goto LAB_00271e64;
    }
    if (*(float *)(param_5 + 0x20) <= param_1) {
      lVar5 = -1;
      pfVar3 = (float *)(param_5 + 0x1c);
      fVar9 = *(float *)(param_5 + 0x20);
      do {
        fVar8 = fVar9;
        pfVar6 = pfVar3;
        lVar5 = lVar5 + 1;
        if (*(int *)(param_5 + 0xc) <= lVar5) {
          *param_3 = 0;
          *(undefined4 *)(param_3 + 1) = 0;
          return;
        }
        fVar9 = pfVar6[5];
        pfVar3 = pfVar6 + 4;
      } while ((param_1 < fVar8) || (fVar9 <= param_1));
      fVar1 = *pfVar6;
      fVar8 = (param_1 - fVar8) / (fVar9 - fVar8);
      fVar9 = *pfVar3;
      fVar10 = (float)*(undefined8 *)(pfVar6 + -2);
      fVar11 = (float)((ulong)*(undefined8 *)(pfVar6 + -2) >> 0x20);
      *param_3 = CONCAT44(fVar11 + ((float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) - fVar11) *
                                   fVar8,
                          fVar10 + ((float)*(undefined8 *)(pfVar6 + 2) - fVar10) * fVar8);
      *(float *)(param_3 + 1) = fVar1 + (fVar9 - fVar1) * fVar8;
      return;
    }
  }
  *(undefined4 *)param_3 = *(undefined4 *)(param_5 + 0x14);
  *(undefined4 *)((long)param_3 + 4) = *(undefined4 *)(param_5 + 0x18);
  uVar4 = *(undefined4 *)(param_5 + 0x1c);
LAB_00271e64:
  *(undefined4 *)(param_3 + 1) = uVar4;
  return;
}


