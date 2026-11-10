/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00411b00; name: FUN_00411b00
 */


undefined8 FUN_00411b00(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  
  uVar14 = *(uint *)(param_2 + 2);
  if (uVar14 == *(uint *)(param_3 + 2)) {
    iVar6 = FUN_0040cc00(param_2,param_3);
    if (0 < iVar6) {
      uVar14 = *(uint *)(param_2 + 2);
      uVar8 = FUN_004119c0(param_1,param_2,param_3);
      goto LAB_00411c50;
    }
    if (iVar6 < 0) {
      uVar14 = (uint)((int)param_3[2] == 0);
      uVar8 = FUN_004119c0(param_1,param_3,param_2);
      goto LAB_00411c50;
    }
    FUN_0040c6b0(param_1,0);
    uVar14 = 0;
  }
  else {
    plVar3 = param_3;
    if ((int)param_3[1] <= (int)param_2[1]) {
      plVar3 = param_2;
      param_2 = param_3;
    }
    iVar6 = (int)plVar3[1];
    iVar5 = (int)param_2[1];
    lVar9 = FUN_0040c660(param_1,iVar6 + 1);
    uVar8 = 0;
    if (lVar9 == 0) goto LAB_00411c50;
    *(int *)(param_1 + 1) = iVar6;
    lVar9 = *plVar3;
    lVar13 = *param_1;
    iVar15 = iVar6 - iVar5;
    uVar7 = FUN_0040f2e0(lVar13,lVar9,*param_2,iVar5);
    puVar11 = (uint *)(lVar13 + (long)iVar5 * 4);
    if (iVar15 != 0) {
      piVar2 = (int *)(lVar9 + (long)iVar5 * 4);
      piVar12 = piVar2;
      if ((iVar6 - iVar5 & 1U) != 0) {
        piVar12 = piVar2 + 1;
        iVar4 = *piVar2;
        *puVar11 = iVar4 + uVar7;
        iVar15 = iVar15 + -1;
        uVar7 = uVar7 & iVar4 + uVar7 == 0;
        puVar11 = puVar11 + 1;
      }
      puVar10 = puVar11;
      if (iVar6 != iVar5 + 1) {
        do {
          iVar6 = *piVar12;
          *puVar10 = iVar6 + uVar7;
          uVar7 = uVar7 & iVar6 + uVar7 == 0;
          uVar1 = piVar12[1] + uVar7;
          puVar11 = puVar10 + 2;
          iVar15 = iVar15 + -2;
          piVar12 = piVar12 + 2;
          uVar7 = uVar7 & uVar1 == 0;
          puVar10[1] = uVar1;
          puVar10 = puVar11;
        } while (iVar15 != 0);
      }
    }
    *puVar11 = uVar7;
    *(uint *)(param_1 + 1) = (int)param_1[1] + uVar7;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  uVar8 = 1;
LAB_00411c50:
  *(uint *)(param_1 + 2) = uVar14;
  return uVar8;
}


