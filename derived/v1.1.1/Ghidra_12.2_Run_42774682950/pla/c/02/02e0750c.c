/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0750c; name: FUN_02e0750c
 */


/* WARNING: Removing unreachable block (ram,0x02e07564) */

undefined8 FUN_02e0750c(uint *param_1,float *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  
  pfVar3 = *(float **)(param_1 + 4);
  if (param_2 == (float *)0x0) {
    return 0;
  }
  uVar7 = param_1[6];
  if (*param_1 - param_1[3] < uVar7) {
    return 0;
  }
  uVar1 = *param_1 - param_1[1];
  uVar2 = uVar7;
  if (uVar1 <= uVar7) {
    uVar2 = uVar1;
  }
  if (uVar2 == 0) goto LAB_02e075c0;
  pfVar4 = pfVar3 + param_1[1];
  if (uVar2 == 1) {
    pfVar8 = param_2;
LAB_02e075ac:
    *pfVar4 = *pfVar4 + *pfVar8;
  }
  else {
    iVar6 = uVar2 - (uVar2 & 1);
    pfVar5 = pfVar4;
    pfVar9 = param_2;
    do {
      pfVar8 = pfVar9 + 2;
      pfVar4 = pfVar5 + 2;
      *pfVar5 = *pfVar5 + *pfVar9;
      iVar6 = iVar6 + -2;
      pfVar5[1] = pfVar5[1] + pfVar9[1];
      pfVar5 = pfVar4;
      pfVar9 = pfVar8;
    } while (iVar6 != 0);
    if ((uVar2 & 1) != 0) goto LAB_02e075ac;
  }
  uVar7 = param_1[6];
LAB_02e075c0:
  if (uVar7 - uVar2 != 0) {
    param_2 = param_2 + uVar2;
    uVar1 = uVar7 - uVar2 & 1;
    if (uVar7 != uVar2 + 1) {
      iVar6 = (uVar2 + uVar1) - uVar7;
      pfVar4 = pfVar3;
      pfVar5 = param_2;
      do {
        param_2 = pfVar5 + 2;
        pfVar3 = pfVar4 + 2;
        *pfVar4 = *pfVar4 + *pfVar5;
        iVar6 = iVar6 + 2;
        pfVar4[1] = pfVar4[1] + pfVar5[1];
        pfVar4 = pfVar3;
        pfVar5 = param_2;
      } while (iVar6 != 0);
    }
    if (uVar1 != 0) {
      *pfVar3 = *pfVar3 + *param_2;
    }
  }
  uVar7 = *param_1;
  uVar2 = 0;
  if (uVar7 != 0) {
    uVar2 = (param_1[1] + param_3) / uVar7;
  }
  param_1[1] = (param_1[1] + param_3) - uVar2 * uVar7;
  param_1[3] = param_1[3] + param_3;
  return 1;
}


