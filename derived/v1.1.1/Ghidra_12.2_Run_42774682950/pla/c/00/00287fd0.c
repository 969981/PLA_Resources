/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00287fd0; name: FUN_00287fd0
 */


int FUN_00287fd0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *param_2;
  fVar5 = *param_1;
  if ((0.0 <= fVar6) || (0.0 <= fVar5)) {
    bVar1 = fVar6 < fVar5;
    fVar5 = *param_3;
    if (fVar6 < 0.0) goto LAB_00287ffc;
LAB_00288060:
    bVar2 = fVar5 < fVar6;
    if (bVar1) goto LAB_0028806c;
LAB_00288010:
    iVar4 = 0;
    if (bVar2) {
      uVar3 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar3;
      fVar5 = *param_2;
      fVar7 = *param_1;
      fVar6 = (float)uVar3;
      if ((0.0 <= fVar5) || (0.0 <= fVar7)) {
        if (fVar5 < fVar7) {
LAB_002880e4:
          uVar3 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          *(undefined8 *)param_2 = uVar3;
          iVar4 = 2;
          fVar7 = *param_4;
          fVar6 = *param_3;
          goto joined_r0x00288104;
        }
      }
      else if (fVar7 < fVar5) goto LAB_002880e4;
      goto LAB_00288138;
    }
  }
  else {
    bVar1 = fVar5 < fVar6;
    fVar5 = *param_3;
    if (0.0 <= fVar6) goto LAB_00288060;
LAB_00287ffc:
    if (0.0 <= fVar5) goto LAB_00288060;
    bVar2 = fVar6 < fVar5;
    if (!bVar1) goto LAB_00288010;
LAB_0028806c:
    uVar3 = *(undefined8 *)param_1;
    fVar5 = (float)uVar3;
    if (!bVar2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar3;
      fVar6 = *param_3;
      if ((0.0 <= fVar5) || (0.0 <= fVar6)) {
        if (fVar5 <= fVar6) goto LAB_00288138;
      }
      else if (fVar6 <= fVar5) {
LAB_00288138:
        iVar4 = 1;
        fVar7 = *param_4;
        goto joined_r0x00288104;
      }
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      iVar4 = 2;
      *(undefined8 *)param_3 = uVar3;
      fVar7 = *param_4;
      fVar6 = fVar5;
      goto joined_r0x00288104;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar3;
    iVar4 = 1;
  }
  fVar7 = *param_4;
  fVar6 = fVar5;
joined_r0x00288104:
  if ((0.0 <= fVar7) || (0.0 <= fVar6)) {
    if (fVar6 <= fVar7) {
      return iVar4;
    }
  }
  else if (fVar7 <= fVar6) {
    return iVar4;
  }
  uVar3 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = uVar3;
  fVar5 = *param_3;
  fVar6 = *param_2;
  if ((0.0 <= fVar5) || (0.0 <= fVar6)) {
    if (fVar6 <= fVar5) {
      return iVar4 + 1;
    }
  }
  else if (fVar5 <= fVar6) {
    return iVar4 + 1;
  }
  uVar3 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = uVar3;
  fVar5 = *param_2;
  fVar6 = *param_1;
  if ((0.0 <= fVar5) || (0.0 <= fVar6)) {
    if (fVar6 <= fVar5) {
      return iVar4 + 2;
    }
  }
  else if (fVar5 <= fVar6) {
    return iVar4 + 2;
  }
  uVar3 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = uVar3;
  return iVar4 + 3;
}


