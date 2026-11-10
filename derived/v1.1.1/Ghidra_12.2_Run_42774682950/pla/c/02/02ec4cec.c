/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec4cec; name: FUN_02ec4cec
 */


void FUN_02ec4cec(long param_1,uint param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_3 + 8) = 0xffffffff;
    *(undefined4 *)(param_3 + 0x10) = 0;
    uVar5 = *(uint *)(param_1 + 0xc);
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((uVar1 < uVar5) && (uVar5 < *(uint *)(param_1 + 0x1c))) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar5 / uVar1;
      }
      uVar5 = uVar5 - uVar2 * uVar1;
    }
    dVar9 = (double)NEON_ucvtf((ulong)DAT_042ab258);
    fVar7 = (float)((double)(int)uVar1 / dVar9);
    if (uVar5 < *(uint *)(param_1 + 8)) {
      fVar7 = (float)NEON_fminnm((float)((double)(int)uVar5 / dVar9),fVar7);
      if (param_2 == 0) {
        fVar8 = 0.0;
      }
      else {
        puVar4 = param_4;
        do {
          puVar3 = puVar4 + 2;
          puVar4[1] = CONCAT44(fVar7,fVar7);
          *puVar4 = CONCAT44(fVar7,fVar7);
          puVar4 = puVar3;
        } while (puVar3 < (undefined8 *)((long)param_4 + (ulong)param_2 * 4));
        fVar8 = *(float *)(param_3 + 0x10);
      }
      if (fVar8 <= fVar7) {
        fVar8 = fVar7;
      }
      *(float *)(param_3 + 0xc) = fVar7;
      *(float *)(param_3 + 0x10) = fVar8;
      return;
    }
    if (param_2 == 0) {
      fVar8 = 0.0;
    }
    else {
      puVar4 = param_4;
      do {
        puVar3 = puVar4 + 2;
        puVar4[1] = CONCAT44(fVar7,fVar7);
        *puVar4 = CONCAT44(fVar7,fVar7);
        puVar4 = puVar3;
      } while (puVar3 < (undefined8 *)((long)param_4 + (ulong)param_2 * 4));
      fVar8 = *(float *)(param_3 + 0x10);
    }
    if (fVar8 <= fVar7) {
      fVar8 = fVar7;
    }
    *(undefined4 *)(param_3 + 8) = 3;
    *(float *)(param_3 + 0xc) = fVar7;
    *(float *)(param_3 + 0x10) = fVar8;
    return;
  }
  *(undefined4 *)(param_3 + 8) = 0xffffffff;
  *(undefined4 *)(param_3 + 0x10) = 0;
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((uVar1 < uVar5) && (uVar5 < *(uint *)(param_1 + 0x1c))) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar5 / uVar1;
    }
    uVar5 = uVar5 - uVar2 * uVar1;
  }
  dVar9 = (double)NEON_ucvtf((ulong)DAT_042ab258);
  fVar7 = (float)((double)(int)uVar1 / dVar9);
  if (uVar5 < *(uint *)(param_1 + 8)) {
    uVar6 = NEON_fminnm((float)((double)(int)uVar5 / dVar9),fVar7);
    *(undefined4 *)(param_3 + 0xc) = uVar6;
    *(undefined4 *)(param_3 + 0x10) = uVar6;
    return;
  }
  *(undefined4 *)(param_3 + 8) = 3;
  *(float *)(param_3 + 0xc) = fVar7;
  *(float *)(param_3 + 0x10) = fVar7;
  return;
}


