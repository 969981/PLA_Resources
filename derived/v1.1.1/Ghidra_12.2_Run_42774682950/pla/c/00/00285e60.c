/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00285e60; name: FUN_00285e60
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_00285e60(float *param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *param_2;
  if (fVar7 <= *param_1) {
    if (*param_1 <= fVar7) {
      bVar1 = (int)param_2[1] < (int)param_1[1];
      fVar6 = *param_3;
      goto joined_r0x0028601c;
    }
    bVar1 = true;
    fVar6 = *param_3;
    if (fVar6 <= fVar7) goto LAB_00285f64;
LAB_00285e80:
    bVar4 = false;
joined_r0x00285e84:
    if (bVar1) goto LAB_00285e88;
LAB_00285f70:
    iVar5 = 0;
    if (!bVar4) {
LAB_00285f9c:
      bVar1 = *param_4 < fVar6;
      if (fVar6 < *param_4) {
        return iVar5;
      }
      goto LAB_00285eb0;
    }
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar3;
    fVar6 = (float)uVar3;
    if (*param_1 < *param_2) {
      iVar5 = 1;
      goto LAB_00285f9c;
    }
    if ((*param_2 < *param_1) || ((int)param_2[1] < (int)param_1[1])) {
      uVar3 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar3;
      iVar5 = 2;
      bVar1 = *param_4 < *param_3;
      if (*param_3 < *param_4) {
        return 2;
      }
      goto LAB_00285eb0;
    }
  }
  else {
    bVar1 = false;
    fVar6 = *param_3;
joined_r0x0028601c:
    if (fVar7 < fVar6) goto LAB_00285e80;
LAB_00285f64:
    if (fVar6 < fVar7) {
      bVar4 = true;
      goto joined_r0x00285e84;
    }
    bVar4 = (int)param_3[1] < (int)param_2[1];
    if (!bVar1) goto LAB_00285f70;
LAB_00285e88:
    uVar3 = *(undefined8 *)param_1;
    fVar7 = (float)uVar3;
    if (bVar4) {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar3;
      iVar5 = 1;
      bVar1 = *param_4 < fVar7;
      if (*param_4 != fVar7 && !bVar1) {
        return 1;
      }
      goto LAB_00285eb0;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar3;
    fVar6 = *param_3;
    if ((fVar6 <= fVar7) && ((fVar6 < fVar7 || ((int)param_3[1] < (int)((ulong)uVar3 >> 0x20))))) {
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      iVar5 = 2;
      *(undefined8 *)param_3 = uVar3;
      bVar1 = *param_4 < fVar7;
      if (fVar7 < *param_4) {
        return 2;
      }
      goto LAB_00285eb0;
    }
  }
  iVar5 = 1;
  bVar1 = *param_4 < fVar6;
  if (fVar6 < *param_4) {
    return 1;
  }
LAB_00285eb0:
  if ((!bVar1) && ((int)param_3[1] <= (int)param_4[1])) {
    return iVar5;
  }
  uVar3 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = uVar3;
  iVar2 = iVar5 + 1;
  if ((*param_3 <= *param_2) && ((*param_3 < *param_2 || ((int)param_3[1] < (int)param_2[1])))) {
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar3;
    iVar2 = iVar5 + 2;
    if ((*param_2 <= *param_1) && ((*param_2 < *param_1 || ((int)param_2[1] < (int)param_1[1])))) {
      uVar3 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar3;
      iVar2 = iVar5 + 3;
    }
  }
  return iVar2;
}


