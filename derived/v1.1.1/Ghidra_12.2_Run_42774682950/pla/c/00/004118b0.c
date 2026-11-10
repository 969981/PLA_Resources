/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004118b0; name: FUN_004118b0
 */


undefined8 FUN_004118b0(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  long lVar13;
  int iVar14;
  
  plVar3 = param_3;
  if ((int)param_3[1] <= (int)param_2[1]) {
    plVar3 = param_2;
  }
  iVar4 = (int)plVar3[1];
  if ((int)param_3[1] <= (int)param_2[1]) {
    param_2 = param_3;
  }
  iVar6 = (int)param_2[1];
  lVar8 = FUN_0040c660(param_1,iVar4 + 1);
  uVar9 = 0;
  if (lVar8 != 0) {
    *(int *)(param_1 + 1) = iVar4;
    lVar8 = *plVar3;
    lVar13 = *param_1;
    iVar14 = iVar4 - iVar6;
    uVar7 = FUN_0040f2e0(lVar13,lVar8,*param_2,iVar6);
    puVar11 = (uint *)(lVar13 + (long)iVar6 * 4);
    if (iVar14 != 0) {
      piVar2 = (int *)(lVar8 + (long)iVar6 * 4);
      piVar12 = piVar2;
      if ((iVar4 - iVar6 & 1U) != 0) {
        piVar12 = piVar2 + 1;
        iVar5 = *piVar2;
        *puVar11 = iVar5 + uVar7;
        iVar14 = iVar14 + -1;
        uVar7 = uVar7 & iVar5 + uVar7 == 0;
        puVar11 = puVar11 + 1;
      }
      puVar10 = puVar11;
      if (iVar4 != iVar6 + 1) {
        do {
          iVar4 = *piVar12;
          *puVar10 = iVar4 + uVar7;
          uVar7 = uVar7 & iVar4 + uVar7 == 0;
          uVar1 = piVar12[1] + uVar7;
          puVar11 = puVar10 + 2;
          iVar14 = iVar14 + -2;
          piVar12 = piVar12 + 2;
          uVar7 = uVar7 & uVar1 == 0;
          puVar10[1] = uVar1;
          puVar10 = puVar11;
        } while (iVar14 != 0);
      }
    }
    *puVar11 = uVar7;
    uVar9 = 1;
    *(uint *)(param_1 + 1) = (int)param_1[1] + uVar7;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return uVar9;
}


