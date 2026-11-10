/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00286ee0; name: FUN_00286ee0
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_00286ee0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = *param_2;
  if (*param_1 <= fVar8) {
    if (fVar8 <= *param_1) {
      uVar1 = (int)param_2[1] < (int)param_1[1];
      fVar7 = *param_3;
      bVar5 = NAN(fVar7) || NAN(fVar8);
      goto joined_r0x0028709c;
    }
    uVar1 = true;
    fVar7 = *param_3;
    bVar5 = NAN(fVar7) || NAN(fVar8);
    if (fVar8 <= fVar7) goto LAB_00286fe4;
LAB_00286f00:
    bVar5 = false;
joined_r0x00286f04:
    if ((bool)uVar1) goto LAB_00286f08;
LAB_00286ff0:
    iVar6 = 0;
    if (!bVar5) {
LAB_0028701c:
      fVar8 = *param_4;
      bVar5 = NAN(fVar8) || NAN(fVar7);
      bVar2 = fVar8 == fVar7;
      if (fVar8 < fVar7) {
        return iVar6;
      }
      goto LAB_00286f30;
    }
    uVar4 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar4;
    fVar7 = (float)uVar4;
    if (*param_2 < *param_1) {
      iVar6 = 1;
      goto LAB_0028701c;
    }
    if ((*param_1 < *param_2) || ((int)param_2[1] < (int)param_1[1])) {
      uVar4 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar4;
      fVar8 = *param_3;
      iVar6 = 2;
      fVar7 = *param_4;
      bVar5 = NAN(fVar7) || NAN(fVar8);
      bVar2 = fVar7 == fVar8;
      if (fVar7 < fVar8) {
        return 2;
      }
      goto LAB_00286f30;
    }
LAB_002870f8:
    iVar6 = 1;
    fVar8 = *param_4;
    bVar5 = NAN(fVar8) || NAN(fVar7);
    bVar2 = fVar8 == fVar7;
    if (fVar8 < fVar7) {
      return 1;
    }
  }
  else {
    uVar1 = false;
    fVar7 = *param_3;
    bVar5 = NAN(fVar7) || NAN(fVar8);
joined_r0x0028709c:
    if (fVar7 < fVar8) goto LAB_00286f00;
LAB_00286fe4:
    if (fVar7 != fVar8 && !bVar5) {
      bVar5 = true;
      goto joined_r0x00286f04;
    }
    bVar5 = (int)param_3[1] < (int)param_2[1];
    if (!(bool)uVar1) goto LAB_00286ff0;
LAB_00286f08:
    uVar4 = *(undefined8 *)param_1;
    fVar8 = (float)uVar4;
    if (bVar5) {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar4;
      iVar6 = 1;
      fVar7 = *param_4;
      bVar5 = NAN(fVar7) || NAN(fVar8);
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar4;
      fVar7 = *param_3;
      if ((fVar7 < fVar8) || ((fVar7 == fVar8 && ((int)((ulong)uVar4 >> 0x20) <= (int)param_3[1]))))
      goto LAB_002870f8;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      iVar6 = 2;
      *(undefined8 *)param_3 = uVar4;
      fVar7 = *param_4;
      bVar5 = NAN(fVar7) || NAN(fVar8);
    }
    bVar2 = fVar7 == fVar8;
    if (fVar7 < fVar8) {
      return iVar6;
    }
  }
LAB_00286f30:
  if ((bVar2 || bVar5) && ((int)param_3[1] <= (int)param_4[1])) {
    return iVar6;
  }
  uVar4 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = uVar4;
  iVar3 = iVar6 + 1;
  if ((*param_2 <= *param_3) && ((*param_3 != *param_2 || ((int)param_3[1] < (int)param_2[1])))) {
    uVar4 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar4;
    iVar3 = iVar6 + 2;
    if ((*param_1 <= *param_2) && ((*param_2 != *param_1 || ((int)param_2[1] < (int)param_1[1])))) {
      uVar4 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar4;
      iVar3 = iVar6 + 3;
    }
  }
  return iVar3;
}


