/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00275420; name: FUN_00275420
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00275420(float param_1,undefined8 *param_2,long param_3,long param_4,int param_5,
                 float *param_6)

{
  float *pfVar1;
  char *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_84;
  
  fVar16 = *(float *)(param_3 + 0x4c);
  pcVar2 = *(char **)(*(long *)(param_3 + 0x238) + 0x248);
  iVar12 = *(int *)(pcVar2 + 0x10);
  if ((pcVar2[2] != '\0') &&
     (fVar7 = *(float *)(*(long *)(*(long *)(param_3 + 0x238) + 0x18) + 0x70),
     fVar7 = fVar7 + (1.0 - fVar16) * (1.0 - fVar7), fVar7 != 1.0)) {
    fVar3 = powf(fVar7,param_1);
    param_1 = (1.0 - fVar3) / (1.0 - fVar7);
  }
  fVar7 = (float)iVar12;
  if (*pcVar2 == '\0') {
    pfVar1 = (float *)(*(long *)(param_4 + 0x20) + (long)param_5 * 0x10);
    fVar10 = pfVar1[1];
    fVar11 = pfVar1[2];
    fVar13 = param_1 + *pfVar1 * fVar7;
    fVar3 = DAT_0438f0f8 / (float)*(int *)(pcVar2 + 0x10);
    if (pcVar2[1] == '\0') {
      fVar16 = fVar16 * fVar3;
      local_84 = (float)FUN_00275f20(fVar13 * fVar3,fVar13 * fVar3 + fVar16);
      fVar10 = (param_1 + fVar10 * fVar7) * fVar3;
      fVar10 = (float)FUN_00275f20(fVar10,fVar10 + fVar16);
      fVar3 = (param_1 + fVar11 * fVar7) * fVar3;
      fVar16 = (float)FUN_00275f20(fVar3,fVar3 + fVar16);
    }
    else {
      local_84 = (float)FUN_00275a00(fVar16 + fVar13,fVar3,pcVar2);
      fVar13 = (float)FUN_00275a00(fVar13,fVar3,pcVar2);
      local_84 = local_84 - fVar13;
      fVar13 = param_1 + fVar10 * fVar7;
      fVar10 = (float)FUN_00275a00(fVar16 + fVar13,fVar3,pcVar2);
      fVar13 = (float)FUN_00275a00(fVar13,fVar3,pcVar2);
      fVar10 = fVar10 - fVar13;
      param_1 = param_1 + fVar11 * fVar7;
      fVar16 = (float)FUN_00275a00(fVar16 + param_1,fVar3,pcVar2);
      fVar7 = (float)FUN_00275a00(param_1,fVar3,pcVar2);
      fVar16 = fVar16 - fVar7;
    }
  }
  else {
    fVar3 = (*(float *)(pcVar2 + 0x14) / 100.0) * fVar7;
    fVar10 = (*(float *)(pcVar2 + 0x18) / 100.0) * fVar7;
    pfVar1 = (float *)(*(long *)(param_4 + 0x20) + (long)param_5 * 0x10);
    fVar11 = fVar3 * *(float *)(param_3 + 0x44) - fVar10;
    fVar10 = fVar10 + fVar10;
    fVar14 = (float)_DAT_03889a90 * fVar7 + fVar11 + fVar10 * *pfVar1;
    fVar3 = fVar16 * fVar3;
    fVar13 = (float)((ulong)_DAT_03889a90 >> 0x20) * fVar7 + fVar11 + fVar10 * pfVar1[1];
    fVar7 = (float)_UNK_03889a98 * fVar7 + fVar11 + fVar10 * pfVar1[2];
    fVar11 = DAT_0438f0f8 / (float)*(int *)(pcVar2 + 0x10);
    fVar10 = param_1 + fVar14;
    if (pcVar2[1] == '\0') {
      fVar10 = fVar10 * fVar11;
      fVar16 = fVar16 * fVar11;
      fVar3 = fVar3 * fVar11;
      fVar14 = fVar14 * fVar11;
      fVar15 = fVar14 + fVar3;
      fVar17 = fVar3 + fVar10 + fVar16;
      fVar4 = (float)FUN_00275ca0(fVar10,fVar17,fVar14,fVar15,0x3fd55555,0x40800000);
      fVar5 = (float)FUN_00275ca0(fVar10,fVar17,fVar14,fVar15,0x40186186,0x40400000);
      fVar6 = (float)FUN_00275ca0(fVar10,fVar17,fVar14,fVar15,0x40186186,0x40000000);
      local_84 = (float)FUN_00275ca0(fVar10,fVar17,fVar14,fVar15,0x40186186,0x3fc00000);
      local_84 = fVar4 + fVar5 + fVar6 + local_84;
      fVar5 = fVar13 * fVar11;
      fVar10 = (param_1 + fVar13) * fVar11;
      fVar6 = fVar3 + fVar10 + fVar16;
      fVar15 = fVar5 + fVar3;
      fVar13 = (float)FUN_00275ca0(fVar10,fVar6,fVar5,fVar15,0x3fd55555,0x40800000);
      fVar14 = (float)FUN_00275ca0(fVar10,fVar6,fVar5,fVar15,0x40186186,0x40400000);
      fVar4 = (float)FUN_00275ca0(fVar10,fVar6,fVar5,fVar15,0x40186186,0x40000000);
      fVar10 = (float)FUN_00275ca0(fVar10,fVar6,fVar5,fVar15,0x40186186,0x3fc00000);
      fVar10 = fVar13 + fVar14 + fVar4 + fVar10;
      fVar4 = (param_1 + fVar7) * fVar11;
      fVar7 = fVar7 * fVar11;
      fVar5 = fVar7 + fVar3;
      fVar3 = fVar3 + fVar4 + fVar16;
      fVar11 = (float)FUN_00275ca0(fVar4,fVar3,fVar7,fVar5,0x3fd55555,0x40800000);
      fVar13 = (float)FUN_00275ca0(fVar4,fVar3,fVar7,fVar5,0x40186186,0x40400000);
      fVar14 = (float)FUN_00275ca0(fVar4,fVar3,fVar7,fVar5,0x40186186,0x40000000);
      fVar16 = (float)FUN_00275ca0(fVar4,fVar3,fVar7,fVar5,0x40186186,0x3fc00000);
      fVar16 = fVar11 + fVar13 + fVar14 + fVar16;
    }
    else {
      fVar4 = (float)FUN_00275a00(fVar3 + fVar16 + fVar10,fVar11,pcVar2);
      fVar10 = (float)FUN_00275a00(fVar10,fVar11,pcVar2);
      fVar5 = (float)FUN_00275a00(fVar3 + fVar14,fVar11,pcVar2);
      fVar14 = (float)FUN_00275a00(fVar14,fVar11,pcVar2);
      local_84 = (fVar4 - fVar10) - (fVar5 - fVar14);
      fVar10 = (float)FUN_00275a00(fVar3 + fVar16 + param_1 + fVar13,fVar11,pcVar2);
      fVar14 = (float)FUN_00275a00(param_1 + fVar13,fVar11,pcVar2);
      fVar4 = (float)FUN_00275a00(fVar3 + fVar13,fVar11,pcVar2);
      fVar13 = (float)FUN_00275a00(fVar13,fVar11,pcVar2);
      fVar10 = (fVar10 - fVar14) - (fVar4 - fVar13);
      fVar16 = (float)FUN_00275a00(fVar3 + fVar16 + param_1 + fVar7,fVar11,pcVar2);
      fVar13 = (float)FUN_00275a00(param_1 + fVar7,fVar11,pcVar2);
      fVar3 = (float)FUN_00275a00(fVar3 + fVar7,fVar11,pcVar2);
      fVar7 = (float)FUN_00275a00(fVar7,fVar11,pcVar2);
      fVar16 = (fVar16 - fVar13) - (fVar3 - fVar7);
    }
  }
  uVar9 = param_2[1];
  fVar7 = (float)((ulong)*param_2 >> 0x20);
  fVar3 = (float)*param_2 + local_84 * *param_6;
  param_2[1] = uVar9;
  *param_2 = CONCAT44(fVar7,fVar3);
  uVar8 = CONCAT44(fVar7 + fVar10 * param_6[1],fVar3);
  param_2[1] = uVar9;
  *param_2 = uVar8;
  param_2[1] = (ulong)(uint)((float)uVar9 + fVar16 * param_6[2]);
  *param_2 = uVar8;
  return;
}


