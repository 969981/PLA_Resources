/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00411730; name: FUN_00411730
 */


undefined8 FUN_00411730(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  
  iVar8 = (int)param_2[2];
  if (iVar8 == (int)param_3[2]) {
    plVar3 = param_3;
    if ((int)param_3[1] <= (int)param_2[1]) {
      plVar3 = param_2;
      param_2 = param_3;
    }
    iVar4 = (int)plVar3[1];
    iVar6 = (int)param_2[1];
    lVar9 = FUN_0040c660(param_1,iVar4 + 1);
    uVar10 = 0;
    if (lVar9 == 0) goto LAB_00411880;
    *(int *)(param_1 + 1) = iVar4;
    lVar9 = *plVar3;
    lVar14 = *param_1;
    iVar15 = iVar4 - iVar6;
    uVar7 = FUN_0040f2e0(lVar14,lVar9,*param_2,iVar6);
    puVar12 = (uint *)(lVar14 + (long)iVar6 * 4);
    if (iVar15 != 0) {
      piVar2 = (int *)(lVar9 + (long)iVar6 * 4);
      piVar13 = piVar2;
      if ((iVar4 - iVar6 & 1U) != 0) {
        piVar13 = piVar2 + 1;
        iVar5 = *piVar2;
        *puVar12 = iVar5 + uVar7;
        iVar15 = iVar15 + -1;
        uVar7 = uVar7 & iVar5 + uVar7 == 0;
        puVar12 = puVar12 + 1;
      }
      puVar11 = puVar12;
      if (iVar4 != iVar6 + 1) {
        do {
          iVar4 = *piVar13;
          *puVar11 = iVar4 + uVar7;
          uVar7 = uVar7 & iVar4 + uVar7 == 0;
          uVar1 = piVar13[1] + uVar7;
          puVar12 = puVar11 + 2;
          iVar15 = iVar15 + -2;
          piVar13 = piVar13 + 2;
          uVar7 = uVar7 & uVar1 == 0;
          puVar11[1] = uVar1;
          puVar11 = puVar12;
        } while (iVar15 != 0);
      }
    }
    *puVar12 = uVar7;
    *(uint *)(param_1 + 1) = (int)param_1[1] + uVar7;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    iVar8 = FUN_0040cc00(param_2,param_3);
    if (0 < iVar8) {
      iVar8 = (int)param_2[2];
      uVar10 = FUN_004119c0(param_1,param_2,param_3);
      goto LAB_00411880;
    }
    if (iVar8 < 0) {
      iVar8 = (int)param_3[2];
      uVar10 = FUN_004119c0(param_1,param_3,param_2);
      goto LAB_00411880;
    }
    FUN_0040c6b0(param_1,0);
    iVar8 = 0;
  }
  uVar10 = 1;
LAB_00411880:
  *(int *)(param_1 + 2) = iVar8;
  return uVar10;
}


