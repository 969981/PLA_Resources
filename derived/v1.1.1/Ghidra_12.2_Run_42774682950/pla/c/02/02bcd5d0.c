/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcd5d0; name: FUN_02bcd5d0
 */


int FUN_02bcd5d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  
  puVar10 = (ulong *)*param_1;
  puVar9 = (ulong *)*param_2;
  puVar8 = (ulong *)*param_3;
  uVar11 = *puVar9;
  if (*puVar10 < uVar11) {
    if (uVar11 < *puVar8) {
      uVar11 = *puVar10;
      uVar3 = puVar10[1];
      uVar1 = puVar10[2];
      uVar4 = puVar10[3];
      uVar2 = *puVar8;
      uVar5 = puVar8[1];
      uVar6 = puVar8[3];
      puVar10[2] = puVar8[2];
      puVar10[3] = uVar6;
      *puVar10 = uVar2;
      puVar10[1] = uVar5;
      puVar8[2] = uVar1;
      puVar8[3] = uVar4;
      *puVar8 = uVar11;
      puVar8[1] = uVar3;
    }
    else {
      uVar11 = *puVar10;
      uVar3 = puVar10[1];
      uVar1 = puVar10[2];
      uVar4 = puVar10[3];
      uVar2 = *puVar9;
      uVar5 = puVar9[1];
      uVar6 = puVar9[3];
      puVar10[2] = puVar9[2];
      puVar10[3] = uVar6;
      *puVar10 = uVar2;
      puVar10[1] = uVar5;
      puVar9[2] = uVar1;
      puVar9[3] = uVar4;
      *puVar9 = uVar11;
      puVar9[1] = uVar3;
      if (uVar11 < *puVar8) {
        uVar11 = *puVar9;
        uVar3 = puVar9[1];
        uVar1 = puVar9[2];
        uVar4 = puVar9[3];
        uVar2 = *puVar8;
        uVar5 = puVar8[1];
        uVar6 = puVar8[3];
        puVar9[2] = puVar8[2];
        puVar9[3] = uVar6;
        *puVar9 = uVar2;
        puVar9[1] = uVar5;
        puVar8[2] = uVar1;
        puVar8[3] = uVar4;
        *puVar8 = uVar11;
        puVar8[1] = uVar3;
LAB_02bcd718:
        iVar7 = 2;
        goto LAB_02bcd72c;
      }
    }
  }
  else {
    if (*puVar8 <= uVar11) {
      iVar7 = 0;
      goto LAB_02bcd72c;
    }
    uVar11 = *puVar9;
    uVar3 = puVar9[1];
    uVar1 = puVar9[2];
    uVar4 = puVar9[3];
    uVar2 = *puVar8;
    uVar5 = puVar8[1];
    uVar6 = puVar8[3];
    puVar9[2] = puVar8[2];
    puVar9[3] = uVar6;
    *puVar9 = uVar2;
    puVar9[1] = uVar5;
    puVar8[2] = uVar1;
    puVar8[3] = uVar4;
    *puVar8 = uVar11;
    puVar8[1] = uVar3;
    if (*puVar10 < *puVar9) {
      uVar11 = *puVar10;
      uVar3 = puVar10[1];
      uVar1 = puVar10[2];
      uVar4 = puVar10[3];
      uVar2 = *puVar9;
      uVar5 = puVar9[1];
      uVar6 = puVar9[3];
      puVar10[2] = puVar9[2];
      puVar10[3] = uVar6;
      *puVar10 = uVar2;
      puVar10[1] = uVar5;
      puVar9[2] = uVar1;
      puVar9[3] = uVar4;
      *puVar9 = uVar11;
      puVar9[1] = uVar3;
      goto LAB_02bcd718;
    }
  }
  iVar7 = 1;
LAB_02bcd72c:
  puVar8 = (ulong *)*param_4;
  puVar9 = (ulong *)*param_3;
  if (*puVar9 < *puVar8) {
    uVar11 = *puVar9;
    uVar3 = puVar9[1];
    uVar1 = puVar9[2];
    uVar4 = puVar9[3];
    uVar2 = *puVar8;
    uVar5 = puVar8[1];
    uVar6 = puVar8[3];
    puVar9[2] = puVar8[2];
    puVar9[3] = uVar6;
    *puVar9 = uVar2;
    puVar9[1] = uVar5;
    puVar8[2] = uVar1;
    puVar8[3] = uVar4;
    *puVar8 = uVar11;
    puVar8[1] = uVar3;
    puVar8 = (ulong *)*param_3;
    puVar9 = (ulong *)*param_2;
    if (*puVar9 < *puVar8) {
      uVar11 = *puVar9;
      uVar3 = puVar9[1];
      uVar1 = puVar9[2];
      uVar4 = puVar9[3];
      uVar2 = *puVar8;
      uVar5 = puVar8[1];
      uVar6 = puVar8[3];
      puVar9[2] = puVar8[2];
      puVar9[3] = uVar6;
      *puVar9 = uVar2;
      puVar9[1] = uVar5;
      puVar8[2] = uVar1;
      puVar8[3] = uVar4;
      *puVar8 = uVar11;
      puVar8[1] = uVar3;
      puVar8 = (ulong *)*param_2;
      puVar9 = (ulong *)*param_1;
      if (*puVar9 < *puVar8) {
        uVar11 = *puVar9;
        uVar3 = puVar9[1];
        iVar7 = iVar7 + 3;
        uVar1 = puVar9[2];
        uVar4 = puVar9[3];
        uVar2 = *puVar8;
        uVar5 = puVar8[1];
        uVar6 = puVar8[3];
        puVar9[2] = puVar8[2];
        puVar9[3] = uVar6;
        *puVar9 = uVar2;
        puVar9[1] = uVar5;
        puVar8[2] = uVar1;
        puVar8[3] = uVar4;
        *puVar8 = uVar11;
        puVar8[1] = uVar3;
      }
      else {
        iVar7 = iVar7 + 2;
      }
    }
    else {
      iVar7 = iVar7 + 1;
    }
  }
  return iVar7;
}


