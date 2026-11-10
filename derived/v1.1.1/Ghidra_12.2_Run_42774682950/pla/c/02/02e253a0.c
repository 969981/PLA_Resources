/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e253a0; name: FUN_02e253a0
 */


void FUN_02e253a0(uint *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (*(long *)(param_1 + 2) != 0) {
    uVar6 = param_1[4];
    uVar7 = (ulong)uVar6;
    puVar5 = (undefined8 *)(*(long *)(param_1 + 2) + uVar7 * 4);
    uVar8 = *param_1;
    uVar3 = uVar8 - uVar6;
    uVar2 = param_3 >> 2;
    if (param_3 < uVar3) {
      if (uVar2 != 0) {
        uVar6 = param_3 >> 2 & 1;
        if (uVar2 != 1) {
          iVar4 = uVar6 - uVar2;
          do {
            uVar11 = *param_2;
            iVar4 = iVar4 + 2;
            uVar13 = puVar5[1];
            uVar12 = *puVar5;
            puVar5[1] = param_2[1];
            *puVar5 = uVar11;
            param_2[1] = uVar13;
            *param_2 = uVar12;
            uVar11 = param_2[2];
            uVar13 = puVar5[3];
            uVar12 = puVar5[2];
            puVar5[3] = param_2[3];
            puVar5[2] = uVar11;
            param_2[3] = uVar13;
            param_2[2] = uVar12;
            puVar5 = puVar5 + 4;
            param_2 = param_2 + 4;
          } while (iVar4 != 0);
        }
        if (uVar6 != 0) {
          uVar11 = *param_2;
          uVar13 = puVar5[1];
          uVar12 = *puVar5;
          puVar5[1] = param_2[1];
          *puVar5 = uVar11;
          param_2[1] = uVar13;
          *param_2 = uVar12;
        }
        uVar6 = param_1[4];
      }
      param_1[4] = uVar6 + param_3;
      return;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - uVar1) {
      uVar6 = (uint)uVar7;
      uVar1 = uVar2;
      if (uVar3 >> 2 <= uVar2) {
        uVar1 = uVar3 >> 2;
      }
      if (uVar1 != 0) {
        uVar6 = uVar1 & 3;
        uVar8 = uVar1;
        if (uVar6 != 0) {
          puVar9 = puVar5;
          puVar10 = param_2;
          do {
            param_2 = puVar10 + 2;
            uVar11 = *puVar10;
            uVar8 = uVar8 - 1;
            puVar5 = puVar9 + 2;
            uVar13 = puVar9[1];
            uVar12 = *puVar9;
            uVar6 = uVar6 - 1;
            puVar9[1] = puVar10[1];
            *puVar9 = uVar11;
            puVar10[1] = uVar13;
            *puVar10 = uVar12;
            puVar9 = puVar5;
            puVar10 = param_2;
          } while (uVar6 != 0);
        }
        if (2 < uVar1 - 1) {
          do {
            uVar11 = *param_2;
            uVar8 = uVar8 - 4;
            uVar13 = puVar5[1];
            uVar12 = *puVar5;
            puVar5[1] = param_2[1];
            *puVar5 = uVar11;
            param_2[1] = uVar13;
            *param_2 = uVar12;
            uVar11 = param_2[2];
            uVar13 = puVar5[3];
            uVar12 = puVar5[2];
            puVar5[3] = param_2[3];
            puVar5[2] = uVar11;
            param_2[3] = uVar13;
            param_2[2] = uVar12;
            uVar11 = param_2[4];
            uVar13 = puVar5[5];
            uVar12 = puVar5[4];
            puVar5[5] = param_2[5];
            puVar5[4] = uVar11;
            param_2[5] = uVar13;
            param_2[4] = uVar12;
            uVar11 = param_2[6];
            uVar13 = puVar5[7];
            uVar12 = puVar5[6];
            puVar5[7] = param_2[7];
            puVar5[6] = uVar11;
            param_2[7] = uVar13;
            param_2[6] = uVar12;
            puVar5 = puVar5 + 8;
            param_2 = param_2 + 8;
          } while (uVar8 != 0);
        }
        uVar6 = param_1[4];
        uVar8 = *param_1;
      }
      uVar6 = uVar6 + uVar1 * 4;
      uVar7 = (ulong)uVar6;
      param_1[4] = uVar6;
      if (uVar6 == uVar8) {
        puVar5 = *(undefined8 **)(param_1 + 2);
        uVar7 = 0;
        param_1[4] = 0;
      }
      uVar3 = uVar8 - (int)uVar7;
    }
  }
  return;
}


