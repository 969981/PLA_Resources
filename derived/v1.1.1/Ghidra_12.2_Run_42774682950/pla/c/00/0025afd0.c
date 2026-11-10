/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025afd0; name: FUN_0025afd0
 */


int FUN_0025afd0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,long *param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  
  fVar5 = (float)*param_5;
  if (param_7 < 2) {
LAB_0025b004:
    *(float *)*param_6 = fVar5;
    *(int *)(*param_6 + 4) = (int)((ulong)*param_5 >> 0x20);
    *param_6 = *param_6 + 8;
    iVar2 = 1;
  }
  else {
    fVar13 = (float)*param_2;
    fVar12 = fVar5 - fVar13;
    fVar6 = (float)((ulong)*param_5 >> 0x20);
    fVar7 = (float)((ulong)*param_2 >> 0x20);
    fVar14 = fVar6 - fVar7;
    fVar9 = (float)*param_3;
    fVar16 = (float)((ulong)*param_3 >> 0x20);
    uVar10 = CONCAT44(fVar16 - fVar7,fVar9 - fVar13);
    fVar3 = fVar12 * (fVar9 - fVar13) + fVar14 * (fVar16 - fVar7);
    fVar4 = fVar12 * fVar12 + fVar14 * fVar14;
    fVar17 = (float)((ulong)DAT_0388a6a8 >> 0x20);
    if (fVar3 <= 0.0) {
LAB_0025b064:
      fVar3 = (float)((ulong)uVar10 >> 0x20);
      fVar3 = (float)uVar10 * (float)uVar10 + fVar3 * fVar3;
      uVar10 = *param_4;
    }
    else {
      if (fVar4 < fVar3) {
        uVar10 = CONCAT44(fVar6 - fVar16,fVar5 - fVar9);
        goto LAB_0025b064;
      }
      uVar10 = NEON_rev64(uVar10,4);
      fVar3 = fVar12 * (float)uVar10 * (float)DAT_0388a6a8 +
              fVar14 * (float)((ulong)uVar10 >> 0x20) * fVar17;
      fVar3 = (fVar3 * fVar3) / fVar4;
      uVar10 = *param_4;
    }
    fVar8 = (float)uVar10;
    fVar11 = (float)((ulong)uVar10 >> 0x20);
    if (fVar3 < (float)param_1) {
      fVar15 = fVar8 - fVar13;
      fVar18 = fVar11 - fVar7;
      fVar3 = fVar12 * fVar15 + fVar14 * fVar18;
      if (0.0 < fVar3) {
        if (fVar3 <= fVar4) {
          uVar10 = NEON_rev64(CONCAT44(fVar18,fVar15),4);
          fVar3 = fVar12 * (float)uVar10 * (float)DAT_0388a6a8 +
                  fVar14 * (float)((ulong)uVar10 >> 0x20) * fVar17;
          fVar4 = (fVar3 * fVar3) / fVar4;
        }
        else {
          fVar4 = (fVar5 - fVar8) * (fVar5 - fVar8) + (fVar6 - fVar11) * (fVar6 - fVar11);
        }
      }
      else {
        fVar4 = fVar15 * fVar15 + fVar18 * fVar18;
      }
      if (fVar4 < (float)param_1) goto LAB_0025b004;
    }
    fVar13 = (fVar13 + fVar9) * 0.5;
    fVar4 = (fVar9 + fVar8) * 0.5;
    fVar9 = (fVar5 + fVar8) * 0.5;
    fVar3 = (fVar7 + fVar16) * 0.5;
    fVar16 = (fVar16 + fVar11) * 0.5;
    fVar5 = (fVar6 + fVar11) * 0.5;
    local_68 = CONCAT44(fVar3,fVar13);
    uStack_60 = CONCAT44(fVar16,fVar4);
    fVar6 = (fVar3 + fVar16) * 0.5;
    local_58 = CONCAT44(fVar5,fVar9);
    fVar3 = (fVar13 + fVar4) * 0.5;
    fVar4 = (fVar4 + fVar9) * 0.5;
    fVar5 = (fVar16 + fVar5) * 0.5;
    local_78 = CONCAT44(fVar6,fVar3);
    uStack_70 = CONCAT44(fVar5,fVar4);
    local_48 = CONCAT44((fVar6 + fVar5) * 0.5,(fVar3 + fVar4) * 0.5);
    iVar1 = FUN_0025afd0(param_1,param_2,&local_68,&local_78,&local_48,param_6,param_7 >> 1);
    iVar2 = FUN_0025afd0(param_1,&local_48,&uStack_70,&local_58,param_5,param_6,param_7 >> 1);
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}


